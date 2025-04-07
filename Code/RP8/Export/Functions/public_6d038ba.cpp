#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d038ba);
CLANG_FORWARD_PROC_SYMBOL(public_6d15c30);
CLANG_FORWARD_PROC_SYMBOL(public_6d172f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d1c910);

#define public_6d038e1 _public_6d038e1
#define public_6d038ea _public_6d038ea
#define public_6d0395c _public_6d0395c
#define public_6d039cb _public_6d039cb
#define public_6d039d3 _public_6d039d3
#define public_6d03a02 _public_6d03a02
#define public_6d03a3b _public_6d03a3b
#define public_6d03a88 _public_6d03a88
#define public_6d03aee _public_6d03aee
#define public_6d03b08 _public_6d03b08
#define public_6d03b62 _public_6d03b62
#define public_6d03b6e _public_6d03b6e
#define public_6d03b77 _public_6d03b77
#define public_6d03b7e _public_6d03b7e
#define public_6d03c28 _public_6d03c28
#define public_6d03c86 _public_6d03c86
#define public_6d03c8b _public_6d03c8b
#define public_6d03c90 _public_6d03c90

PROC_DECLARE(0x6d038ba, internal_6d038ba, public_6d038ba);
extern "C" NAKED register_t __cdecl internal_6d038ba()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0xB4
        mov dword ptr ss : [ebp-0xB4], ecx
        mov eax, dword ptr ss : [ebp-0xB4]
        mov ecx, dword ptr ds : [eax+0x39C]
        mov dword ptr ss : [ebp-8], ecx
        mov dword ptr ss : [ebp-4], 0
        jmp public_6d038ea
        public_6d038e1 : nop
        mov edx, dword ptr ss : [ebp-4]
        add edx, 1
        mov dword ptr ss : [ebp-4], edx
        public_6d038ea : nop
        mov eax, dword ptr ss : [ebp-4]
        cmp eax, dword ptr ss : [ebp-8]
        ja public_6d03c90
        mov ecx, dword ptr ss : [ebp-4]
        mov edx, dword ptr ss : [ebp-0xB4]
        lea eax, ds:[edx+ecx*8+0x1F94]
        mov dword ptr ss : [ebp-0x2C], eax
        mov ecx, dword ptr ss : [ebp-0x2C]
        mov byte ptr ds : [ecx+4], 0
        mov edx, dword ptr ss : [ebp-0x2C]
        mov dword ptr ds : [edx], 0
        mov dword ptr ss : [ebp-0x44], 0
        mov eax, dword ptr ss : [ebp-0xB4]
        mov ecx, dword ptr ds : [eax+0x130]
        mov dword ptr ss : [ebp-0x40], ecx
        mov edx, dword ptr ss : [ebp-4]
        mov eax, dword ptr ss : [ebp-0xB4]
        lea ecx, ds:[eax+edx*8+0x1F94]
        mov dword ptr ss : [ebp-0x3C], ecx
        mov edx, dword ptr ss : [ebp-0x3C]
        movzx eax, byte ptr ds : [edx+4]
        test eax, eax
        je public_6d0395c
        mov ecx, dword ptr ss : [ebp-0x3C]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ss : [ebp-0x44]
        jne public_6d0395c
        jmp public_6d03a02
        public_6d0395c : nop
        mov dword ptr ss : [ebp-0x34], 0
        cmp dword ptr ss : [ebp-0x44], 0
        je public_6d039d3
        mov eax, dword ptr ss : [ebp-0x44]
        xor ecx, ecx
        cmp dword ptr ds : [eax], 0
        setne cl
        xor edx, edx
        mov dl, cl
        test edx, edx
        jne public_6d039cb
        mov eax, 2
        and eax, 0xF
        mov ecx, dword ptr ss : [ebp-0x38]
        and ecx, 0xFFFFFFF0
        or ecx, eax
        mov dword ptr ss : [ebp-0x38], ecx
        mov edx, 0x10000
        and edx, 0xFFFFFFF
        shl edx, 4
        mov eax, dword ptr ss : [ebp-0x38]
        and eax, 0xF
        or eax, edx
        mov dword ptr ss : [ebp-0x38], eax
