#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41dd90);
CLANG_FORWARD_PROC_SYMBOL(public_42d730);
CLANG_FORWARD_PROC_SYMBOL(public_45a740);
CLANG_FORWARD_PROC_SYMBOL(public_45ccf0);
CLANG_FORWARD_PROC_SYMBOL(public_45cf60);
CLANG_FORWARD_PROC_SYMBOL(public_4b9b40);
CLANG_FORWARD_PROC_SYMBOL(public_55e280);
CLANG_FORWARD_PROC_SYMBOL(public_59da10);

#define public_45cb12 _public_45cb12
#define public_45cb1a _public_45cb1a
#define public_45cb23 _public_45cb23
#define public_45cb39 _public_45cb39
#define public_45cb46 _public_45cb46
#define public_45cb59 _public_45cb59
#define public_45cb79 _public_45cb79
#define public_45cb90 _public_45cb90
#define public_45cb9f _public_45cb9f
#define public_45cba6 _public_45cba6
#define public_45cbad _public_45cbad
#define public_45cbb4 _public_45cbb4
#define public_45cbbb _public_45cbbb
#define public_45cbc2 _public_45cbc2
#define public_45cbc9 _public_45cbc9
#define public_45cbcb _public_45cbcb
#define public_45cbef _public_45cbef
#define public_45cc02 _public_45cc02
#define public_45cc34 _public_45cc34
#define public_45cc43 _public_45cc43

PROC_DECLARE(0x45cae0, internal_45cae0, public_45cae0);
extern "C" NAKED register_t __cdecl internal_45cae0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ebp
        mov ebp, dword ptr ss : [esp+8]
        cmp ebp, 0x67
        push esi
        push edi
        mov esi, ecx
        jne public_45cb1a
        mov al, byte ptr ds : [public_67dcc8]
        test al, al
        jne public_45cb12
        call public_41dd90
        test al, al
        je public_45cb12
        call public_42d730
        test al, al
        jne public_45cb12
        mov al, byte ptr ds : [public_668761]
        test al, al
        je public_45cb23
        public_45cb12 : nop
        pop edi
        pop esi
        xor al, al
        pop ebp
        ret 4
        public_45cb1a : nop
        call public_45a740
        test al, al
        jne public_45cb12
        public_45cb23 : nop
        lea eax, ss:[ebp-0x10]
        cmp eax, 0x5E
        ja public_45cb12
