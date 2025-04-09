#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_415850);
CLANG_FORWARD_PROC_SYMBOL(public_41dd90);
CLANG_FORWARD_PROC_SYMBOL(public_41dda0);
CLANG_FORWARD_PROC_SYMBOL(public_42d680);
CLANG_FORWARD_PROC_SYMBOL(public_435cf0);
CLANG_FORWARD_PROC_SYMBOL(public_43a460);
CLANG_FORWARD_PROC_SYMBOL(public_43b630);
CLANG_FORWARD_PROC_SYMBOL(public_43e600);
CLANG_FORWARD_PROC_SYMBOL(public_43fd30);
CLANG_FORWARD_PROC_SYMBOL(public_43ffa0);
CLANG_FORWARD_PROC_SYMBOL(public_4400d0);
CLANG_FORWARD_PROC_SYMBOL(public_441700);
CLANG_FORWARD_PROC_SYMBOL(public_441ea0);
CLANG_FORWARD_PROC_SYMBOL(public_44c290);
CLANG_FORWARD_PROC_SYMBOL(public_53ab20);
CLANG_FORWARD_PROC_SYMBOL(public_55e170);
CLANG_FORWARD_PROC_SYMBOL(public_55e280);
CLANG_FORWARD_PROC_SYMBOL(public_55e290);
CLANG_FORWARD_PROC_SYMBOL(public_55e360);
CLANG_FORWARD_PROC_SYMBOL(public_55e590);
CLANG_FORWARD_PROC_SYMBOL(public_55e5e0);
CLANG_FORWARD_PROC_SYMBOL(public_5645c0);
CLANG_FORWARD_PROC_SYMBOL(public_59da10);

#define public_43e710 _public_43e710
#define public_43e720 _public_43e720
#define public_43e725 _public_43e725
#define public_43e72b _public_43e72b
#define public_43e755 _public_43e755
#define public_43e757 _public_43e757
#define public_43e785 _public_43e785
#define public_43e794 _public_43e794
#define public_43e7b0 _public_43e7b0
#define public_43e7bc _public_43e7bc
#define public_43e7c1 _public_43e7c1
#define public_43e7e0 _public_43e7e0
#define public_43e808 _public_43e808
#define public_43e812 _public_43e812
#define public_43e870 _public_43e870
#define public_43e883 _public_43e883
#define public_43e889 _public_43e889
#define public_43e8b3 _public_43e8b3
#define public_43e8f0 _public_43e8f0
#define public_43e8ff _public_43e8ff
#define public_43e907 _public_43e907
#define public_43e916 _public_43e916
#define public_43e944 _public_43e944
#define public_43e95a _public_43e95a
#define public_43e96e _public_43e96e
#define public_43e9a6 _public_43e9a6
#define public_43e9cf _public_43e9cf
#define public_43ea25 _public_43ea25
#define public_43ea4d _public_43ea4d
#define public_43ea5c _public_43ea5c
#define public_43ea84 _public_43ea84
#define public_43ea93 _public_43ea93
#define public_43eabb _public_43eabb
#define public_43eb6d _public_43eb6d
#define public_43eb7c _public_43eb7c
#define public_43eb9f _public_43eb9f
#define public_43ebb4 _public_43ebb4
#define public_43ebc3 _public_43ebc3
#define public_43ebcb _public_43ebcb
#define public_43ebd3 _public_43ebd3
#define public_43ec54 _public_43ec54
#define public_43ece4 _public_43ece4
#define public_43ed08 _public_43ed08
#define public_43ed2c _public_43ed2c
#define public_43ed4b _public_43ed4b
#define public_43ed68 _public_43ed68
#define public_43ed6d _public_43ed6d
#define public_43ed79 _public_43ed79
#define public_43ed92 _public_43ed92
#define public_43ed9c _public_43ed9c
#define public_43eda6 _public_43eda6
#define public_43edae _public_43edae
#define public_43ede5 _public_43ede5
#define public_43edfd _public_43edfd
#define public_43ee33 _public_43ee33

