#include "Common-PCH.h"


#define public_62ae995 _public_62ae995
#define public_62ae99c _public_62ae99c
#define public_62ae9a3 _public_62ae9a3
#define public_62ae9aa _public_62ae9aa
#define public_62ae9b1 _public_62ae9b1
#define public_62ae9b8 _public_62ae9b8
#define public_62ae9bf _public_62ae9bf
#define public_62ae9dd _public_62ae9dd
#define public_62ae9e4 _public_62ae9e4
#define public_62ae9eb _public_62ae9eb
#define public_62aea00 _public_62aea00
#define public_62aea05 _public_62aea05
#define public_62aea10 _public_62aea10
#define public_62aea1e _public_62aea1e
#define public_62aea22 _public_62aea22

PROC_DECLARE(0x62ae960, internal_62ae960, public_62ae960);
extern "C" NAKED register_t __cdecl internal_62ae960()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push esi
        mov esi, dword ptr ss : [esp+8]
        cmp esi, 0xFFFFFFFF
        je public_62aea1e
        mov eax, dword ptr ss : [esp+0xC]
        cmp eax, 0x303
        jg public_62ae9bf
        je public_62ae9b8
        dec eax
        cmp eax, 0xA6
        ja public_62aea1e
/*FIXUP movzx eax, byte ptr ds : [eax+public_62aea4c] @0x62ae987*/
/*FIXUP jmp dword ptr ds : [eax*4+public_62aea34] @0x62ae98e*/
  JMPTB cmp eax, 0
  JMPTB jne public_4c00000000005759
  JMPTB mov eax, 0
  JMPTB public_4c00000000005759 : nop
        je public_62ae995
  JMPTB cmp eax, 1
  JMPTB jne public_4c00000000005755
  JMPTB mov eax, 5
  JMPTB public_4c00000000005755 : nop
        je public_62aea1e
  JMPTB cmp eax, 2
  JMPTB jne public_4c00000000005751
  JMPTB mov eax, 5
  JMPTB public_4c00000000005751 : nop
        je public_62aea1e
  JMPTB cmp eax, 3
  JMPTB jne public_4c0000000000574d
  JMPTB mov eax, 5
  JMPTB public_4c0000000000574d : nop
        je public_62aea1e
  JMPTB cmp eax, 4
  JMPTB jne public_4c00000000005749
  JMPTB mov eax, 5
  JMPTB public_4c00000000005749 : nop
        je public_62aea1e
  JMPTB cmp eax, 5
  JMPTB jne public_4c00000000005745
  JMPTB mov eax, 5
  JMPTB public_4c00000000005745 : nop
        je public_62aea1e
  JMPTB cmp eax, 6
  JMPTB jne public_4c00000000005741
  JMPTB mov eax, 5
  JMPTB public_4c00000000005741 : nop
        je public_62aea1e
  JMPTB cmp eax, 7
  JMPTB jne public_4c0000000000573d
  JMPTB mov eax, 5
  JMPTB public_4c0000000000573d : nop
        je public_62aea1e
  JMPTB cmp eax, 8
  JMPTB jne public_4c00000000005739
  JMPTB mov eax, 5
  JMPTB public_4c00000000005739 : nop
        je public_62aea1e
  JMPTB cmp eax, 9
  JMPTB jne public_4c00000000005735
  JMPTB mov eax, 5
  JMPTB public_4c00000000005735 : nop
        je public_62aea1e
  JMPTB cmp eax, 0xA
  JMPTB jne public_4c00000000005731
  JMPTB mov eax, 5
  JMPTB public_4c00000000005731 : nop
        je public_62aea1e
  JMPTB cmp eax, 0xB
  JMPTB jne public_4c0000000000572d
  JMPTB mov eax, 5
  JMPTB public_4c0000000000572d : nop
        je public_62aea1e
  JMPTB cmp eax, 0xC
  JMPTB jne public_4c00000000005729
  JMPTB mov eax, 5
  JMPTB public_4c00000000005729 : nop
        je public_62aea1e
  JMPTB cmp eax, 0xD
  JMPTB jne public_4c00000000005725
  JMPTB mov eax, 5
  JMPTB public_4c00000000005725 : nop
        je public_62aea1e
  JMPTB cmp eax, 0xE
  JMPTB jne public_4c00000000005721
  JMPTB mov eax, 1
  JMPTB public_4c00000000005721 : nop
        je public_62ae9aa
  JMPTB cmp eax, 0xF
  JMPTB jne public_4c0000000000571d
  JMPTB mov eax, 5
  JMPTB public_4c0000000000571d : nop
        je public_62aea1e
  JMPTB cmp eax, 0x10
  JMPTB jne public_4c00000000005719
  JMPTB mov eax, 5
  JMPTB public_4c00000000005719 : nop
        je public_62aea1e
  JMPTB cmp eax, 0x11
  JMPTB jne public_4c00000000005715
  JMPTB mov eax, 5
  JMPTB public_4c00000000005715 : nop
        je public_62aea1e
  JMPTB cmp eax, 0x12
  JMPTB jne public_4c00000000005711
  JMPTB mov eax, 5
  JMPTB public_4c00000000005711 : nop
        je public_62aea1e
  JMPTB cmp eax, 0x13
  JMPTB jne public_4c0000000000570d
  JMPTB mov eax, 5
  JMPTB public_4c0000000000570d : nop
        je public_62aea1e
  JMPTB cmp eax, 0x14
  JMPTB jne public_4c00000000005709
  JMPTB mov eax, 5
  JMPTB public_4c00000000005709 : nop
        je public_62aea1e
  JMPTB cmp eax, 0x15
  JMPTB jne public_4c00000000005705
  JMPTB mov eax, 5
  JMPTB public_4c00000000005705 : nop
        je public_62aea1e
  JMPTB cmp eax, 0x16
  JMPTB jne public_4c00000000005701
  JMPTB mov eax, 2
  JMPTB public_4c00000000005701 : nop
        je public_62ae9b1
  JMPTB cmp eax, 0x17
  JMPTB jne public_4c000000000056fd
  JMPTB mov eax, 5
  JMPTB public_4c000000000056fd : nop
        je public_62aea1e
  JMPTB cmp eax, 0x18
  JMPTB jne public_4c000000000056f9
  JMPTB mov eax, 5
  JMPTB public_4c000000000056f9 : nop
        je public_62aea1e
  JMPTB cmp eax, 0x19
  JMPTB jne public_4c000000000056f5
  JMPTB mov eax, 5
  JMPTB public_4c000000000056f5 : nop
        je public_62aea1e
  JMPTB cmp eax, 0x1A
  JMPTB jne public_4c000000000056f1
  JMPTB mov eax, 5
  JMPTB public_4c000000000056f1 : nop
        je public_62aea1e
  JMPTB cmp eax, 0x1B
  JMPTB jne public_4c000000000056ed
  JMPTB mov eax, 5
  JMPTB public_4c000000000056ed : nop
        je public_62aea1e
  JMPTB cmp eax, 0x1C
  JMPTB jne public_4c000000000056e9
  JMPTB mov eax, 5
  JMPTB public_4c000000000056e9 : nop
        je public_62aea1e
  JMPTB cmp eax, 0x1D
  JMPTB jne public_4c000000000056e5
  JMPTB mov eax, 5
  JMPTB public_4c000000000056e5 : nop
        je public_62aea1e
  JMPTB cmp eax, 0x1E
  JMPTB jne public_4c000000000056e1
  JMPTB mov eax, 5
  JMPTB public_4c000000000056e1 : nop
        je public_62aea1e
  JMPTB cmp eax, 0x1F
  JMPTB jne public_4c000000000056dd
  JMPTB mov eax, 5
  JMPTB public_4c000000000056dd : nop
        je public_62aea1e
  JMPTB cmp eax, 0x20
  JMPTB jne public_4c000000000056d9
  JMPTB mov eax, 5
  JMPTB public_4c000000000056d9 : nop
        je public_62aea1e
  JMPTB cmp eax, 0x21
  JMPTB jne public_4c000000000056d5
  JMPTB mov eax, 5
  JMPTB public_4c000000000056d5 : nop
        je public_62aea1e
  JMPTB cmp eax, 0x22
  JMPTB jne public_4c000000000056d1
  JMPTB mov eax, 5
  JMPTB public_4c000000000056d1 : nop
        je public_62aea1e
  JMPTB cmp eax, 0x23
  JMPTB jne public_4c000000000056cd
  JMPTB mov eax, 5
  JMPTB public_4c000000000056cd : nop
        je public_62aea1e
  JMPTB cmp eax, 0x24
  JMPTB jne public_4c000000000056c9
  JMPTB mov eax, 5
  JMPTB public_4c000000000056c9 : nop
        je public_62aea1e
  JMPTB cmp eax, 0x25
  JMPTB jne public_4c000000000056c5
  JMPTB mov eax, 5
  JMPTB public_4c000000000056c5 : nop
        je public_62aea1e
  JMPTB cmp eax, 0x26
  JMPTB jne public_4c000000000056c1
  JMPTB mov eax, 5
  JMPTB public_4c000000000056c1 : nop
        je public_62aea1e
  JMPTB cmp eax, 0x27
  JMPTB jne public_4c000000000056bd
  JMPTB mov eax, 5
  JMPTB public_4c000000000056bd : nop
        je public_62aea1e
  JMPTB cmp eax, 0x28
  JMPTB jne public_4c000000000056b9
  JMPTB mov eax, 5
  JMPTB public_4c000000000056b9 : nop
        je public_62aea1e
  JMPTB cmp eax, 0x29
  JMPTB jne public_4c000000000056b5
  JMPTB mov eax, 5
  JMPTB public_4c000000000056b5 : nop
        je public_62aea1e
  JMPTB cmp eax, 0x2A
  JMPTB jne public_4c000000000056b1
  JMPTB mov eax, 5
  JMPTB public_4c000000000056b1 : nop
        je public_62aea1e
  JMPTB cmp eax, 0x2B
  JMPTB jne public_4c000000000056ad
  JMPTB mov eax, 5
  JMPTB public_4c000000000056ad : nop
        je public_62aea1e
  JMPTB cmp eax, 0x2C
  JMPTB jne public_4c000000000056a9
  JMPTB mov eax, 5
  JMPTB public_4c000000000056a9 : nop
        je public_62aea1e
  JMPTB cmp eax, 0x2D
  JMPTB jne public_4c000000000056a5
  JMPTB mov eax, 5
  JMPTB public_4c000000000056a5 : nop
        je public_62aea1e
  JMPTB cmp eax, 0x2E
  JMPTB jne public_4c000000000056a1
  JMPTB mov eax, 5
  JMPTB public_4c000000000056a1 : nop
        je public_62aea1e
  JMPTB cmp eax, 0x2F
  JMPTB jne public_4c0000000000569d
  JMPTB mov eax, 5
  JMPTB public_4c0000000000569d : nop
        je public_62aea1e
  JMPTB cmp eax, 0x30
  JMPTB jne public_4c00000000005699
  JMPTB mov eax, 5
  JMPTB public_4c00000000005699 : nop
        je public_62aea1e
  JMPTB cmp eax, 0x31
  JMPTB jne public_4c00000000005695
  JMPTB mov eax, 5
  JMPTB public_4c00000000005695 : nop
        je public_62aea1e
  JMPTB cmp eax, 0x32
  JMPTB jne public_4c00000000005691
  JMPTB mov eax, 5
  JMPTB public_4c00000000005691 : nop
        je public_62aea1e
  JMPTB cmp eax, 0x33
  JMPTB jne public_4c0000000000568d
  JMPTB mov eax, 5
  JMPTB public_4c0000000000568d : nop
        je public_62aea1e
  JMPTB cmp eax, 0x34
  JMPTB jne public_4c00000000005689
  JMPTB mov eax, 5
  JMPTB public_4c00000000005689 : nop
        je public_62aea1e
  JMPTB cmp eax, 0x35
  JMPTB jne public_4c00000000005685
  JMPTB mov eax, 5
  JMPTB public_4c00000000005685 : nop
        je public_62aea1e
  JMPTB cmp eax, 0x36
  JMPTB jne public_4c00000000005681
  JMPTB mov eax, 5
  JMPTB public_4c00000000005681 : nop
        je public_62aea1e
  JMPTB cmp eax, 0x37
  JMPTB jne public_4c0000000000567d
  JMPTB mov eax, 5
  JMPTB public_4c0000000000567d : nop
        je public_62aea1e
  JMPTB cmp eax, 0x38
  JMPTB jne public_4c00000000005679
  JMPTB mov eax, 5
  JMPTB public_4c00000000005679 : nop
        je public_62aea1e
  JMPTB cmp eax, 0x39
  JMPTB jne public_4c00000000005675
  JMPTB mov eax, 5
  JMPTB public_4c00000000005675 : nop
        je public_62aea1e
  JMPTB cmp eax, 0x3A
  JMPTB jne public_4c00000000005671
  JMPTB mov eax, 5
  JMPTB public_4c00000000005671 : nop
        je public_62aea1e
  JMPTB cmp eax, 0x3B
  JMPTB jne public_4c0000000000566d
  JMPTB mov eax, 5
  JMPTB public_4c0000000000566d : nop
        je public_62aea1e
  JMPTB cmp eax, 0x3C
  JMPTB jne public_4c00000000005669
  JMPTB mov eax, 5
  JMPTB public_4c00000000005669 : nop
        je public_62aea1e
  JMPTB cmp eax, 0x3D
  JMPTB jne public_4c00000000005665
  JMPTB mov eax, 5
  JMPTB public_4c00000000005665 : nop
        je public_62aea1e
  JMPTB cmp eax, 0x3E
  JMPTB jne public_4c00000000005661
  JMPTB mov eax, 5
  JMPTB public_4c00000000005661 : nop
        je public_62aea1e
  JMPTB cmp eax, 0x3F
  JMPTB jne public_4c0000000000565d
  JMPTB mov eax, 5
  JMPTB public_4c0000000000565d : nop
        je public_62aea1e
  JMPTB cmp eax, 0x40
  JMPTB jne public_4c00000000005659
  JMPTB mov eax, 5
  JMPTB public_4c00000000005659 : nop
        je public_62aea1e
  JMPTB cmp eax, 0x41
  JMPTB jne public_4c00000000005655
  JMPTB mov eax, 5
  JMPTB public_4c00000000005655 : nop
        je public_62aea1e
  JMPTB cmp eax, 0x42
  JMPTB jne public_4c00000000005651
  JMPTB mov eax, 5
  JMPTB public_4c00000000005651 : nop
        je public_62aea1e
  JMPTB cmp eax, 0x43
  JMPTB jne public_4c0000000000564d
  JMPTB mov eax, 5
  JMPTB public_4c0000000000564d : nop
        je public_62aea1e
  JMPTB cmp eax, 0x44
  JMPTB jne public_4c00000000005649
  JMPTB mov eax, 5
  JMPTB public_4c00000000005649 : nop
        je public_62aea1e
  JMPTB cmp eax, 0x45
  JMPTB jne public_4c00000000005645
  JMPTB mov eax, 5
  JMPTB public_4c00000000005645 : nop
        je public_62aea1e
  JMPTB cmp eax, 0x46
  JMPTB jne public_4c00000000005641
  JMPTB mov eax, 5
  JMPTB public_4c00000000005641 : nop
        je public_62aea1e
  JMPTB cmp eax, 0x47
  JMPTB jne public_4c0000000000563d
  JMPTB mov eax, 5
  JMPTB public_4c0000000000563d : nop
        je public_62aea1e
  JMPTB cmp eax, 0x48
  JMPTB jne public_4c00000000005639
  JMPTB mov eax, 5
  JMPTB public_4c00000000005639 : nop
        je public_62aea1e
  JMPTB cmp eax, 0x49
  JMPTB jne public_4c00000000005635
  JMPTB mov eax, 5
  JMPTB public_4c00000000005635 : nop
        je public_62aea1e
  JMPTB cmp eax, 0x4A
  JMPTB jne public_4c00000000005631
  JMPTB mov eax, 5
  JMPTB public_4c00000000005631 : nop
        je public_62aea1e
  JMPTB cmp eax, 0x4B
  JMPTB jne public_4c0000000000562d
  JMPTB mov eax, 5
  JMPTB public_4c0000000000562d : nop
        je public_62aea1e
  JMPTB cmp eax, 0x4C
  JMPTB jne public_4c00000000005629
  JMPTB mov eax, 5
  JMPTB public_4c00000000005629 : nop
        je public_62aea1e
  JMPTB cmp eax, 0x4D
  JMPTB jne public_4c00000000005625
  JMPTB mov eax, 5
  JMPTB public_4c00000000005625 : nop
        je public_62aea1e
  JMPTB cmp eax, 0x4E
  JMPTB jne public_4c00000000005621
  JMPTB mov eax, 5
  JMPTB public_4c00000000005621 : nop
        je public_62aea1e
  JMPTB cmp eax, 0x4F
  JMPTB jne public_4c0000000000561d
  JMPTB mov eax, 5
  JMPTB public_4c0000000000561d : nop
        je public_62aea1e
  JMPTB cmp eax, 0x50
  JMPTB jne public_4c00000000005619
  JMPTB mov eax, 5
  JMPTB public_4c00000000005619 : nop
        je public_62aea1e
  JMPTB cmp eax, 0x51
  JMPTB jne public_4c00000000005615
  JMPTB mov eax, 5
  JMPTB public_4c00000000005615 : nop
        je public_62aea1e
  JMPTB cmp eax, 0x52
  JMPTB jne public_4c00000000005611
  JMPTB mov eax, 5
  JMPTB public_4c00000000005611 : nop
        je public_62aea1e
  JMPTB cmp eax, 0x53
  JMPTB jne public_4c0000000000560d
  JMPTB mov eax, 5
  JMPTB public_4c0000000000560d : nop
        je public_62aea1e
  JMPTB cmp eax, 0x54
  JMPTB jne public_4c00000000005609
  JMPTB mov eax, 5
  JMPTB public_4c00000000005609 : nop
        je public_62aea1e
  JMPTB cmp eax, 0x55
  JMPTB jne public_4c00000000005605
  JMPTB mov eax, 5
  JMPTB public_4c00000000005605 : nop
        je public_62aea1e
  JMPTB cmp eax, 0x56
  JMPTB jne public_4c00000000005601
  JMPTB mov eax, 5
  JMPTB public_4c00000000005601 : nop
        je public_62aea1e
  JMPTB cmp eax, 0x57
  JMPTB jne public_4c000000000055fd
  JMPTB mov eax, 5
  JMPTB public_4c000000000055fd : nop
        je public_62aea1e
  JMPTB cmp eax, 0x58
  JMPTB jne public_4c000000000055f9
  JMPTB mov eax, 5
  JMPTB public_4c000000000055f9 : nop
        je public_62aea1e
  JMPTB cmp eax, 0x59
  JMPTB jne public_4c000000000055f5
  JMPTB mov eax, 5
  JMPTB public_4c000000000055f5 : nop
        je public_62aea1e
  JMPTB cmp eax, 0x5A
  JMPTB jne public_4c000000000055f1
  JMPTB mov eax, 5
  JMPTB public_4c000000000055f1 : nop
        je public_62aea1e
  JMPTB cmp eax, 0x5B
  JMPTB jne public_4c000000000055ed
  JMPTB mov eax, 5
  JMPTB public_4c000000000055ed : nop
        je public_62aea1e
  JMPTB cmp eax, 0x5C
  JMPTB jne public_4c000000000055e9
  JMPTB mov eax, 5
  JMPTB public_4c000000000055e9 : nop
        je public_62aea1e
  JMPTB cmp eax, 0x5D
  JMPTB jne public_4c000000000055e5
  JMPTB mov eax, 5
  JMPTB public_4c000000000055e5 : nop
        je public_62aea1e
  JMPTB cmp eax, 0x5E
  JMPTB jne public_4c000000000055e1
  JMPTB mov eax, 5
  JMPTB public_4c000000000055e1 : nop
        je public_62aea1e
  JMPTB cmp eax, 0x5F
  JMPTB jne public_4c000000000055dd
  JMPTB mov eax, 5
  JMPTB public_4c000000000055dd : nop
        je public_62aea1e
  JMPTB cmp eax, 0x60
  JMPTB jne public_4c000000000055d9
  JMPTB mov eax, 5
  JMPTB public_4c000000000055d9 : nop
        je public_62aea1e
  JMPTB cmp eax, 0x61
  JMPTB jne public_4c000000000055d5
  JMPTB mov eax, 5
  JMPTB public_4c000000000055d5 : nop
        je public_62aea1e
  JMPTB cmp eax, 0x62
  JMPTB jne public_4c000000000055d1
  JMPTB mov eax, 5
  JMPTB public_4c000000000055d1 : nop
        je public_62aea1e
  JMPTB cmp eax, 0x63
  JMPTB jne public_4c000000000055cd
  JMPTB mov eax, 5
  JMPTB public_4c000000000055cd : nop
        je public_62aea1e
  JMPTB cmp eax, 0x64
  JMPTB jne public_4c000000000055c9
  JMPTB mov eax, 5
  JMPTB public_4c000000000055c9 : nop
        je public_62aea1e
  JMPTB cmp eax, 0x65
  JMPTB jne public_4c000000000055c5
  JMPTB mov eax, 5
  JMPTB public_4c000000000055c5 : nop
        je public_62aea1e
  JMPTB cmp eax, 0x66
  JMPTB jne public_4c000000000055c1
  JMPTB mov eax, 3
  JMPTB public_4c000000000055c1 : nop
        je public_62ae99c
  JMPTB cmp eax, 0x67
  JMPTB jne public_4c000000000055bd
  JMPTB mov eax, 5
  JMPTB public_4c000000000055bd : nop
        je public_62aea1e
  JMPTB cmp eax, 0x68
  JMPTB jne public_4c000000000055b9
  JMPTB mov eax, 5
  JMPTB public_4c000000000055b9 : nop
        je public_62aea1e
  JMPTB cmp eax, 0x69
  JMPTB jne public_4c000000000055b5
  JMPTB mov eax, 5
  JMPTB public_4c000000000055b5 : nop
        je public_62aea1e
  JMPTB cmp eax, 0x6A
  JMPTB jne public_4c000000000055b1
  JMPTB mov eax, 5
  JMPTB public_4c000000000055b1 : nop
        je public_62aea1e
  JMPTB cmp eax, 0x6B
  JMPTB jne public_4c000000000055ad
  JMPTB mov eax, 5
  JMPTB public_4c000000000055ad : nop
        je public_62aea1e
  JMPTB cmp eax, 0x6C
  JMPTB jne public_4c000000000055a9
  JMPTB mov eax, 5
  JMPTB public_4c000000000055a9 : nop
        je public_62aea1e
  JMPTB cmp eax, 0x6D
  JMPTB jne public_4c000000000055a5
  JMPTB mov eax, 5
  JMPTB public_4c000000000055a5 : nop
        je public_62aea1e
  JMPTB cmp eax, 0x6E
  JMPTB jne public_4c000000000055a1
  JMPTB mov eax, 5
  JMPTB public_4c000000000055a1 : nop
        je public_62aea1e
  JMPTB cmp eax, 0x6F
  JMPTB jne public_4c0000000000559d
  JMPTB mov eax, 5
  JMPTB public_4c0000000000559d : nop
        je public_62aea1e
  JMPTB cmp eax, 0x70
  JMPTB jne public_4c00000000005599
  JMPTB mov eax, 5
  JMPTB public_4c00000000005599 : nop
        je public_62aea1e
  JMPTB cmp eax, 0x71
  JMPTB jne public_4c00000000005595
  JMPTB mov eax, 5
  JMPTB public_4c00000000005595 : nop
        je public_62aea1e
  JMPTB cmp eax, 0x72
  JMPTB jne public_4c00000000005591
  JMPTB mov eax, 5
  JMPTB public_4c00000000005591 : nop
        je public_62aea1e
  JMPTB cmp eax, 0x73
  JMPTB jne public_4c0000000000558d
  JMPTB mov eax, 5
  JMPTB public_4c0000000000558d : nop
        je public_62aea1e
  JMPTB cmp eax, 0x74
  JMPTB jne public_4c00000000005589
  JMPTB mov eax, 5
  JMPTB public_4c00000000005589 : nop
        je public_62aea1e
  JMPTB cmp eax, 0x75
  JMPTB jne public_4c00000000005585
  JMPTB mov eax, 5
  JMPTB public_4c00000000005585 : nop
        je public_62aea1e
  JMPTB cmp eax, 0x76
  JMPTB jne public_4c00000000005581
  JMPTB mov eax, 5
  JMPTB public_4c00000000005581 : nop
        je public_62aea1e
  JMPTB cmp eax, 0x77
  JMPTB jne public_4c0000000000557d
  JMPTB mov eax, 5
  JMPTB public_4c0000000000557d : nop
        je public_62aea1e
  JMPTB cmp eax, 0x78
  JMPTB jne public_4c00000000005579
  JMPTB mov eax, 5
  JMPTB public_4c00000000005579 : nop
        je public_62aea1e
  JMPTB cmp eax, 0x79
  JMPTB jne public_4c00000000005575
  JMPTB mov eax, 5
  JMPTB public_4c00000000005575 : nop
        je public_62aea1e
  JMPTB cmp eax, 0x7A
  JMPTB jne public_4c00000000005571
  JMPTB mov eax, 5
  JMPTB public_4c00000000005571 : nop
        je public_62aea1e
  JMPTB cmp eax, 0x7B
  JMPTB jne public_4c0000000000556d
  JMPTB mov eax, 5
  JMPTB public_4c0000000000556d : nop
        je public_62aea1e
  JMPTB cmp eax, 0x7C
  JMPTB jne public_4c00000000005569
  JMPTB mov eax, 5
  JMPTB public_4c00000000005569 : nop
        je public_62aea1e
  JMPTB cmp eax, 0x7D
  JMPTB jne public_4c00000000005565
  JMPTB mov eax, 5
  JMPTB public_4c00000000005565 : nop
        je public_62aea1e
  JMPTB cmp eax, 0x7E
  JMPTB jne public_4c00000000005561
  JMPTB mov eax, 5
  JMPTB public_4c00000000005561 : nop
        je public_62aea1e
  JMPTB cmp eax, 0x7F
  JMPTB jne public_4c0000000000555d
  JMPTB mov eax, 5
  JMPTB public_4c0000000000555d : nop
        je public_62aea1e
  JMPTB cmp eax, 0x80
  JMPTB jne public_4c00000000005559
  JMPTB mov eax, 5
  JMPTB public_4c00000000005559 : nop
        je public_62aea1e
  JMPTB cmp eax, 0x81
  JMPTB jne public_4c00000000005555
  JMPTB mov eax, 5
  JMPTB public_4c00000000005555 : nop
        je public_62aea1e
  JMPTB cmp eax, 0x82
  JMPTB jne public_4c00000000005551
  JMPTB mov eax, 5
  JMPTB public_4c00000000005551 : nop
        je public_62aea1e
  JMPTB cmp eax, 0x83
  JMPTB jne public_4c0000000000554d
  JMPTB mov eax, 5
  JMPTB public_4c0000000000554d : nop
        je public_62aea1e
  JMPTB cmp eax, 0x84
  JMPTB jne public_4c00000000005549
  JMPTB mov eax, 5
  JMPTB public_4c00000000005549 : nop
        je public_62aea1e
  JMPTB cmp eax, 0x85
  JMPTB jne public_4c00000000005545
  JMPTB mov eax, 5
  JMPTB public_4c00000000005545 : nop
        je public_62aea1e
  JMPTB cmp eax, 0x86
  JMPTB jne public_4c00000000005541
  JMPTB mov eax, 5
  JMPTB public_4c00000000005541 : nop
        je public_62aea1e
  JMPTB cmp eax, 0x87
  JMPTB jne public_4c0000000000553d
  JMPTB mov eax, 5
  JMPTB public_4c0000000000553d : nop
        je public_62aea1e
  JMPTB cmp eax, 0x88
  JMPTB jne public_4c00000000005539
  JMPTB mov eax, 5
  JMPTB public_4c00000000005539 : nop
        je public_62aea1e
  JMPTB cmp eax, 0x89
  JMPTB jne public_4c00000000005535
  JMPTB mov eax, 5
  JMPTB public_4c00000000005535 : nop
        je public_62aea1e
  JMPTB cmp eax, 0x8A
  JMPTB jne public_4c00000000005531
  JMPTB mov eax, 5
  JMPTB public_4c00000000005531 : nop
        je public_62aea1e
  JMPTB cmp eax, 0x8B
  JMPTB jne public_4c0000000000552d
  JMPTB mov eax, 5
  JMPTB public_4c0000000000552d : nop
        je public_62aea1e
  JMPTB cmp eax, 0x8C
  JMPTB jne public_4c00000000005529
  JMPTB mov eax, 5
  JMPTB public_4c00000000005529 : nop
        je public_62aea1e
  JMPTB cmp eax, 0x8D
  JMPTB jne public_4c00000000005525
  JMPTB mov eax, 5
  JMPTB public_4c00000000005525 : nop
        je public_62aea1e
  JMPTB cmp eax, 0x8E
  JMPTB jne public_4c00000000005521
  JMPTB mov eax, 5
  JMPTB public_4c00000000005521 : nop
        je public_62aea1e
  JMPTB cmp eax, 0x8F
  JMPTB jne public_4c0000000000551d
  JMPTB mov eax, 5
  JMPTB public_4c0000000000551d : nop
        je public_62aea1e
  JMPTB cmp eax, 0x90
  JMPTB jne public_4c00000000005519
  JMPTB mov eax, 5
  JMPTB public_4c00000000005519 : nop
        je public_62aea1e
  JMPTB cmp eax, 0x91
  JMPTB jne public_4c00000000005515
  JMPTB mov eax, 5
  JMPTB public_4c00000000005515 : nop
        je public_62aea1e
  JMPTB cmp eax, 0x92
  JMPTB jne public_4c00000000005511
  JMPTB mov eax, 5
  JMPTB public_4c00000000005511 : nop
        je public_62aea1e
  JMPTB cmp eax, 0x93
  JMPTB jne public_4c0000000000550d
  JMPTB mov eax, 5
  JMPTB public_4c0000000000550d : nop
        je public_62aea1e
  JMPTB cmp eax, 0x94
  JMPTB jne public_4c00000000005509
  JMPTB mov eax, 5
  JMPTB public_4c00000000005509 : nop
        je public_62aea1e
  JMPTB cmp eax, 0x95
  JMPTB jne public_4c00000000005505
  JMPTB mov eax, 5
  JMPTB public_4c00000000005505 : nop
        je public_62aea1e
  JMPTB cmp eax, 0x96
  JMPTB jne public_4c00000000005501
  JMPTB mov eax, 5
  JMPTB public_4c00000000005501 : nop
        je public_62aea1e
  JMPTB cmp eax, 0x97
  JMPTB jne public_4c000000000054fd
  JMPTB mov eax, 5
  JMPTB public_4c000000000054fd : nop
        je public_62aea1e
  JMPTB cmp eax, 0x98
  JMPTB jne public_4c000000000054f9
  JMPTB mov eax, 5
  JMPTB public_4c000000000054f9 : nop
        je public_62aea1e
  JMPTB cmp eax, 0x99
  JMPTB jne public_4c000000000054f5
  JMPTB mov eax, 5
  JMPTB public_4c000000000054f5 : nop
        je public_62aea1e
  JMPTB cmp eax, 0x9A
  JMPTB jne public_4c000000000054f1
  JMPTB mov eax, 5
  JMPTB public_4c000000000054f1 : nop
        je public_62aea1e
  JMPTB cmp eax, 0x9B
  JMPTB jne public_4c000000000054ed
  JMPTB mov eax, 5
  JMPTB public_4c000000000054ed : nop
        je public_62aea1e
  JMPTB cmp eax, 0x9C
  JMPTB jne public_4c000000000054e9
  JMPTB mov eax, 5
  JMPTB public_4c000000000054e9 : nop
        je public_62aea1e
  JMPTB cmp eax, 0x9D
  JMPTB jne public_4c000000000054e5
  JMPTB mov eax, 5
  JMPTB public_4c000000000054e5 : nop
        je public_62aea1e
  JMPTB cmp eax, 0x9E
  JMPTB jne public_4c000000000054e1
  JMPTB mov eax, 5
  JMPTB public_4c000000000054e1 : nop
        je public_62aea1e
  JMPTB cmp eax, 0x9F
  JMPTB jne public_4c000000000054dd
  JMPTB mov eax, 5
  JMPTB public_4c000000000054dd : nop
        je public_62aea1e
  JMPTB cmp eax, 0xA0
  JMPTB jne public_4c000000000054d9
  JMPTB mov eax, 5
  JMPTB public_4c000000000054d9 : nop
        je public_62aea1e
  JMPTB cmp eax, 0xA1
  JMPTB jne public_4c000000000054d5
  JMPTB mov eax, 5
  JMPTB public_4c000000000054d5 : nop
        je public_62aea1e
  JMPTB cmp eax, 0xA2
  JMPTB jne public_4c000000000054d1
  JMPTB mov eax, 5
  JMPTB public_4c000000000054d1 : nop
        je public_62aea1e
  JMPTB cmp eax, 0xA3
  JMPTB jne public_4c000000000054cd
  JMPTB mov eax, 5
  JMPTB public_4c000000000054cd : nop
        je public_62aea1e
  JMPTB cmp eax, 0xA4
  JMPTB jne public_4c000000000054c9
  JMPTB mov eax, 5
  JMPTB public_4c000000000054c9 : nop
        je public_62aea1e
  JMPTB cmp eax, 0xA5
  JMPTB jne public_4c000000000054c5
  JMPTB mov eax, 5
  JMPTB public_4c000000000054c5 : nop
        je public_62aea1e
  JMPTB cmp eax, 0xA6
  JMPTB jne public_4c000000000054c1
  JMPTB mov eax, 4
  JMPTB public_4c000000000054c1 : nop
        je public_62ae9a3
  JMPTB int 3
        public_62ae995 : nop
        mov eax, offset public_63fc32c
        jmp public_62aea05
        public_62ae99c : nop
        mov eax, offset public_63fc398
        jmp public_62aea05
        public_62ae9a3 : nop
        mov eax, offset public_63fc38c
        jmp public_62aea05
        public_62ae9aa : nop
        mov eax, offset public_63fc374
        jmp public_62aea05
        public_62ae9b1 : nop
        mov eax, offset public_63fc368
        jmp public_62aea05
        public_62ae9b8 : nop
        mov eax, offset public_63fc35c
        jmp public_62aea05
        public_62ae9bf : nop
        cmp eax, 0x1003
        jg public_62ae9eb
        je public_62ae9e4
        cmp eax, 0x503
        je public_62ae9dd
        cmp eax, 0x803
        jne public_62aea1e
        mov eax, offset public_63fc380
        jmp public_62aea05
        public_62ae9dd : nop
        mov eax, offset public_63fc3a4
        jmp public_62aea05
        public_62ae9e4 : nop
        mov eax, offset public_63fc350
        jmp public_62aea05
        public_62ae9eb : nop
        cmp eax, 0x2001
        je public_62aea00
        cmp eax, 0x4001
        jne public_62aea1e
        mov eax, offset public_63fc344
        jmp public_62aea05
        public_62aea00 : nop
        mov eax, offset public_63fc338
        public_62aea05 : nop
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp ecx, edx
        je public_62aea1e
        mov edi, edi
        public_62aea10 : nop
        mov eax, dword ptr ds : [ecx+8]
        cmp dword ptr ds : [eax+4], esi
        je public_62aea22
        mov ecx, dword ptr ds : [ecx]
        cmp ecx, edx
        jne public_62aea10
        public_62aea1e : nop
        xor eax, eax
        pop esi
        ret 
        public_62aea22 : nop
        mov ecx, dword ptr ds : [eax+0x98]
        inc ecx
        mov dword ptr ds : [eax+0x98], ecx
        pop esi
        ret 
        UNREACHABLE_TRAP(0x62ae960)
        ASM_EXPORT_ENTRY_FIRST(0x62ae995, public_62ae995)
        ASM_EXPORT_ENTRY(0x62ae99c, public_62ae99c)
        ASM_EXPORT_ENTRY(0x62ae9a3, public_62ae9a3)
        ASM_EXPORT_ENTRY(0x62ae9aa, public_62ae9aa)
        ASM_EXPORT_ENTRY(0x62ae9b1, public_62ae9b1)
        ASM_EXPORT_ENTRY_LAST(0x62aea1e, public_62aea1e)
    }
}

#undef public_62ae995
#undef public_62ae99c
#undef public_62ae9a3
#undef public_62ae9aa
#undef public_62ae9b1
#undef public_62ae9b8
#undef public_62ae9bf
#undef public_62ae9dd
#undef public_62ae9e4
#undef public_62ae9eb
#undef public_62aea00
#undef public_62aea05
#undef public_62aea10
#undef public_62aea1e
#undef public_62aea22

#pragma init_seg(compiler)
extern "C" void const* const public_62ae995 = __AsmFindLabelExport(&internal_62ae960, 0x62ae995);
extern "C" void const* const public_62ae99c = __AsmFindLabelExport(&internal_62ae960, 0x62ae99c);
extern "C" void const* const public_62ae9a3 = __AsmFindLabelExport(&internal_62ae960, 0x62ae9a3);
extern "C" void const* const public_62ae9aa = __AsmFindLabelExport(&internal_62ae960, 0x62ae9aa);
extern "C" void const* const public_62ae9b1 = __AsmFindLabelExport(&internal_62ae960, 0x62ae9b1);
extern "C" void const* const public_62aea1e = __AsmFindLabelExport(&internal_62ae960, 0x62aea1e);
