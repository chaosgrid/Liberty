#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_410130);
CLANG_FORWARD_PROC_SYMBOL(public_410150);
CLANG_FORWARD_PROC_SYMBOL(public_411c50);
CLANG_FORWARD_PROC_SYMBOL(public_425b30);
CLANG_FORWARD_PROC_SYMBOL(public_427a10);
CLANG_FORWARD_PROC_SYMBOL(public_509b00);
CLANG_FORWARD_PROC_SYMBOL(public_51ff50);
CLANG_FORWARD_PROC_SYMBOL(public_5374e0);
CLANG_FORWARD_PROC_SYMBOL(public_537a40);
CLANG_FORWARD_PROC_SYMBOL(public_537a90);
CLANG_FORWARD_PROC_SYMBOL(public_537ad0);
CLANG_FORWARD_PROC_SYMBOL(public_540e90);
CLANG_FORWARD_PROC_SYMBOL(public_540eb0);
CLANG_FORWARD_PROC_SYMBOL(public_548a20);
CLANG_FORWARD_PROC_SYMBOL(public_54bde0);
CLANG_FORWARD_PROC_SYMBOL(public_553590);
CLANG_FORWARD_PROC_SYMBOL(public_553740);
CLANG_FORWARD_PROC_SYMBOL(public_5556b0);
CLANG_FORWARD_PROC_SYMBOL(public_5947a0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e90);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);
CLANG_FORWARD_JUMP_SYMBOL(public_5c143f);

#define public_5537c4 _public_5537c4
#define public_553830 _public_553830
#define public_553858 _public_553858
#define public_553879 _public_553879
#define public_55389a _public_55389a
#define public_5538cd _public_5538cd
#define public_5538e7 _public_5538e7
#define public_553917 _public_553917
#define public_553977 _public_553977
#define public_5539c9 _public_5539c9
#define public_553a0a _public_553a0a
#define public_553a33 _public_553a33
#define public_553a5c _public_553a5c
#define public_553a82 _public_553a82
#define public_553aa8 _public_553aa8
#define public_553ad9 _public_553ad9
#define public_553af6 _public_553af6
#define public_553b07 _public_553b07
#define public_553b44 _public_553b44
#define public_553b5e _public_553b5e
#define public_553b95 _public_553b95
#define public_553bf2 _public_553bf2
#define public_553c04 _public_553c04
#define public_553c61 _public_553c61
#define public_553c88 _public_553c88
#define public_553cba _public_553cba
#define public_553ccc _public_553ccc
#define public_553cd8 _public_553cd8
#define public_553cdb _public_553cdb
#define public_553cf5 _public_553cf5
#define public_553d30 _public_553d30
#define public_553d57 _public_553d57
#define public_553d68 _public_553d68
#define public_553d7a _public_553d7a
#define public_553da8 _public_553da8
#define public_553daa _public_553daa
#define public_553dc5 _public_553dc5
#define public_553dec _public_553dec
#define public_553e20 _public_553e20
#define public_553e4e _public_553e4e
#define public_553e64 _public_553e64
#define public_553e8b _public_553e8b
#define public_553e8d _public_553e8d
#define public_553e9c _public_553e9c
#define public_553ed3 _public_553ed3
#define public_553ed5 _public_553ed5
#define public_553f0a _public_553f0a
#define public_553f24 _public_553f24
#define public_553f4c _public_553f4c
#define public_553f71 _public_553f71
#define public_553f89 _public_553f89
#define public_553fa6 _public_553fa6
#define public_553fbb _public_553fbb
#define public_553fd5 _public_553fd5
#define public_554020 _public_554020
#define public_554060 _public_554060
#define public_55407a _public_55407a
#define public_5540ab _public_5540ab
#define public_5540d4 _public_5540d4
#define public_5540ec _public_5540ec
#define public_55410b _public_55410b
#define public_55415a _public_55415a
#define public_55416d _public_55416d
#define public_554183 _public_554183
#define public_5541a4 _public_5541a4
#define public_554203 _public_554203
#define public_554229 _public_554229
#define public_55423a _public_55423a
#define public_55424f _public_55424f
#define public_554260 _public_554260
#define public_554280 _public_554280
#define public_5542f9 _public_5542f9
#define public_55430a _public_55430a
#define public_55431b _public_55431b
#define public_554342 _public_554342
#define public_554367 _public_554367
#define public_554370 _public_554370
#define public_5543b1 _public_5543b1
#define public_5543f8 _public_5543f8
#define public_5543fa _public_5543fa
#define public_554431 _public_554431
#define public_554442 _public_554442
#define public_554453 _public_554453
#define public_554472 _public_554472
#define public_5544ae _public_5544ae
#define public_5544b7 _public_5544b7