PROC_DECLARE(0x43e700, internal_43e700, public_43e700);
extern "C" NAKED register_t __cdecl internal_43e700()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        sub esp, 0x34
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0xC]
        test ecx, ecx
        push edi
        je public_43e72b
        public_43e710 : nop
        test byte ptr ds : [ecx+0x6C], 1
        mov edi, dword ptr ds : [ecx+8]
        je public_43e720
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x2C]
        jmp public_43e725
        public_43e720 : nop
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x30]
        public_43e725 : nop
        test edi, edi
        mov ecx, edi
        jne public_43e710
        public_43e72b : nop
        call public_41dd90
        test al, al
        je public_43e755
        mov al, byte ptr ds : [esi+0x3BC]
        test al, al
        jne public_43e755
        mov al, byte ptr ds : [esi+0x3C4]
        test al, al
        jne public_43e755
        mov al, byte ptr ds : [public_67dcc8]
        test al, al
        jne public_43e755
        mov bl, 1
        jmp public_43e757
        public_43e755 : nop
        xor bl, bl
        public_43e757 : nop
        mov ecx, dword ptr ds : [esi+0x3D8]
        mov edx, dword ptr ds : [ecx]
        xor eax, eax
        test bl, bl
        sete al
        push 0
        mov ebp, eax
        push ebp
        push 1
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x380]
        mov eax, dword ptr ds : [ecx]
        xor edi, edi
        cmp eax, ecx
        mov dword ptr ss : [esp+0x10], eax
        je public_43e7b0
        public_43e785 : nop
        mov cl, byte ptr ds : [eax+9]
        test cl, cl
        jne public_43e794
        mov cl, byte ptr ds : [eax+8]
        test cl, cl
        jne public_43e794
        inc edi
        public_43e794 : nop
        push 0
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[esp+0x18]
        call public_53ab20
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, dword ptr ds : [esi+0x380]
        jne public_43e785
        public_43e7b0 : nop
        test bl, bl
        je public_43e7bc
        test edi, edi
        je public_43e7bc
        xor eax, eax
        jmp public_43e7c1
        public_43e7bc : nop
        mov eax, 1
        public_43e7c1 : nop
        mov ecx, dword ptr ds : [esi+0x3DC]
        mov edx, dword ptr ds : [ecx]
        push 0
        push eax
        push 1
        call dword ptr ds : [edx+0xA8]
        mov eax, dword ptr ds : [esi+0x380]
        mov edi, dword ptr ds : [eax]
        cmp edi, eax
        je public_43e812
        public_43e7e0 : nop
        mov ecx, dword ptr ds : [edi+0x20]
        mov eax, dword ptr ds : [ecx]
        push 0
        push ebp
        push 1
        call dword ptr ds : [eax+0xA8]
        mov al, byte ptr ds : [edi+8]
        test al, al
        je public_43e808
        mov ecx, dword ptr ds : [edi+0x20]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 1
        push 2
        call dword ptr ds : [edx+0xA8]
        public_43e808 : nop
        mov edi, dword ptr ds : [edi]
        cmp edi, dword ptr ds : [esi+0x380]
        jne public_43e7e0
        public_43e812 : nop
        call public_41dd90
        test al, al
        mov ebp, 0xC
        je public_43e95a
        mov al, byte ptr ds : [esi+0x3BC]
        test al, al
        jne public_43e96e
        mov al, byte ptr ds : [esi+0x3C4]
        test al, al
        jne public_43e95a
        mov al, byte ptr ds : [public_67dcc8]
        test al, al
        jne public_43e95a
        mov bl, byte ptr ds : [esi+0x3D5]
        xor dl, dl
        test bl, bl
        je public_43e916
        mov ecx, dword ptr ds : [esi+0x380]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        je public_43e889
        lea esp, ss:[esp]
        public_43e870 : nop
        cmp byte ptr ds : [eax+9], 0
        jne public_43e883
        cmp byte ptr ds : [eax+0x28], 0
        je public_43e883
        cmp dword ptr ds : [eax+0x38], ebp
        jne public_43e883
        mov dl, 1
        public_43e883 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        jne public_43e870
        public_43e889 : nop
        test bl, bl
        je public_43e916
        test dl, dl
        jne public_43e8b3
        lea ecx, ds:[esi+0x32C]
        call public_55e280
        test al, al
        jne public_43e916
        lea ecx, ds:[esi+0x34C]
        call public_55e280
        test al, al
        jne public_43e916
