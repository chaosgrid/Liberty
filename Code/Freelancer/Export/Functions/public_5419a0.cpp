#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_540fc0);
CLANG_FORWARD_PROC_SYMBOL(public_5419a0);

#define public_5419d9 _public_5419d9
#define public_541a00 _public_541a00
#define public_541a1f _public_541a1f
#define public_541a40 _public_541a40
#define public_541a5f _public_541a5f
#define public_541a80 _public_541a80
#define public_541a9f _public_541a9f
#define public_541ac0 _public_541ac0
#define public_541adf _public_541adf
#define public_541b00 _public_541b00
#define public_541b1f _public_541b1f
#define public_541b40 _public_541b40
#define public_541b5f _public_541b5f
#define public_541ba6 _public_541ba6
#define public_541bc5 _public_541bc5
#define public_541be6 _public_541be6
#define public_541c05 _public_541c05
#define public_541c22 _public_541c22
#define public_541c3d _public_541c3d
#define public_541c62 _public_541c62
#define public_541c7d _public_541c7d
#define public_541c7f _public_541c7f
#define public_541c81 _public_541c81

PROC_DECLARE(0x5419a0, internal_5419a0, public_5419a0);
extern "C" NAKED register_t __cdecl internal_5419a0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [edi+0x4C]
        xor eax, eax
        cmp ecx, 0x303
        jg public_541b5f
        je public_541b1f
        dec ecx
        cmp ecx, 0xA6
        ja public_541c81