/*FIXUP movzx eax, byte ptr ds : [eax+public_45cc6c] @0x45cb2b*/
/*FIXUP jmp dword ptr ds : [eax*4+public_45cc58] @0x45cb32*/
  JMPTB cmp eax, 0
  JMPTB jne public_4c0000000000a847
  JMPTB mov eax, 0
  JMPTB public_4c0000000000a847 : nop
        je public_45cb46
  JMPTB cmp eax, 1
  JMPTB jne public_4c0000000000a843
  JMPTB mov eax, 4
  JMPTB public_4c0000000000a843 : nop
        je public_45cb12
  JMPTB cmp eax, 2
  JMPTB jne public_4c0000000000a83f
  JMPTB mov eax, 4
  JMPTB public_4c0000000000a83f : nop
        je public_45cb12
  JMPTB cmp eax, 3
  JMPTB jne public_4c0000000000a83b
  JMPTB mov eax, 4
  JMPTB public_4c0000000000a83b : nop
        je public_45cb12
  JMPTB cmp eax, 4
  JMPTB jne public_4c0000000000a837
  JMPTB mov eax, 4
  JMPTB public_4c0000000000a837 : nop
        je public_45cb12
  JMPTB cmp eax, 5
  JMPTB jne public_4c0000000000a833
  JMPTB mov eax, 4
  JMPTB public_4c0000000000a833 : nop
        je public_45cb12
  JMPTB cmp eax, 6
  JMPTB jne public_4c0000000000a82f
  JMPTB mov eax, 4
  JMPTB public_4c0000000000a82f : nop
        je public_45cb12
  JMPTB cmp eax, 7
  JMPTB jne public_4c0000000000a82b
  JMPTB mov eax, 4
  JMPTB public_4c0000000000a82b : nop
        je public_45cb12
  JMPTB cmp eax, 8
  JMPTB jne public_4c0000000000a827
  JMPTB mov eax, 4
  JMPTB public_4c0000000000a827 : nop
        je public_45cb12
  JMPTB cmp eax, 9
  JMPTB jne public_4c0000000000a823
  JMPTB mov eax, 4
  JMPTB public_4c0000000000a823 : nop
        je public_45cb12
  JMPTB cmp eax, 0xA
  JMPTB jne public_4c0000000000a81f
  JMPTB mov eax, 4
  JMPTB public_4c0000000000a81f : nop
        je public_45cb12
  JMPTB cmp eax, 0xB
  JMPTB jne public_4c0000000000a81b
  JMPTB mov eax, 4
  JMPTB public_4c0000000000a81b : nop
        je public_45cb12
  JMPTB cmp eax, 0xC
  JMPTB jne public_4c0000000000a817
  JMPTB mov eax, 4
  JMPTB public_4c0000000000a817 : nop
        je public_45cb12
  JMPTB cmp eax, 0xD
  JMPTB jne public_4c0000000000a813
  JMPTB mov eax, 4
  JMPTB public_4c0000000000a813 : nop
        je public_45cb12
  JMPTB cmp eax, 0xE
  JMPTB jne public_4c0000000000a80f
  JMPTB mov eax, 4
  JMPTB public_4c0000000000a80f : nop
        je public_45cb12
  JMPTB cmp eax, 0xF
  JMPTB jne public_4c0000000000a80b
  JMPTB mov eax, 4
  JMPTB public_4c0000000000a80b : nop
        je public_45cb12
  JMPTB cmp eax, 0x10
  JMPTB jne public_4c0000000000a807
  JMPTB mov eax, 4
  JMPTB public_4c0000000000a807 : nop
        je public_45cb12
  JMPTB cmp eax, 0x11
  JMPTB jne public_4c0000000000a803
  JMPTB mov eax, 4
  JMPTB public_4c0000000000a803 : nop
        je public_45cb12
  JMPTB cmp eax, 0x12
  JMPTB jne public_4c0000000000a7ff
  JMPTB mov eax, 4
  JMPTB public_4c0000000000a7ff : nop
        je public_45cb12
  JMPTB cmp eax, 0x13
  JMPTB jne public_4c0000000000a7fb
  JMPTB mov eax, 4
  JMPTB public_4c0000000000a7fb : nop
        je public_45cb12
  JMPTB cmp eax, 0x14
  JMPTB jne public_4c0000000000a7f7
  JMPTB mov eax, 4
  JMPTB public_4c0000000000a7f7 : nop
        je public_45cb12
  JMPTB cmp eax, 0x15
  JMPTB jne public_4c0000000000a7f3
  JMPTB mov eax, 4
  JMPTB public_4c0000000000a7f3 : nop
        je public_45cb12
  JMPTB cmp eax, 0x16
  JMPTB jne public_4c0000000000a7ef
  JMPTB mov eax, 4
  JMPTB public_4c0000000000a7ef : nop
        je public_45cb12
  JMPTB cmp eax, 0x17
  JMPTB jne public_4c0000000000a7eb
  JMPTB mov eax, 4
  JMPTB public_4c0000000000a7eb : nop
        je public_45cb12
  JMPTB cmp eax, 0x18
  JMPTB jne public_4c0000000000a7e7
  JMPTB mov eax, 4
  JMPTB public_4c0000000000a7e7 : nop
        je public_45cb12
  JMPTB cmp eax, 0x19
  JMPTB jne public_4c0000000000a7e3
  JMPTB mov eax, 4
  JMPTB public_4c0000000000a7e3 : nop
        je public_45cb12
  JMPTB cmp eax, 0x1A
  JMPTB jne public_4c0000000000a7df
  JMPTB mov eax, 4
  JMPTB public_4c0000000000a7df : nop
        je public_45cb12
  JMPTB cmp eax, 0x1B
  JMPTB jne public_4c0000000000a7db
  JMPTB mov eax, 4
  JMPTB public_4c0000000000a7db : nop
        je public_45cb12
  JMPTB cmp eax, 0x1C
  JMPTB jne public_4c0000000000a7d7
  JMPTB mov eax, 4
  JMPTB public_4c0000000000a7d7 : nop
        je public_45cb12
  JMPTB cmp eax, 0x1D
  JMPTB jne public_4c0000000000a7d3
  JMPTB mov eax, 4
  JMPTB public_4c0000000000a7d3 : nop
        je public_45cb12
  JMPTB cmp eax, 0x1E
  JMPTB jne public_4c0000000000a7cf
  JMPTB mov eax, 4
  JMPTB public_4c0000000000a7cf : nop
        je public_45cb12
  JMPTB cmp eax, 0x1F
  JMPTB jne public_4c0000000000a7cb
  JMPTB mov eax, 4
  JMPTB public_4c0000000000a7cb : nop
        je public_45cb12
  JMPTB cmp eax, 0x20
  JMPTB jne public_4c0000000000a7c7
  JMPTB mov eax, 4
  JMPTB public_4c0000000000a7c7 : nop
        je public_45cb12
  JMPTB cmp eax, 0x21
  JMPTB jne public_4c0000000000a7c3
  JMPTB mov eax, 4
  JMPTB public_4c0000000000a7c3 : nop
        je public_45cb12
  JMPTB cmp eax, 0x22
  JMPTB jne public_4c0000000000a7bf
  JMPTB mov eax, 4
  JMPTB public_4c0000000000a7bf : nop
        je public_45cb12
  JMPTB cmp eax, 0x23
  JMPTB jne public_4c0000000000a7bb
  JMPTB mov eax, 4
  JMPTB public_4c0000000000a7bb : nop
        je public_45cb12
  JMPTB cmp eax, 0x24
  JMPTB jne public_4c0000000000a7b7
  JMPTB mov eax, 4
  JMPTB public_4c0000000000a7b7 : nop
        je public_45cb12
  JMPTB cmp eax, 0x25
  JMPTB jne public_4c0000000000a7b3
  JMPTB mov eax, 4
  JMPTB public_4c0000000000a7b3 : nop
        je public_45cb12
  JMPTB cmp eax, 0x26
  JMPTB jne public_4c0000000000a7af
  JMPTB mov eax, 4
  JMPTB public_4c0000000000a7af : nop
        je public_45cb12
  JMPTB cmp eax, 0x27
  JMPTB jne public_4c0000000000a7ab
  JMPTB mov eax, 4
  JMPTB public_4c0000000000a7ab : nop
        je public_45cb12
  JMPTB cmp eax, 0x28
  JMPTB jne public_4c0000000000a7a7
  JMPTB mov eax, 4
  JMPTB public_4c0000000000a7a7 : nop
        je public_45cb12
  JMPTB cmp eax, 0x29
  JMPTB jne public_4c0000000000a7a3
  JMPTB mov eax, 4
  JMPTB public_4c0000000000a7a3 : nop
        je public_45cb12
  JMPTB cmp eax, 0x2A
  JMPTB jne public_4c0000000000a79f
  JMPTB mov eax, 4
  JMPTB public_4c0000000000a79f : nop
        je public_45cb12
  JMPTB cmp eax, 0x2B
  JMPTB jne public_4c0000000000a79b
  JMPTB mov eax, 4
  JMPTB public_4c0000000000a79b : nop
        je public_45cb12
  JMPTB cmp eax, 0x2C
  JMPTB jne public_4c0000000000a797
  JMPTB mov eax, 4
  JMPTB public_4c0000000000a797 : nop
        je public_45cb12
  JMPTB cmp eax, 0x2D
  JMPTB jne public_4c0000000000a793
  JMPTB mov eax, 4
  JMPTB public_4c0000000000a793 : nop
        je public_45cb12
  JMPTB cmp eax, 0x2E
  JMPTB jne public_4c0000000000a78f
  JMPTB mov eax, 4
  JMPTB public_4c0000000000a78f : nop
        je public_45cb12
  JMPTB cmp eax, 0x2F
  JMPTB jne public_4c0000000000a78b
  JMPTB mov eax, 4
  JMPTB public_4c0000000000a78b : nop
        je public_45cb12
  JMPTB cmp eax, 0x30
  JMPTB jne public_4c0000000000a787
  JMPTB mov eax, 4
  JMPTB public_4c0000000000a787 : nop
        je public_45cb12
  JMPTB cmp eax, 0x31
  JMPTB jne public_4c0000000000a783
  JMPTB mov eax, 4
  JMPTB public_4c0000000000a783 : nop
        je public_45cb12
  JMPTB cmp eax, 0x32
  JMPTB jne public_4c0000000000a77f
  JMPTB mov eax, 4
  JMPTB public_4c0000000000a77f : nop
        je public_45cb12
  JMPTB cmp eax, 0x33
  JMPTB jne public_4c0000000000a77b
  JMPTB mov eax, 4
  JMPTB public_4c0000000000a77b : nop
        je public_45cb12
  JMPTB cmp eax, 0x34
  JMPTB jne public_4c0000000000a777
  JMPTB mov eax, 4
  JMPTB public_4c0000000000a777 : nop
        je public_45cb12
  JMPTB cmp eax, 0x35
  JMPTB jne public_4c0000000000a773
  JMPTB mov eax, 4
  JMPTB public_4c0000000000a773 : nop
        je public_45cb12
  JMPTB cmp eax, 0x36
  JMPTB jne public_4c0000000000a76f
  JMPTB mov eax, 4
  JMPTB public_4c0000000000a76f : nop
        je public_45cb12
  JMPTB cmp eax, 0x37
  JMPTB jne public_4c0000000000a76b
  JMPTB mov eax, 4
  JMPTB public_4c0000000000a76b : nop
        je public_45cb12
  JMPTB cmp eax, 0x38
  JMPTB jne public_4c0000000000a767
  JMPTB mov eax, 4
  JMPTB public_4c0000000000a767 : nop
        je public_45cb12
  JMPTB cmp eax, 0x39
  JMPTB jne public_4c0000000000a763
  JMPTB mov eax, 4
  JMPTB public_4c0000000000a763 : nop
        je public_45cb12
  JMPTB cmp eax, 0x3A
  JMPTB jne public_4c0000000000a75f
  JMPTB mov eax, 4
  JMPTB public_4c0000000000a75f : nop
        je public_45cb12
  JMPTB cmp eax, 0x3B
  JMPTB jne public_4c0000000000a75b
  JMPTB mov eax, 4
  JMPTB public_4c0000000000a75b : nop
        je public_45cb12
  JMPTB cmp eax, 0x3C
  JMPTB jne public_4c0000000000a757
  JMPTB mov eax, 4
  JMPTB public_4c0000000000a757 : nop
        je public_45cb12
  JMPTB cmp eax, 0x3D
  JMPTB jne public_4c0000000000a753
  JMPTB mov eax, 4
  JMPTB public_4c0000000000a753 : nop
        je public_45cb12
  JMPTB cmp eax, 0x3E
  JMPTB jne public_4c0000000000a74f
  JMPTB mov eax, 4
  JMPTB public_4c0000000000a74f : nop
        je public_45cb12
  JMPTB cmp eax, 0x3F
  JMPTB jne public_4c0000000000a74b
  JMPTB mov eax, 4
  JMPTB public_4c0000000000a74b : nop
        je public_45cb12
  JMPTB cmp eax, 0x40
  JMPTB jne public_4c0000000000a747
  JMPTB mov eax, 4
  JMPTB public_4c0000000000a747 : nop
        je public_45cb12
  JMPTB cmp eax, 0x41
  JMPTB jne public_4c0000000000a743
  JMPTB mov eax, 4
  JMPTB public_4c0000000000a743 : nop
        je public_45cb12
  JMPTB cmp eax, 0x42
  JMPTB jne public_4c0000000000a73f
  JMPTB mov eax, 4
  JMPTB public_4c0000000000a73f : nop
        je public_45cb12
  JMPTB cmp eax, 0x43
  JMPTB jne public_4c0000000000a73b
  JMPTB mov eax, 4
  JMPTB public_4c0000000000a73b : nop
        je public_45cb12
  JMPTB cmp eax, 0x44
  JMPTB jne public_4c0000000000a737
  JMPTB mov eax, 4
  JMPTB public_4c0000000000a737 : nop
        je public_45cb12
  JMPTB cmp eax, 0x45
  JMPTB jne public_4c0000000000a733
  JMPTB mov eax, 4
  JMPTB public_4c0000000000a733 : nop
        je public_45cb12
  JMPTB cmp eax, 0x46
  JMPTB jne public_4c0000000000a72f
  JMPTB mov eax, 4
  JMPTB public_4c0000000000a72f : nop
        je public_45cb12
  JMPTB cmp eax, 0x47
  JMPTB jne public_4c0000000000a72b
  JMPTB mov eax, 4
  JMPTB public_4c0000000000a72b : nop
        je public_45cb12
  JMPTB cmp eax, 0x48
  JMPTB jne public_4c0000000000a727
  JMPTB mov eax, 4
  JMPTB public_4c0000000000a727 : nop
        je public_45cb12
  JMPTB cmp eax, 0x49
  JMPTB jne public_4c0000000000a723
  JMPTB mov eax, 4
  JMPTB public_4c0000000000a723 : nop
        je public_45cb12
  JMPTB cmp eax, 0x4A
  JMPTB jne public_4c0000000000a71f
  JMPTB mov eax, 4
  JMPTB public_4c0000000000a71f : nop
        je public_45cb12
  JMPTB cmp eax, 0x4B
  JMPTB jne public_4c0000000000a71b
  JMPTB mov eax, 4
  JMPTB public_4c0000000000a71b : nop
        je public_45cb12
  JMPTB cmp eax, 0x4C
  JMPTB jne public_4c0000000000a717
  JMPTB mov eax, 4
  JMPTB public_4c0000000000a717 : nop
        je public_45cb12
  JMPTB cmp eax, 0x4D
  JMPTB jne public_4c0000000000a713
  JMPTB mov eax, 4
  JMPTB public_4c0000000000a713 : nop
        je public_45cb12
  JMPTB cmp eax, 0x4E
  JMPTB jne public_4c0000000000a70f
  JMPTB mov eax, 4
  JMPTB public_4c0000000000a70f : nop
        je public_45cb12
  JMPTB cmp eax, 0x4F
  JMPTB jne public_4c0000000000a70b
  JMPTB mov eax, 4
  JMPTB public_4c0000000000a70b : nop
        je public_45cb12
  JMPTB cmp eax, 0x50
  JMPTB jne public_4c0000000000a707
  JMPTB mov eax, 4
  JMPTB public_4c0000000000a707 : nop
        je public_45cb12
  JMPTB cmp eax, 0x51
  JMPTB jne public_4c0000000000a703
  JMPTB mov eax, 4
  JMPTB public_4c0000000000a703 : nop
        je public_45cb12
  JMPTB cmp eax, 0x52
  JMPTB jne public_4c0000000000a6ff
  JMPTB mov eax, 4
  JMPTB public_4c0000000000a6ff : nop
        je public_45cb12
  JMPTB cmp eax, 0x53
  JMPTB jne public_4c0000000000a6fb
  JMPTB mov eax, 1
  JMPTB public_4c0000000000a6fb : nop
        je public_45cb90
  JMPTB cmp eax, 0x54
  JMPTB jne public_4c0000000000a6f7
  JMPTB mov eax, 4
  JMPTB public_4c0000000000a6f7 : nop
        je public_45cb12
  JMPTB cmp eax, 0x55
  JMPTB jne public_4c0000000000a6f3
  JMPTB mov eax, 1
  JMPTB public_4c0000000000a6f3 : nop
        je public_45cb90
  JMPTB cmp eax, 0x56
  JMPTB jne public_4c0000000000a6ef
  JMPTB mov eax, 1
  JMPTB public_4c0000000000a6ef : nop
        je public_45cb90
  JMPTB cmp eax, 0x57
  JMPTB jne public_4c0000000000a6eb
  JMPTB mov eax, 1
  JMPTB public_4c0000000000a6eb : nop
        je public_45cb90
  JMPTB cmp eax, 0x58
  JMPTB jne public_4c0000000000a6e7
  JMPTB mov eax, 1
  JMPTB public_4c0000000000a6e7 : nop
        je public_45cb90
  JMPTB cmp eax, 0x59
  JMPTB jne public_4c0000000000a6e3
  JMPTB mov eax, 1
  JMPTB public_4c0000000000a6e3 : nop
        je public_45cb90
  JMPTB cmp eax, 0x5A
  JMPTB jne public_4c0000000000a6df
  JMPTB mov eax, 1
  JMPTB public_4c0000000000a6df : nop
        je public_45cb90
  JMPTB cmp eax, 0x5B
  JMPTB jne public_4c0000000000a6db
  JMPTB mov eax, 2
  JMPTB public_4c0000000000a6db : nop
        je public_45cb59
  JMPTB cmp eax, 0x5C
  JMPTB jne public_4c0000000000a6d7
  JMPTB mov eax, 4
  JMPTB public_4c0000000000a6d7 : nop
        je public_45cb12
  JMPTB cmp eax, 0x5D
  JMPTB jne public_4c0000000000a6d3
  JMPTB mov eax, 4
  JMPTB public_4c0000000000a6d3 : nop
        je public_45cb12
  JMPTB cmp eax, 0x5E
  JMPTB jne public_4c0000000000a6cf
  JMPTB mov eax, 3
  JMPTB public_4c0000000000a6cf : nop
        je public_45cb39
  JMPTB int 3
        public_45cb39 : nop
        call public_4b9b40
        pop edi
        pop esi
        mov al, 1
        pop ebp
        ret 4
        public_45cb46 : nop
        lea ecx, ds:[esi-0x32C]
        call public_45cf60
        pop edi
        pop esi
        mov al, 1
        pop ebp
        ret 4
        public_45cb59 : nop
        mov ecx, dword ptr ds : [esi+0x7C]
        mov eax, dword ptr ds : [esi+0x90]
        cmp ecx, eax
        lea ecx, ds:[esi-0x32C]
        jne public_45cb79
        call public_45cf60
        pop edi
        pop esi
        mov al, 1
        pop ebp
        ret 4
        public_45cb79 : nop
        push 0x66
        push eax
        mov byte ptr ds : [esi+0x201], 0
        call public_45ccf0
        pop edi
        pop esi
        mov al, 1
        pop ebp
        ret 4
        public_45cb90 : nop
        lea eax, ss:[ebp-0x63]
        cmp eax, 7
        ja public_45cbc9