/*FIXUP public_43e8b3 : nop
        push offset public_5cb7c4 @0x43e8b3*/
  FIXUP public_43e8b3 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb7c4
        call public_59da10
        add esp, 4
        test eax, eax
        jne public_43e916
/*FIXUP push offset public_5cb6bc @0x43e8c4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb6bc
        call public_59da10
        add esp, 4
        test eax, eax
        jne public_43e916
        mov edx, dword ptr ds : [esi+0x380]
        mov byte ptr ds : [esi+0x3D5], al
        mov eax, dword ptr ds : [edx]
        cmp eax, edx
        je public_43e916
        mov edi, 6
        lea esp, ss:[esp]
        public_43e8f0 : nop
        mov bl, byte ptr ds : [eax+9]
        test bl, bl
        lea ecx, ds:[eax+8]
        jne public_43e8ff
        cmp dword ptr ds : [ecx+0x30], edi
        je public_43e907
        public_43e8ff : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, edx
        jne public_43e8f0
        jmp public_43e916
        public_43e907 : nop
        mov eax, dword ptr ds : [esi+0x3B8]
        push ecx
        push eax
        mov ecx, esi
        call public_441700
        public_43e916 : nop
        fld dword ptr ds : [esi+0x3D0]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jne public_43e944
        fld dword ptr ds : [esi+0x3D0]
        fstp qword ptr ss : [esp+0x14]
        call public_42d680
        fsubr qword ptr ss : [esp+0x14]
        fstp dword ptr ds : [esi+0x3D0]
        jmp public_43e95a
        public_43e944 : nop
        lea ecx, ds:[esi+0x32C]
        call public_55e170
        lea ecx, ds:[esi+0x34C]
        call public_55e5e0
        public_43e95a : nop
        mov al, byte ptr ds : [esi+0x3BC]
        test al, al
        jne public_43e96e
        mov al, byte ptr ds : [esi+0x3C4]
        test al, al
        je public_43e9cf
        public_43e96e : nop
        call public_42d680
        fadd dword ptr ds : [esi+0x3C0]
        fst dword ptr ds : [esi+0x3C0]
        fcomp dword ptr ds : [public_61650c]
        fnstsw ax
        test ah, 1
        jne public_43e9cf
        mov al, byte ptr ds : [esi+0x3BC]
        test al, al
        je public_43e9a6
        mov ecx, esi
        mov byte ptr ds : [esi+0x3BC], 0
        call public_43ffa0
        jmp public_43e9cf
        public_43e9a6 : nop
        mov al, byte ptr ds : [esi+0x3C4]
        test al, al
        je public_43e9cf
        push 1
        mov byte ptr ds : [esi+0x3C4], 0
        call public_41dda0
        mov ecx, dword ptr ds : [esi+0x3B8]
        add esp, 4
        push ecx
        mov ecx, esi
        call public_43fd30
        public_43e9cf : nop
        mov al, byte ptr ds : [esi+0x3C5]
        test al, al
        mov ebx, dword ptr ds : [public_5c6d24]
        je public_43eabb
        mov edx, dword ptr ds : [esi+0x3C8]
        cmp edx, dword ptr ds : [public_668740]
        je public_43eabb
        mov eax, dword ptr ds : [esi+0x374]
        test eax, eax
        mov byte ptr ds : [esi+0x3C5], 0
        je public_43eabb
        mov ecx, offset public_668708
        call public_43a460
        mov edi, eax
        mov eax, dword ptr ds : [esi+0x370]
        test eax, eax
        jne public_43ea25
        mov eax, dword ptr ds : [public_5c7078]
/*FIXUP public_43ea25 : nop
        push offset public_5cb7bc @0x43ea25*/
  FIXUP public_43ea25 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb7bc
        push eax
        call ebx
        add esp, 8
        test eax, eax
        jne public_43ea4d