/*FIXUP push offset public_6d6ae50 @0x6d039a8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6ae50
        push 0x139
/*FIXUP push offset public_6d6ae00 @0x6d039b2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6ae00
/*FIXUP push offset public_6d6ade0 @0x6d039b7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6ade0
        mov ecx, dword ptr ss : [ebp-0x38]
        push ecx
        mov edx, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [edx]
        add esp, 0x14
        public_6d039cb : nop
        mov eax, dword ptr ss : [ebp-0x44]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [ebp-0x34], ecx
        public_6d039d3 : nop
        mov edx, dword ptr ss : [ebp-0x34]
        push edx
        mov eax, dword ptr ss : [ebp-4]
        push eax
        mov ecx, dword ptr ss : [ebp-0x40]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ss : [ebp-0x40]
        push eax
        call dword ptr ds : [edx+0xF4]
        mov dword ptr ss : [ebp-0x30], eax
        cmp dword ptr ss : [ebp-0x30], 0
        jl public_6d03a02
        mov ecx, dword ptr ss : [ebp-0x3C]
        mov edx, dword ptr ss : [ebp-0x44]
        mov dword ptr ds : [ecx], edx
        mov eax, dword ptr ss : [ebp-0x3C]
        mov byte ptr ds : [eax+4], 1
        public_6d03a02 : nop
        mov ecx, dword ptr ss : [ebp-0xB4]
        mov edx, dword ptr ds : [ecx+0x130]
        mov dword ptr ss : [ebp-0x80], edx
        mov eax, dword ptr ss : [ebp-4]
        imul eax, 0x44
        mov ecx, dword ptr ss : [ebp-0xB4]
        lea edx, ds:[ecx+eax+0x1FD4]
        mov dword ptr ss : [ebp-0x7C], edx
        mov eax, dword ptr ss : [ebp-0x7C]
        movzx ecx, byte ptr ds : [eax+0x41]
        test ecx, ecx
        je public_6d03a3b
        mov edx, 1
        test edx, edx
        je public_6d03a88
        public_6d03a3b : nop
        lea ecx, ss:[ebp-0x74]
        call public_6d15c30
        lea eax, ss:[ebp-0x50]
        mov dword ptr ss : [ebp-0x78], eax
        mov ecx, dword ptr ss : [ebp-0x78]
        mov dword ptr ds : [ecx+8], 0
        mov edx, dword ptr ss : [ebp-0x78]
        mov dword ptr ds : [edx+4], 0
        mov eax, dword ptr ss : [ebp-0x78]
        mov dword ptr ds : [eax], 0
        push 1
        lea ecx, ss:[ebp-0x74]
        push ecx
        mov edx, dword ptr ss : [ebp-4]
        add edx, 0x10
        push edx
        push 0
        mov eax, dword ptr ss : [ebp-0x80]
        push eax
        mov ecx, dword ptr ss : [ebp-0x7C]
        call public_6d172f0
        mov ecx, dword ptr ss : [ebp-0x7C]
        mov byte ptr ds : [ecx+0x41], 1
        public_6d03a88 : nop
        mov edx, dword ptr ss : [ebp-4]
        imul edx, 0x14
        mov eax, dword ptr ss : [ebp-0xB4]
        mov ecx, dword ptr ds : [eax+edx+0x2B8]
        mov dword ptr ss : [ebp-0x84], ecx
        mov edx, dword ptr ss : [ebp-0x84]
        mov eax, dword ptr ds : [edx]
        mov dword ptr ss : [ebp-0x88], eax
        mov ecx, dword ptr ss : [ebp-0x88]
        mov dword ptr ss : [ebp-0x20], ecx
        mov edx, dword ptr ss : [ebp-0x20]
        mov dword ptr ss : [ebp-0xC], edx
        mov eax, dword ptr ss : [ebp-4]
        imul eax, 0x14
        mov ecx, dword ptr ss : [ebp-0xB4]
        mov edx, dword ptr ds : [ecx+eax+0x2B8]
        mov dword ptr ss : [ebp-0x8C], edx
        mov eax, dword ptr ss : [ebp-0x8C]
        mov dword ptr ss : [ebp-0x24], eax
        mov ecx, dword ptr ss : [ebp-0x24]
        mov dword ptr ss : [ebp-0x10], ecx
        mov edx, dword ptr ss : [ebp-0xC]
        mov dword ptr ss : [ebp-0x14], edx
        jmp public_6d03b08
        public_6d03aee : nop
        mov eax, dword ptr ss : [ebp-0x14]
        mov dword ptr ss : [ebp-0x90], eax
        lea ecx, ss:[ebp-0x14]
        call public_6d1c910
        mov ecx, dword ptr ss : [ebp-0x90]
        mov dword ptr ss : [ebp-0x28], ecx
        public_6d03b08 : nop
        mov edx, dword ptr ss : [ebp-0x14]
        sub edx, dword ptr ss : [ebp-0x10]
        neg edx
        sbb edx, edx
        inc edx
        xor eax, eax
        mov al, dl
        neg eax
        sbb eax, eax
        inc eax
        xor ecx, ecx
        mov cl, al
        test ecx, ecx
        je public_6d03c8b
        mov edx, dword ptr ss : [ebp-0x14]
        add edx, 0x10
        mov dword ptr ss : [ebp-0x94], edx
        mov eax, dword ptr ss : [ebp-0x94]
        movzx ecx, byte ptr ds : [eax+0x10]
        test ecx, ecx
        je public_6d03b77
        mov edx, dword ptr ss : [ebp-0x94]
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ss : [ebp-0x1C], eax
        xor ecx, ecx
        test ecx, ecx
        je public_6d03b62
        mov edx, dword ptr ss : [ebp-0x94]
        mov eax, dword ptr ds : [edx+0xC]
        mov dword ptr ss : [ebp-0x18], eax
        jmp public_6d03b6e
        public_6d03b62 : nop
        mov ecx, dword ptr ss : [ebp-0x94]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [ebp-0x18], edx
        public_6d03b6e : nop
        mov byte ptr ss : [ebp-0x95], 1
        jmp public_6d03b7e
        public_6d03b77 : nop
        mov byte ptr ss : [ebp-0x95], 0
        public_6d03b7e : nop
        movzx eax, byte ptr ss : [ebp-0x95]
        test eax, eax
        je public_6d03c86
        mov ecx, dword ptr ss : [ebp-4]
        imul ecx, 0xE8
        mov edx, dword ptr ss : [ebp-0xB4]
        lea eax, ds:[edx+ecx+0x1854]
        mov ecx, dword ptr ss : [ebp-0x1C]
        lea edx, ds:[eax+ecx*8]
        mov dword ptr ss : [ebp-0x9C], edx
        mov eax, dword ptr ss : [ebp-0x9C]
        mov byte ptr ds : [eax+4], 0
        mov ecx, dword ptr ss : [ebp-0x18]
        mov dword ptr ss : [ebp-0xB0], ecx
        mov edx, dword ptr ss : [ebp-0x1C]
        mov dword ptr ss : [ebp-0xAC], edx
        mov eax, dword ptr ss : [ebp-0xB4]
        mov ecx, dword ptr ds : [eax+0x130]
        mov dword ptr ss : [ebp-0xA8], ecx
        mov edx, dword ptr ss : [ebp-4]
        imul edx, 0xE8
        mov eax, dword ptr ss : [ebp-0xB4]
        lea ecx, ds:[eax+edx+0x1854]
        mov edx, dword ptr ss : [ebp-0x1C]
        lea eax, ds:[ecx+edx*8]
        mov dword ptr ss : [ebp-0xA4], eax
        mov ecx, dword ptr ss : [ebp-0xA4]
        movzx edx, byte ptr ds : [ecx+4]
        test edx, edx
        je public_6d03c28
        mov eax, 1
        test eax, eax
        jne public_6d03c28
        mov ecx, dword ptr ss : [ebp-0xA4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ss : [ebp-0xB0]
        jne public_6d03c28
        jmp public_6d03c86
        public_6d03c28 : nop
        mov eax, dword ptr ss : [ebp-0xB0]
        push eax
        mov ecx, dword ptr ss : [ebp-0xAC]
        push ecx
        mov edx, dword ptr ss : [ebp-4]
        push edx
        mov eax, dword ptr ss : [ebp-0xA8]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ss : [ebp-0xA8]
        push edx
        call dword ptr ds : [ecx+0xFC]
        mov dword ptr ss : [ebp-0xA0], eax
        xor eax, eax
        cmp dword ptr ss : [ebp-0xA0], 0
        setge al
        mov ecx, dword ptr ss : [ebp-0xA4]
        mov byte ptr ds : [ecx+4], al
        mov edx, dword ptr ss : [ebp-0xA4]
        movzx eax, byte ptr ds : [edx+4]
        test eax, eax
        je public_6d03c86
        mov ecx, dword ptr ss : [ebp-0xA4]
        mov edx, dword ptr ss : [ebp-0xB0]
        mov dword ptr ds : [ecx], edx
        public_6d03c86 : nop
        jmp public_6d03aee
        public_6d03c8b : nop
        jmp public_6d038e1
        public_6d03c90 : nop
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d038ba)
    }
}

#undef public_6d038e1
#undef public_6d038ea
#undef public_6d0395c
#undef public_6d039cb
#undef public_6d039d3
#undef public_6d03a02
#undef public_6d03a3b
#undef public_6d03a88
#undef public_6d03aee
#undef public_6d03b08
#undef public_6d03b62
#undef public_6d03b6e
#undef public_6d03b77
#undef public_6d03b7e
#undef public_6d03c28
#undef public_6d03c86
#undef public_6d03c8b
#undef public_6d03c90
