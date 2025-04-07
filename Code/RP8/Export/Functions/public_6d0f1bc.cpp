#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d15b80);
CLANG_FORWARD_PROC_SYMBOL(public_6d167a0);
CLANG_FORWARD_PROC_SYMBOL(public_6d168f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d1b1a0);
CLANG_FORWARD_PROC_SYMBOL(public_6d2b964);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f270);
CLANG_FORWARD_PROC_SYMBOL(public_6d2fd77);

#define public_6d0f22a _public_6d0f22a
#define public_6d0f24d _public_6d0f24d
#define public_6d0f2d0 _public_6d0f2d0
#define public_6d0f2f3 _public_6d0f2f3
#define public_6d0f376 _public_6d0f376
#define public_6d0f396 _public_6d0f396
#define public_6d0f3b5 _public_6d0f3b5
#define public_6d0f3c0 _public_6d0f3c0
#define public_6d0f3eb _public_6d0f3eb
#define public_6d0f424 _public_6d0f424
#define public_6d0f48c _public_6d0f48c
#define public_6d0f4c3 _public_6d0f4c3
#define public_6d0f4ce _public_6d0f4ce
#define public_6d0f4ee _public_6d0f4ee
#define public_6d0f50d _public_6d0f50d
#define public_6d0f518 _public_6d0f518
#define public_6d0f543 _public_6d0f543
#define public_6d0f57c _public_6d0f57c
#define public_6d0f5e5 _public_6d0f5e5
#define public_6d0f624 _public_6d0f624
#define public_6d0f62c _public_6d0f62c
#define public_6d0f673 _public_6d0f673
#define public_6d0f68c _public_6d0f68c
#define public_6d0f692 _public_6d0f692