/*FIXUP jmp dword ptr ds : [eax*4+public_45cccc] @0x45cb98*/
  JMPTB cmp eax, 0
  JMPTB je public_45cbc9
  JMPTB cmp eax, 1
  JMPTB je public_45cbc9
  JMPTB cmp eax, 2
  JMPTB je public_45cbad
  JMPTB cmp eax, 3
  JMPTB je public_45cb9f
  JMPTB cmp eax, 4
  JMPTB je public_45cba6
  JMPTB cmp eax, 5
  JMPTB je public_45cbbb
  JMPTB cmp eax, 6
  JMPTB je public_45cbc2
  JMPTB cmp eax, 7
  JMPTB je public_45cbb4
  JMPTB int 3
        public_45cb9f : nop
        mov eax, 1
        jmp public_45cbcb
        public_45cba6 : nop
        mov eax, 2
        jmp public_45cbcb
        public_45cbad : nop
        mov eax, 3
        jmp public_45cbcb
        public_45cbb4 : nop
        mov eax, 4
        jmp public_45cbcb
        public_45cbbb : nop
        mov eax, 5
        jmp public_45cbcb
        public_45cbc2 : nop
        mov eax, 6
        jmp public_45cbcb
        public_45cbc9 : nop
        xor eax, eax
        public_45cbcb : nop
        mov edi, dword ptr ds : [esi+eax*4+0x8C]
        cmp dword ptr ds : [esi+0x7C], edi