/*FIXUP push offset public_5cb168 @0x43ea34*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb168
        mov ecx, edi
        call public_44c290
/*FIXUP push offset public_5cb7ac @0x43ea40*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb7ac
        call public_435cf0
        add esp, 4
        public_43ea4d : nop
        mov eax, dword ptr ds : [esi+0x370]
        test eax, eax
        jne public_43ea5c
        mov eax, dword ptr ds : [public_5c7078]
/*FIXUP public_43ea5c : nop
        push offset public_5cb7a0 @0x43ea5c*/
  FIXUP public_43ea5c : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb7a0
        push eax
        call ebx
        add esp, 8
        test eax, eax
        jne public_43ea84
/*FIXUP push offset public_5cb154 @0x43ea6b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb154
        mov ecx, edi
        call public_44c290
/*FIXUP push offset public_5cb790 @0x43ea77*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb790
        call public_435cf0
        add esp, 4
        public_43ea84 : nop
        mov eax, dword ptr ds : [esi+0x370]
        test eax, eax
        jne public_43ea93
        mov eax, dword ptr ds : [public_5c7078]
/*FIXUP public_43ea93 : nop
        push offset public_5cb784 @0x43ea93*/
  FIXUP public_43ea93 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb784
        push eax
        call ebx
        add esp, 8
        test eax, eax
        jne public_43eabb
/*FIXUP push offset public_5cb140 @0x43eaa2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb140
        mov ecx, edi
        call public_44c290
/*FIXUP push offset public_5cb778 @0x43eaae*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb778
        call public_435cf0
        add esp, 4
        public_43eabb : nop
        mov al, byte ptr ds : [esi+0x3D4]
        test al, al
        je public_43ebd3
        mov al, byte ptr ds : [esi+0x3BC]
        test al, al
        jne public_43ebd3
        mov al, byte ptr ds : [esi+0x3C4]
        test al, al
        jne public_43ebd3
        fld dword ptr ds : [esi+0x3D0]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jp public_43ebd3
        lea ecx, ds:[esi+0x32C]
        call public_55e280
        test al, al
        jne public_43ebd3
        lea ecx, ds:[esi+0x34C]
        call public_55e280
        test al, al
        jne public_43ebd3
        call public_41dd90
        test al, al
        je public_43ebd3
        mov al, byte ptr ds : [esi+0x3BC]
        test al, al
        jne public_43ebd3
        mov al, byte ptr ds : [esi+0x3C4]
        test al, al
        jne public_43ebd3
        mov al, byte ptr ds : [public_67dcc8]
        test al, al
        jne public_43ebd3
        mov eax, dword ptr ds : [esi+0x374]
        test eax, eax
        je public_43eb7c
        mov eax, dword ptr ds : [esi+0x370]
        test eax, eax
        jne public_43eb6d
        mov eax, dword ptr ds : [public_5c7078]
/*FIXUP public_43eb6d : nop
        push offset public_5cb7a0 @0x43eb6d*/
  FIXUP public_43eb6d : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb7a0
        push eax
        call ebx
        add esp, 8
        test eax, eax
        jmp public_43eb9f
        public_43eb7c : nop
        mov edi, dword ptr ds : [public_668740]
        mov ecx, offset public_668708
        call public_43b630
        mov eax, dword ptr ds : [eax]