PROC_DECLARE(0x6d0f1bc, internal_6d0f1bc, public_6d0f1bc);
extern "C" NAKED register_t __cdecl internal_6d0f1bc()
{
    __asm
    {
        push ebp
        mov ebp, esp
        mov eax, 0x8060
        call public_6d2f270
        mov eax, dword ptr ss : [ebp+8]
        cmp dword ptr ds : [eax+0x130], 0
        jne public_6d0f22a
        mov ecx, 2
        and ecx, 0xF
        mov edx, dword ptr ss : [ebp-0x1C]
        and edx, 0xFFFFFFF0
        or edx, ecx
        mov dword ptr ss : [ebp-0x1C], edx
        mov eax, 0x10000
        and eax, 0xFFFFFFF
        shl eax, 4
        mov ecx, dword ptr ss : [ebp-0x1C]
        and ecx, 0xF
        or ecx, eax
        mov dword ptr ss : [ebp-0x1C], ecx
/*FIXUP push offset public_6d67fe8 @0x6d0f200*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d67fe8
        push 0xD87
/*FIXUP push offset public_6d68020 @0x6d0f20a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d68020
/*FIXUP push offset public_6d6806c @0x6d0f20f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6806c
        mov edx, dword ptr ss : [ebp-0x1C]
        push edx
        mov eax, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [eax]
        add esp, 0x14
        or eax, 0xFFFFFFFF
        jmp public_6d0f692
        public_6d0f22a : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        mov dword ptr ss : [ebp-4], ecx
        cmp dword ptr ss : [ebp-4], 0
        je public_6d0f24d
        mov edx, dword ptr ss : [ebp-4]
        xor eax, eax
        cmp dword ptr ds : [edx], 0
        setne al
        xor ecx, ecx
        mov cl, al
        test ecx, ecx
        jne public_6d0f2d0
/*FIXUP public_6d0f24d : nop
        push offset public_6d68088 @0x6d0f24d*/
  FIXUP public_6d0f24d : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d68088
        lea edx, ss:[ebp-0x201C]
        push edx
        call public_6d168f0
        add esp, 8
        mov dword ptr ss : [ebp-0x4034], eax
        mov eax, 2
        and eax, 0xF
        mov ecx, dword ptr ss : [ebp-0x2020]
        and ecx, 0xFFFFFFF0
        or ecx, eax
        mov dword ptr ss : [ebp-0x2020], ecx
        mov edx, 0x10000
        and edx, 0xFFFFFFF
        shl edx, 4
        mov eax, dword ptr ss : [ebp-0x2020]
        and eax, 0xF
        or eax, edx
        mov dword ptr ss : [ebp-0x2020], eax
        mov ecx, dword ptr ss : [ebp-0x4034]
        push ecx
        push 0xD8C
/*FIXUP push offset public_6d680c0 @0x6d0f2ab*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d680c0
/*FIXUP push offset public_6d6810c @0x6d0f2b0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6810c
        mov edx, dword ptr ss : [ebp-0x2020]
        push edx
        mov eax, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [eax]
        add esp, 0x14
        mov eax, 0xFFFFFFFE
        jmp public_6d0f692
        public_6d0f2d0 : nop
        mov ecx, dword ptr ss : [ebp+0x24]
        mov dword ptr ss : [ebp-8], ecx
        cmp dword ptr ss : [ebp-8], 0
        je public_6d0f2f3
        mov edx, dword ptr ss : [ebp-8]
        xor eax, eax
        cmp dword ptr ds : [edx], 0
        setne al
        xor ecx, ecx
        mov cl, al
        test ecx, ecx
        jne public_6d0f376
/*FIXUP public_6d0f2f3 : nop
        push offset public_6d68128 @0x6d0f2f3*/
  FIXUP public_6d0f2f3 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d68128
        lea edx, ss:[ebp-0x4020]
        push edx
        call public_6d168f0
        add esp, 8
        mov dword ptr ss : [ebp-0x4038], eax
        mov eax, 2
        and eax, 0xF
        mov ecx, dword ptr ss : [ebp-0x4024]
        and ecx, 0xFFFFFFF0
        or ecx, eax
        mov dword ptr ss : [ebp-0x4024], ecx
        mov edx, 0x10000
        and edx, 0xFFFFFFF
        shl edx, 4
        mov eax, dword ptr ss : [ebp-0x4024]
        and eax, 0xF
        or eax, edx
        mov dword ptr ss : [ebp-0x4024], eax
        mov ecx, dword ptr ss : [ebp-0x4038]
        push ecx
        push 0xD93
/*FIXUP push offset public_6d68160 @0x6d0f351*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d68160
/*FIXUP push offset public_6d681ac @0x6d0f356*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d681ac
        mov edx, dword ptr ss : [ebp-0x4024]
        push edx
        mov eax, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [eax]
        add esp, 0x14
        mov eax, 0xFFFFFFFE
        jmp public_6d0f692
        public_6d0f376 : nop
        mov dword ptr ss : [ebp-0xC], 0
        cmp dword ptr ss : [ebp-0xC], 0
        je public_6d0f396
        mov ecx, dword ptr ss : [ebp-0xC]
        mov edx, dword ptr ss : [ebp-0xC]
        mov eax, dword ptr ds : [edx]
        push ecx
        call dword ptr ds : [eax+8]
        mov dword ptr ss : [ebp-0xC], 0
        public_6d0f396 : nop
        mov dword ptr ss : [ebp-0x4040], 0x80004005
        mov ecx, dword ptr ss : [ebp-4]
        cmp dword ptr ds : [ecx+4], 0
        je public_6d0f3b5
        mov dword ptr ss : [ebp-0x403C], 0
        jmp public_6d0f3c0
        public_6d0f3b5 : nop
        mov edx, dword ptr ss : [ebp-4]
        mov eax, dword ptr ds : [edx]
        mov dword ptr ss : [ebp-0x403C], eax
        public_6d0f3c0 : nop
        cmp dword ptr ss : [ebp-0x403C], 0
        je public_6d0f3eb
        lea ecx, ss:[ebp-0xC]
        push ecx
        mov edx, dword ptr ss : [ebp+0x10]
        push edx
        mov eax, dword ptr ss : [ebp-0x403C]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ss : [ebp-0x403C]
        push edx
        call dword ptr ds : [ecx+0x3C]
        mov dword ptr ss : [ebp-0x4040], eax
        jmp public_6d0f424
        public_6d0f3eb : nop
        mov ecx, dword ptr ss : [ebp-4]
        call public_6d1b1a0
        mov dword ptr ss : [ebp-0x4044], eax
        cmp dword ptr ss : [ebp-0x4044], 0
        je public_6d0f424
        lea eax, ss:[ebp-0xC]
        push eax
        push 0
        mov ecx, dword ptr ss : [ebp+0x10]
        push ecx
        mov edx, dword ptr ss : [ebp-0x4044]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ss : [ebp-0x4044]
        push ecx
        call dword ptr ds : [eax+0x3C]
        mov dword ptr ss : [ebp-0x4040], eax
        public_6d0f424 : nop
        cmp dword ptr ss : [ebp-0x4040], 0
        jge public_6d0f48c
        mov edx, dword ptr ss : [ebp-0x4040]
        push edx
        call public_6d2b964
        add esp, 4
        push eax
/*FIXUP push offset public_6d6affc @0x6d0f43d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6affc
        lea eax, ss:[ebp-0x6044]
        push eax
        call public_6d168f0
        add esp, 0xC
        mov dword ptr ss : [ebp-0x604C], eax
        mov ecx, dword ptr ss : [ebp-0x604C]
        push ecx
        push 0xAB
/*FIXUP push offset public_6d6ae00 @0x6d0f463*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6ae00
/*FIXUP push offset public_6d6ade0 @0x6d0f468*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6ade0
        push 2
        push 0x10000
        lea ecx, ss:[ebp-0x6048]
        call public_6d15b80
        mov edx, dword ptr ds : [eax]
        push edx
        mov eax, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [eax]
        add esp, 0x14
        public_6d0f48c : nop
        xor ecx, ecx
        cmp dword ptr ss : [ebp-0x4040], 0
        setge cl
        xor edx, edx
        mov dl, cl
        test edx, edx
        jne public_6d0f4ce
        mov dword ptr ss : [ebp-0x4028], 0xFFFFFFFF
        cmp dword ptr ss : [ebp-0xC], 0
        je public_6d0f4c3
        mov eax, dword ptr ss : [ebp-0xC]
        mov ecx, dword ptr ss : [ebp-0xC]
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ss : [ebp-0xC], 0
        public_6d0f4c3 : nop
        mov eax, dword ptr ss : [ebp-0x4028]
        jmp public_6d0f692
        public_6d0f4ce : nop
        mov dword ptr ss : [ebp-0x14], 0
        cmp dword ptr ss : [ebp-0x14], 0
        je public_6d0f4ee
        mov eax, dword ptr ss : [ebp-0x14]
        mov ecx, dword ptr ss : [ebp-0x14]
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ss : [ebp-0x14], 0
        public_6d0f4ee : nop
        mov dword ptr ss : [ebp-0x6054], 0x80004005
        mov eax, dword ptr ss : [ebp-8]
        cmp dword ptr ds : [eax+4], 0
        je public_6d0f50d
        mov dword ptr ss : [ebp-0x6050], 0
        jmp public_6d0f518
        public_6d0f50d : nop
        mov ecx, dword ptr ss : [ebp-8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [ebp-0x6050], edx
        public_6d0f518 : nop
        cmp dword ptr ss : [ebp-0x6050], 0
        je public_6d0f543
        lea eax, ss:[ebp-0x14]
        push eax
        mov ecx, dword ptr ss : [ebp+0x28]
        push ecx
        mov edx, dword ptr ss : [ebp-0x6050]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ss : [ebp-0x6050]
        push ecx
        call dword ptr ds : [eax+0x3C]
        mov dword ptr ss : [ebp-0x6054], eax
        jmp public_6d0f57c
        public_6d0f543 : nop
        mov ecx, dword ptr ss : [ebp-8]
        call public_6d1b1a0
        mov dword ptr ss : [ebp-0x6058], eax
        cmp dword ptr ss : [ebp-0x6058], 0
        je public_6d0f57c
        lea edx, ss:[ebp-0x14]
        push edx
        push 0
        mov eax, dword ptr ss : [ebp+0x28]
        push eax
        mov ecx, dword ptr ss : [ebp-0x6058]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ss : [ebp-0x6058]
        push eax
        call dword ptr ds : [edx+0x3C]
        mov dword ptr ss : [ebp-0x6054], eax
        public_6d0f57c : nop
        cmp dword ptr ss : [ebp-0x6054], 0
        jge public_6d0f5e5
        mov ecx, dword ptr ss : [ebp-0x6054]
        push ecx
        call public_6d2b964
        add esp, 4
        push eax
/*FIXUP push offset public_6d6affc @0x6d0f595*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6affc
        lea edx, ss:[ebp-0x8058]
        push edx
        call public_6d168f0
        add esp, 0xC
        mov dword ptr ss : [ebp-0x8060], eax
        mov eax, dword ptr ss : [ebp-0x8060]
        push eax
        push 0xAB
/*FIXUP push offset public_6d6ae00 @0x6d0f5bb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6ae00
/*FIXUP push offset public_6d6ade0 @0x6d0f5c0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6ade0
        push 2
        push 0x10000
        lea ecx, ss:[ebp-0x805C]
        call public_6d15b80
        mov ecx, dword ptr ds : [eax]
        push ecx
        mov edx, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [edx]
        add esp, 0x14
        public_6d0f5e5 : nop
        xor eax, eax
        cmp dword ptr ss : [ebp-0x6054], 0
        setge al
        xor ecx, ecx
        mov cl, al
        test ecx, ecx
        jne public_6d0f62c
        mov dword ptr ss : [ebp-0x402C], 0xFFFFFFFF
        lea ecx, ss:[ebp-0x14]
        call public_6d167a0
        cmp dword ptr ss : [ebp-0xC], 0
        je public_6d0f624
        mov edx, dword ptr ss : [ebp-0xC]
        mov eax, dword ptr ss : [ebp-0xC]
        mov ecx, dword ptr ds : [eax]
        push edx
        call dword ptr ds : [ecx+8]
        mov dword ptr ss : [ebp-0xC], 0
        public_6d0f624 : nop
        mov eax, dword ptr ss : [ebp-0x402C]
        jmp public_6d0f692
        public_6d0f62c : nop
        mov dword ptr ss : [ebp-0x18], 2
        push 0
        mov edx, dword ptr ss : [ebp-0x18]
        push edx
        push 0
        push 0
        mov eax, dword ptr ss : [ebp-0x14]
        push eax
        push 0
        push 0
        mov ecx, dword ptr ss : [ebp-0xC]
        push ecx
        call public_6d2fd77
        mov dword ptr ss : [ebp-0x10], eax
        mov edx, dword ptr ss : [ebp-0x10]
        mov dword ptr ss : [ebp-0x4030], edx
        cmp dword ptr ss : [ebp-0x14], 0
        je public_6d0f673
        mov eax, dword ptr ss : [ebp-0x14]
        mov ecx, dword ptr ss : [ebp-0x14]
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ss : [ebp-0x14], 0
        public_6d0f673 : nop
        cmp dword ptr ss : [ebp-0xC], 0
        je public_6d0f68c
        mov eax, dword ptr ss : [ebp-0xC]
        mov ecx, dword ptr ss : [ebp-0xC]
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ss : [ebp-0xC], 0
        public_6d0f68c : nop
        mov eax, dword ptr ss : [ebp-0x4030]
        public_6d0f692 : nop
        mov esp, ebp
        pop ebp
        ret 0x34
        UNREACHABLE_TRAP(0x6d0f1bc)
    }
}

#undef public_6d0f22a
#undef public_6d0f24d
#undef public_6d0f2d0
#undef public_6d0f2f3
#undef public_6d0f376
#undef public_6d0f396
#undef public_6d0f3b5
#undef public_6d0f3c0
#undef public_6d0f3eb
#undef public_6d0f424
#undef public_6d0f48c
#undef public_6d0f4c3
#undef public_6d0f4ce
#undef public_6d0f4ee
#undef public_6d0f50d
#undef public_6d0f518
#undef public_6d0f543
#undef public_6d0f57c
#undef public_6d0f5e5
#undef public_6d0f624
#undef public_6d0f62c
#undef public_6d0f673
#undef public_6d0f68c
#undef public_6d0f692