PROC_DECLARE(0x553740, internal_553740, public_553740);
extern "C" NAKED register_t __cdecl internal_553740()
{
    __asm
    {
        push 0xFFFFFFFF
        mov eax, dword ptr fs : [0]
/*FIXUP push public_5c143f @0x553748*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c143f
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, 0x1818
        mov dword ptr fs : [0], esp
        call public_5b7e90
        push ebx
        push ebp
        push esi
        push edi
        call public_540e90
        call public_410130
        lea ecx, ss:[esp+0x2C0]
        mov byte ptr ss : [esp+0x13], 0
        call dword ptr ds : [public_5c605c]
        mov esi, dword ptr ss : [esp+0x1838]
        push 0
        push esi
        lea ecx, ss:[esp+0x2C8]
        mov dword ptr ss : [esp+0x1838], 0
        call dword ptr ds : [public_5c6058]
        test al, al
        je public_554260
        lea ecx, ss:[esp+0x2C0]
        call dword ptr ds : [public_5c6054]
        test al, al
        je public_55424f
        mov ebp, dword ptr ds : [public_5c6698]
        public_5537c4 : nop
        mov esi, dword ptr ds : [public_5c6050]
/*FIXUP push offset public_5e1180 @0x5537ca*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e1180
        lea ecx, ss:[esp+0x2C4]
        call esi
        test al, al
        jne public_554183
/*FIXUP push offset public_5e1174 @0x5537e0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e1174
        lea ecx, ss:[esp+0x2C4]
        call esi
        test al, al
        jne public_554183
/*FIXUP push offset public_5e116c @0x5537f6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e116c
        lea ecx, ss:[esp+0x2C4]
        call esi
        test al, al
        lea ecx, ss:[esp+0x2C0]
        je public_5538e7
        call dword ptr ds : [public_5c669c]
        test al, al
        je public_55423a
        mov edi, dword ptr ds : [public_5c6cf4]
        mov esi, dword ptr ds : [public_5c6020]
        lea ecx, ds:[ecx]
/*FIXUP public_553830 : nop
        push offset public_5ca72c @0x553830*/
  FIXUP public_553830 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ca72c
        lea ecx, ss:[esp+0x2C4]
        call edi
        test al, al
        lea ecx, ss:[esp+0x2C0]
        je public_553858
        call ebp
        push eax
        call esi
        add esp, 4
        mov dword ptr ds : [public_6798f4], eax
        jmp public_5538cd
/*FIXUP public_553858 : nop
        push offset public_5d9810 @0x553858*/
  FIXUP public_553858 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d9810
        call edi
        test al, al
        lea ecx, ss:[esp+0x2C0]
        je public_553879
        call ebp
        push eax
        call esi
        add esp, 4
        mov dword ptr ds : [public_6798f0], eax
        jmp public_5538cd
/*FIXUP public_553879 : nop
        push offset public_5e1164 @0x553879*/
  FIXUP public_553879 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e1164
        call edi
        test al, al
        lea ecx, ss:[esp+0x2C0]
        je public_55389a
        call ebp
        push eax
        call esi
        add esp, 4
        mov dword ptr ds : [public_6798ec], eax
        jmp public_5538cd
/*FIXUP public_55389a : nop
        push offset public_5e115c @0x55389a*/
  FIXUP public_55389a : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e115c
        call edi
        test al, al
        je public_5538cd
        mov ecx, dword ptr ss : [esp+0x1838]
        mov edx, dword ptr ds : [public_5c6d18]
        push ecx
        push 0x3C1
/*FIXUP push offset public_5e0f00 @0x5538b8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e0f00
        mov eax, 0x100002
/*FIXUP push offset public_5e10f0 @0x5538c2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e10f0
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        public_5538cd : nop
        lea ecx, ss:[esp+0x2C0]
        call dword ptr ds : [public_5c669c]
        test al, al
        jne public_553830
        jmp public_55423a
/*FIXUP public_5538e7 : nop
        push offset public_5e10e4 @0x5538e7*/
  FIXUP public_5538e7 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e10e4
        call esi
        test al, al
        je public_553b5e
        lea ecx, ss:[esp+0x2C0]
        call dword ptr ds : [public_5c669c]
        test al, al
        je public_55423a
        mov ebx, dword ptr ds : [public_5c6cf4]
        mov edi, dword ptr ds : [public_5c6020]
        public_553917 : nop
        lea ecx, ss:[esp+0x2C0]
        call ebp
/*FIXUP push offset public_5e10e0 @0x553920*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e10e0
        lea ecx, ss:[esp+0x2C4]
        mov esi, eax
        call ebx
        test al, al
        je public_553977
        push esi
        call edi
        mov dword ptr ss : [esp+0x28], eax
        lea eax, ss:[esp+0x28]
        push 1
        push eax
        call public_427a10
        push esi
        call edi
        mov edx, dword ptr ds : [public_67988c]
        add esp, 0x10
        lea ecx, ss:[esp+0x20]
        push ecx
        mov dword ptr ss : [esp+0x24], eax
        push edx
        lea eax, ss:[esp+0x34]
        push eax
        mov ecx, offset public_679888
        call public_5947a0
        mov ebx, dword ptr ds : [public_5c6cf4]
        jmp public_553b44
/*FIXUP public_553977 : nop
        push offset public_5ca33c @0x553977*/
  FIXUP public_553977 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ca33c
        lea ecx, ss:[esp+0x2C4]
        call dword ptr ds : [public_5c6cf4]
        test al, al
        je public_5539c9
        mov ebx, dword ptr ds : [public_5c6024]
        push 0
        lea ecx, ss:[esp+0x2C4]
        call ebx
        push eax
        call edi
        add esp, 4
        push 1
        lea ecx, ss:[esp+0x2C4]
        mov esi, eax
        call ebx
        push eax
        call edi
        push eax
        push esi
        call public_553590
        mov ebx, dword ptr ds : [public_5c6cf4]
        add esp, 0xC
        jmp public_553b44
        public_5539c9 : nop
        push esi
        call edi
        mov ebx, dword ptr ds : [public_5c6cf4]
        add esp, 4
/*FIXUP push offset public_5e10d8 @0x5539d5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e10d8
        lea ecx, ss:[esp+0x2C4]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ss : [esp+0x18], 0
        call ebx
        test al, al
        je public_553a0a
        lea ecx, ss:[esp+0x18]
        push ecx
        call dword ptr ds : [public_5c6b70]
        add esp, 4
        mov dword ptr ss : [esp+0x14], eax
        jmp public_553ad9
/*FIXUP public_553a0a : nop
        push offset public_5cb9f0 @0x553a0a*/
  FIXUP public_553a0a : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb9f0
        lea ecx, ss:[esp+0x2C4]
        call ebx
        test al, al
        je public_553a33
        lea edx, ss:[esp+0x18]
        push edx
        call dword ptr ds : [public_5c639c]
        add esp, 4
        mov dword ptr ss : [esp+0x14], eax
        jmp public_553ad9
/*FIXUP public_553a33 : nop
        push offset public_5e10d0 @0x553a33*/
  FIXUP public_553a33 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e10d0
        lea ecx, ss:[esp+0x2C4]
        call ebx
        test al, al
        je public_553a5c
        lea eax, ss:[esp+0x18]
        push eax
        call dword ptr ds : [public_5c6b6c]
        add esp, 4
        mov dword ptr ss : [esp+0x14], eax
        jmp public_553ad9
/*FIXUP public_553a5c : nop
        push offset public_5e10c8 @0x553a5c*/
  FIXUP public_553a5c : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e10c8
        lea ecx, ss:[esp+0x2C4]
        call ebx
        test al, al
        je public_553a82
        lea ecx, ss:[esp+0x18]
        push ecx
        call dword ptr ds : [public_5c6b68]
        add esp, 4
        mov dword ptr ss : [esp+0x14], eax
        jmp public_553ad9
/*FIXUP public_553a82 : nop
        push offset public_5dcfd0 @0x553a82*/
  FIXUP public_553a82 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dcfd0
        lea ecx, ss:[esp+0x2C4]
        call ebx
        test al, al
        je public_553aa8
        lea edx, ss:[esp+0x18]
        push edx
        call dword ptr ds : [public_5c6b64]
        add esp, 4
        mov dword ptr ss : [esp+0x14], eax
        jmp public_553ad9
        public_553aa8 : nop
        lea ecx, ss:[esp+0x2C0]
        mov esi, 0x100002
        call dword ptr ds : [public_5c606c]
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        push 0x315
/*FIXUP push offset public_5e0f00 @0x553ac5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e0f00
/*FIXUP push offset public_5e1080 @0x553aca*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e1080
        push esi
        call dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x28]
        add esp, 0x14
        public_553ad9 : nop
        test eax, eax
        je public_553b07
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0xC]
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [eax+4]
        test ecx, ecx
        je public_553af6
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx+0x20]
        public_553af6 : nop
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, offset public_679894
        call public_5556b0
        jmp public_553b44
        public_553b07 : nop
        push 2
        push 0x10000
        lea ecx, ss:[esp+0x30]
        call public_411c50
        lea ecx, ss:[esp+0x2C0]
        mov esi, eax
        call dword ptr ds : [public_5c606c]
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [public_5c6d18]
        push eax
        push 0x321
/*FIXUP push offset public_5e0f00 @0x553b34*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e0f00
/*FIXUP push offset public_5e1048 @0x553b39*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e1048
        push ecx
        call dword ptr ds : [edx]
        add esp, 0x14
        public_553b44 : nop
        lea ecx, ss:[esp+0x2C0]
        call dword ptr ds : [public_5c669c]
        test al, al
        jne public_553917
        jmp public_55423a
/*FIXUP public_553b5e : nop
        push offset public_5e1040 @0x553b5e*/
  FIXUP public_553b5e : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e1040
        lea ecx, ss:[esp+0x2C4]
        call esi
        test al, al
        lea ecx, ss:[esp+0x2C0]
        je public_553c04
        call dword ptr ds : [public_5c669c]
        test al, al
        je public_55423a
        mov esi, dword ptr ds : [public_5c669c]
        mov edi, dword ptr ds : [public_5c6cf4]
/*FIXUP public_553b95 : nop
        push offset public_5c7f6c @0x553b95*/
  FIXUP public_553b95 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c7f6c
        lea ecx, ss:[esp+0x2C4]
        call edi
        test al, al
        je public_553bf2
        push 0
        lea ecx, ss:[esp+0x2C4]
        call dword ptr ds : [public_5c6cfc]
        call public_5b7ec0
        push 1
        lea ecx, ss:[esp+0x2C4]
        mov byte ptr ds : [public_6798f8], al
        call dword ptr ds : [public_5c6cfc]
        call public_5b7ec0
        push 2
        lea ecx, ss:[esp+0x2C4]
        mov byte ptr ds : [public_6798f9], al
        call dword ptr ds : [public_5c6cfc]
        call public_5b7ec0
        mov byte ptr ds : [public_6798fa], al
        public_553bf2 : nop
        lea ecx, ss:[esp+0x2C0]
        call esi
        test al, al
        jne public_553b95
        jmp public_55423a
/*FIXUP public_553c04 : nop
        push offset public_5e1034 @0x553c04*/
  FIXUP public_553c04 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e1034
        call esi
        test al, al
        je public_553cf5
        mov esi, dword ptr ds : [public_5c6028]
        push 0
/*FIXUP push offset public_5c865c @0x553c1b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c865c
        call esi
        push 0
/*FIXUP push offset public_5c865c @0x553c24*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c865c
        mov dword ptr ds : [public_679924], eax
        call esi
        push 0
/*FIXUP push offset public_5c865c @0x553c32*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c865c
        mov dword ptr ds : [public_679938], eax
        call esi
        add esp, 0x18
        lea ecx, ss:[esp+0x2C0]
        mov dword ptr ds : [public_679910], eax
        call dword ptr ds : [public_5c669c]
        test al, al
        je public_55423a
        mov edi, dword ptr ds : [public_5c6cf4]
/*FIXUP public_553c61 : nop
        push offset public_5e1028 @0x553c61*/
  FIXUP public_553c61 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e1028
        lea ecx, ss:[esp+0x2C4]
        call edi
        test al, al
        lea ecx, ss:[esp+0x2C0]
        je public_553c88
        call ebp
        push 0
        push eax
        call esi
        mov dword ptr ds : [public_679924], eax
        jmp public_553cd8
/*FIXUP public_553c88 : nop
        push offset public_5e1018 @0x553c88*/
  FIXUP public_553c88 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e1018
        call edi
        test al, al
        lea ecx, ss:[esp+0x2C0]
        jne public_553ccc
/*FIXUP push offset public_5e1010 @0x553c9a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e1010
        call edi
        test al, al
        lea ecx, ss:[esp+0x2C0]
        je public_553cba
        call ebp
        push 0
        push eax
        call esi
        mov dword ptr ds : [public_679910], eax
        jmp public_553cd8
/*FIXUP public_553cba : nop
        push offset public_5c99cc @0x553cba*/
  FIXUP public_553cba : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c99cc
        call edi
        test al, al
        je public_553cdb
        lea ecx, ss:[esp+0x2C0]
        public_553ccc : nop
        call ebp
        push 0
        push eax
        call esi
        mov dword ptr ds : [public_679938], eax
        public_553cd8 : nop
        add esp, 8
        public_553cdb : nop
        lea ecx, ss:[esp+0x2C0]
        call dword ptr ds : [public_5c669c]
        test al, al
        jne public_553c61
        jmp public_55423a
/*FIXUP public_553cf5 : nop
        push offset public_5e1008 @0x553cf5*/
  FIXUP public_553cf5 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e1008
        lea ecx, ss:[esp+0x2C4]
        call esi
        test al, al
        je public_553d7a
        lea ecx, ss:[esp+0x1C]
        call dword ptr ds : [public_5c69a0]
        lea ecx, ss:[esp+0x2C0]
        call dword ptr ds : [public_5c669c]
        test al, al
        je public_553d68
        mov edi, dword ptr ds : [public_5c6cf4]
        mov esi, dword ptr ds : [public_5c6028]
        mov edi, edi
/*FIXUP public_553d30 : nop
        push offset public_5e0ffc @0x553d30*/
  FIXUP public_553d30 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e0ffc
        lea ecx, ss:[esp+0x2C4]
        call edi
        test al, al
        je public_553d57
        lea ecx, ss:[esp+0x2C0]
        call ebp
        push 0
        push eax
        call esi
        add esp, 8
        mov dword ptr ss : [esp+0x1C], eax
        public_553d57 : nop
        lea ecx, ss:[esp+0x2C0]
        call dword ptr ds : [public_5c669c]
        test al, al
        jne public_553d30
        public_553d68 : nop
        lea eax, ss:[esp+0x1C]
        push eax
        call public_54bde0
        add esp, 4
        jmp public_55423a
/*FIXUP public_553d7a : nop
        push offset public_5e0ff0 @0x553d7a*/
  FIXUP public_553d7a : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e0ff0
        lea ecx, ss:[esp+0x2C4]
        call esi
        test al, al
        je public_553dc5
        push 0x12C
        call public_537a90
        add esp, 4
        test eax, eax
        je public_553da8
        mov ecx, eax
        call public_5374e0
        mov esi, eax
        jmp public_553daa
        public_553da8 : nop
        xor esi, esi
        public_553daa : nop
        lea ecx, ss:[esp+0x2C0]
        push ecx
        mov ecx, esi
        call public_537a40
        mov ecx, esi
        call public_537ad0
        jmp public_55423a
/*FIXUP public_553dc5 : nop
        push offset public_5e0fe8 @0x553dc5*/
  FIXUP public_553dc5 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e0fe8
        lea ecx, ss:[esp+0x2C4]
        call esi
        test al, al
        je public_553dec
        lea edx, ss:[esp+0x2C0]
        push edx
        call public_548a20
        add esp, 4
        jmp public_55423a
/*FIXUP public_553dec : nop
        push offset public_5daf3c @0x553dec*/
  FIXUP public_553dec : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5daf3c
        lea ecx, ss:[esp+0x2C4]
        call esi
        test al, al
        lea ecx, ss:[esp+0x2C0]
        je public_553e64
        call dword ptr ds : [public_5c669c]
        test al, al
        je public_55423a
        mov edi, dword ptr ds : [public_5c6cf4]
        mov esi, dword ptr ds : [public_5c61a4]
        nop 
/*FIXUP public_553e20 : nop
        push offset public_5c99cc @0x553e20*/
  FIXUP public_553e20 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c99cc
        lea ecx, ss:[esp+0x2C4]
        call edi
        test al, al
        je public_553e4e
        lea ecx, ss:[esp+0x2C0]
        call ebp
        push eax
        call esi
        add esp, 4
        push 0
        push eax
        mov ecx, offset public_6798ac
        call public_425b30
        public_553e4e : nop
        lea ecx, ss:[esp+0x2C0]
        call dword ptr ds : [public_5c669c]
        test al, al
        jne public_553e20
        jmp public_55423a
/*FIXUP public_553e64 : nop
        push offset public_5dd068 @0x553e64*/
  FIXUP public_553e64 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dd068
        call esi
        test al, al
        je public_553fd5
        mov al, byte ptr ss : [esp+0x13]
        test al, al
        jne public_553e9c
        mov ecx, dword ptr ds : [public_679954]
        test ecx, ecx
        je public_553e8b
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax]
        jmp public_553e8d
        public_553e8b : nop
        xor eax, eax
        public_553e8d : nop
        push eax
        call dword ptr ds : [public_5c6b60]
        add esp, 4
        mov byte ptr ss : [esp+0x13], 1
        public_553e9c : nop
        xor edi, edi
        lea ecx, ss:[esp+0x2C0]
        mov dword ptr ss : [esp+0xB8], edi
        mov byte ptr ss : [esp+0xBC], 0
        mov dword ptr ss : [esp+0x30], edi
        mov byte ptr ss : [esp+0x34], 0
        call dword ptr ds : [public_5c669c]
        test al, al
        je public_553fbb
        mov ebx, dword ptr ds : [public_5c6cf4]
        jmp public_553ed5
        public_553ed3 : nop
        xor edi, edi
/*FIXUP public_553ed5 : nop
        push offset public_5c99cc @0x553ed5*/
  FIXUP public_553ed5 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c99cc
        lea ecx, ss:[esp+0x2C4]
        call ebx
        test al, al
        lea ecx, ss:[esp+0x2C0]
        je public_553f4c
        call ebp
        mov esi, eax
        cmp esi, edi
        jne public_553f0a
        mov dword ptr ss : [esp+0xB8], edi
        mov byte ptr ss : [esp+0xBC], 0
        jmp public_553fa6
        public_553f0a : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x100
        jb public_553f24
        mov eax, 0xFF
        public_553f24 : nop
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        lea edi, ss:[esp+0xBC]
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov byte ptr ss : [esp+eax+0xBC], 0
        mov dword ptr ss : [esp+0xB8], eax
        jmp public_553fa6
/*FIXUP public_553f4c : nop
        push offset public_5dc740 @0x553f4c*/
  FIXUP public_553f4c : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dc740
        call ebx
        test al, al
        je public_553fa6
        lea ecx, ss:[esp+0x2C0]
        call ebp
        mov esi, eax
        cmp esi, edi
        jne public_553f71
        mov dword ptr ss : [esp+0x30], edi
        mov byte ptr ss : [esp+0x34], 0
        jmp public_553fa6
        public_553f71 : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x40
        jb public_553f89
        mov eax, 0x3F
        public_553f89 : nop
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        lea edi, ss:[esp+0x34]
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov byte ptr ss : [esp+eax+0x34], 0
        mov dword ptr ss : [esp+0x30], eax
        public_553fa6 : nop
        lea ecx, ss:[esp+0x2C0]
        call dword ptr ds : [public_5c669c]
        test al, al
        jne public_553ed3
        public_553fbb : nop
        lea eax, ss:[esp+0x34]
        push eax
        lea ecx, ss:[esp+0xC0]
        push ecx
        call public_51ff50
        add esp, 8
        jmp public_55423a
/*FIXUP public_553fd5 : nop
        push offset public_5db0c8 @0x553fd5*/
  FIXUP public_553fd5 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5db0c8
        lea ecx, ss:[esp+0x2C4]
        call esi
        test al, al
        je public_55423a
        xor edi, edi
        xor ebx, ebx
        lea ecx, ss:[esp+0x2C0]
        mov dword ptr ss : [esp+0x1BC], edi
        mov byte ptr ss : [esp+0x1C0], bl
        mov dword ptr ss : [esp+0x74], edi
        mov byte ptr ss : [esp+0x78], bl
        call dword ptr ds : [public_5c669c]
        test al, al
        je public_55423a
        lea ebx, ds:[ebx]
/*FIXUP public_554020 : nop
        push offset public_5c99cc @0x554020*/
  FIXUP public_554020 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c99cc
        lea ecx, ss:[esp+0x2C4]
        call dword ptr ds : [public_5c6cf4]
        test al, al
        lea ecx, ss:[esp+0x2C0]
        je public_5540ab
        call ebp
        mov esi, eax
        cmp esi, edi
        jne public_554060
        mov dword ptr ss : [esp+0x1BC], edi
        mov byte ptr ss : [esp+0x1C0], 0
        call public_509b00
        mov ebx, eax
        jmp public_55410b
        public_554060 : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x100
        jb public_55407a
        mov eax, 0xFF
        public_55407a : nop
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        lea edi, ss:[esp+0x1C0]
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov byte ptr ss : [esp+eax+0x1C0], 0
        mov dword ptr ss : [esp+0x1BC], eax
        xor edi, edi
        call public_509b00
        mov ebx, eax
        jmp public_55410b
/*FIXUP public_5540ab : nop
        push offset public_5dc740 @0x5540ab*/
  FIXUP public_5540ab : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dc740
        call dword ptr ds : [public_5c6cf4]
        test al, al
        je public_55410b
        lea ecx, ss:[esp+0x2C0]
        call ebp
        mov esi, eax
        cmp esi, edi
        jne public_5540d4
        mov dword ptr ss : [esp+0x74], edi
        mov byte ptr ss : [esp+0x78], 0
        jmp public_55410b
        public_5540d4 : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x40
        jb public_5540ec
        mov eax, 0x3F
        public_5540ec : nop
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        lea edi, ss:[esp+0x78]
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov byte ptr ss : [esp+eax+0x78], 0
        mov dword ptr ss : [esp+0x74], eax
        xor edi, edi
        public_55410b : nop
        lea ecx, ss:[esp+0x2C0]
        call dword ptr ds : [public_5c669c]
        test al, al
        jne public_554020
        cmp ebx, edi
        je public_55423a
        mov eax, dword ptr ds : [ebx]
        lea ecx, ss:[esp+0x78]
        push ecx
        lea edx, ss:[esp+0x1C4]
        push edx
        mov ecx, ebx
        call dword ptr ds : [eax]
        mov eax, dword ptr ds : [public_6798c8]
        mov edi, dword ptr ds : [eax+4]
        lea esi, ds:[eax+4]
        push 0xC
        mov ebp, eax
        call public_5b7e84
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], ebp
        jne public_55415a
        mov edi, eax
        public_55415a : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        je public_55416d
        mov dword ptr ds : [eax], ebx
        public_55416d : nop
        mov eax, dword ptr ds : [public_6798cc]
        mov ebp, dword ptr ds : [public_5c6698]
        inc eax
        mov dword ptr ds : [public_6798cc], eax
        jmp public_55423a
        public_554183 : nop
        lea ecx, ss:[esp+0x2C0]
        call dword ptr ds : [public_5c669c]
        test al, al
        je public_55423a
        mov edi, dword ptr ds : [public_5c669c]
        mov esi, dword ptr ds : [public_5c6cf4]