/*FIXUP push offset public_5cb7a0 @0x43eb8e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb7a0
        push eax
        call dword ptr ds : [public_5c616c]
        add esp, 8
        cmp edi, eax
        public_43eb9f : nop
        jne public_43ebd3
        mov edx, dword ptr ds : [esi+0x380]
        mov byte ptr ds : [esi+0x3D4], 0
        mov eax, dword ptr ds : [edx]
        cmp eax, edx
        je public_43ebd3
        public_43ebb4 : nop
        mov bl, byte ptr ds : [eax+9]
        test bl, bl
        lea ecx, ds:[eax+8]
        jne public_43ebc3
        cmp dword ptr ds : [ecx+0x30], ebp
        je public_43ebcb
        public_43ebc3 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, edx
        jne public_43ebb4
        jmp public_43ebd3
        public_43ebcb : nop
        push ecx
        mov ecx, esi
        call public_4400d0
        public_43ebd3 : nop
        mov al, byte ptr ds : [esi+0x3E4]
        test al, al
        je public_43ec54
        mov al, byte ptr ds : [esi+0x3BC]
        test al, al
        jne public_43ec54
        mov al, byte ptr ds : [esi+0x3C4]
        test al, al
        jne public_43ec54
        call public_41dd90
        test al, al
        je public_43ec54
        mov al, byte ptr ds : [esi+0x3BC]
        test al, al
        jne public_43ec54
        mov al, byte ptr ds : [esi+0x3C4]
        test al, al
        jne public_43ec54
        mov al, byte ptr ds : [public_67dcc8]
        test al, al
        jne public_43ec54
        lea ecx, ds:[esi+0x32C]
        call public_55e290
        mov eax, dword ptr ds : [esi+0x3E0]
        test eax, eax
        je public_43ec54
        mov edi, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x14]
        call public_415850
        mov ecx, dword ptr ds : [esi+0x3E0]
        push eax
        push 0
        call dword ptr ds : [edi+0x30]
        mov dword ptr ds : [esi+0x3E0], 0
        mov byte ptr ds : [esi+0x3E4], 0
        public_43ec54 : nop
        lea ebx, ds:[esi+0x32C]
        mov ecx, ebx
        call public_55e280
        test al, al
        jne public_43edfd
        lea ebp, ds:[esi+0x34C]
        mov ecx, ebp
        call public_55e280
        test al, al
        jne public_43edfd
        mov eax, dword ptr ds : [esi+0x3F0]
        test eax, eax
        je public_43edfd
        mov ecx, esi
        call public_43e600
        mov edi, dword ptr ds : [esi+0x3F0]
        mov ecx, ebx
        call public_55e280
        test al, al
        jne public_43ede5
        mov ecx, ebp
        call public_55e280
        test al, al
        jne public_43ede5
        push 0x1B
        mov dword ptr ds : [esi+0x3EC], edi
        call public_5645c0
        mov eax, dword ptr ds : [edi+0x30]
        add eax, 0xFFFFFFFE
        add esp, 4
        cmp eax, 0xA
        ja public_43ed79
/*FIXUP movzx eax, byte ptr ds : [eax+public_43ee50] @0x43ecd6*/
/*FIXUP jmp dword ptr ds : [eax*4+public_43ee3c] @0x43ecdd*/
  JMPTB cmp eax, 0
  JMPTB jne public_4c0000000000a0fa
  JMPTB mov eax, 0
  JMPTB public_4c0000000000a0fa : nop
        je public_43ed2c
  JMPTB cmp eax, 1
  JMPTB jne public_4c0000000000a0f6
  JMPTB mov eax, 1
  JMPTB public_4c0000000000a0f6 : nop
        je public_43ed4b
  JMPTB cmp eax, 2
  JMPTB jne public_4c0000000000a0f2
  JMPTB mov eax, 4
  JMPTB public_4c0000000000a0f2 : nop
        je public_43ed79
  JMPTB cmp eax, 3
  JMPTB jne public_4c0000000000a0ee
  JMPTB mov eax, 4
  JMPTB public_4c0000000000a0ee : nop
        je public_43ed79
  JMPTB cmp eax, 4
  JMPTB jne public_4c0000000000a0ea
  JMPTB mov eax, 4
  JMPTB public_4c0000000000a0ea : nop
        je public_43ed79
  JMPTB cmp eax, 5
  JMPTB jne public_4c0000000000a0e6
  JMPTB mov eax, 2
  JMPTB public_4c0000000000a0e6 : nop
        je public_43ed08
  JMPTB cmp eax, 6
  JMPTB jne public_4c0000000000a0e2
  JMPTB mov eax, 4
  JMPTB public_4c0000000000a0e2 : nop
        je public_43ed79
  JMPTB cmp eax, 7
  JMPTB jne public_4c0000000000a0de
  JMPTB mov eax, 4
  JMPTB public_4c0000000000a0de : nop
        je public_43ed79
  JMPTB cmp eax, 8
  JMPTB jne public_4c0000000000a0da
  JMPTB mov eax, 4
  JMPTB public_4c0000000000a0da : nop
        je public_43ed79
  JMPTB cmp eax, 9
  JMPTB jne public_4c0000000000a0d6
  JMPTB mov eax, 4
  JMPTB public_4c0000000000a0d6 : nop
        je public_43ed79
  JMPTB cmp eax, 0xA
  JMPTB jne public_4c0000000000a0d2
  JMPTB mov eax, 3
  JMPTB public_4c0000000000a0d2 : nop
        je public_43ece4
  JMPTB int 3
        public_43ece4 : nop
        lea ecx, ss:[esp+0x14]
        push ecx
        mov dword ptr ss : [esp+0x18], 0
        mov dword ptr ss : [esp+0x1C], 0
        mov dword ptr ss : [esp+0x20], 0xBF8CCCCD
