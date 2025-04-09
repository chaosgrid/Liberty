#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41c970);
CLANG_FORWARD_PROC_SYMBOL(public_41dda0);
CLANG_FORWARD_PROC_SYMBOL(public_41dde0);
CLANG_FORWARD_PROC_SYMBOL(public_4424f0);
CLANG_FORWARD_PROC_SYMBOL(public_45a460);
CLANG_FORWARD_PROC_SYMBOL(public_45eeb0);
CLANG_FORWARD_PROC_SYMBOL(public_46ea80);
CLANG_FORWARD_PROC_SYMBOL(public_4a7670);
CLANG_FORWARD_PROC_SYMBOL(public_4b5060);
CLANG_FORWARD_PROC_SYMBOL(public_4c4810);
CLANG_FORWARD_PROC_SYMBOL(public_5416c0);
CLANG_FORWARD_PROC_SYMBOL(public_5472d0);
CLANG_FORWARD_PROC_SYMBOL(public_5798b0);
CLANG_FORWARD_PROC_SYMBOL(public_57b370);
CLANG_FORWARD_PROC_SYMBOL(public_57b3e0);
CLANG_FORWARD_PROC_SYMBOL(public_57e2c0);
CLANG_FORWARD_PROC_SYMBOL(public_5a0c90);
CLANG_FORWARD_PROC_SYMBOL(public_5a0d00);
CLANG_FORWARD_PROC_SYMBOL(public_5a0e30);
CLANG_FORWARD_PROC_SYMBOL(public_5a10e0);
CLANG_FORWARD_PROC_SYMBOL(public_5a1340);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5bc323);

#define public_48a535 _public_48a535
#define public_48a551 _public_48a551
#define public_48a5c8 _public_48a5c8
#define public_48a5dc _public_48a5dc
#define public_48a5e1 _public_48a5e1
#define public_48a5e8 _public_48a5e8
#define public_48a720 _public_48a720
#define public_48a7cd _public_48a7cd
#define public_48a87a _public_48a87a
#define public_48a987 _public_48a987
#define public_48ab5d _public_48ab5d
#define public_48ab73 _public_48ab73
#define public_48ac28 _public_48ac28
#define public_48ac53 _public_48ac53
#define public_48ac6d _public_48ac6d
#define public_48ad40 _public_48ad40
#define public_48ad77 _public_48ad77
#define public_48ad84 _public_48ad84
#define public_48ad90 _public_48ad90
#define public_48adc5 _public_48adc5
#define public_48add0 _public_48add0

PROC_DECLARE(0x48a4c0, internal_48a4c0, public_48a4c0);
extern "C" NAKED register_t __cdecl internal_48a4c0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5bc323 @0x48a4c8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bc323
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, dword ptr ds : [public_671ff8]
        mov dword ptr fs : [0], esp
        sub esp, 0x2C
        push ebx
        push ebp
        push esi
        push edi
        mov esi, ecx
        mov edx, dword ptr ds : [esi]
        xor ebx, ebx
        push ebx
