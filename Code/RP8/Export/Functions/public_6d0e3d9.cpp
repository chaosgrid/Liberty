#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d168f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d2b964);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f270);
CLANG_FORWARD_PROC_SYMBOL(public_6d5cc30);

#define public_6d0e447 _public_6d0e447
#define public_6d0e45d _public_6d0e45d
#define public_6d0e4c7 _public_6d0e4c7
#define public_6d0e4e3 _public_6d0e4e3
#define public_6d0e4eb _public_6d0e4eb
#define public_6d0e5a9 _public_6d0e5a9
#define public_6d0e5b2 _public_6d0e5b2
#define public_6d0e5b7 _public_6d0e5b7
#define public_6d0e5c9 _public_6d0e5c9
#define public_6d0e5d1 _public_6d0e5d1
#define public_6d0e690 _public_6d0e690
#define public_6d0e696 _public_6d0e696
#define public_6d0e69a _public_6d0e69a
#define public_6d0e6bf _public_6d0e6bf
#define public_6d0e6cb _public_6d0e6cb
#define public_6d0e6ce _public_6d0e6ce

PROC_DECLARE(0x6d0e3d9, internal_6d0e3d9, public_6d0e3d9);
extern "C" NAKED register_t __cdecl internal_6d0e3d9()
{
    __asm
    {
        push ebp
        mov ebp, esp
        mov eax, 0x4058
        call public_6d2f270
        mov eax, dword ptr ss : [ebp+8]
        cmp dword ptr ds : [eax+0x130], 0
        jne public_6d0e447
        mov ecx, 2
        and ecx, 0xF
        mov edx, dword ptr ss : [ebp-8]
        and edx, 0xFFFFFFF0
        or edx, ecx
        mov dword ptr ss : [ebp-8], edx
        mov eax, 0x10000
        and eax, 0xFFFFFFF
        shl eax, 4
        mov ecx, dword ptr ss : [ebp-8]
        and ecx, 0xF
        or ecx, eax
        mov dword ptr ss : [ebp-8], ecx
/*FIXUP push offset public_6d679f0 @0x6d0e41d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d679f0
        push 0xCE9
/*FIXUP push offset public_6d67a28 @0x6d0e427*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d67a28
/*FIXUP push offset public_6d67a74 @0x6d0e42c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d67a74
        mov edx, dword ptr ss : [ebp-8]
        push edx
        mov eax, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [eax]
        add esp, 0x14
        or eax, 0xFFFFFFFF
        jmp public_6d0e6ce
        public_6d0e447 : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        mov dword ptr ss : [ebp-4], ecx
        cmp dword ptr ss : [ebp-4], 0
        jne public_6d0e45d
        mov eax, 0xFFFFFFFE
        jmp public_6d0e6ce
        public_6d0e45d : nop
        mov edx, dword ptr ss : [ebp-4]
        xor eax, eax
        cmp dword ptr ds : [edx], 0
        setne al
        xor ecx, ecx
        mov cl, al
        test ecx, ecx
        jne public_6d0e4c7
        mov edx, 2
        and edx, 0xF
        mov eax, dword ptr ss : [ebp-0xC]
        and eax, 0xFFFFFFF0
        or eax, edx
        mov dword ptr ss : [ebp-0xC], eax
        mov ecx, 0x10000
        and ecx, 0xFFFFFFF
        shl ecx, 4
        mov edx, dword ptr ss : [ebp-0xC]
        and edx, 0xF
        or edx, ecx
        mov dword ptr ss : [ebp-0xC], edx
/*FIXUP push offset public_6d67a90 @0x6d0e49c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d67a90
        push 0xCF5
/*FIXUP push offset public_6d67ab8 @0x6d0e4a6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d67ab8
/*FIXUP push offset public_6d67b04 @0x6d0e4ab*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d67b04
        mov eax, dword ptr ss : [ebp-0xC]
        push eax
        mov ecx, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [ecx]
        add esp, 0x14
        or eax, 0xFFFFFFFF
        jmp public_6d0e6ce
        public_6d0e4c7 : nop
        mov dword ptr ss : [ebp-0x4054], 0
        mov edx, dword ptr ss : [ebp-4]
        cmp dword ptr ds : [edx+4], 0
        je public_6d0e4e3
        mov dword ptr ss : [ebp-0x34], 0
        jmp public_6d0e4eb
        public_6d0e4e3 : nop
        mov eax, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [ebp-0x34], ecx
        public_6d0e4eb : nop
        cmp dword ptr ss : [ebp-0x34], 0
        je public_6d0e5b7
        lea edx, ss:[ebp-0x2C]
        push edx
        mov eax, dword ptr ss : [ebp-0x4054]
        push eax
        mov ecx, dword ptr ss : [ebp-0x34]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ss : [ebp-0x34]
        push eax
        call dword ptr ds : [edx+0x38]
        mov dword ptr ss : [ebp-0x38], eax
        cmp dword ptr ss : [ebp-0x38], 0
        jge public_6d0e5b2
        cmp dword ptr ss : [ebp-0x38], 0
        jge public_6d0e5a9
        mov ecx, dword ptr ss : [ebp-0x38]
        push ecx
        call public_6d2b964
        add esp, 4
        push eax
/*FIXUP push offset public_6d6b010 @0x6d0e530*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b010
        lea edx, ss:[ebp-0x2040]
        push edx
        call public_6d168f0
        add esp, 0xC
        mov dword ptr ss : [ebp-0x404C], eax
        mov eax, 2
        and eax, 0xF
        mov ecx, dword ptr ss : [ebp-0x2044]
        and ecx, 0xFFFFFFF0
        or ecx, eax
        mov dword ptr ss : [ebp-0x2044], ecx
        mov edx, 0x10000
        and edx, 0xFFFFFFF
        shl edx, 4
        mov eax, dword ptr ss : [ebp-0x2044]
        and eax, 0xF
        or eax, edx
        mov dword ptr ss : [ebp-0x2044], eax
        mov ecx, dword ptr ss : [ebp-0x404C]
        push ecx
        push 0xE3
/*FIXUP push offset public_6d6ae00 @0x6d0e58e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6ae00
/*FIXUP push offset public_6d6ade0 @0x6d0e593*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6ade0
        mov edx, dword ptr ss : [ebp-0x2044]
        push edx
        mov eax, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [eax]
        add esp, 0x14
        public_6d0e5a9 : nop
        mov byte ptr ss : [ebp-0x2D], 0
        jmp public_6d0e69a
        public_6d0e5b2 : nop
        jmp public_6d0e696
        public_6d0e5b7 : nop
        mov ecx, dword ptr ss : [ebp-4]
        cmp dword ptr ds : [ecx+4], 1
        je public_6d0e5c9
        mov dword ptr ss : [ebp-0x3C], 0
        jmp public_6d0e5d1
        public_6d0e5c9 : nop
        mov edx, dword ptr ss : [ebp-4]
        mov eax, dword ptr ds : [edx]
        mov dword ptr ss : [ebp-0x3C], eax
        public_6d0e5d1 : nop
        cmp dword ptr ss : [ebp-0x3C], 0
        je public_6d0e696
        lea ecx, ss:[ebp-0x2C]
        push ecx
        mov edx, dword ptr ss : [ebp-0x4054]
        push edx
        mov eax, dword ptr ss : [ebp-0x3C]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ss : [ebp-0x3C]
        push edx
        call dword ptr ds : [ecx+0x38]
        mov dword ptr ss : [ebp-0x40], eax
        cmp dword ptr ss : [ebp-0x40], 0
        jge public_6d0e696
        cmp dword ptr ss : [ebp-0x40], 0
        jge public_6d0e690
        mov eax, dword ptr ss : [ebp-0x40]
        push eax
        call public_6d2b964
        add esp, 4
        push eax
/*FIXUP push offset public_6d6b010 @0x6d0e616*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b010
        lea ecx, ss:[ebp-0x4044]
        push ecx
        call public_6d168f0
        add esp, 0xC
        mov dword ptr ss : [ebp-0x4050], eax
        mov edx, 2
        and edx, 0xF
        mov eax, dword ptr ss : [ebp-0x4048]
        and eax, 0xFFFFFFF0
        or eax, edx
        mov dword ptr ss : [ebp-0x4048], eax
        mov ecx, 0x10000
        and ecx, 0xFFFFFFF
        shl ecx, 4
        mov edx, dword ptr ss : [ebp-0x4048]
        and edx, 0xF
        or edx, ecx
        mov dword ptr ss : [ebp-0x4048], edx
        mov eax, dword ptr ss : [ebp-0x4050]
        push eax
        push 0xF0
/*FIXUP push offset public_6d6ae00 @0x6d0e674*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6ae00
/*FIXUP push offset public_6d6ade0 @0x6d0e679*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6ade0
        mov ecx, dword ptr ss : [ebp-0x4048]
        push ecx
        mov edx, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [edx]
        add esp, 0x14
        public_6d0e690 : nop
        mov byte ptr ss : [ebp-0x2D], 0
        jmp public_6d0e69a
        public_6d0e696 : nop
        mov byte ptr ss : [ebp-0x2D], 1
        public_6d0e69a : nop
        movzx eax, byte ptr ss : [ebp-0x2D]
        test eax, eax
        je public_6d0e6bf
        mov ecx, dword ptr ss : [ebp-0x2C]
        mov dword ptr ss : [ebp-0x4058], ecx
        mov edx, dword ptr ss : [ebp-0x4058]
        push edx
        call public_6d5cc30
        add esp, 4
        mov ecx, dword ptr ss : [ebp+0x10]
        mov dword ptr ds : [ecx], eax
        public_6d0e6bf : nop
        movzx edx, byte ptr ss : [ebp-0x2D]
        test edx, edx
        je public_6d0e6cb
        xor eax, eax
        jmp public_6d0e6ce
        public_6d0e6cb : nop
        or eax, 0xFFFFFFFF
        public_6d0e6ce : nop
        mov esp, ebp
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x6d0e3d9)
    }
}

#undef public_6d0e447
#undef public_6d0e45d
#undef public_6d0e4c7
#undef public_6d0e4e3
#undef public_6d0e4eb
#undef public_6d0e5a9
#undef public_6d0e5b2
#undef public_6d0e5b7
#undef public_6d0e5c9
#undef public_6d0e5d1
#undef public_6d0e690
#undef public_6d0e696
#undef public_6d0e69a
#undef public_6d0e6bf
#undef public_6d0e6cb
#undef public_6d0e6ce
