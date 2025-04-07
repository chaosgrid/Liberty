#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6da13c0);
CLANG_FORWARD_PROC_SYMBOL(public_6da16b0);

#define public_6da746e _public_6da746e
#define public_6da7483 _public_6da7483
#define public_6da74b0 _public_6da74b0
#define public_6da74cb _public_6da74cb
#define public_6da74e0 _public_6da74e0
#define public_6da74fc _public_6da74fc
#define public_6da7511 _public_6da7511
#define public_6da7548 _public_6da7548
#define public_6da755b _public_6da755b
#define public_6da7565 _public_6da7565
#define public_6da757c _public_6da757c
#define public_6da7599 _public_6da7599
#define public_6da75b0 _public_6da75b0
#define public_6da75c3 _public_6da75c3
#define public_6da75c6 _public_6da75c6
#define public_6da75c9 _public_6da75c9
#define public_6da75ee _public_6da75ee
#define public_6da7605 _public_6da7605
#define public_6da7636 _public_6da7636
#define public_6da7660 _public_6da7660
#define public_6da768a _public_6da768a
#define public_6da76c9 _public_6da76c9
#define public_6da76e0 _public_6da76e0
#define public_6da7711 _public_6da7711
#define public_6da773b _public_6da773b
#define public_6da777a _public_6da777a
#define public_6da7791 _public_6da7791
#define public_6da77a5 _public_6da77a5
#define public_6da77e3 _public_6da77e3
#define public_6da77ef _public_6da77ef

PROC_DECLARE(0x6da7430, internal_6da7430, public_6da7430);
extern "C" NAKED register_t __cdecl internal_6da7430()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [esp+8]
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr ss : [esp+0x14]
        lea esi, ds:[edi+0x10]
        push esi
        push eax
        mov dword ptr ds : [esi+8], ecx
        xor ebx, ebx
        lea ebp, ds:[edi+0x18]
        push ebp
        mov ecx, edi
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi], ebx
        mov dword ptr ds : [esi+0xC], ebx
        call public_6da13c0
        cmp eax, ebx
        mov dword ptr ds : [edi+0x1C], eax
        je public_6da746e
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0xC
        public_6da746e : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6da7483
        mov dword ptr ds : [esi+0xC], 0x17
        public_6da7483 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        cmp eax, ebx
        jne public_6da77ef
        mov eax, dword ptr ss : [ebp]
        mov cl, byte ptr ds : [eax]
        xor edx, edx
        mov dl, cl
        inc eax
        mov dword ptr ss : [ebp], eax
        mov byte ptr ss : [esp+0x14], bl
        mov dword ptr ds : [edi+0x20], edx
        call dword ptr ds : [public_6db3104]
        test al, al
        mov dl, 1
        je public_6da74b0
        mov dl, bl
        public_6da74b0 : nop
        mov eax, dword ptr ds : [edi+0x20]
        dec eax
        cmp eax, 0x7F
        ja public_6da75c9