/*FIXUP public_5541a4 : nop
        push offset public_5e0fdc @0x5541a4*/
  FIXUP public_5541a4 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e0fdc
        lea ecx, ss:[esp+0x2C4]
        call esi
        test al, al
        lea ecx, ss:[esp+0x2C0]
        je public_554203
        push 0
        call dword ptr ds : [public_5c6cfc]
        call public_5b7ec0
        push 1
        lea ecx, ss:[esp+0x2C4]
        mov byte ptr ds : [public_6140b4], al
        call dword ptr ds : [public_5c6cfc]
        call public_5b7ec0
        push 2
        lea ecx, ss:[esp+0x2C4]
        mov byte ptr ds : [public_6140b5], al
        call dword ptr ds : [public_5c6cfc]
        call public_5b7ec0
        mov byte ptr ds : [public_6140b6], al
        jmp public_554229
/*FIXUP public_554203 : nop
        push offset public_5e0fcc @0x554203*/
  FIXUP public_554203 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e0fcc
        call esi
        test al, al
        je public_554229
        push 0
        lea ecx, ss:[esp+0x2C4]
        call dword ptr ds : [public_5c6cfc]
        push ecx
        fstp dword ptr ss : [esp]
        call public_410150
        add esp, 4
        public_554229 : nop
        lea ecx, ss:[esp+0x2C0]
        call edi
        test al, al
        jne public_5541a4
        public_55423a : nop
        lea ecx, ss:[esp+0x2C0]
        call dword ptr ds : [public_5c6054]
        test al, al
        jne public_5537c4
        public_55424f : nop
        lea ecx, ss:[esp+0x2C0]
        call dword ptr ds : [public_5c6400]
        jmp public_554280
        mov edi, edi
        public_554260 : nop
        push esi
        push 0x446