/*FIXUP push offset public_5cb748 @0x43ed01*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb748
        jmp public_43ed6d
        public_43ed08 : nop
        lea edx, ss:[esp+0x20]
        push edx
        mov dword ptr ss : [esp+0x24], 0
        mov dword ptr ss : [esp+0x28], 0xBDB020C5
        mov dword ptr ss : [esp+0x2C], 0xBFA4DD2F
/*FIXUP push offset public_5cb70c @0x43ed25*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb70c
        jmp public_43ed6d
        public_43ed2c : nop
        lea eax, ss:[esp+0x2C]
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x30], 0xBDCCCCCD
        mov dword ptr ss : [esp+0x34], 0xBFBFBE77
        push eax
        jmp public_43ed68
        public_43ed4b : nop
        lea ecx, ss:[esp+0x38]
        mov dword ptr ss : [esp+0x38], 0
        mov dword ptr ss : [esp+0x3C], 0xBDCCCCCD
        mov dword ptr ss : [esp+0x40], 0xBFBFBE77
        push ecx
/*FIXUP public_43ed68 : nop
        push offset public_5cb6d8 @0x43ed68*/
  FIXUP public_43ed68 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb6d8
        public_43ed6d : nop
        mov ecx, esi
        push 0x3F800000
        call public_441ea0
        public_43ed79 : nop
        mov edi, dword ptr ds : [edi+0x30]
        lea eax, ds:[edi-2]
        cmp eax, 0xA
        ja public_43eda6