/*FIXUP push offset public_5ce994 @0x48a4e8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ce994
        mov dword ptr ds : [esi+0x360], eax
        call dword ptr ds : [edx+0x98]
        lea eax, ds:[esi+0x80]
        push eax
        lea ecx, ds:[esi+0xB4]
        call public_5a1340
        mov eax, dword ptr ds : [esi+0x360]
        mov edi, 6
        cmp eax, edi
        jne public_48a551
        call public_4c4810
        test al, al
        jne public_48a535
        call public_4a7670
        mov byte ptr ds : [esi+0x32C], al
        mov byte ptr ds : [esi+0x368], 1
        public_48a535 : nop
        push 1
        mov byte ptr ds : [public_67dcc8], 1
        call public_41dda0
        push ebx
/*FIXUP push offset public_5c95fc @0x48a544*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c95fc
        call public_41dde0
        add esp, 0xC
        public_48a551 : nop
        cmp dword ptr ds : [esi+0x360], edi
        mov ebp, 1
        mov dword ptr ds : [esi+0x78], edi
        mov dword ptr ds : [esi+0x70], ebp
        je public_48a5c8
        push ebx
        push ebx
        push 0x409
        push ebx
        push ebx
        push ebx
        push ebx
        lea ecx, ss:[esp+0x40]
        push ecx
        push ebx
        lea edx, ss:[esp+0x3C]
        push edx
        push ebx
/*FIXUP push offset public_5ced30 @0x48a57b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ced30
        push ebx
/*FIXUP push offset public_5d01d0 @0x48a581*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d01d0
/*FIXUP push offset public_5d2674 @0x48a586*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d2674
        mov ecx, esi
        mov dword ptr ss : [esp+0x60], 0x3C9374BC
        mov dword ptr ss : [esp+0x64], 0x3C9374BC
        mov dword ptr ss : [esp+0x68], 0
        mov dword ptr ss : [esp+0x54], 0x3ECD4FDF
        mov dword ptr ss : [esp+0x58], 0x3E72B021
        mov dword ptr ss : [esp+0x5C], 0
        call public_5a0c90
        mov dword ptr ds : [esi+0x330], eax
        public_48a5c8 : nop
        mov ecx, dword ptr ds : [esi+0x360]
        cmp ecx, 3
        mov eax, 0x412
        je public_48a5dc
        cmp ecx, ebp
        jne public_48a5e1
        public_48a5dc : nop
        mov eax, 0x4CF
        public_48a5e1 : nop
        cmp ecx, 4
        jne public_48a5e8
        xor eax, eax
        public_48a5e8 : nop
        push ebp
        push ebx
        push ebp
        push eax
        push 0x3FC00000
        push 0x3D75C28F
        push 0x3F5645A2
        push ebx
        lea eax, ss:[esp+0x44]
        push eax
/*FIXUP push offset public_5ce91c @0x48a601*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ce91c
/*FIXUP push offset public_5d2660 @0x48a606*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d2660
        mov ecx, esi
        mov dword ptr ss : [esp+0x50], 0xBED58106
        mov dword ptr ss : [esp+0x54], 0x3E841893
        mov dword ptr ss : [esp+0x58], 0
        call public_5a0e30
        mov dword ptr ds : [esi+0x334], eax
        cmp dword ptr ds : [esi+0x360], edi
        jne public_48a987
        mov ecx, dword ptr ds : [public_6119f8]
        push ecx
/*FIXUP push offset public_66fc60 @0x48a643*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        mov ecx, offset public_671f80
        call public_41c970
/*FIXUP push offset public_66fc60 @0x48a652*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call dword ptr ds : [public_616420]
        mov ecx, dword ptr ds : [esi+0x334]
        mov edx, dword ptr ds : [ecx]
        push ebx
/*FIXUP push offset public_66fc60 @0x48a666*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        push 0x1D
        call dword ptr ds : [edx+0xA8]
        test byte ptr ds : [public_671f7c], 1
        je public_48a720
        push ebx
        push ebx
        push 0x335
        push ebx
        push ebx
        lea eax, ss:[esp+0x38]
        push eax
        lea ecx, ss:[esp+0x30]
        push ecx
/*FIXUP push offset public_5ced30 @0x48a693*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ced30
/*FIXUP push offset public_5d2654 @0x48a698*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d2654
        mov ecx, esi
        mov dword ptr ss : [esp+0x48], 0x3DCCCCCD
        mov dword ptr ss : [esp+0x4C], 0x3CD4FDF4
        mov dword ptr ss : [esp+0x50], 0
        mov dword ptr ss : [esp+0x3C], 0xBE6B851F
        mov dword ptr ss : [esp+0x40], 0xBE560419
        mov dword ptr ss : [esp+0x44], 0
        call public_5a0d00
        push ebp
        push ebx
        push ebp
        push 0x4DC
        push 0x3FF33333
        push 0x3CF5C28F
        push 0x3E4AC083
        push ebx
        lea edx, ss:[esp+0x44]
        push edx
/*FIXUP push offset public_5d0410 @0x48a6f1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0410
/*FIXUP push offset public_5d2648 @0x48a6f6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d2648
        mov ecx, esi
        mov dword ptr ds : [esi+0x350], eax
        mov dword ptr ss : [esp+0x50], 0xBEA8F5C3
        mov dword ptr ss : [esp+0x54], 0xBE3F7CEE
        mov dword ptr ss : [esp+0x58], 0
        call public_5a0e30
        public_48a720 : nop
        test byte ptr ds : [public_671f7c], 2
        je public_48a7cd
        push ebx
        push ebx
        push 0x336
        push ebx
        push ebx
        lea eax, ss:[esp+0x38]
        push eax
        lea ecx, ss:[esp+0x30]
        push ecx
/*FIXUP push offset public_5ced30 @0x48a740*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ced30
/*FIXUP push offset public_5d263c @0x48a745*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d263c
        mov ecx, esi
        mov dword ptr ss : [esp+0x48], 0x3DCCCCCD
        mov dword ptr ss : [esp+0x4C], 0x3CD4FDF4
        mov dword ptr ss : [esp+0x50], 0
        mov dword ptr ss : [esp+0x3C], 0
        mov dword ptr ss : [esp+0x40], 0xBE560419
        mov dword ptr ss : [esp+0x44], 0
        call public_5a0d00
        push ebp
        push ebx
        push ebp
        push 0x4DD
        push 0x3FF33333
        push 0x3CF5C28F
        push 0x3E4AC083
        push ebx
        lea edx, ss:[esp+0x44]
        push edx
/*FIXUP push offset public_5d0410 @0x48a79e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0410
/*FIXUP push offset public_5d2630 @0x48a7a3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d2630
        mov ecx, esi
        mov dword ptr ds : [esi+0x354], eax
        mov dword ptr ss : [esp+0x50], 0xBDC8B439
        mov dword ptr ss : [esp+0x54], 0xBE3F7CEE
        mov dword ptr ss : [esp+0x58], 0
        call public_5a0e30
        public_48a7cd : nop
        test byte ptr ds : [public_671f7c], 4
        je public_48a87a
        push ebx
        push ebx
        push 0x337
        push ebx
        push ebx
        lea eax, ss:[esp+0x38]
        push eax
        lea ecx, ss:[esp+0x30]
        push ecx
/*FIXUP push offset public_5ced30 @0x48a7ed*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ced30
/*FIXUP push offset public_5d2620 @0x48a7f2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d2620
        mov ecx, esi
        mov dword ptr ss : [esp+0x48], 0x3DCCCCCD
        mov dword ptr ss : [esp+0x4C], 0x3CD4FDF4
        mov dword ptr ss : [esp+0x50], 0
        mov dword ptr ss : [esp+0x3C], 0x3E6B851F
        mov dword ptr ss : [esp+0x40], 0xBE560419
        mov dword ptr ss : [esp+0x44], 0
        call public_5a0d00
        push ebp
        push ebx
        push ebp
        push 0x622
        push 0x3FF33333
        push 0x3CF5C28F
        push 0x3E4AC083
        push ebx
        lea edx, ss:[esp+0x44]
        push edx
/*FIXUP push offset public_5d0410 @0x48a84b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0410
/*FIXUP push offset public_5d2614 @0x48a850*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d2614
        mov ecx, esi
        mov dword ptr ds : [esi+0x358], eax
        mov dword ptr ss : [esp+0x50], 0x3E072B02
        mov dword ptr ss : [esp+0x54], 0xBE3F7CEE
        mov dword ptr ss : [esp+0x58], 0
        call public_5a0e30
        public_48a87a : nop
        test byte ptr ds : [public_671f7c], 8
        je public_48a987
        push ebx
        push ebx
        push 0x409
        push ebx
        push ebx
        push ebx
        push ebx
        lea eax, ss:[esp+0x40]
        push eax
        push ebx
        lea ecx, ss:[esp+0x3C]
        push ecx
        push ebx
/*FIXUP push offset public_5ced30 @0x48a89e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ced30
        push ebx
/*FIXUP push offset public_5d01d0 @0x48a8a4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d01d0
/*FIXUP push offset public_5d2674 @0x48a8a9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d2674
        mov ecx, esi
        mov dword ptr ss : [esp+0x60], 0x3C9374BC
        mov dword ptr ss : [esp+0x64], 0x3C9374BC
        mov dword ptr ss : [esp+0x68], 0
        mov dword ptr ss : [esp+0x54], 0x3ECD4FDF
        mov dword ptr ss : [esp+0x58], 0x3E72B021
        mov dword ptr ss : [esp+0x5C], 0
        call public_5a0c90
        push ebx
        push ebx
        push ebx
        push ebx
        push ebx
        lea edx, ss:[esp+0x38]
        push edx
        mov dword ptr ds : [esi+0x330], eax
        lea eax, ss:[esp+0x30]
        push eax
/*FIXUP push offset public_5ced30 @0x48a8fa*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ced30
/*FIXUP push offset public_5d2608 @0x48a8ff*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d2608
        mov ecx, esi
        mov dword ptr ss : [esp+0x48], 0x3DCCCCCD
        mov dword ptr ss : [esp+0x4C], 0x3CD4FDF4
        mov dword ptr ss : [esp+0x50], 0
        mov dword ptr ss : [esp+0x3C], 0xBC449BA6
        mov dword ptr ss : [esp+0x40], 0xBE560419
        mov dword ptr ss : [esp+0x44], 0
        call public_5a0d00
        push ebp
        push ebx
        push ebp
        push 0x411
        push 0x3FF33333
        push 0x3CF5C28F
        push 0x3E47AE14
        push ebx
        lea ecx, ss:[esp+0x44]
        push ecx
/*FIXUP push offset public_5d0410 @0x48a958*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0410
/*FIXUP push offset public_5d25fc @0x48a95d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d25fc
        mov ecx, esi
        mov dword ptr ds : [esi+0x35C], eax
        mov dword ptr ss : [esp+0x50], 0xBDDF3B64
        mov dword ptr ss : [esp+0x54], 0xBE3F7CEE
        mov dword ptr ss : [esp+0x58], 0
        call public_5a0e30
        public_48a987 : nop
        cmp dword ptr ds : [esi+0x360], 4
        jne public_48ab73
        push ebx
        push ebx
        push 0x338
        push ebx
        push ebx
        lea edx, ss:[esp+0x38]
        push edx
        lea eax, ss:[esp+0x30]
        push eax
/*FIXUP push offset public_5ced30 @0x48a9a7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ced30
/*FIXUP push offset public_5d25ec @0x48a9ac*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d25ec
        mov ecx, esi
        mov dword ptr ss : [esp+0x48], 0x3E083127
        mov dword ptr ss : [esp+0x4C], 0x3CD4FDF4
        mov dword ptr ss : [esp+0x50], 0
        mov dword ptr ss : [esp+0x3C], 0xBE3C6A7F
        mov dword ptr ss : [esp+0x40], 0xBE560419
        mov dword ptr ss : [esp+0x44], 0
        call public_5a0d00
        push ebp
        push ebx
        push ebp
        push 0x51F
        push 0x3FF33333
        push 0x3CF5C28F
        push 0x3E851EB8
        push ebx
        lea ecx, ss:[esp+0x44]
        push ecx
/*FIXUP push offset public_5d0410 @0x48aa05*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0410
/*FIXUP push offset public_5d25dc @0x48aa0a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d25dc
        mov ecx, esi
        mov dword ptr ds : [esi+0x340], eax
        mov dword ptr ss : [esp+0x50], 0xBEA04189
        mov dword ptr ss : [esp+0x54], 0xBE3F7CEE
        mov dword ptr ss : [esp+0x58], 0
        call public_5a0e30
        push ebx
        push ebx
        push 0x63E
        push ebx
        push ebx
        lea edx, ss:[esp+0x38]
        push edx
        mov dword ptr ds : [esi+0x344], eax
        lea eax, ss:[esp+0x30]
        push eax
/*FIXUP push offset public_5ced30 @0x48aa4d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ced30
/*FIXUP push offset public_5d25cc @0x48aa52*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d25cc
        mov ecx, esi
        mov dword ptr ss : [esp+0x48], 0x3E083127
        mov dword ptr ss : [esp+0x4C], 0x3CD4FDF4
        mov dword ptr ss : [esp+0x50], 0
        mov dword ptr ss : [esp+0x3C], 0x3E3851EC
        mov dword ptr ss : [esp+0x40], 0xBE560419
        mov dword ptr ss : [esp+0x44], 0
        call public_5a0d00
        push ebp
        push ebx
        push ebp
        push 0x63D
        push 0x3FF33333
        push 0x3CF5C28F
        push 0x3E851EB8
        push ebx
        lea ecx, ss:[esp+0x44]
        push ecx
/*FIXUP push offset public_5d0410 @0x48aaab*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0410
/*FIXUP push offset public_5d25bc @0x48aab0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d25bc
        mov ecx, esi
        mov dword ptr ds : [esi+0x348], eax
        mov dword ptr ss : [esp+0x50], 0x3D4CCCCD
        mov dword ptr ss : [esp+0x54], 0xBE3F7CEE
        mov dword ptr ss : [esp+0x58], 0
        call public_5a0e30
        mov dword ptr ds : [esi+0x34C], eax
        mov edx, dword ptr ds : [public_671f78]
        push ebx
        push edx
        call public_5416c0
        add esp, 8
        cmp eax, ebx
        je public_48ab73
        add eax, 0xC
        cmp eax, ebx
        je public_48ab73
        mov eax, dword ptr ds : [eax+4]
        cmp eax, ebx
        je public_48ab73
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 3
        cmp cl, 3
        jne public_48ab73
        mov dword ptr ss : [esp+0x18], ebx
        mov dword ptr ss : [esp+0x1C], ebx
        lea edx, ss:[esp+0x18]
        push edx
        push eax
        mov dword ptr ss : [esp+0x4C], ebx
        call public_5472d0
        mov eax, dword ptr ss : [esp+0x20]
        add esp, 8
        cmp eax, ebx
        je public_48ab5d
        cmp word ptr ds : [eax], bx
        je public_48ab5d
        push eax
/*FIXUP push offset public_66fc60 @0x48ab35*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call dword ptr ds : [public_5c70b4]
        mov ecx, dword ptr ds : [esi+0x334]
        mov eax, dword ptr ds : [ecx]
        add esp, 8
        push ebx
/*FIXUP push offset public_66fc60 @0x48ab4c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        push 0x1D
        call dword ptr ds : [eax+0xA8]
        mov eax, dword ptr ss : [esp+0x18]
        public_48ab5d : nop
        cmp eax, ebx
        mov dword ptr ss : [esp+0x44], 0xFFFFFFFF
        je public_48ab73
        push eax
        call dword ptr ds : [public_5c71d8]
        add esp, 4
        public_48ab73 : nop
        push ebp
        lea ecx, ss:[esp+0x28]
        push ecx
        push 0x3EBD70A4
        push 0x3F451EB8
/*FIXUP push offset public_5d25a8 @0x48ab83*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d25a8
        mov ecx, esi
        mov dword ptr ss : [esp+0x38], 0xBEC7AE14
        mov dword ptr ss : [esp+0x3C], 0x3E8D4FDF
        mov dword ptr ss : [esp+0x40], 0xBFA4DD2F
        call public_5a10e0
        mov dword ptr ds : [esi+0x338], eax
        mov edx, dword ptr ds : [public_6119f8]
        push edx
/*FIXUP push offset public_66fc60 @0x48abb4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        mov ecx, offset public_671f98
        call public_41c970
        mov al, byte ptr ss : [esp+0x50]
        push 0xC
        mov byte ptr ss : [esp+0x34], al
        call public_5b7e84
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        add esp, 4
        mov dword ptr ss : [esp+0x34], eax
        mov dword ptr ss : [esp+0x38], ebx
        push 0x9CA4
        lea ecx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x48], ebp
        call dword ptr ds : [public_5c62b8]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov byte ptr ss : [esp+0x44], 2
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ss : [esp+0x34]
        mov ebp, dword ptr ds : [eax+4]
        lea edi, ds:[eax+4]
        push 0xC
        mov byte ptr ss : [esp+0x48], 3
        mov ebx, eax
        call public_5b7e84
        add esp, 4
        test ebp, ebp
        mov dword ptr ds : [eax], ebx
        jne public_48ac28
        mov ebp, eax
        public_48ac28 : nop
        mov dword ptr ds : [eax+4], ebp
        mov dword ptr ds : [edi], eax
        mov ecx, dword ptr ds : [eax+4]
        lea edi, ds:[eax+8]
        mov dword ptr ds : [ecx], eax
        mov dword ptr ss : [esp+0x14], edi
        mov dword ptr ss : [esp+0x18], edi
        test edi, edi
        mov ebx, dword ptr ss : [esp+0x10]
        mov byte ptr ss : [esp+0x44], 4
        je public_48ac53
        mov eax, dword ptr ds : [ebx]
        mov ecx, ebx
        call dword ptr ds : [eax+0x1C]
        mov dword ptr ds : [edi], eax
        public_48ac53 : nop
        mov ecx, dword ptr ss : [esp+0x38]
        inc ecx
        test ebx, ebx
        mov dword ptr ss : [esp+0x38], ecx
        mov byte ptr ss : [esp+0x44], 2
        je public_48ac6d
        mov edx, dword ptr ds : [ebx]
        push 1
        mov ecx, ebx
        call dword ptr ds : [edx]
        public_48ac6d : nop
        lea ecx, ss:[esp+0x24]
        mov byte ptr ss : [esp+0x44], 1
        call dword ptr ds : [public_5c62b4]
        push 0
        lea eax, ss:[esp+0x34]
        push eax
/*FIXUP push offset public_66fc60 @0x48ac83*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call dword ptr ds : [public_5c71c8]
        add esp, 4
        push eax
/*FIXUP push offset public_66fc60 @0x48ac92*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call public_57e2c0
        mov edi, dword ptr ds : [esi+0x338]
        add esp, 0x10
        push 0
        push 0
        mov ecx, edi
        call public_5798b0
        mov ecx, edi
        call public_57b370
        lea ecx, ss:[esp+0x30]
        push ecx
        mov ecx, edi
        call public_57b3e0
        mov edx, dword ptr ds : [esi]
        sub esp, 0xC
        mov dword ptr ss : [esp+0x30], 0
        mov ecx, dword ptr ss : [esp+0x30]
        mov eax, esp
        mov dword ptr ds : [eax], ecx
        mov dword ptr ss : [esp+0x34], 0x3D9BA5E3
        mov ecx, dword ptr ss : [esp+0x34]
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ss : [esp+0x38], 0xBFA4DD2F
        mov ecx, dword ptr ss : [esp+0x38]
        mov dword ptr ds : [eax+8], ecx
        mov ecx, esi
        call dword ptr ds : [edx+0x7C]
        mov edx, dword ptr ds : [esi]
        lea eax, ds:[esi+0x60]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x14]
        call public_45a460
        push 1
        call public_4424f0
        mov ecx, dword ptr ss : [esp+0x54]
        mov edx, dword ptr ds : [esi+4]
        add esp, 4
        push ecx
        push edx
        mov ecx, esi
        call public_4b5060
        test al, al
        mov dword ptr ss : [esp+0x44], 0xFFFFFFFF
        jne public_48ad84
        mov ebx, dword ptr ss : [esp+0x34]
        mov edi, dword ptr ds : [ebx]
        cmp edi, ebx
        je public_48ad77
        nop 
        lea esp, ss:[esp]
        public_48ad40 : nop
        mov esi, edi
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi]
        mov edi, dword ptr ds : [edi]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [esi+4]
        push 0
        lea ecx, ds:[esi+8]
        mov dword ptr ds : [edx+4], eax
        call public_46ea80
        push esi
        call public_5b7e1d
        mov ecx, dword ptr ss : [esp+0x3C]
        add esp, 4
        dec ecx
        cmp edi, ebx
        mov dword ptr ss : [esp+0x38], ecx
        jne public_48ad40
        mov ebx, dword ptr ss : [esp+0x34]
        public_48ad77 : nop
        push ebx
        call public_5b7e1d
        add esp, 4
        xor al, al
        jmp public_48add0
        public_48ad84 : nop
        mov eax, dword ptr ss : [esp+0x34]
        mov edi, dword ptr ds : [eax]
        cmp edi, eax
        mov ebx, eax
        je public_48adc5
        public_48ad90 : nop
        mov esi, edi
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi]
        mov edi, dword ptr ds : [edi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [eax+4], ecx
        lea ecx, ds:[esi+8]
        call public_45eeb0
        push esi
        call public_5b7e1d
        mov ecx, dword ptr ss : [esp+0x3C]
        add esp, 4
        dec ecx
        cmp edi, ebx
        mov dword ptr ss : [esp+0x38], ecx
        jne public_48ad90
        mov eax, dword ptr ss : [esp+0x34]
        public_48adc5 : nop
        push eax
        call public_5b7e1d
        add esp, 4
        mov al, 1
        public_48add0 : nop
        mov ecx, dword ptr ss : [esp+0x3C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        pop ebx
        add esp, 0x38
        ret 8
        UNREACHABLE_TRAP(0x48a4c0)
    }
}

#undef public_48a535
#undef public_48a551
#undef public_48a5c8
#undef public_48a5dc
#undef public_48a5e1
#undef public_48a5e8
#undef public_48a720
#undef public_48a7cd
#undef public_48a87a
#undef public_48a987
#undef public_48ab5d
#undef public_48ab73
#undef public_48ac28
#undef public_48ac53
#undef public_48ac6d
#undef public_48ad40
#undef public_48ad77
#undef public_48ad84
#undef public_48ad90
#undef public_48adc5
#undef public_48add0