/*FIXUP push offset public_5e0f00 @0x554266*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e0f00
        mov eax, 0x100002
/*FIXUP push offset public_5e0fa0 @0x554270*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e0fa0
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        call dword ptr ds : [eax]
        add esp, 0x14
        public_554280 : nop
        call public_540eb0
        lea ecx, ss:[esp+0x16E8]
        mov dword ptr ss : [esp+0x1830], 1
        mov dword ptr ss : [esp+0x28], ecx
        mov edx, dword ptr ds : [public_5c7080]
        mov eax, dword ptr ds : [edx]
        push eax
        xor esi, esi
        push esi
        lea ecx, ss:[esp+0x16F0]
        mov byte ptr ss : [esp+0x1838], 2
        call dword ptr ds : [public_5c707c]
        mov eax, dword ptr ss : [esp+0x16F8]
        mov ebx, dword ptr ds : [public_5c6ef8]
        or edi, 0xFFFFFFFF
        cmp eax, edi
        je public_55431b
        cmp dword ptr ss : [esp+0x16FC], esi
        je public_55430a
        mov eax, dword ptr ss : [esp+0x1700]
        cmp eax, esi
        je public_5542f9
        push eax
        call dword ptr ds : [public_5c6efc]
        mov dword ptr ss : [esp+0x1700], esi
        mov dword ptr ss : [esp+0x1704], esi
        public_5542f9 : nop
        mov ecx, dword ptr ss : [esp+0x16FC]
        push ecx
        call ebx
        mov dword ptr ss : [esp+0x16FC], esi
        public_55430a : nop
        mov edx, dword ptr ss : [esp+0x16F8]
        push edx
        call ebx
        mov dword ptr ss : [esp+0x16F8], edi
        public_55431b : nop
        mov eax, dword ptr ss : [esp+0x1700]
        mov ebp, dword ptr ds : [public_5c71d8]
        xor edi, edi
        cmp eax, edi
        je public_554342
        push eax
        call ebp
        add esp, 4
        mov dword ptr ss : [esp+0x1700], edi
        mov dword ptr ss : [esp+0x1704], edi
        public_554342 : nop
        mov eax, dword ptr ss : [esp+0x16EC]
        cmp eax, edi
        mov dword ptr ss : [esp+0x1708], edi
        je public_554370
        mov cl, byte ptr ds : [eax-1]
        dec eax
        test cl, cl
        je public_554367
        cmp cl, 0xFF
        je public_554367
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_554370
        public_554367 : nop
        push eax
        call public_5b7e1d
        add esp, 4
        public_554370 : nop
        mov dword ptr ss : [esp+0x16EC], edi
        mov dword ptr ss : [esp+0x16F0], edi
        mov dword ptr ss : [esp+0x16F4], edi
        mov eax, dword ptr ds : [public_5c7080]
        mov esi, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x2C0]
        mov dword ptr ss : [esp+0x1830], 3
        call dword ptr ds : [public_5c7068]
        mov eax, dword ptr ss : [esp+0x2C8]
        cmp eax, esi
        jae public_5543b1
        mov esi, eax
        public_5543b1 : nop
        cmp esi, edi
        jbe public_5543fa
        sub eax, esi
        push eax
        mov eax, dword ptr ss : [esp+0x2C8]
        lea ecx, ds:[eax+esi]
        push ecx
        push eax
        call dword ptr ds : [public_5c709c]
        mov edi, dword ptr ss : [esp+0x2D4]
        add esp, 0xC
        push 0
        sub edi, esi
        push edi
        lea ecx, ss:[esp+0x2C8]
        call dword ptr ds : [public_5c708c]
        test al, al
        je public_5543f8
        push edi
        lea ecx, ss:[esp+0x2C4]
        call dword ptr ds : [public_5c706c]
        public_5543f8 : nop
        xor edi, edi
        public_5543fa : nop
        mov eax, dword ptr ss : [esp+0x2D0]
        or esi, 0xFFFFFFFF
        cmp eax, esi
        je public_554453
        cmp dword ptr ss : [esp+0x2D4], edi
        je public_554442
        mov eax, dword ptr ss : [esp+0x2D8]
        cmp eax, edi
        je public_554431
        push eax
        call dword ptr ds : [public_5c6efc]
        mov dword ptr ss : [esp+0x2D8], edi
        mov dword ptr ss : [esp+0x2DC], edi
        public_554431 : nop
        mov edx, dword ptr ss : [esp+0x2D4]
        push edx
        call ebx
        mov dword ptr ss : [esp+0x2D4], edi
        public_554442 : nop
        mov eax, dword ptr ss : [esp+0x2D0]
        push eax
        call ebx
        mov dword ptr ss : [esp+0x2D0], esi
        public_554453 : nop
        mov eax, dword ptr ss : [esp+0x2D8]
        cmp eax, edi
        je public_554472
        push eax
        call ebp
        add esp, 4
        mov dword ptr ss : [esp+0x2D8], edi
        mov dword ptr ss : [esp+0x2DC], edi
        public_554472 : nop
        mov eax, dword ptr ss : [esp+0x2C4]
        mov dword ptr ss : [esp+0x2E0], edi
        cmp eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        je public_5544b7
        mov cl, byte ptr ds : [eax-1]
        dec eax
        test cl, cl
        je public_5544ae
        cmp cl, 0xFF
        je public_5544ae
        dec cl
        mov byte ptr ds : [eax], cl
        mov ecx, dword ptr ss : [esp+0x1818]
        mov dword ptr fs : [0], ecx
        add esp, 0x1824
        ret 
        public_5544ae : nop
        push eax
        call public_5b7e1d
        add esp, 4
        public_5544b7 : nop
        mov ecx, dword ptr ss : [esp+0x1818]
        mov dword ptr fs : [0], ecx
        add esp, 0x1824
        ret 
        UNREACHABLE_TRAP(0x553740)
    }
}

#undef public_5537c4
#undef public_553830
#undef public_553858
#undef public_553879
#undef public_55389a
#undef public_5538cd
#undef public_5538e7
#undef public_553917
#undef public_553977
#undef public_5539c9
#undef public_553a0a
#undef public_553a33
#undef public_553a5c
#undef public_553a82
#undef public_553aa8
#undef public_553ad9
#undef public_553af6
#undef public_553b07
#undef public_553b44
#undef public_553b5e
#undef public_553b95
#undef public_553bf2
#undef public_553c04
#undef public_553c61
#undef public_553c88
#undef public_553cba
#undef public_553ccc
#undef public_553cd8
#undef public_553cdb
#undef public_553cf5
#undef public_553d30
#undef public_553d57
#undef public_553d68
#undef public_553d7a
#undef public_553da8
#undef public_553daa
#undef public_553dc5
#undef public_553dec
#undef public_553e20
#undef public_553e4e
#undef public_553e64
#undef public_553e8b
#undef public_553e8d
#undef public_553e9c
#undef public_553ed3
#undef public_553ed5
#undef public_553f0a
#undef public_553f24
#undef public_553f4c
#undef public_553f71
#undef public_553f89
#undef public_553fa6
#undef public_553fbb
#undef public_553fd5
#undef public_554020
#undef public_554060
#undef public_55407a
#undef public_5540ab
#undef public_5540d4
#undef public_5540ec
#undef public_55410b
#undef public_55415a
#undef public_55416d
#undef public_554183
#undef public_5541a4
#undef public_554203
#undef public_554229
#undef public_55423a
#undef public_55424f
#undef public_554260
#undef public_554280
#undef public_5542f9
#undef public_55430a
#undef public_55431b
#undef public_554342
#undef public_554367
#undef public_554370
#undef public_5543b1
#undef public_5543f8
#undef public_5543fa
#undef public_554431
#undef public_554442
#undef public_554453
#undef public_554472
#undef public_5544ae
#undef public_5544b7