/*FIXUP movzx eax, byte ptr ds : [eax+public_6da7818] @0x6da74bd*/
/*FIXUP jmp dword ptr ds : [eax*4+public_6da77f8] @0x6da74c4*/
  JMPTB cmp eax, 0
  JMPTB jne public_4c000000000016ef
  JMPTB mov eax, 0
  JMPTB public_4c000000000016ef : nop
        je public_6da777a
  JMPTB cmp eax, 1
  JMPTB jne public_4c000000000016eb
  JMPTB mov eax, 1
  JMPTB public_4c000000000016eb : nop
        je public_6da74cb
  JMPTB cmp eax, 2
  JMPTB jne public_4c000000000016e7
  JMPTB mov eax, 7
  JMPTB public_4c000000000016e7 : nop
        je public_6da75c9
  JMPTB cmp eax, 3
  JMPTB jne public_4c000000000016e3
  JMPTB mov eax, 2
  JMPTB public_4c000000000016e3 : nop
        je public_6da7565
  JMPTB cmp eax, 4
  JMPTB jne public_4c000000000016df
  JMPTB mov eax, 7
  JMPTB public_4c000000000016df : nop
        je public_6da75c9
  JMPTB cmp eax, 5
  JMPTB jne public_4c000000000016db
  JMPTB mov eax, 7
  JMPTB public_4c000000000016db : nop
        je public_6da75c9
  JMPTB cmp eax, 6
  JMPTB jne public_4c000000000016d7
  JMPTB mov eax, 7
  JMPTB public_4c000000000016d7 : nop
        je public_6da75c9
  JMPTB cmp eax, 7
  JMPTB jne public_4c000000000016d3
  JMPTB mov eax, 3
  JMPTB public_4c000000000016d3 : nop
        je public_6da75ee
  JMPTB cmp eax, 8
  JMPTB jne public_4c000000000016cf
  JMPTB mov eax, 7
  JMPTB public_4c000000000016cf : nop
        je public_6da75c9
  JMPTB cmp eax, 9
  JMPTB jne public_4c000000000016cb
  JMPTB mov eax, 7
  JMPTB public_4c000000000016cb : nop
        je public_6da75c9
  JMPTB cmp eax, 0xA
  JMPTB jne public_4c000000000016c7
  JMPTB mov eax, 7
  JMPTB public_4c000000000016c7 : nop
        je public_6da75c9
  JMPTB cmp eax, 0xB
  JMPTB jne public_4c000000000016c3
  JMPTB mov eax, 7
  JMPTB public_4c000000000016c3 : nop
        je public_6da75c9
  JMPTB cmp eax, 0xC
  JMPTB jne public_4c000000000016bf
  JMPTB mov eax, 7
  JMPTB public_4c000000000016bf : nop
        je public_6da75c9
  JMPTB cmp eax, 0xD
  JMPTB jne public_4c000000000016bb
  JMPTB mov eax, 7
  JMPTB public_4c000000000016bb : nop
        je public_6da75c9
  JMPTB cmp eax, 0xE
  JMPTB jne public_4c000000000016b7
  JMPTB mov eax, 7
  JMPTB public_4c000000000016b7 : nop
        je public_6da75c9
  JMPTB cmp eax, 0xF
  JMPTB jne public_4c000000000016b3
  JMPTB mov eax, 4
  JMPTB public_4c000000000016b3 : nop
        je public_6da76c9
  JMPTB cmp eax, 0x10
  JMPTB jne public_4c000000000016af
  JMPTB mov eax, 7
  JMPTB public_4c000000000016af : nop
        je public_6da75c9
  JMPTB cmp eax, 0x11
  JMPTB jne public_4c000000000016ab
  JMPTB mov eax, 7
  JMPTB public_4c000000000016ab : nop
        je public_6da75c9
  JMPTB cmp eax, 0x12
  JMPTB jne public_4c000000000016a7
  JMPTB mov eax, 7
  JMPTB public_4c000000000016a7 : nop
        je public_6da75c9
  JMPTB cmp eax, 0x13
  JMPTB jne public_4c000000000016a3
  JMPTB mov eax, 7
  JMPTB public_4c000000000016a3 : nop
        je public_6da75c9
  JMPTB cmp eax, 0x14
  JMPTB jne public_4c0000000000169f
  JMPTB mov eax, 7
  JMPTB public_4c0000000000169f : nop
        je public_6da75c9
  JMPTB cmp eax, 0x15
  JMPTB jne public_4c0000000000169b
  JMPTB mov eax, 7
  JMPTB public_4c0000000000169b : nop
        je public_6da75c9
  JMPTB cmp eax, 0x16
  JMPTB jne public_4c00000000001697
  JMPTB mov eax, 7
  JMPTB public_4c00000000001697 : nop
        je public_6da75c9
  JMPTB cmp eax, 0x17
  JMPTB jne public_4c00000000001693
  JMPTB mov eax, 7
  JMPTB public_4c00000000001693 : nop
        je public_6da75c9
  JMPTB cmp eax, 0x18
  JMPTB jne public_4c0000000000168f
  JMPTB mov eax, 7
  JMPTB public_4c0000000000168f : nop
        je public_6da75c9
  JMPTB cmp eax, 0x19
  JMPTB jne public_4c0000000000168b
  JMPTB mov eax, 7
  JMPTB public_4c0000000000168b : nop
        je public_6da75c9
  JMPTB cmp eax, 0x1A
  JMPTB jne public_4c00000000001687
  JMPTB mov eax, 7
  JMPTB public_4c00000000001687 : nop
        je public_6da75c9
  JMPTB cmp eax, 0x1B
  JMPTB jne public_4c00000000001683
  JMPTB mov eax, 7
  JMPTB public_4c00000000001683 : nop
        je public_6da75c9
  JMPTB cmp eax, 0x1C
  JMPTB jne public_4c0000000000167f
  JMPTB mov eax, 7
  JMPTB public_4c0000000000167f : nop
        je public_6da75c9
  JMPTB cmp eax, 0x1D
  JMPTB jne public_4c0000000000167b
  JMPTB mov eax, 7
  JMPTB public_4c0000000000167b : nop
        je public_6da75c9
  JMPTB cmp eax, 0x1E
  JMPTB jne public_4c00000000001677
  JMPTB mov eax, 7
  JMPTB public_4c00000000001677 : nop
        je public_6da75c9
  JMPTB cmp eax, 0x1F
  JMPTB jne public_4c00000000001673
  JMPTB mov eax, 0
  JMPTB public_4c00000000001673 : nop
        je public_6da777a
  JMPTB cmp eax, 0x20
  JMPTB jne public_4c0000000000166f
  JMPTB mov eax, 7
  JMPTB public_4c0000000000166f : nop
        je public_6da75c9
  JMPTB cmp eax, 0x21
  JMPTB jne public_4c0000000000166b
  JMPTB mov eax, 7
  JMPTB public_4c0000000000166b : nop
        je public_6da75c9
  JMPTB cmp eax, 0x22
  JMPTB jne public_4c00000000001667
  JMPTB mov eax, 7
  JMPTB public_4c00000000001667 : nop
        je public_6da75c9
  JMPTB cmp eax, 0x23
  JMPTB jne public_4c00000000001663
  JMPTB mov eax, 7
  JMPTB public_4c00000000001663 : nop
        je public_6da75c9
  JMPTB cmp eax, 0x24
  JMPTB jne public_4c0000000000165f
  JMPTB mov eax, 7
  JMPTB public_4c0000000000165f : nop
        je public_6da75c9
  JMPTB cmp eax, 0x25
  JMPTB jne public_4c0000000000165b
  JMPTB mov eax, 7
  JMPTB public_4c0000000000165b : nop
        je public_6da75c9
  JMPTB cmp eax, 0x26
  JMPTB jne public_4c00000000001657
  JMPTB mov eax, 7
  JMPTB public_4c00000000001657 : nop
        je public_6da75c9
  JMPTB cmp eax, 0x27
  JMPTB jne public_4c00000000001653
  JMPTB mov eax, 7
  JMPTB public_4c00000000001653 : nop
        je public_6da75c9
  JMPTB cmp eax, 0x28
  JMPTB jne public_4c0000000000164f
  JMPTB mov eax, 7
  JMPTB public_4c0000000000164f : nop
        je public_6da75c9
  JMPTB cmp eax, 0x29
  JMPTB jne public_4c0000000000164b
  JMPTB mov eax, 7
  JMPTB public_4c0000000000164b : nop
        je public_6da75c9
  JMPTB cmp eax, 0x2A
  JMPTB jne public_4c00000000001647
  JMPTB mov eax, 7
  JMPTB public_4c00000000001647 : nop
        je public_6da75c9
  JMPTB cmp eax, 0x2B
  JMPTB jne public_4c00000000001643
  JMPTB mov eax, 7
  JMPTB public_4c00000000001643 : nop
        je public_6da75c9
  JMPTB cmp eax, 0x2C
  JMPTB jne public_4c0000000000163f
  JMPTB mov eax, 7
  JMPTB public_4c0000000000163f : nop
        je public_6da75c9
  JMPTB cmp eax, 0x2D
  JMPTB jne public_4c0000000000163b
  JMPTB mov eax, 7
  JMPTB public_4c0000000000163b : nop
        je public_6da75c9
  JMPTB cmp eax, 0x2E
  JMPTB jne public_4c00000000001637
  JMPTB mov eax, 7
  JMPTB public_4c00000000001637 : nop
        je public_6da75c9
  JMPTB cmp eax, 0x2F
  JMPTB jne public_4c00000000001633
  JMPTB mov eax, 7
  JMPTB public_4c00000000001633 : nop
        je public_6da75c9
  JMPTB cmp eax, 0x30
  JMPTB jne public_4c0000000000162f
  JMPTB mov eax, 7
  JMPTB public_4c0000000000162f : nop
        je public_6da75c9
  JMPTB cmp eax, 0x31
  JMPTB jne public_4c0000000000162b
  JMPTB mov eax, 7
  JMPTB public_4c0000000000162b : nop
        je public_6da75c9
  JMPTB cmp eax, 0x32
  JMPTB jne public_4c00000000001627
  JMPTB mov eax, 7
  JMPTB public_4c00000000001627 : nop
        je public_6da75c9
  JMPTB cmp eax, 0x33
  JMPTB jne public_4c00000000001623
  JMPTB mov eax, 7
  JMPTB public_4c00000000001623 : nop
        je public_6da75c9
  JMPTB cmp eax, 0x34
  JMPTB jne public_4c0000000000161f
  JMPTB mov eax, 7
  JMPTB public_4c0000000000161f : nop
        je public_6da75c9
  JMPTB cmp eax, 0x35
  JMPTB jne public_4c0000000000161b
  JMPTB mov eax, 7
  JMPTB public_4c0000000000161b : nop
        je public_6da75c9
  JMPTB cmp eax, 0x36
  JMPTB jne public_4c00000000001617
  JMPTB mov eax, 7
  JMPTB public_4c00000000001617 : nop
        je public_6da75c9
  JMPTB cmp eax, 0x37
  JMPTB jne public_4c00000000001613
  JMPTB mov eax, 7
  JMPTB public_4c00000000001613 : nop
        je public_6da75c9
  JMPTB cmp eax, 0x38
  JMPTB jne public_4c0000000000160f
  JMPTB mov eax, 7
  JMPTB public_4c0000000000160f : nop
        je public_6da75c9
  JMPTB cmp eax, 0x39
  JMPTB jne public_4c0000000000160b
  JMPTB mov eax, 7
  JMPTB public_4c0000000000160b : nop
        je public_6da75c9
  JMPTB cmp eax, 0x3A
  JMPTB jne public_4c00000000001607
  JMPTB mov eax, 7
  JMPTB public_4c00000000001607 : nop
        je public_6da75c9
  JMPTB cmp eax, 0x3B
  JMPTB jne public_4c00000000001603
  JMPTB mov eax, 7
  JMPTB public_4c00000000001603 : nop
        je public_6da75c9
  JMPTB cmp eax, 0x3C
  JMPTB jne public_4c000000000015ff
  JMPTB mov eax, 7
  JMPTB public_4c000000000015ff : nop
        je public_6da75c9
  JMPTB cmp eax, 0x3D
  JMPTB jne public_4c000000000015fb
  JMPTB mov eax, 7
  JMPTB public_4c000000000015fb : nop
        je public_6da75c9
  JMPTB cmp eax, 0x3E
  JMPTB jne public_4c000000000015f7
  JMPTB mov eax, 7
  JMPTB public_4c000000000015f7 : nop
        je public_6da75c9
  JMPTB cmp eax, 0x3F
  JMPTB jne public_4c000000000015f3
  JMPTB mov eax, 5
  JMPTB public_4c000000000015f3 : nop
        je public_6da74fc
  JMPTB cmp eax, 0x40
  JMPTB jne public_4c000000000015ef
  JMPTB mov eax, 7
  JMPTB public_4c000000000015ef : nop
        je public_6da75c9
  JMPTB cmp eax, 0x41
  JMPTB jne public_4c000000000015eb
  JMPTB mov eax, 7
  JMPTB public_4c000000000015eb : nop
        je public_6da75c9
  JMPTB cmp eax, 0x42
  JMPTB jne public_4c000000000015e7
  JMPTB mov eax, 7
  JMPTB public_4c000000000015e7 : nop
        je public_6da75c9
  JMPTB cmp eax, 0x43
  JMPTB jne public_4c000000000015e3
  JMPTB mov eax, 7
  JMPTB public_4c000000000015e3 : nop
        je public_6da75c9
  JMPTB cmp eax, 0x44
  JMPTB jne public_4c000000000015df
  JMPTB mov eax, 7
  JMPTB public_4c000000000015df : nop
        je public_6da75c9
  JMPTB cmp eax, 0x45
  JMPTB jne public_4c000000000015db
  JMPTB mov eax, 7
  JMPTB public_4c000000000015db : nop
        je public_6da75c9
  JMPTB cmp eax, 0x46
  JMPTB jne public_4c000000000015d7
  JMPTB mov eax, 7
  JMPTB public_4c000000000015d7 : nop
        je public_6da75c9
  JMPTB cmp eax, 0x47
  JMPTB jne public_4c000000000015d3
  JMPTB mov eax, 7
  JMPTB public_4c000000000015d3 : nop
        je public_6da75c9
  JMPTB cmp eax, 0x48
  JMPTB jne public_4c000000000015cf
  JMPTB mov eax, 7
  JMPTB public_4c000000000015cf : nop
        je public_6da75c9
  JMPTB cmp eax, 0x49
  JMPTB jne public_4c000000000015cb
  JMPTB mov eax, 7
  JMPTB public_4c000000000015cb : nop
        je public_6da75c9
  JMPTB cmp eax, 0x4A
  JMPTB jne public_4c000000000015c7
  JMPTB mov eax, 7
  JMPTB public_4c000000000015c7 : nop
        je public_6da75c9
  JMPTB cmp eax, 0x4B
  JMPTB jne public_4c000000000015c3
  JMPTB mov eax, 7
  JMPTB public_4c000000000015c3 : nop
        je public_6da75c9
  JMPTB cmp eax, 0x4C
  JMPTB jne public_4c000000000015bf
  JMPTB mov eax, 7
  JMPTB public_4c000000000015bf : nop
        je public_6da75c9
  JMPTB cmp eax, 0x4D
  JMPTB jne public_4c000000000015bb
  JMPTB mov eax, 7
  JMPTB public_4c000000000015bb : nop
        je public_6da75c9
  JMPTB cmp eax, 0x4E
  JMPTB jne public_4c000000000015b7
  JMPTB mov eax, 7
  JMPTB public_4c000000000015b7 : nop
        je public_6da75c9
  JMPTB cmp eax, 0x4F
  JMPTB jne public_4c000000000015b3
  JMPTB mov eax, 7
  JMPTB public_4c000000000015b3 : nop
        je public_6da75c9
  JMPTB cmp eax, 0x50
  JMPTB jne public_4c000000000015af
  JMPTB mov eax, 7
  JMPTB public_4c000000000015af : nop
        je public_6da75c9
  JMPTB cmp eax, 0x51
  JMPTB jne public_4c000000000015ab
  JMPTB mov eax, 7
  JMPTB public_4c000000000015ab : nop
        je public_6da75c9
  JMPTB cmp eax, 0x52
  JMPTB jne public_4c000000000015a7
  JMPTB mov eax, 7
  JMPTB public_4c000000000015a7 : nop
        je public_6da75c9
  JMPTB cmp eax, 0x53
  JMPTB jne public_4c000000000015a3
  JMPTB mov eax, 7
  JMPTB public_4c000000000015a3 : nop
        je public_6da75c9
  JMPTB cmp eax, 0x54
  JMPTB jne public_4c0000000000159f
  JMPTB mov eax, 7
  JMPTB public_4c0000000000159f : nop
        je public_6da75c9
  JMPTB cmp eax, 0x55
  JMPTB jne public_4c0000000000159b
  JMPTB mov eax, 7
  JMPTB public_4c0000000000159b : nop
        je public_6da75c9
  JMPTB cmp eax, 0x56
  JMPTB jne public_4c00000000001597
  JMPTB mov eax, 7
  JMPTB public_4c00000000001597 : nop
        je public_6da75c9
  JMPTB cmp eax, 0x57
  JMPTB jne public_4c00000000001593
  JMPTB mov eax, 7
  JMPTB public_4c00000000001593 : nop
        je public_6da75c9
  JMPTB cmp eax, 0x58
  JMPTB jne public_4c0000000000158f
  JMPTB mov eax, 7
  JMPTB public_4c0000000000158f : nop
        je public_6da75c9
  JMPTB cmp eax, 0x59
  JMPTB jne public_4c0000000000158b
  JMPTB mov eax, 7
  JMPTB public_4c0000000000158b : nop
        je public_6da75c9
  JMPTB cmp eax, 0x5A
  JMPTB jne public_4c00000000001587
  JMPTB mov eax, 7
  JMPTB public_4c00000000001587 : nop
        je public_6da75c9
  JMPTB cmp eax, 0x5B
  JMPTB jne public_4c00000000001583
  JMPTB mov eax, 7
  JMPTB public_4c00000000001583 : nop
        je public_6da75c9
  JMPTB cmp eax, 0x5C
  JMPTB jne public_4c0000000000157f
  JMPTB mov eax, 7
  JMPTB public_4c0000000000157f : nop
        je public_6da75c9
  JMPTB cmp eax, 0x5D
  JMPTB jne public_4c0000000000157b
  JMPTB mov eax, 7
  JMPTB public_4c0000000000157b : nop
        je public_6da75c9
  JMPTB cmp eax, 0x5E
  JMPTB jne public_4c00000000001577
  JMPTB mov eax, 7
  JMPTB public_4c00000000001577 : nop
        je public_6da75c9
  JMPTB cmp eax, 0x5F
  JMPTB jne public_4c00000000001573
  JMPTB mov eax, 7
  JMPTB public_4c00000000001573 : nop
        je public_6da75c9
  JMPTB cmp eax, 0x60
  JMPTB jne public_4c0000000000156f
  JMPTB mov eax, 7
  JMPTB public_4c0000000000156f : nop
        je public_6da75c9
  JMPTB cmp eax, 0x61
  JMPTB jne public_4c0000000000156b
  JMPTB mov eax, 7
  JMPTB public_4c0000000000156b : nop
        je public_6da75c9
  JMPTB cmp eax, 0x62
  JMPTB jne public_4c00000000001567
  JMPTB mov eax, 7
  JMPTB public_4c00000000001567 : nop
        je public_6da75c9
  JMPTB cmp eax, 0x63
  JMPTB jne public_4c00000000001563
  JMPTB mov eax, 7
  JMPTB public_4c00000000001563 : nop
        je public_6da75c9
  JMPTB cmp eax, 0x64
  JMPTB jne public_4c0000000000155f
  JMPTB mov eax, 7
  JMPTB public_4c0000000000155f : nop
        je public_6da75c9
  JMPTB cmp eax, 0x65
  JMPTB jne public_4c0000000000155b
  JMPTB mov eax, 7
  JMPTB public_4c0000000000155b : nop
        je public_6da75c9
  JMPTB cmp eax, 0x66
  JMPTB jne public_4c00000000001557
  JMPTB mov eax, 7
  JMPTB public_4c00000000001557 : nop
        je public_6da75c9
  JMPTB cmp eax, 0x67
  JMPTB jne public_4c00000000001553
  JMPTB mov eax, 7
  JMPTB public_4c00000000001553 : nop
        je public_6da75c9
  JMPTB cmp eax, 0x68
  JMPTB jne public_4c0000000000154f
  JMPTB mov eax, 7
  JMPTB public_4c0000000000154f : nop
        je public_6da75c9
  JMPTB cmp eax, 0x69
  JMPTB jne public_4c0000000000154b
  JMPTB mov eax, 7
  JMPTB public_4c0000000000154b : nop
        je public_6da75c9
  JMPTB cmp eax, 0x6A
  JMPTB jne public_4c00000000001547
  JMPTB mov eax, 7
  JMPTB public_4c00000000001547 : nop
        je public_6da75c9
  JMPTB cmp eax, 0x6B
  JMPTB jne public_4c00000000001543
  JMPTB mov eax, 7
  JMPTB public_4c00000000001543 : nop
        je public_6da75c9
  JMPTB cmp eax, 0x6C
  JMPTB jne public_4c0000000000153f
  JMPTB mov eax, 7
  JMPTB public_4c0000000000153f : nop
        je public_6da75c9
  JMPTB cmp eax, 0x6D
  JMPTB jne public_4c0000000000153b
  JMPTB mov eax, 7
  JMPTB public_4c0000000000153b : nop
        je public_6da75c9
  JMPTB cmp eax, 0x6E
  JMPTB jne public_4c00000000001537
  JMPTB mov eax, 7
  JMPTB public_4c00000000001537 : nop
        je public_6da75c9
  JMPTB cmp eax, 0x6F
  JMPTB jne public_4c00000000001533
  JMPTB mov eax, 7
  JMPTB public_4c00000000001533 : nop
        je public_6da75c9
  JMPTB cmp eax, 0x70
  JMPTB jne public_4c0000000000152f
  JMPTB mov eax, 7
  JMPTB public_4c0000000000152f : nop
        je public_6da75c9
  JMPTB cmp eax, 0x71
  JMPTB jne public_4c0000000000152b
  JMPTB mov eax, 7
  JMPTB public_4c0000000000152b : nop
        je public_6da75c9
  JMPTB cmp eax, 0x72
  JMPTB jne public_4c00000000001527
  JMPTB mov eax, 7
  JMPTB public_4c00000000001527 : nop
        je public_6da75c9
  JMPTB cmp eax, 0x73
  JMPTB jne public_4c00000000001523
  JMPTB mov eax, 7
  JMPTB public_4c00000000001523 : nop
        je public_6da75c9
  JMPTB cmp eax, 0x74
  JMPTB jne public_4c0000000000151f
  JMPTB mov eax, 7
  JMPTB public_4c0000000000151f : nop
        je public_6da75c9
  JMPTB cmp eax, 0x75
  JMPTB jne public_4c0000000000151b
  JMPTB mov eax, 7
  JMPTB public_4c0000000000151b : nop
        je public_6da75c9
  JMPTB cmp eax, 0x76
  JMPTB jne public_4c00000000001517
  JMPTB mov eax, 7
  JMPTB public_4c00000000001517 : nop
        je public_6da75c9
  JMPTB cmp eax, 0x77
  JMPTB jne public_4c00000000001513
  JMPTB mov eax, 7
  JMPTB public_4c00000000001513 : nop
        je public_6da75c9
  JMPTB cmp eax, 0x78
  JMPTB jne public_4c0000000000150f
  JMPTB mov eax, 7
  JMPTB public_4c0000000000150f : nop
        je public_6da75c9
  JMPTB cmp eax, 0x79
  JMPTB jne public_4c0000000000150b
  JMPTB mov eax, 7
  JMPTB public_4c0000000000150b : nop
        je public_6da75c9
  JMPTB cmp eax, 0x7A
  JMPTB jne public_4c00000000001507
  JMPTB mov eax, 7
  JMPTB public_4c00000000001507 : nop
        je public_6da75c9
  JMPTB cmp eax, 0x7B
  JMPTB jne public_4c00000000001503
  JMPTB mov eax, 7
  JMPTB public_4c00000000001503 : nop
        je public_6da75c9
  JMPTB cmp eax, 0x7C
  JMPTB jne public_4c000000000014ff
  JMPTB mov eax, 7
  JMPTB public_4c000000000014ff : nop
        je public_6da75c9
  JMPTB cmp eax, 0x7D
  JMPTB jne public_4c000000000014fb
  JMPTB mov eax, 7
  JMPTB public_4c000000000014fb : nop
        je public_6da75c9
  JMPTB cmp eax, 0x7E
  JMPTB jne public_4c000000000014f7
  JMPTB mov eax, 7
  JMPTB public_4c000000000014f7 : nop
        je public_6da75c9
  JMPTB cmp eax, 0x7F
  JMPTB jne public_4c000000000014f3
  JMPTB mov eax, 6
  JMPTB public_4c000000000014f3 : nop
        je public_6da7599
  JMPTB int 3
        public_6da74cb : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6da74e0
        mov dword ptr ds : [esi+0xC], 0x17
        public_6da74e0 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6da77ef
        mov eax, dword ptr ss : [ebp]
        mov cl, byte ptr ds : [eax]
        movsx edx, cl
        inc eax
        mov dword ptr ds : [edi+0x24], edx
        jmp public_6da75c6
        public_6da74fc : nop
        mov ebx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        inc ebx
        mov eax, ebx
        cmp eax, ecx
        mov dword ptr ds : [esi], ebx
        jbe public_6da7511
        mov dword ptr ds : [esi+0xC], 0x17
        public_6da7511 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6da77ef
        mov eax, dword ptr ss : [ebp]
        mov cl, byte ptr ds : [eax]
        inc eax
        test cl, cl
        mov dword ptr ss : [ebp], eax
        setne al
        test dl, dl
        mov byte ptr ds : [edi+0x30], al
        je public_6da7548
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6da7548
        mov dword ptr ds : [esi+0xC], 0x16
        public_6da7548 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6da755b
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6da755b : nop
        mov eax, dword ptr ss : [ebp]
        mov ecx, dword ptr ds : [edi+0x28]
        mov dword ptr ds : [eax], ecx
        jmp public_6da75c3
        public_6da7565 : nop
        mov ebx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add ebx, 4
        mov eax, ebx
        cmp eax, ecx
        mov dword ptr ds : [esi], ebx
        jbe public_6da757c
        mov dword ptr ds : [esi+0xC], 0x17
        public_6da757c : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6da77ef
        mov eax, dword ptr ss : [ebp]
        mov ecx, dword ptr ds : [eax]
        add eax, 4
        test dl, dl
        mov dword ptr ds : [edi+0x2C], ecx
        mov dword ptr ss : [ebp], eax
        je public_6da75b0
        public_6da7599 : nop
        mov edx, dword ptr ds : [esi]
        add edx, 4
        mov dword ptr ds : [esi], edx
        mov ecx, dword ptr ds : [esi+4]
        mov eax, edx
        cmp eax, ecx
        jbe public_6da75b0
        mov dword ptr ds : [esi+0xC], 0x17
        public_6da75b0 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6da77ef
        mov eax, dword ptr ss : [ebp]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [edi+0x28], edx
        public_6da75c3 : nop
        add eax, 4
        public_6da75c6 : nop
        mov dword ptr ss : [ebp], eax
        public_6da75c9 : nop
        mov eax, dword ptr ss : [esp+0x18]
        push esi
        push eax
        push ebp
        mov ecx, edi
        call public_6da13c0
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6da77a5
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0xC
        public_6da75ee : nop
        mov ebx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add ebx, 4
        mov eax, ebx
        cmp eax, ecx
        mov dword ptr ds : [esi], ebx
        jbe public_6da7605
        mov dword ptr ds : [esi+0xC], 0x17
        public_6da7605 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6da77ef
        mov eax, dword ptr ss : [ebp]
        mov ecx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [edi+0x34], ecx
        mov dword ptr ss : [ebp], eax
        mov ebx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add ebx, 4
        mov eax, ebx
        cmp eax, ecx
        mov dword ptr ds : [esi], ebx
        mov ecx, 0x17
        jbe public_6da7636
        mov dword ptr ds : [esi+0xC], ecx
        public_6da7636 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6da77ef
        mov eax, dword ptr ss : [ebp]
        mov ebx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ss : [ebp], eax
        mov dword ptr ds : [edi+0x38], ebx
        mov eax, dword ptr ds : [esi]
        mov ebx, dword ptr ds : [esi+4]
        add eax, 4
        cmp eax, ebx
        mov dword ptr ds : [esi], eax
        jbe public_6da7660
        mov dword ptr ds : [esi+0xC], ecx
        public_6da7660 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6da77ef
        mov eax, dword ptr ss : [ebp]
        mov ebx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ss : [ebp], eax
        mov dword ptr ds : [edi+0x3C], ebx
        mov eax, dword ptr ds : [esi]
        mov ebx, dword ptr ds : [esi+4]
        add eax, 2
        cmp eax, ebx
        mov dword ptr ds : [esi], eax
        jbe public_6da768a
        mov dword ptr ds : [esi+0xC], ecx
        public_6da768a : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6da77ef
        mov eax, dword ptr ss : [ebp]
        mov bx, word ptr ds : [eax]
        add eax, 2
        test dl, dl
        mov word ptr ds : [edi+0x40], bx
        mov dword ptr ss : [ebp], eax
        je public_6da75b0
        mov ebx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add ebx, 4
        mov eax, ebx
        cmp eax, edx
        mov dword ptr ds : [esi], ebx
        jbe public_6da75b0
        mov dword ptr ds : [esi+0xC], ecx
        jmp public_6da75b0
        public_6da76c9 : nop
        mov ebx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add ebx, 4
        mov eax, ebx
        cmp eax, ecx
        mov dword ptr ds : [esi], ebx
        jbe public_6da76e0
        mov dword ptr ds : [esi+0xC], 0x17
        public_6da76e0 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6da77ef
        mov eax, dword ptr ss : [ebp]
        mov ecx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [edi+0x34], ecx
        mov dword ptr ss : [ebp], eax
        mov ebx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add ebx, 4
        mov eax, ebx
        cmp eax, ecx
        mov dword ptr ds : [esi], ebx
        mov ecx, 0x17
        jbe public_6da7711
        mov dword ptr ds : [esi+0xC], ecx
        public_6da7711 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6da77ef
        mov eax, dword ptr ss : [ebp]
        mov ebx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ss : [ebp], eax
        mov dword ptr ds : [edi+0x38], ebx
        mov eax, dword ptr ds : [esi]
        mov ebx, dword ptr ds : [esi+4]
        add eax, 2
        cmp eax, ebx
        mov dword ptr ds : [esi], eax
        jbe public_6da773b
        mov dword ptr ds : [esi+0xC], ecx
        public_6da773b : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6da77ef
        mov eax, dword ptr ss : [ebp]
        mov bx, word ptr ds : [eax]
        add eax, 2
        test dl, dl
        mov word ptr ds : [edi+0x40], bx
        mov dword ptr ss : [ebp], eax
        je public_6da75b0
        mov ebx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add ebx, 4
        mov eax, ebx
        cmp eax, edx
        mov dword ptr ds : [esi], ebx
        jbe public_6da75b0
        mov dword ptr ds : [esi+0xC], ecx
        jmp public_6da75b0
        public_6da777a : nop
        mov edx, dword ptr ds : [esi]
        add edx, 4
        mov dword ptr ds : [esi], edx
        mov ecx, dword ptr ds : [esi+4]
        mov eax, edx
        cmp eax, ecx
        jbe public_6da7791
        mov dword ptr ds : [esi+0xC], 0x17
        public_6da7791 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6da77ef
        mov eax, dword ptr ss : [ebp]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [edi+0x28], ecx
        jmp public_6da75c3
        public_6da77a5 : nop
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [edx], ecx
        mov eax, dword ptr ds : [edi+0xC]
        push eax
        call public_6da16b0
        mov ecx, eax
        mov edx, dword ptr ds : [ecx+4]
        mov ebp, dword ptr ds : [ecx+0x1C]
        mov eax, dword ptr ds : [ecx+0x14]
        add esp, 4
        inc edx
        mov dword ptr ds : [ecx+4], edx
        mov edi, edx
        mov edx, dword ptr ds : [esi]
        add edx, 2
        add ebp, edx
        mov dword ptr ds : [ecx+0x1C], ebp
        mov esi, dword ptr ds : [esi]
        add eax, 2
        cmp esi, eax
        jbe public_6da77e3
        add esi, 2
        mov dword ptr ds : [ecx+0x14], esi
        public_6da77e3 : nop
        mov eax, dword ptr ds : [ecx+0x1C]
        xor edx, edx
        div edi
        mov dword ptr ds : [ecx+0xC], eax
        xor eax, eax
        public_6da77ef : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6da7430)
        ASM_EXPORT_ENTRY_FIRST(0x6da74cb, public_6da74cb)
        ASM_EXPORT_ENTRY(0x6da74fc, public_6da74fc)
        ASM_EXPORT_ENTRY(0x6da7565, public_6da7565)
        ASM_EXPORT_ENTRY(0x6da7599, public_6da7599)
        ASM_EXPORT_ENTRY(0x6da75c9, public_6da75c9)
        ASM_EXPORT_ENTRY(0x6da75ee, public_6da75ee)
        ASM_EXPORT_ENTRY(0x6da76c9, public_6da76c9)
        ASM_EXPORT_ENTRY_LAST(0x6da777a, public_6da777a)
    }
}