/*FIXUP push offset public_5cb7c4 @0x45cbd5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb7c4
        jne public_45cc02
        call public_59da10
        add esp, 4
        test eax, eax
        je public_45cbef
        mov byte ptr ds : [esi+0x201], 1
        public_45cbef : nop
        lea ecx, ds:[esi-0x32C]
        call public_45cf60
        pop edi
        pop esi
        mov al, 1
        pop ebp
        ret 4
        public_45cc02 : nop
        mov byte ptr ds : [esi+0x201], 0
        mov byte ptr ds : [esi+0x202], 0
        call public_59da10
        add esp, 4
        test eax, eax
        je public_45cc43
        lea ecx, ds:[esi+4]
        call public_55e280
        test al, al
        jne public_45cc34
        lea ecx, ds:[esi+0x24]
        call public_55e280
        test al, al
        je public_45cc43
        public_45cc34 : nop
        pop edi
        mov byte ptr ds : [esi+0x202], 1
        pop esi
        xor al, al
        pop ebp
        ret 4
        public_45cc43 : nop
        push ebp
        push edi
        lea ecx, ds:[esi-0x32C]
        call public_45ccf0
        pop edi
        pop esi
        mov al, 1
        pop ebp
        ret 4
        UNREACHABLE_TRAP(0x45cae0)
        ASM_EXPORT_ENTRY_FIRST(0x45cb12, public_45cb12)
        ASM_EXPORT_ENTRY_LAST(0x45cbb4, public_45cbb4)
    }
}

#undef public_45cb12
#undef public_45cb1a
#undef public_45cb23
#undef public_45cb39
#undef public_45cb46
#undef public_45cb59
#undef public_45cb79
#undef public_45cb90
#undef public_45cb9f
#undef public_45cba6
#undef public_45cbad
#undef public_45cbb4
#undef public_45cbbb
#undef public_45cbc2
#undef public_45cbc9
#undef public_45cbcb
#undef public_45cbef
#undef public_45cc02
#undef public_45cc34
#undef public_45cc43

#pragma init_seg(compiler)
extern "C" void const* const public_45cb12 = __AsmFindLabelExport(&internal_45cae0, 0x45cb12);
extern "C" void const* const public_45cbb4 = __AsmFindLabelExport(&internal_45cae0, 0x45cbb4);