/*FIXUP movzx ecx, byte ptr ds : [ecx+public_541ca0] @0x5419cb*/
/*FIXUP jmp dword ptr ds : [ecx*4+public_541c88] @0x5419d2*/
  JMPTB cmp ecx, 0
  JMPTB jne public_4c0000000000c672
  JMPTB mov ecx, 0
  JMPTB public_4c0000000000c672 : nop
        je public_541adf
  JMPTB cmp ecx, 1
  JMPTB jne public_4c0000000000c66e
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c66e : nop
        je public_541c81
  JMPTB cmp ecx, 2
  JMPTB jne public_4c0000000000c66a
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c66a : nop
        je public_541c81
  JMPTB cmp ecx, 3
  JMPTB jne public_4c0000000000c666
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c666 : nop
        je public_541c81
  JMPTB cmp ecx, 4
  JMPTB jne public_4c0000000000c662
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c662 : nop
        je public_541c81
  JMPTB cmp ecx, 5
  JMPTB jne public_4c0000000000c65e
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c65e : nop
        je public_541c81
  JMPTB cmp ecx, 6
  JMPTB jne public_4c0000000000c65a
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c65a : nop
        je public_541c81
  JMPTB cmp ecx, 7
  JMPTB jne public_4c0000000000c656
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c656 : nop
        je public_541c81
  JMPTB cmp ecx, 8
  JMPTB jne public_4c0000000000c652
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c652 : nop
        je public_541c81
  JMPTB cmp ecx, 9
  JMPTB jne public_4c0000000000c64e
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c64e : nop
        je public_541c81
  JMPTB cmp ecx, 0xA
  JMPTB jne public_4c0000000000c64a
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c64a : nop
        je public_541c81
  JMPTB cmp ecx, 0xB
  JMPTB jne public_4c0000000000c646
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c646 : nop
        je public_541c81
  JMPTB cmp ecx, 0xC
  JMPTB jne public_4c0000000000c642
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c642 : nop
        je public_541c81
  JMPTB cmp ecx, 0xD
  JMPTB jne public_4c0000000000c63e
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c63e : nop
        je public_541c81
  JMPTB cmp ecx, 0xE
  JMPTB jne public_4c0000000000c63a
  JMPTB mov ecx, 1
  JMPTB public_4c0000000000c63a : nop
        je public_541a5f
  JMPTB cmp ecx, 0xF
  JMPTB jne public_4c0000000000c636
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c636 : nop
        je public_541c81
  JMPTB cmp ecx, 0x10
  JMPTB jne public_4c0000000000c632
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c632 : nop
        je public_541c81
  JMPTB cmp ecx, 0x11
  JMPTB jne public_4c0000000000c62e
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c62e : nop
        je public_541c81
  JMPTB cmp ecx, 0x12
  JMPTB jne public_4c0000000000c62a
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c62a : nop
        je public_541c81
  JMPTB cmp ecx, 0x13
  JMPTB jne public_4c0000000000c626
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c626 : nop
        je public_541c81
  JMPTB cmp ecx, 0x14
  JMPTB jne public_4c0000000000c622
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c622 : nop
        je public_541c81
  JMPTB cmp ecx, 0x15
  JMPTB jne public_4c0000000000c61e
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c61e : nop
        je public_541c81
  JMPTB cmp ecx, 0x16
  JMPTB jne public_4c0000000000c61a
  JMPTB mov ecx, 2
  JMPTB public_4c0000000000c61a : nop
        je public_541a9f
  JMPTB cmp ecx, 0x17
  JMPTB jne public_4c0000000000c616
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c616 : nop
        je public_541c81
  JMPTB cmp ecx, 0x18
  JMPTB jne public_4c0000000000c612
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c612 : nop
        je public_541c81
  JMPTB cmp ecx, 0x19
  JMPTB jne public_4c0000000000c60e
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c60e : nop
        je public_541c81
  JMPTB cmp ecx, 0x1A
  JMPTB jne public_4c0000000000c60a
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c60a : nop
        je public_541c81
  JMPTB cmp ecx, 0x1B
  JMPTB jne public_4c0000000000c606
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c606 : nop
        je public_541c81
  JMPTB cmp ecx, 0x1C
  JMPTB jne public_4c0000000000c602
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c602 : nop
        je public_541c81
  JMPTB cmp ecx, 0x1D
  JMPTB jne public_4c0000000000c5fe
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c5fe : nop
        je public_541c81
  JMPTB cmp ecx, 0x1E
  JMPTB jne public_4c0000000000c5fa
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c5fa : nop
        je public_541c81
  JMPTB cmp ecx, 0x1F
  JMPTB jne public_4c0000000000c5f6
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c5f6 : nop
        je public_541c81
  JMPTB cmp ecx, 0x20
  JMPTB jne public_4c0000000000c5f2
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c5f2 : nop
        je public_541c81
  JMPTB cmp ecx, 0x21
  JMPTB jne public_4c0000000000c5ee
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c5ee : nop
        je public_541c81
  JMPTB cmp ecx, 0x22
  JMPTB jne public_4c0000000000c5ea
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c5ea : nop
        je public_541c81
  JMPTB cmp ecx, 0x23
  JMPTB jne public_4c0000000000c5e6
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c5e6 : nop
        je public_541c81
  JMPTB cmp ecx, 0x24
  JMPTB jne public_4c0000000000c5e2
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c5e2 : nop
        je public_541c81
  JMPTB cmp ecx, 0x25
  JMPTB jne public_4c0000000000c5de
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c5de : nop
        je public_541c81
  JMPTB cmp ecx, 0x26
  JMPTB jne public_4c0000000000c5da
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c5da : nop
        je public_541c81
  JMPTB cmp ecx, 0x27
  JMPTB jne public_4c0000000000c5d6
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c5d6 : nop
        je public_541c81
  JMPTB cmp ecx, 0x28
  JMPTB jne public_4c0000000000c5d2
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c5d2 : nop
        je public_541c81
  JMPTB cmp ecx, 0x29
  JMPTB jne public_4c0000000000c5ce
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c5ce : nop
        je public_541c81
  JMPTB cmp ecx, 0x2A
  JMPTB jne public_4c0000000000c5ca
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c5ca : nop
        je public_541c81
  JMPTB cmp ecx, 0x2B
  JMPTB jne public_4c0000000000c5c6
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c5c6 : nop
        je public_541c81
  JMPTB cmp ecx, 0x2C
  JMPTB jne public_4c0000000000c5c2
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c5c2 : nop
        je public_541c81
  JMPTB cmp ecx, 0x2D
  JMPTB jne public_4c0000000000c5be
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c5be : nop
        je public_541c81
  JMPTB cmp ecx, 0x2E
  JMPTB jne public_4c0000000000c5ba
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c5ba : nop
        je public_541c81
  JMPTB cmp ecx, 0x2F
  JMPTB jne public_4c0000000000c5b6
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c5b6 : nop
        je public_541c81
  JMPTB cmp ecx, 0x30
  JMPTB jne public_4c0000000000c5b2
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c5b2 : nop
        je public_541c81
  JMPTB cmp ecx, 0x31
  JMPTB jne public_4c0000000000c5ae
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c5ae : nop
        je public_541c81
  JMPTB cmp ecx, 0x32
  JMPTB jne public_4c0000000000c5aa
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c5aa : nop
        je public_541c81
  JMPTB cmp ecx, 0x33
  JMPTB jne public_4c0000000000c5a6
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c5a6 : nop
        je public_541c81
  JMPTB cmp ecx, 0x34
  JMPTB jne public_4c0000000000c5a2
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c5a2 : nop
        je public_541c81
  JMPTB cmp ecx, 0x35
  JMPTB jne public_4c0000000000c59e
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c59e : nop
        je public_541c81
  JMPTB cmp ecx, 0x36
  JMPTB jne public_4c0000000000c59a
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c59a : nop
        je public_541c81
  JMPTB cmp ecx, 0x37
  JMPTB jne public_4c0000000000c596
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c596 : nop
        je public_541c81
  JMPTB cmp ecx, 0x38
  JMPTB jne public_4c0000000000c592
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c592 : nop
        je public_541c81
  JMPTB cmp ecx, 0x39
  JMPTB jne public_4c0000000000c58e
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c58e : nop
        je public_541c81
  JMPTB cmp ecx, 0x3A
  JMPTB jne public_4c0000000000c58a
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c58a : nop
        je public_541c81
  JMPTB cmp ecx, 0x3B
  JMPTB jne public_4c0000000000c586
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c586 : nop
        je public_541c81
  JMPTB cmp ecx, 0x3C
  JMPTB jne public_4c0000000000c582
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c582 : nop
        je public_541c81
  JMPTB cmp ecx, 0x3D
  JMPTB jne public_4c0000000000c57e
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c57e : nop
        je public_541c81
  JMPTB cmp ecx, 0x3E
  JMPTB jne public_4c0000000000c57a
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c57a : nop
        je public_541c81
  JMPTB cmp ecx, 0x3F
  JMPTB jne public_4c0000000000c576
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c576 : nop
        je public_541c81
  JMPTB cmp ecx, 0x40
  JMPTB jne public_4c0000000000c572
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c572 : nop
        je public_541c81
  JMPTB cmp ecx, 0x41
  JMPTB jne public_4c0000000000c56e
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c56e : nop
        je public_541c81
  JMPTB cmp ecx, 0x42
  JMPTB jne public_4c0000000000c56a
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c56a : nop
        je public_541c81
  JMPTB cmp ecx, 0x43
  JMPTB jne public_4c0000000000c566
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c566 : nop
        je public_541c81
  JMPTB cmp ecx, 0x44
  JMPTB jne public_4c0000000000c562
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c562 : nop
        je public_541c81
  JMPTB cmp ecx, 0x45
  JMPTB jne public_4c0000000000c55e
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c55e : nop
        je public_541c81
  JMPTB cmp ecx, 0x46
  JMPTB jne public_4c0000000000c55a
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c55a : nop
        je public_541c81
  JMPTB cmp ecx, 0x47
  JMPTB jne public_4c0000000000c556
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c556 : nop
        je public_541c81
  JMPTB cmp ecx, 0x48
  JMPTB jne public_4c0000000000c552
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c552 : nop
        je public_541c81
  JMPTB cmp ecx, 0x49
  JMPTB jne public_4c0000000000c54e
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c54e : nop
        je public_541c81
  JMPTB cmp ecx, 0x4A
  JMPTB jne public_4c0000000000c54a
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c54a : nop
        je public_541c81
  JMPTB cmp ecx, 0x4B
  JMPTB jne public_4c0000000000c546
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c546 : nop
        je public_541c81
  JMPTB cmp ecx, 0x4C
  JMPTB jne public_4c0000000000c542
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c542 : nop
        je public_541c81
  JMPTB cmp ecx, 0x4D
  JMPTB jne public_4c0000000000c53e
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c53e : nop
        je public_541c81
  JMPTB cmp ecx, 0x4E
  JMPTB jne public_4c0000000000c53a
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c53a : nop
        je public_541c81
  JMPTB cmp ecx, 0x4F
  JMPTB jne public_4c0000000000c536
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c536 : nop
        je public_541c81
  JMPTB cmp ecx, 0x50
  JMPTB jne public_4c0000000000c532
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c532 : nop
        je public_541c81
  JMPTB cmp ecx, 0x51
  JMPTB jne public_4c0000000000c52e
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c52e : nop
        je public_541c81
  JMPTB cmp ecx, 0x52
  JMPTB jne public_4c0000000000c52a
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c52a : nop
        je public_541c81
  JMPTB cmp ecx, 0x53
  JMPTB jne public_4c0000000000c526
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c526 : nop
        je public_541c81
  JMPTB cmp ecx, 0x54
  JMPTB jne public_4c0000000000c522
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c522 : nop
        je public_541c81
  JMPTB cmp ecx, 0x55
  JMPTB jne public_4c0000000000c51e
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c51e : nop
        je public_541c81
  JMPTB cmp ecx, 0x56
  JMPTB jne public_4c0000000000c51a
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c51a : nop
        je public_541c81
  JMPTB cmp ecx, 0x57
  JMPTB jne public_4c0000000000c516
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c516 : nop
        je public_541c81
  JMPTB cmp ecx, 0x58
  JMPTB jne public_4c0000000000c512
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c512 : nop
        je public_541c81
  JMPTB cmp ecx, 0x59
  JMPTB jne public_4c0000000000c50e
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c50e : nop
        je public_541c81
  JMPTB cmp ecx, 0x5A
  JMPTB jne public_4c0000000000c50a
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c50a : nop
        je public_541c81
  JMPTB cmp ecx, 0x5B
  JMPTB jne public_4c0000000000c506
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c506 : nop
        je public_541c81
  JMPTB cmp ecx, 0x5C
  JMPTB jne public_4c0000000000c502
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c502 : nop
        je public_541c81
  JMPTB cmp ecx, 0x5D
  JMPTB jne public_4c0000000000c4fe
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c4fe : nop
        je public_541c81
  JMPTB cmp ecx, 0x5E
  JMPTB jne public_4c0000000000c4fa
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c4fa : nop
        je public_541c81
  JMPTB cmp ecx, 0x5F
  JMPTB jne public_4c0000000000c4f6
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c4f6 : nop
        je public_541c81
  JMPTB cmp ecx, 0x60
  JMPTB jne public_4c0000000000c4f2
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c4f2 : nop
        je public_541c81
  JMPTB cmp ecx, 0x61
  JMPTB jne public_4c0000000000c4ee
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c4ee : nop
        je public_541c81
  JMPTB cmp ecx, 0x62
  JMPTB jne public_4c0000000000c4ea
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c4ea : nop
        je public_541c81
  JMPTB cmp ecx, 0x63
  JMPTB jne public_4c0000000000c4e6
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c4e6 : nop
        je public_541c81
  JMPTB cmp ecx, 0x64
  JMPTB jne public_4c0000000000c4e2
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c4e2 : nop
        je public_541c81
  JMPTB cmp ecx, 0x65
  JMPTB jne public_4c0000000000c4de
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c4de : nop
        je public_541c81
  JMPTB cmp ecx, 0x66
  JMPTB jne public_4c0000000000c4da
  JMPTB mov ecx, 3
  JMPTB public_4c0000000000c4da : nop
        je public_541a1f
  JMPTB cmp ecx, 0x67
  JMPTB jne public_4c0000000000c4d6
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c4d6 : nop
        je public_541c81
  JMPTB cmp ecx, 0x68
  JMPTB jne public_4c0000000000c4d2
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c4d2 : nop
        je public_541c81
  JMPTB cmp ecx, 0x69
  JMPTB jne public_4c0000000000c4ce
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c4ce : nop
        je public_541c81
  JMPTB cmp ecx, 0x6A
  JMPTB jne public_4c0000000000c4ca
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c4ca : nop
        je public_541c81
  JMPTB cmp ecx, 0x6B
  JMPTB jne public_4c0000000000c4c6
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c4c6 : nop
        je public_541c81
  JMPTB cmp ecx, 0x6C
  JMPTB jne public_4c0000000000c4c2
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c4c2 : nop
        je public_541c81
  JMPTB cmp ecx, 0x6D
  JMPTB jne public_4c0000000000c4be
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c4be : nop
        je public_541c81
  JMPTB cmp ecx, 0x6E
  JMPTB jne public_4c0000000000c4ba
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c4ba : nop
        je public_541c81
  JMPTB cmp ecx, 0x6F
  JMPTB jne public_4c0000000000c4b6
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c4b6 : nop
        je public_541c81
  JMPTB cmp ecx, 0x70
  JMPTB jne public_4c0000000000c4b2
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c4b2 : nop
        je public_541c81
  JMPTB cmp ecx, 0x71
  JMPTB jne public_4c0000000000c4ae
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c4ae : nop
        je public_541c81
  JMPTB cmp ecx, 0x72
  JMPTB jne public_4c0000000000c4aa
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c4aa : nop
        je public_541c81
  JMPTB cmp ecx, 0x73
  JMPTB jne public_4c0000000000c4a6
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c4a6 : nop
        je public_541c81
  JMPTB cmp ecx, 0x74
  JMPTB jne public_4c0000000000c4a2
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c4a2 : nop
        je public_541c81
  JMPTB cmp ecx, 0x75
  JMPTB jne public_4c0000000000c49e
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c49e : nop
        je public_541c81
  JMPTB cmp ecx, 0x76
  JMPTB jne public_4c0000000000c49a
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c49a : nop
        je public_541c81
  JMPTB cmp ecx, 0x77
  JMPTB jne public_4c0000000000c496
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c496 : nop
        je public_541c81
  JMPTB cmp ecx, 0x78
  JMPTB jne public_4c0000000000c492
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c492 : nop
        je public_541c81
  JMPTB cmp ecx, 0x79
  JMPTB jne public_4c0000000000c48e
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c48e : nop
        je public_541c81
  JMPTB cmp ecx, 0x7A
  JMPTB jne public_4c0000000000c48a
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c48a : nop
        je public_541c81
  JMPTB cmp ecx, 0x7B
  JMPTB jne public_4c0000000000c486
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c486 : nop
        je public_541c81
  JMPTB cmp ecx, 0x7C
  JMPTB jne public_4c0000000000c482
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c482 : nop
        je public_541c81
  JMPTB cmp ecx, 0x7D
  JMPTB jne public_4c0000000000c47e
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c47e : nop
        je public_541c81
  JMPTB cmp ecx, 0x7E
  JMPTB jne public_4c0000000000c47a
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c47a : nop
        je public_541c81
  JMPTB cmp ecx, 0x7F
  JMPTB jne public_4c0000000000c476
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c476 : nop
        je public_541c81
  JMPTB cmp ecx, 0x80
  JMPTB jne public_4c0000000000c472
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c472 : nop
        je public_541c81
  JMPTB cmp ecx, 0x81
  JMPTB jne public_4c0000000000c46e
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c46e : nop
        je public_541c81
  JMPTB cmp ecx, 0x82
  JMPTB jne public_4c0000000000c46a
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c46a : nop
        je public_541c81
  JMPTB cmp ecx, 0x83
  JMPTB jne public_4c0000000000c466
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c466 : nop
        je public_541c81
  JMPTB cmp ecx, 0x84
  JMPTB jne public_4c0000000000c462
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c462 : nop
        je public_541c81
  JMPTB cmp ecx, 0x85
  JMPTB jne public_4c0000000000c45e
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c45e : nop
        je public_541c81
  JMPTB cmp ecx, 0x86
  JMPTB jne public_4c0000000000c45a
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c45a : nop
        je public_541c81
  JMPTB cmp ecx, 0x87
  JMPTB jne public_4c0000000000c456
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c456 : nop
        je public_541c81
  JMPTB cmp ecx, 0x88
  JMPTB jne public_4c0000000000c452
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c452 : nop
        je public_541c81
  JMPTB cmp ecx, 0x89
  JMPTB jne public_4c0000000000c44e
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c44e : nop
        je public_541c81
  JMPTB cmp ecx, 0x8A
  JMPTB jne public_4c0000000000c44a
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c44a : nop
        je public_541c81
  JMPTB cmp ecx, 0x8B
  JMPTB jne public_4c0000000000c446
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c446 : nop
        je public_541c81
  JMPTB cmp ecx, 0x8C
  JMPTB jne public_4c0000000000c442
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c442 : nop
        je public_541c81
  JMPTB cmp ecx, 0x8D
  JMPTB jne public_4c0000000000c43e
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c43e : nop
        je public_541c81
  JMPTB cmp ecx, 0x8E
  JMPTB jne public_4c0000000000c43a
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c43a : nop
        je public_541c81
  JMPTB cmp ecx, 0x8F
  JMPTB jne public_4c0000000000c436
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c436 : nop
        je public_541c81
  JMPTB cmp ecx, 0x90
  JMPTB jne public_4c0000000000c432
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c432 : nop
        je public_541c81
  JMPTB cmp ecx, 0x91
  JMPTB jne public_4c0000000000c42e
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c42e : nop
        je public_541c81
  JMPTB cmp ecx, 0x92
  JMPTB jne public_4c0000000000c42a
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c42a : nop
        je public_541c81
  JMPTB cmp ecx, 0x93
  JMPTB jne public_4c0000000000c426
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c426 : nop
        je public_541c81
  JMPTB cmp ecx, 0x94
  JMPTB jne public_4c0000000000c422
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c422 : nop
        je public_541c81
  JMPTB cmp ecx, 0x95
  JMPTB jne public_4c0000000000c41e
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c41e : nop
        je public_541c81
  JMPTB cmp ecx, 0x96
  JMPTB jne public_4c0000000000c41a
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c41a : nop
        je public_541c81
  JMPTB cmp ecx, 0x97
  JMPTB jne public_4c0000000000c416
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c416 : nop
        je public_541c81
  JMPTB cmp ecx, 0x98
  JMPTB jne public_4c0000000000c412
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c412 : nop
        je public_541c81
  JMPTB cmp ecx, 0x99
  JMPTB jne public_4c0000000000c40e
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c40e : nop
        je public_541c81
  JMPTB cmp ecx, 0x9A
  JMPTB jne public_4c0000000000c40a
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c40a : nop
        je public_541c81
  JMPTB cmp ecx, 0x9B
  JMPTB jne public_4c0000000000c406
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c406 : nop
        je public_541c81
  JMPTB cmp ecx, 0x9C
  JMPTB jne public_4c0000000000c402
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c402 : nop
        je public_541c81
  JMPTB cmp ecx, 0x9D
  JMPTB jne public_4c0000000000c3fe
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c3fe : nop
        je public_541c81
  JMPTB cmp ecx, 0x9E
  JMPTB jne public_4c0000000000c3fa
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c3fa : nop
        je public_541c81
  JMPTB cmp ecx, 0x9F
  JMPTB jne public_4c0000000000c3f6
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c3f6 : nop
        je public_541c81
  JMPTB cmp ecx, 0xA0
  JMPTB jne public_4c0000000000c3f2
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c3f2 : nop
        je public_541c81
  JMPTB cmp ecx, 0xA1
  JMPTB jne public_4c0000000000c3ee
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c3ee : nop
        je public_541c81
  JMPTB cmp ecx, 0xA2
  JMPTB jne public_4c0000000000c3ea
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c3ea : nop
        je public_541c81
  JMPTB cmp ecx, 0xA3
  JMPTB jne public_4c0000000000c3e6
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c3e6 : nop
        je public_541c81
  JMPTB cmp ecx, 0xA4
  JMPTB jne public_4c0000000000c3e2
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c3e2 : nop
        je public_541c81
  JMPTB cmp ecx, 0xA5
  JMPTB jne public_4c0000000000c3de
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000c3de : nop
        je public_541c81
  JMPTB cmp ecx, 0xA6
  JMPTB jne public_4c0000000000c3da
  JMPTB mov ecx, 4
  JMPTB public_4c0000000000c3da : nop
        je public_5419d9
  JMPTB int 3
        public_5419d9 : nop
        lea edx, ss:[esp+0x10]
        push edx
        mov dword ptr ss : [esp+0x14], 4
        xor ebx, ebx
        call public_540fc0
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_541c7f
        lea ebx, ds:[ebx]
        public_541a00 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x150]
        cmp eax, edi
        je public_541c7d
        mov esi, dword ptr ds : [esi+0x14]
        test esi, esi
        jne public_541a00
        pop edi
        pop esi
        mov eax, ebx
        pop ebx
        ret 
        public_541a1f : nop
        lea ecx, ss:[esp+0x10]
        push ecx
        mov dword ptr ss : [esp+0x14], 3
        xor ebx, ebx
        call public_540fc0
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_541c7f
        public_541a40 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x150]
        cmp eax, edi
        je public_541c7d
        mov esi, dword ptr ds : [esi+0x14]
        test esi, esi
        jne public_541a40
        pop edi
        pop esi
        mov eax, ebx
        pop ebx
        ret 
        public_541a5f : nop
        lea eax, ss:[esp+0x10]
        push eax
        mov dword ptr ss : [esp+0x14], 5
        xor ebx, ebx
        call public_540fc0
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_541c7f
        public_541a80 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x150]
        cmp eax, edi
        je public_541c7d
        mov esi, dword ptr ds : [esi+0x14]
        test esi, esi
        jne public_541a80
        pop edi
        pop esi
        mov eax, ebx
        pop ebx
        ret 
        public_541a9f : nop
        lea eax, ss:[esp+0x10]
        push eax
        mov dword ptr ss : [esp+0x14], 6
        xor ebx, ebx
        call public_540fc0
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_541c7f
        public_541ac0 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x150]
        cmp eax, edi
        je public_541c7d
        mov esi, dword ptr ds : [esi+0x14]
        test esi, esi
        jne public_541ac0
        pop edi
        pop esi
        mov eax, ebx
        pop ebx
        ret 
        public_541adf : nop
        lea eax, ss:[esp+0x10]
        push eax
        mov dword ptr ss : [esp+0x14], 0xA
        xor ebx, ebx
        call public_540fc0
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_541c7f
        public_541b00 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x150]
        cmp eax, edi
        je public_541c7d
        mov esi, dword ptr ds : [esi+0x14]
        test esi, esi
        jne public_541b00
        pop edi
        pop esi
        mov eax, ebx
        pop ebx
        ret 
        public_541b1f : nop
        lea eax, ss:[esp+0x10]
        push eax
        mov dword ptr ss : [esp+0x14], 2
        xor ebx, ebx
        call public_540fc0
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_541c7f
        public_541b40 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x150]
        cmp eax, edi
        je public_541c7d
        mov esi, dword ptr ds : [esi+0x14]
        test esi, esi
        jne public_541b40
        pop edi
        pop esi
        mov eax, ebx
        pop ebx
        ret 
        public_541b5f : nop
        cmp ecx, 0x1003
        jg public_541c3d
        je public_541c05
        cmp ecx, 0x503
        je public_541bc5
        cmp ecx, 0x803
        jne public_541c81
        lea eax, ss:[esp+0x10]
        push eax
        mov dword ptr ss : [esp+0x14], 7
        xor ebx, ebx
        call public_540fc0
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_541c7f
        public_541ba6 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x150]
        cmp eax, edi
        je public_541c7d
        mov esi, dword ptr ds : [esi+0x14]
        test esi, esi
        jne public_541ba6
        pop edi
        pop esi
        mov eax, ebx
        pop ebx
        ret 
        public_541bc5 : nop
        lea eax, ss:[esp+0x10]
        push eax
        mov dword ptr ss : [esp+0x14], 1
        xor ebx, ebx
        call public_540fc0
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_541c7f
        public_541be6 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x150]
        cmp eax, edi
        je public_541c7d
        mov esi, dword ptr ds : [esi+0x14]
        test esi, esi
        jne public_541be6
        pop edi
        pop esi
        mov eax, ebx
        pop ebx
        ret 
        public_541c05 : nop
        lea eax, ss:[esp+0x10]
        push eax
        mov dword ptr ss : [esp+0x14], 8
        xor ebx, ebx
        call public_540fc0
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_541c7f
        public_541c22 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x150]
        cmp eax, edi
        je public_541c7d
        mov esi, dword ptr ds : [esi+0x14]
        test esi, esi
        jne public_541c22
        pop edi
        pop esi
        mov eax, ebx
        pop ebx
        ret 
        public_541c3d : nop
        cmp ecx, 0x4001
        jne public_541c81
        lea eax, ss:[esp+0x10]
        push eax
        mov dword ptr ss : [esp+0x14], 9
        xor ebx, ebx
        call public_540fc0
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_541c7f
        public_541c62 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x150]
        cmp eax, edi
        je public_541c7d
        mov esi, dword ptr ds : [esi+0x14]
        test esi, esi
        jne public_541c62
        pop edi
        pop esi
        mov eax, ebx
        pop ebx
        ret 
        public_541c7d : nop
        mov ebx, esi
        public_541c7f : nop
        mov eax, ebx
        public_541c81 : nop
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x5419a0)
        ASM_EXPORT_ENTRY_SINGLE(0x541c81, public_541c81)
    }
}

#undef public_5419d9
#undef public_541a00
#undef public_541a1f
#undef public_541a40
#undef public_541a5f
#undef public_541a80
#undef public_541a9f
#undef public_541ac0
#undef public_541adf
#undef public_541b00
#undef public_541b1f
#undef public_541b40
#undef public_541b5f
#undef public_541ba6
#undef public_541bc5
#undef public_541be6
#undef public_541c05
#undef public_541c22
#undef public_541c3d
#undef public_541c62
#undef public_541c7d
#undef public_541c7f
#undef public_541c81

#pragma init_seg(compiler)
extern "C" void const* const public_541c81 = __AsmFindLabelExport(&internal_5419a0, 0x541c81);