#undef public_6da746e
#undef public_6da7483
#undef public_6da74b0
#undef public_6da74cb
#undef public_6da74e0
#undef public_6da74fc
#undef public_6da7511
#undef public_6da7548
#undef public_6da755b
#undef public_6da7565
#undef public_6da757c
#undef public_6da7599
#undef public_6da75b0
#undef public_6da75c3
#undef public_6da75c6
#undef public_6da75c9
#undef public_6da75ee
#undef public_6da7605
#undef public_6da7636
#undef public_6da7660
#undef public_6da768a
#undef public_6da76c9
#undef public_6da76e0
#undef public_6da7711
#undef public_6da773b
#undef public_6da777a
#undef public_6da7791
#undef public_6da77a5
#undef public_6da77e3
#undef public_6da77ef

#pragma init_seg(compiler)
extern "C" void const* const public_6da74cb = __AsmFindLabelExport(&internal_6da7430, 0x6da74cb);
extern "C" void const* const public_6da74fc = __AsmFindLabelExport(&internal_6da7430, 0x6da74fc);
extern "C" void const* const public_6da7565 = __AsmFindLabelExport(&internal_6da7430, 0x6da7565);
extern "C" void const* const public_6da7599 = __AsmFindLabelExport(&internal_6da7430, 0x6da7599);
extern "C" void const* const public_6da75c9 = __AsmFindLabelExport(&internal_6da7430, 0x6da75c9);
extern "C" void const* const public_6da75ee = __AsmFindLabelExport(&internal_6da7430, 0x6da75ee);
extern "C" void const* const public_6da76c9 = __AsmFindLabelExport(&internal_6da7430, 0x6da76c9);
extern "C" void const* const public_6da777a = __AsmFindLabelExport(&internal_6da7430, 0x6da777a);