/*FIXUP movzx edx, byte ptr ds : [eax+public_43ee68] @0x43ed84*/
/*FIXUP jmp dword ptr ds : [edx*4+public_43ee5c] @0x43ed8b*/
  JMPTB cmp eax, 0
  JMPTB mov edx, 0
  JMPTB je public_43ed92
  JMPTB cmp eax, 1
  JMPTB mov edx, 0
  JMPTB je public_43ed92
  JMPTB cmp eax, 2
  JMPTB mov edx, 2
  JMPTB je public_43eda6
  JMPTB cmp eax, 3
  JMPTB mov edx, 2
  JMPTB je public_43eda6
  JMPTB cmp eax, 4
  JMPTB mov edx, 2
  JMPTB je public_43eda6
  JMPTB cmp eax, 5
  JMPTB mov edx, 1
  JMPTB je public_43ed9c
  JMPTB cmp eax, 6
  JMPTB mov edx, 2
  JMPTB je public_43eda6
  JMPTB cmp eax, 7
  JMPTB mov edx, 2
  JMPTB je public_43eda6
  JMPTB cmp eax, 8
  JMPTB mov edx, 2
  JMPTB je public_43eda6
  JMPTB cmp eax, 9
  JMPTB mov edx, 2
  JMPTB je public_43eda6
  JMPTB cmp eax, 0xA
  JMPTB mov edx, 0
  JMPTB je public_43ed92
  JMPTB int 3
        public_43ed92 : nop
        mov dword ptr ss : [esp+0x10], 0x3DA3D70A
        jmp public_43edae
        public_43ed9c : nop
        mov dword ptr ss : [esp+0x10], 0x3D4CCCCD
        jmp public_43edae
        public_43eda6 : nop
        mov dword ptr ss : [esp+0x10], 0x3F800000
        public_43edae : nop
        mov eax, dword ptr ds : [public_5cb4d0]
        push eax
        mov ecx, ebp
        call public_55e590
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [esi+0x3E8]
        push ecx
        push 0x3F800000
        push edx
        mov ecx, ebp
        call public_55e360
        pop edi
        mov dword ptr ds : [esi+0x3F0], 0
        pop esi
        pop ebp
        pop ebx
        add esp, 0x34
        ret 
        public_43ede5 : nop
        mov dword ptr ds : [esi+0x3F0], edi
        pop edi
        mov dword ptr ds : [esi+0x3F0], 0
        pop esi
        pop ebp
        pop ebx
        add esp, 0x34
        ret 
        public_43edfd : nop
        mov ecx, ebx
        call public_55e280
        test al, al
        jne public_43ee33
        lea ecx, ds:[esi+0x34C]
        call public_55e280
        test al, al
        jne public_43ee33
        mov eax, dword ptr ds : [esi+0x3F4]
        test eax, eax
        je public_43ee33
        push eax
        mov ecx, esi
        call public_4400d0
        mov dword ptr ds : [esi+0x3F4], 0
        public_43ee33 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x34
        ret 
        UNREACHABLE_TRAP(0x43e700)
        ASM_EXPORT_ENTRY_FIRST(0x43ed79, public_43ed79)
        ASM_EXPORT_ENTRY_LAST(0x43eda6, public_43eda6)
    }
}

#undef public_43e710
#undef public_43e720
#undef public_43e725
#undef public_43e72b
#undef public_43e755
#undef public_43e757
#undef public_43e785
#undef public_43e794
#undef public_43e7b0
#undef public_43e7bc
#undef public_43e7c1
#undef public_43e7e0
#undef public_43e808
#undef public_43e812
#undef public_43e870
#undef public_43e883
#undef public_43e889
#undef public_43e8b3
#undef public_43e8f0
#undef public_43e8ff
#undef public_43e907
#undef public_43e916
#undef public_43e944
#undef public_43e95a
#undef public_43e96e
#undef public_43e9a6
#undef public_43e9cf
#undef public_43ea25
#undef public_43ea4d
#undef public_43ea5c
#undef public_43ea84
#undef public_43ea93
#undef public_43eabb
#undef public_43eb6d
#undef public_43eb7c
#undef public_43eb9f
#undef public_43ebb4
#undef public_43ebc3
#undef public_43ebcb
#undef public_43ebd3
#undef public_43ec54
#undef public_43ece4
#undef public_43ed08
#undef public_43ed2c
#undef public_43ed4b
#undef public_43ed68
#undef public_43ed6d
#undef public_43ed79
#undef public_43ed92
#undef public_43ed9c
#undef public_43eda6
#undef public_43edae
#undef public_43ede5
#undef public_43edfd
#undef public_43ee33

#pragma init_seg(compiler)
extern "C" void const* const public_43ed79 = __AsmFindLabelExport(&internal_43e700, 0x43ed79);
extern "C" void const* const public_43eda6 = __AsmFindLabelExport(&internal_43e700, 0x43eda6);
