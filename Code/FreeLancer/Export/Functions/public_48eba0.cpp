#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43d570);
CLANG_FORWARD_PROC_SYMBOL(public_4975a0);
CLANG_FORWARD_PROC_SYMBOL(public_49a580);
CLANG_FORWARD_PROC_SYMBOL(public_49f0e0);
CLANG_FORWARD_PROC_SYMBOL(public_49f7a0);
CLANG_FORWARD_PROC_SYMBOL(public_4a0220);
CLANG_FORWARD_PROC_SYMBOL(public_4b5060);
CLANG_FORWARD_PROC_SYMBOL(public_4c4690);
CLANG_FORWARD_PROC_SYMBOL(public_4c4fb0);
CLANG_FORWARD_PROC_SYMBOL(public_5760d0);
CLANG_FORWARD_PROC_SYMBOL(public_5a0c90);
CLANG_FORWARD_PROC_SYMBOL(public_5a0d00);
CLANG_FORWARD_PROC_SYMBOL(public_5a0d60);
CLANG_FORWARD_PROC_SYMBOL(public_5a0db0);
CLANG_FORWARD_PROC_SYMBOL(public_5a0e30);
CLANG_FORWARD_PROC_SYMBOL(public_5a10e0);
CLANG_FORWARD_PROC_SYMBOL(public_5a17e0);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);

#define public_48ef6c _public_48ef6c
#define public_48f613 _public_48f613
#define public_48f6ef _public_48f6ef
#define public_48f7cb _public_48f7cb
#define public_48f8a7 _public_48f8a7
#define public_48f983 _public_48f983
#define public_48fa5f _public_48fa5f
#define public_48fb3b _public_48fb3b
#define public_48fc17 _public_48fc17
#define public_490262 _public_490262
#define public_4902db _public_4902db
#define public_490354 _public_490354
#define public_490522 _public_490522
#define public_4905c0 _public_4905c0
#define public_490980 _public_490980
#define public_490b52 _public_490b52
#define public_490bb3 _public_490bb3
#define public_490bc2 _public_490bc2
#define public_490bcc _public_490bcc

PROC_DECLARE(0x48eba0, internal_48eba0, public_48eba0);
extern "C" NAKED register_t __cdecl internal_48eba0()
{
    __asm
    {
        sub esp, 0x160
        push ebx
        push ebp
        push esi
        push edi
        mov ebp, ecx
        call public_43d570
        push 0
        mov byte ptr ss : [ebp+0xF24], al
        mov eax, dword ptr ss : [ebp]
/*FIXUP push offset public_5ce9c8 @0x48ebbc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ce9c8
        mov ecx, ebp
        call dword ptr ds : [eax+0x98]
        lea ecx, ss:[esp+0x2C]
        push ecx
        push 0
        push 0
        push 0
        push 1
        push 0
        push 0
        push 1
        push 0
        push 0
        push 0
        lea edx, ss:[esp+0x48]
        push edx
        push 0
        lea eax, ss:[esp+0x44]
        push eax
/*FIXUP push offset public_5d3b9c @0x48ebee*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d3b9c
/*FIXUP push offset public_5d3b88 @0x48ebf3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d3b88
        mov ecx, ebp
        mov dword ptr ss : [esp+0x6C], 0
        mov dword ptr ss : [esp+0x70], 0
        mov dword ptr ss : [esp+0x74], 0
        mov dword ptr ss : [esp+0x5C], 0
        mov dword ptr ss : [esp+0x60], 0
        mov dword ptr ss : [esp+0x64], 0
        mov dword ptr ss : [esp+0x50], 0x3E428F5C
        mov dword ptr ss : [esp+0x54], 0xBE6B851F
        mov dword ptr ss : [esp+0x58], 0xBE6147AE
        call public_5a0db0
        lea ecx, ss:[esp+0x10]
        push ecx
        push 0
        push 0
        push 0
        push 1
        push 0
        push 0
        push 1
        push 0
        push 0
        push 0
        lea edx, ss:[esp+0x48]
        push edx
        push 0
        mov dword ptr ss : [ebp+0xBB8], eax
        lea eax, ss:[esp+0x60]
        push eax
/*FIXUP push offset public_5d3b50 @0x48ec72*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d3b50
/*FIXUP push offset public_5d3b3c @0x48ec77*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d3b3c
        mov ecx, ebp
        mov dword ptr ss : [esp+0x50], 0
        mov dword ptr ss : [esp+0x54], 0
        mov dword ptr ss : [esp+0x58], 0
        mov dword ptr ss : [esp+0x5C], 0
        mov dword ptr ss : [esp+0x60], 0
        mov dword ptr ss : [esp+0x64], 0
        mov dword ptr ss : [esp+0x6C], 0x3F85C28F
        mov dword ptr ss : [esp+0x70], 0xBE6B851F
        mov dword ptr ss : [esp+0x74], 0xBE6147AE
        call public_5a0db0
        mov dword ptr ss : [esp+0x2C], 0x3EB33333
        mov edx, dword ptr ss : [esp+0x2C]
        lea ecx, ss:[ebp+0xB4]
        mov dword ptr ss : [ebp+0xBBC], eax
        mov dword ptr ss : [esp+0x30], 0x3EA8F5C3
        mov eax, dword ptr ss : [esp+0x30]
        mov dword ptr ss : [esp+0x34], 0
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ss : [esp+0x34]
        push 0
        push 0
        push 0x219C
        push 0
        push 0
        push 0
        push 0
        mov dword ptr ds : [ecx+4], eax
        lea eax, ss:[esp+0x2C]
        push eax
        push 0
        mov dword ptr ds : [ecx+8], edx
        lea ecx, ss:[esp+0x40]
        push ecx
        push 0
/*FIXUP push offset public_5ced30 @0x48ed22*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ced30
        push 0
/*FIXUP push offset public_5d3b00 @0x48ed29*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d3b00
/*FIXUP push offset public_5d3ae8 @0x48ed2e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d3ae8
        mov ecx, ebp
        mov dword ptr ss : [esp+0x4C], 0x3C9374BC
        mov dword ptr ss : [esp+0x50], 0x3C9374BC
        mov dword ptr ss : [esp+0x54], 0
        mov dword ptr ss : [esp+0x58], 0xBE851EB8
        mov dword ptr ss : [esp+0x5C], 0x3E970A3D
        mov dword ptr ss : [esp+0x60], 0
        call public_5a0c90
        push 0
        push 0
        push 0x416
        push 0
        push 0
        push 0
        push 0
        lea edx, ss:[esp+0x2C]
        push edx
        push 0
        mov dword ptr ss : [ebp+0x7EC], eax
        lea eax, ss:[esp+0x40]
        push eax
        push 0
/*FIXUP push offset public_5ced30 @0x48ed8f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ced30
        push 0
/*FIXUP push offset public_5d3ab4 @0x48ed96*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d3ab4
/*FIXUP push offset public_5d3aa0 @0x48ed9b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d3aa0
        mov ecx, ebp
        mov dword ptr ss : [esp+0x4C], 0x3C9374BC
        mov dword ptr ss : [esp+0x50], 0x3C9374BC
        mov dword ptr ss : [esp+0x54], 0
        mov dword ptr ss : [esp+0x58], 0xBE5B22D1
        mov dword ptr ss : [esp+0x5C], 0x3E970A3D
        mov dword ptr ss : [esp+0x60], 0
        call public_5a0c90
        push 0
        push 0
        push 0x409
        push 0
        push 0
        push 0
        push 0
        lea ecx, ss:[esp+0x2C]
        push ecx
        push 0
        lea edx, ss:[esp+0x40]
        push edx
        push 0
/*FIXUP push offset public_5ced30 @0x48edf6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ced30
        push 0
/*FIXUP push offset public_5d01d0 @0x48edfd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d01d0
/*FIXUP push offset public_5d3a8c @0x48ee02*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d3a8c
        mov ecx, ebp
        mov dword ptr ss : [ebp+0x7F0], eax
        mov dword ptr ss : [esp+0x4C], 0x3C9374BC
        mov dword ptr ss : [esp+0x50], 0x3C9374BC
        mov dword ptr ss : [esp+0x54], 0
        mov dword ptr ss : [esp+0x58], 0x3E841893
        mov dword ptr ss : [esp+0x5C], 0x3E970A3D
        mov dword ptr ss : [esp+0x60], 0
        call public_5a0c90
        mov dword ptr ss : [ebp+0x808], eax
        mov cl, byte ptr ss : [ebp+0xF24]
        test cl, cl
        je public_48ef6c
        mov bl, byte ptr ds : [eax+0x6C]
        push 1
        push 0
        push 1
        push 0x627
        push 0x40800000
        push 0x3D75C28F
        push 0x3FBD70A4
        and bl, 0xFC
        push 0
        mov byte ptr ds : [eax+0x6C], bl
        lea eax, ss:[esp+0x30]
        push eax
/*FIXUP push offset public_5d3a78 @0x48ee82*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d3a78
/*FIXUP push offset public_5d3a64 @0x48ee87*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d3a64
        mov ecx, ebp
        mov dword ptr ss : [esp+0x3C], 0xBF428F5C
        mov dword ptr ss : [esp+0x40], 0x3EF0A3D7
        mov dword ptr ss : [esp+0x44], 0
        call public_5a0e30
        push 0
        push 0
        push 0x326
        push 0
        push 0
        lea ecx, ss:[esp+0x24]
        push ecx
        lea edx, ss:[esp+0x34]
        push edx
/*FIXUP push offset public_5ced30 @0x48eec2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ced30
/*FIXUP push offset public_5d3a4c @0x48eec7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d3a4c
        mov ecx, ebp
        mov dword ptr ss : [ebp+0xF18], eax
        mov dword ptr ss : [esp+0x34], 0x3E1CAC08
        mov dword ptr ss : [esp+0x38], 0x3D1374BC
        mov dword ptr ss : [esp+0x3C], 0
        mov dword ptr ss : [esp+0x40], 0xBB83126F
        mov dword ptr ss : [esp+0x44], 0xBEE2D0E5
        mov dword ptr ss : [esp+0x48], 0
        call public_5a0d00
        push 1
        push 0
        push 1
        push 0x48E
        push 0x40400000
        push 0x3CF5C28F
        push 0x3FC147AE
        push 0
        mov dword ptr ss : [ebp+0xF1C], eax
        lea eax, ss:[esp+0x30]
        push eax
/*FIXUP push offset public_5d0410 @0x48ef30*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0410
/*FIXUP push offset public_5d3a38 @0x48ef35*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d3a38
        mov ecx, ebp
        mov dword ptr ss : [esp+0x3C], 0xBF428F5C
        mov dword ptr ss : [esp+0x40], 0xBED60419
        mov dword ptr ss : [esp+0x44], 0
        call public_5a0e30
        push 0xF
        lea ecx, ss:[ebp+0x32C]
        mov dword ptr ss : [ebp+0xF20], eax
        call public_5760d0
        public_48ef6c : nop
        push 0
        push 0
        push 0x4DE
        push 0
        push 0
        push 0
        push 0
        lea ecx, ss:[esp+0x2C]
        push ecx
        push 0
        lea edx, ss:[esp+0x40]
        push edx
        push 0
/*FIXUP push offset public_5ced30 @0x48ef8b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ced30
        push 0
/*FIXUP push offset public_5d3a0c @0x48ef92*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d3a0c
/*FIXUP push offset public_5d39f8 @0x48ef97*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d39f8
        mov ecx, ebp
        mov dword ptr ss : [esp+0x4C], 0x3C9374BC
        mov dword ptr ss : [esp+0x50], 0x3C9374BC
        mov dword ptr ss : [esp+0x54], 0
        mov dword ptr ss : [esp+0x58], 0x3E591687
        mov dword ptr ss : [esp+0x5C], 0x3E970A3D
        mov dword ptr ss : [esp+0x60], 0
        call public_5a0c90
        push 1
        push 0
        push 1
        push 0
        push 0x400CCCCD
        push 0x3D75C28F
        push 0x3F0C8B44
        push 0
        mov dword ptr ss : [ebp+0x804], eax
        lea eax, ss:[esp+0x30]
        push eax
/*FIXUP push offset public_5d01a8 @0x48eff7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d01a8
/*FIXUP push offset public_5d39e4 @0x48effc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d39e4
        mov ecx, ebp
        mov dword ptr ss : [esp+0x3C], 0xBE8C49BA
        mov dword ptr ss : [esp+0x40], 0xBE810625
        mov dword ptr ss : [esp+0x44], 0
        call public_5a0e30
        push 1
        push 0
        push 1
        push 0x4D2
        push 0x400CCCCD
        push 0x3D75C28F
        push 0x3F23D70A
        push 0
        lea ecx, ss:[esp+0x30]
        push ecx
/*FIXUP push offset public_5d0608 @0x48f041*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0608
/*FIXUP push offset public_5d39d4 @0x48f046*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d39d4
        mov ecx, ebp
        mov dword ptr ss : [ebp+0x8C8], eax
        mov dword ptr ss : [esp+0x3C], 0xBEA0C49C
        mov dword ptr ss : [esp+0x40], 0xBE6353F8
        mov dword ptr ss : [esp+0x44], 0
        call public_5a0e30
        push 1
/*FIXUP push offset public_679ba4 @0x48f072*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_679ba4
        mov dword ptr ss : [ebp+0x8CC], eax
        mov edx, dword ptr ds : [eax]
        push 0x33
        mov ecx, eax
        call dword ptr ds : [edx+0xA8]
        push 1
        push 0
        push 1
        push 0x573
        push 0x400CCCCD
        push 0x3D75C28F
        push 0x3F23D70A
        push 0
        lea eax, ss:[esp+0x30]
        mov dword ptr ss : [esp+0x30], 0xBEA0C49C
        mov dword ptr ss : [esp+0x34], 0xBE6353F8
        mov dword ptr ss : [esp+0x38], 0
        push eax
/*FIXUP push offset public_5d0608 @0x48f0c2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0608
/*FIXUP push offset public_5d39bc @0x48f0c7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d39bc
        mov ecx, ebp
        call public_5a0e30
        push 1
/*FIXUP push offset public_679ba4 @0x48f0d5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_679ba4
        mov dword ptr ss : [ebp+0x8D0], eax
        mov edx, dword ptr ds : [eax]
        push 0x33
        mov ecx, eax
        call dword ptr ds : [edx+0xA8]
        push 0
        push 0
        push 0x54E
        push 0
        push 0
        push 0
        push 0
        lea eax, ss:[esp+0x2C]
        push eax
        push 0
        lea ecx, ss:[esp+0x40]
        push ecx
        push 0
/*FIXUP push offset public_5d13a0 @0x48f10b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d13a0
        push 0
/*FIXUP push offset public_5d3980 @0x48f112*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d3980
/*FIXUP push offset public_5d396c @0x48f117*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d396c
        mov ecx, ebp
        mov dword ptr ss : [esp+0x4C], 0x3C9374BC
        mov dword ptr ss : [esp+0x50], 0x3C9374BC
        mov dword ptr ss : [esp+0x54], 0
        mov dword ptr ss : [esp+0x58], 0x3DBC6A7F
        mov dword ptr ss : [esp+0x5C], 0x3E970A3D
        mov dword ptr ss : [esp+0x60], 0
        call public_5a0c90
        push 0
        push 0
        push 0x3C7
        push 0
        push 0
        push 0
        push 0
        lea edx, ss:[esp+0x2C]
        push edx
        push 0
        mov dword ptr ss : [ebp+0xC14], eax
        lea eax, ss:[esp+0x40]
        push eax
        push 0
/*FIXUP push offset public_5d13a0 @0x48f178*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d13a0
        push 0
/*FIXUP push offset public_5d3934 @0x48f17f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d3934
/*FIXUP push offset public_5d391c @0x48f184*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d391c
        mov ecx, ebp
        mov dword ptr ss : [esp+0x4C], 0x3C9374BC
        mov dword ptr ss : [esp+0x50], 0x3C9374BC
        mov dword ptr ss : [esp+0x54], 0
        mov dword ptr ss : [esp+0x58], 0x3E0D4FDF
        mov dword ptr ss : [esp+0x5C], 0x3E970A3D
        mov dword ptr ss : [esp+0x60], 0
        call public_5a0c90
        push 0
        push 0
        push 0x4D3
        push 0
        push 0
        push 0
        push 0
        lea ecx, ss:[esp+0x2C]
        push ecx
        push 0
        lea edx, ss:[esp+0x40]
        mov dword ptr ss : [ebp+0xC18], eax
        mov dword ptr ss : [esp+0x34], 0x3C9374BC
        mov dword ptr ss : [esp+0x38], 0x3C9374BC
        mov dword ptr ss : [esp+0x3C], 0
        mov dword ptr ss : [esp+0x40], 0xBDBC6A7F
        mov dword ptr ss : [esp+0x44], 0x3E970A3D
        mov dword ptr ss : [esp+0x48], 0
        push edx
        push 0
/*FIXUP push offset public_5d13a0 @0x48f215*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d13a0
        push 0
/*FIXUP push offset public_5d38e0 @0x48f21c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d38e0
/*FIXUP push offset public_5d38c8 @0x48f221*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d38c8
        mov ecx, ebp
        call public_5a0c90
        push 0
        push 1
        mov dword ptr ss : [ebp+0x8D8], eax
        mov edx, dword ptr ds : [eax]
        push 0xC
        mov ecx, eax
        call dword ptr ds : [edx+0xA8]
        push 0
        push 0
        push 0x4D4
        push 0
        push 0
        push 0
        push 0
        lea eax, ss:[esp+0x2C]
        push eax
        push 0
        lea ecx, ss:[esp+0x40]
        push ecx
        push 0
/*FIXUP push offset public_5d13a0 @0x48f262*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d13a0
        push 0
/*FIXUP push offset public_5d3888 @0x48f269*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d3888
/*FIXUP push offset public_5d3870 @0x48f26e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d3870
        mov ecx, ebp
        mov dword ptr ss : [esp+0x4C], 0x3C9374BC
        mov dword ptr ss : [esp+0x50], 0x3C9374BC
        mov dword ptr ss : [esp+0x54], 0
        mov dword ptr ss : [esp+0x58], 0xBD3C6A7F
        mov dword ptr ss : [esp+0x5C], 0x3E970A3D
        mov dword ptr ss : [esp+0x60], 0
        call public_5a0c90
        push 0
        push 0
        push 0x521
        push 0
        push 0
        push 0
        push 0
        lea edx, ss:[esp+0x2C]
        push edx
        push 0
        mov dword ptr ss : [ebp+0x8DC], eax
        lea eax, ss:[esp+0x40]
        push eax
        push 0
/*FIXUP push offset public_5d13a0 @0x48f2cf*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d13a0
        push 0
/*FIXUP push offset public_5d383c @0x48f2d6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d383c
/*FIXUP push offset public_5d3828 @0x48f2db*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d3828
        mov ecx, ebp
        mov dword ptr ss : [esp+0x4C], 0x3C9374BC
        mov dword ptr ss : [esp+0x50], 0x3C9374BC
        mov dword ptr ss : [esp+0x54], 0
        mov dword ptr ss : [esp+0x58], 0
        mov dword ptr ss : [esp+0x5C], 0x3E970A3D
        mov dword ptr ss : [esp+0x60], 0
        call public_5a0c90
        push 0
        push 0
        push 0x54F
        push 0
        push 0
        push 0
        push 0
        lea ecx, ss:[esp+0x2C]
        mov dword ptr ss : [ebp+0xB4C], eax
        mov dword ptr ss : [esp+0x2C], 0x3C9374BC
        mov dword ptr ss : [esp+0x30], 0x3C9374BC
        mov dword ptr ss : [esp+0x34], 0
        mov dword ptr ss : [esp+0x38], 0x3D3C6A7F
        mov dword ptr ss : [esp+0x3C], 0x3E970A3D
        mov dword ptr ss : [esp+0x40], 0
        push ecx
        push 0
        lea edx, ss:[esp+0x40]
        push edx
        push 0
/*FIXUP push offset public_5d13a0 @0x48f36c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d13a0
        push 0
/*FIXUP push offset public_5d37e8 @0x48f373*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d37e8
/*FIXUP push offset public_5d37d0 @0x48f378*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d37d0
        mov ecx, ebp
        call public_5a0c90
        push 0
        push 0
        push 0x522
        push 0
        push 0
        push 0
        push 0
        mov dword ptr ss : [ebp+0xC58], eax
        lea eax, ss:[esp+0x2C]
        push eax
        push 0
        lea ecx, ss:[esp+0x40]
        push ecx
        push 0
/*FIXUP push offset public_5d13a0 @0x48f3a9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d13a0
        push 0
/*FIXUP push offset public_5d3794 @0x48f3b0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d3794
/*FIXUP push offset public_5d3780 @0x48f3b5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d3780
        mov ecx, ebp
        mov dword ptr ss : [esp+0x4C], 0x3C9374BC
        mov dword ptr ss : [esp+0x50], 0x3C9374BC
        mov dword ptr ss : [esp+0x54], 0
        mov dword ptr ss : [esp+0x58], 0xBC9374BC
        mov dword ptr ss : [esp+0x5C], 0x3E970A3D
        mov dword ptr ss : [esp+0x60], 0
        call public_5a0c90
        push 0
        push 0
        push 0x559
        push 0
        push 0
        push 0
        push 0
        lea edx, ss:[esp+0x2C]
        push edx
        push 0
        mov dword ptr ss : [ebp+0xB50], eax
        lea eax, ss:[esp+0x40]
        push eax
        push 0
/*FIXUP push offset public_5d13a0 @0x48f416*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d13a0
        push 0
/*FIXUP push offset public_5d3744 @0x48f41d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d3744
/*FIXUP push offset public_5d3734 @0x48f422*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d3734
        mov ecx, ebp
        mov dword ptr ss : [esp+0x4C], 0x3C9374BC
        mov dword ptr ss : [esp+0x50], 0x3C9374BC
        mov dword ptr ss : [esp+0x54], 0
        mov dword ptr ss : [esp+0x58], 0x3E24DD2F
        mov dword ptr ss : [esp+0x5C], 0x3E7BE76D
        mov dword ptr ss : [esp+0x60], 0
        call public_5a0c90
        push 0
        push 1
        mov dword ptr ss : [ebp+0xC5C], eax
        mov edx, dword ptr ds : [eax]
        push 1
        mov ecx, eax
        call dword ptr ds : [edx+0xA8]
        push 0
        push 0
        push 0x55A
        push 0
        push 0
        mov dword ptr ss : [esp+0x24], 0x3C9374BC
        mov dword ptr ss : [esp+0x28], 0x3C9374BC
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x30], 0x3E53F7CF
        mov dword ptr ss : [esp+0x34], 0x3E7BE76D
        mov dword ptr ss : [esp+0x38], 0
        push 0
        push 0
        lea eax, ss:[esp+0x2C]
        push eax
        push 0
        lea ecx, ss:[esp+0x40]
        push ecx
        push 0
/*FIXUP push offset public_5d13a0 @0x48f4c3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d13a0
        push 0
/*FIXUP push offset public_5d36f4 @0x48f4ca*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d36f4
/*FIXUP push offset public_5d36e0 @0x48f4cf*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d36e0
        mov ecx, ebp
        call public_5a0c90
        push 0
        push 1
        mov dword ptr ss : [ebp+0xC60], eax
        mov edx, dword ptr ds : [eax]
        push 1
        mov ecx, eax
        call dword ptr ds : [edx+0xA8]
        push 0
        push 0
        push 0x55B
        push 0
        push 0
        push 0
        push 0
        lea eax, ss:[esp+0x2C]
        push eax
        push 0
        lea ecx, ss:[esp+0x40]
        push ecx
        push 0
/*FIXUP push offset public_5d13a0 @0x48f510*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d13a0
        push 0
/*FIXUP push offset public_5d36a0 @0x48f517*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d36a0
/*FIXUP push offset public_5d3688 @0x48f51c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d3688
        mov ecx, ebp
        mov dword ptr ss : [esp+0x4C], 0x3C9374BC
        mov dword ptr ss : [esp+0x50], 0x3C9374BC
        mov dword ptr ss : [esp+0x54], 0
        mov dword ptr ss : [esp+0x58], 0x3E818937
        mov dword ptr ss : [esp+0x5C], 0x3E7BE76D
        mov dword ptr ss : [esp+0x60], 0
        call public_5a0c90
        push 0
        push 1
        mov dword ptr ss : [ebp+0xC64], eax
        mov edx, dword ptr ds : [eax]
        push 1
        mov ecx, eax
        call dword ptr ds : [edx+0xA8]
        push 0
        push 0
        push 0x4D5
        push 0
        push 0
        push 0
        push 0
        lea eax, ss:[esp+0x2C]
        push eax
        push 0
        lea ecx, ss:[esp+0x40]
        push ecx
        push 0
/*FIXUP push offset public_5ced30 @0x48f58d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ced30
        push 0
/*FIXUP push offset public_5d3654 @0x48f594*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d3654
/*FIXUP push offset public_5d3644 @0x48f599*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d3644
        mov ecx, ebp
        mov dword ptr ss : [esp+0x4C], 0x3CA3D70A
        mov dword ptr ss : [esp+0x50], 0x3CA3D70A
        mov dword ptr ss : [esp+0x54], 0
        mov dword ptr ss : [esp+0x58], 0x3E800000
        mov dword ptr ss : [esp+0x5C], 0x3E989375
        mov dword ptr ss : [esp+0x60], 0
        call public_5a0c90
        mov dword ptr ss : [ebp+0x8E0], eax
        mov edx, dword ptr ds : [public_5c6d90]
        mov ecx, dword ptr ds : [edx]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [eax+0x84]
        push eax
        push ecx
        call dword ptr ds : [edx+0xA0]
        mov esi, eax
        mov eax, dword ptr ds : [public_67209c]
        test eax, eax
        mov ecx, 0xC
        lea edi, ss:[esp+0x40]
        rep movsd
        jne public_48f613
        call public_5b73e0
        mov dword ptr ds : [public_67209c], eax
        public_48f613 : nop
        mov ecx, dword ptr ds : [eax]
        push 0x3FD9999A
        lea edx, ss:[esp+0x44]
        push edx
        lea edx, ss:[esp+0x48]
        push edx
        push eax
        call dword ptr ds : [ecx+0x10]
        mov eax, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x40]
        push edx
        mov edx, dword ptr ss : [ebp+0x8E0]
        mov edx, dword ptr ds : [edx+0x84]
        push edx
        push eax
        call dword ptr ds : [ecx+0x9C]
        push 0
        push 0
        push 0x4D6
        push 0
        push 0
        push 0
        push 0
        lea eax, ss:[esp+0x2C]
        push eax
        push 0
        lea ecx, ss:[esp+0x40]
        push ecx
        push 0
/*FIXUP push offset public_5ced30 @0x48f669*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ced30
        push 0
/*FIXUP push offset public_5d3610 @0x48f670*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d3610
/*FIXUP push offset public_5d3600 @0x48f675*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d3600
        mov ecx, ebp
        mov dword ptr ss : [esp+0x4C], 0x3CA3D70A
        mov dword ptr ss : [esp+0x50], 0x3CA3D70A
        mov dword ptr ss : [esp+0x54], 0
        mov dword ptr ss : [esp+0x58], 0x3E800000
        mov dword ptr ss : [esp+0x5C], 0x3E989375
        mov dword ptr ss : [esp+0x60], 0
        call public_5a0c90
        mov dword ptr ss : [ebp+0x8E4], eax
        mov edx, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [eax+0x84]
        mov ecx, dword ptr ds : [edx]
        mov edx, dword ptr ds : [ecx]
        push eax
        push ecx
        call dword ptr ds : [edx+0xA0]
        mov esi, eax
        mov eax, dword ptr ds : [public_67209c]
        test eax, eax
        mov ecx, 0xC
        lea edi, ss:[esp+0x40]
        rep movsd
        jne public_48f6ef
        call public_5b73e0
        mov dword ptr ds : [public_67209c], eax
        public_48f6ef : nop
        mov ecx, dword ptr ds : [eax]
        push 0x3FD9999A
        lea edx, ss:[esp+0x44]
        push edx
        lea edx, ss:[esp+0x48]
        push edx
        push eax
        call dword ptr ds : [ecx+0x10]
        mov eax, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x40]
        push edx
        mov edx, dword ptr ss : [ebp+0x8E4]
        mov edx, dword ptr ds : [edx+0x84]
        push edx
        push eax
        call dword ptr ds : [ecx+0x9C]
        push 0
        push 0
        push 0x4D7
        push 0
        push 0
        push 0
        push 0
        lea eax, ss:[esp+0x2C]
        push eax
        push 0
        lea ecx, ss:[esp+0x40]
        push ecx
        push 0
/*FIXUP push offset public_5ced30 @0x48f745*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ced30
        push 0
/*FIXUP push offset public_5d35c8 @0x48f74c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d35c8
/*FIXUP push offset public_5d35b0 @0x48f751*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d35b0
        mov ecx, ebp
        mov dword ptr ss : [esp+0x4C], 0x3CA3D70A
        mov dword ptr ss : [esp+0x50], 0x3CA3D70A
        mov dword ptr ss : [esp+0x54], 0
        mov dword ptr ss : [esp+0x58], 0xBF2E147B
        mov dword ptr ss : [esp+0x5C], 0x3E6978D5
        mov dword ptr ss : [esp+0x60], 0
        call public_5a0c90
        mov dword ptr ss : [ebp+0x7F4], eax
        mov edx, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [eax+0x84]
        mov ecx, dword ptr ds : [edx]
        mov edx, dword ptr ds : [ecx]
        push eax
        push ecx
        call dword ptr ds : [edx+0xA0]
        mov esi, eax
        mov eax, dword ptr ds : [public_67209c]
        test eax, eax
        mov ecx, 0xC
        lea edi, ss:[esp+0x40]
        rep movsd
        jne public_48f7cb
        call public_5b73e0
        mov dword ptr ds : [public_67209c], eax
        public_48f7cb : nop
        mov ecx, dword ptr ds : [eax]
        push 0x3FD9999A
        lea edx, ss:[esp+0x44]
        push edx
        lea edx, ss:[esp+0x48]
        push edx
        push eax
        call dword ptr ds : [ecx+0x10]
        mov eax, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x40]
        push edx
        mov edx, dword ptr ss : [ebp+0x7F4]
        mov edx, dword ptr ds : [edx+0x84]
        push edx
        push eax
        call dword ptr ds : [ecx+0x9C]
        push 0
        push 0
        push 0x56E
        push 0
        push 0
        push 0
        push 0
        lea eax, ss:[esp+0x2C]
        push eax
        push 0
        lea ecx, ss:[esp+0x40]
        push ecx
        push 0
/*FIXUP push offset public_5ced30 @0x48f821*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ced30
        push 0
/*FIXUP push offset public_5d3574 @0x48f828*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d3574
/*FIXUP push offset public_5d355c @0x48f82d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d355c
        mov ecx, ebp
        mov dword ptr ss : [esp+0x4C], 0x3CA3D70A
        mov dword ptr ss : [esp+0x50], 0x3CA3D70A
        mov dword ptr ss : [esp+0x54], 0
        mov dword ptr ss : [esp+0x58], 0xBF2E147B
        mov dword ptr ss : [esp+0x5C], 0x3E6978D5
        mov dword ptr ss : [esp+0x60], 0
        call public_5a0c90
        mov dword ptr ss : [ebp+0x7F8], eax
        mov edx, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [eax+0x84]
        mov ecx, dword ptr ds : [edx]
        mov edx, dword ptr ds : [ecx]
        push eax
        push ecx
        call dword ptr ds : [edx+0xA0]
        mov esi, eax
        mov eax, dword ptr ds : [public_67209c]
        test eax, eax
        mov ecx, 0xC
        lea edi, ss:[esp+0x40]
        rep movsd
        jne public_48f8a7
        call public_5b73e0
        mov dword ptr ds : [public_67209c], eax
        public_48f8a7 : nop
        mov ecx, dword ptr ds : [eax]
        push 0x3FD9999A
        lea edx, ss:[esp+0x44]
        push edx
        lea edx, ss:[esp+0x48]
        push edx
        push eax
        call dword ptr ds : [ecx+0x10]
        mov eax, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x40]
        push edx
        mov edx, dword ptr ss : [ebp+0x7F8]
        mov edx, dword ptr ds : [edx+0x84]
        push edx
        push eax
        call dword ptr ds : [ecx+0x9C]
        push 0
        push 0
        push 0x571
        push 0
        push 0
        push 0
        push 0
        lea eax, ss:[esp+0x2C]
        push eax
        push 0
        lea ecx, ss:[esp+0x40]
        push ecx
        push 0
/*FIXUP push offset public_5ced30 @0x48f8fd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ced30
        push 0
/*FIXUP push offset public_5d3520 @0x48f904*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d3520
/*FIXUP push offset public_5d3508 @0x48f909*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d3508
        mov ecx, ebp
        mov dword ptr ss : [esp+0x4C], 0x3CA3D70A
        mov dword ptr ss : [esp+0x50], 0x3CA3D70A
        mov dword ptr ss : [esp+0x54], 0
        mov dword ptr ss : [esp+0x58], 0xBF2E147B
        mov dword ptr ss : [esp+0x5C], 0x3E6978D5
        mov dword ptr ss : [esp+0x60], 0
        call public_5a0c90
        mov dword ptr ss : [ebp+0x7FC], eax
        mov edx, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [eax+0x84]
        mov ecx, dword ptr ds : [edx]
        mov edx, dword ptr ds : [ecx]
        push eax
        push ecx
        call dword ptr ds : [edx+0xA0]
        mov esi, eax
        mov eax, dword ptr ds : [public_67209c]
        test eax, eax
        mov ecx, 0xC
        lea edi, ss:[esp+0x40]
        rep movsd
        jne public_48f983
        call public_5b73e0
        mov dword ptr ds : [public_67209c], eax
        public_48f983 : nop
        mov ecx, dword ptr ds : [eax]
        push 0x3FD9999A
        lea edx, ss:[esp+0x44]
        push edx
        lea edx, ss:[esp+0x48]
        push edx
        push eax
        call dword ptr ds : [ecx+0x10]
        mov eax, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x40]
        push edx
        mov edx, dword ptr ss : [ebp+0x7FC]
        mov edx, dword ptr ds : [edx+0x84]
        push edx
        push eax
        call dword ptr ds : [ecx+0x9C]
        push 0
        push 0
        push 0x572
        push 0
        push 0
        push 0
        push 0
        lea eax, ss:[esp+0x2C]
        push eax
        push 0
        lea ecx, ss:[esp+0x40]
        push ecx
        push 0
/*FIXUP push offset public_5ced30 @0x48f9d9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ced30
        push 0
/*FIXUP push offset public_5d34cc @0x48f9e0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d34cc
/*FIXUP push offset public_5d34b0 @0x48f9e5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d34b0
        mov ecx, ebp
        mov dword ptr ss : [esp+0x4C], 0x3CA3D70A
        mov dword ptr ss : [esp+0x50], 0x3CA3D70A
        mov dword ptr ss : [esp+0x54], 0
        mov dword ptr ss : [esp+0x58], 0xBF2E147B
        mov dword ptr ss : [esp+0x5C], 0x3E6978D5
        mov dword ptr ss : [esp+0x60], 0
        call public_5a0c90
        mov dword ptr ss : [ebp+0x800], eax
        mov edx, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [eax+0x84]
        mov ecx, dword ptr ds : [edx]
        mov edx, dword ptr ds : [ecx]
        push eax
        push ecx
        call dword ptr ds : [edx+0xA0]
        mov esi, eax
        mov eax, dword ptr ds : [public_67209c]
        test eax, eax
        mov ecx, 0xC
        lea edi, ss:[esp+0x40]
        rep movsd
        jne public_48fa5f
        call public_5b73e0
        mov dword ptr ds : [public_67209c], eax
        public_48fa5f : nop
        mov ecx, dword ptr ds : [eax]
        push 0x3FD9999A
        lea edx, ss:[esp+0x44]
        push edx
        lea edx, ss:[esp+0x48]
        push edx
        push eax
        call dword ptr ds : [ecx+0x10]
        mov eax, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x40]
        push edx
        mov edx, dword ptr ss : [ebp+0x800]
        mov edx, dword ptr ds : [edx+0x84]
        push edx
        push eax
        call dword ptr ds : [ecx+0x9C]
        push 0
        push 0
        push 0x4D9
        push 0
        push 0
        push 0
        push 0
        lea eax, ss:[esp+0x2C]
        push eax
        push 0
        lea ecx, ss:[esp+0x40]
        push ecx
        push 0
/*FIXUP push offset public_5ced30 @0x48fab5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ced30
        push 0
/*FIXUP push offset public_5d347c @0x48fabc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d347c
/*FIXUP push offset public_5d3470 @0x48fac1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d3470
        mov ecx, ebp
        mov dword ptr ss : [esp+0x4C], 0x3CA3D70A
        mov dword ptr ss : [esp+0x50], 0x3CA3D70A
        mov dword ptr ss : [esp+0x54], 0
        mov dword ptr ss : [esp+0x58], 0x3E800000
        mov dword ptr ss : [esp+0x5C], 0x3E989375
        mov dword ptr ss : [esp+0x60], 0
        call public_5a0c90
        mov dword ptr ss : [ebp+0x8E8], eax
        mov edx, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [eax+0x84]
        mov ecx, dword ptr ds : [edx]
        mov edx, dword ptr ds : [ecx]
        push eax
        push ecx
        call dword ptr ds : [edx+0xA0]
        mov esi, eax
        mov eax, dword ptr ds : [public_67209c]
        test eax, eax
        mov ecx, 0xC
        lea edi, ss:[esp+0x40]
        rep movsd
        jne public_48fb3b
        call public_5b73e0
        mov dword ptr ds : [public_67209c], eax
        public_48fb3b : nop
        mov ecx, dword ptr ds : [eax]
        push 0x3FD9999A
        lea edx, ss:[esp+0x44]
        push edx
        lea edx, ss:[esp+0x48]
        push edx
        push eax
        call dword ptr ds : [ecx+0x10]
        mov eax, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x40]
        push edx
        mov edx, dword ptr ss : [ebp+0x8E8]
        mov edx, dword ptr ds : [edx+0x84]
        push edx
        push eax
        call dword ptr ds : [ecx+0x9C]
        push 0
        push 0
        push 0x4D8
        push 0
        push 0
        push 0
        push 0
        lea eax, ss:[esp+0x2C]
        push eax
        push 0
        lea ecx, ss:[esp+0x40]
        push ecx
        push 0
/*FIXUP push offset public_5ced30 @0x48fb91*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ced30
        push 0
/*FIXUP push offset public_5d3430 @0x48fb98*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d3430
/*FIXUP push offset public_5d3414 @0x48fb9d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d3414
        mov ecx, ebp
        mov dword ptr ss : [esp+0x4C], 0x3CA3D70A
        mov dword ptr ss : [esp+0x50], 0x3CA3D70A
        mov dword ptr ss : [esp+0x54], 0
        mov dword ptr ss : [esp+0x58], 0xBF2E147B
        mov dword ptr ss : [esp+0x5C], 0x3E6978D5
        mov dword ptr ss : [esp+0x60], 0
        call public_5a0c90
        mov dword ptr ss : [ebp+0x8EC], eax
        mov edx, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [eax+0x84]
        mov ecx, dword ptr ds : [edx]
        mov edx, dword ptr ds : [ecx]
        push eax
        push ecx
        call dword ptr ds : [edx+0xA0]
        mov esi, eax
        mov eax, dword ptr ds : [public_67209c]
        test eax, eax
        mov ecx, 0xC
        lea edi, ss:[esp+0x40]
        rep movsd
        jne public_48fc17
        call public_5b73e0
        mov dword ptr ds : [public_67209c], eax
        public_48fc17 : nop
        mov ecx, dword ptr ds : [eax]
        push 0x3FD9999A
        lea edx, ss:[esp+0x44]
        push edx
        lea edx, ss:[esp+0x48]
        push edx
        push eax
        call dword ptr ds : [ecx+0x10]
        mov eax, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x40]
        push edx
        mov edx, dword ptr ss : [ebp+0x8EC]
        mov edx, dword ptr ds : [edx+0x84]
        push edx
        push eax
        call dword ptr ds : [ecx+0x9C]
        fld dword ptr ds : [public_5d2ed4]
        fadd dword ptr ds : [public_5d3410]
        push 1
        lea eax, ss:[esp+0x14]
        push eax
        push 0x3EA8F5C3
        push 0x3E8A3D71
        fstp dword ptr ss : [esp+0x20]
/*FIXUP push offset public_5d3400 @0x48fc6f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d3400
        mov ecx, ebp
        mov dword ptr ss : [esp+0x28], 0xBD75C28F
        mov dword ptr ss : [esp+0x2C], 0
        call public_5a10e0
        push 1
        lea ecx, ss:[esp+0x14]
        push ecx
        mov dword ptr ss : [ebp+0x8F4], eax
        mov dl, byte ptr ds : [eax+0x6C]
        push 0x3ED1EB85
        mov bl, 0xFD
        push 0x3EDC28F6
        and dl, bl
/*FIXUP push offset public_5d33f0 @0x48fca9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d33f0
        mov ecx, ebp
        mov byte ptr ds : [eax+0x6C], dl
        mov dword ptr ss : [esp+0x24], 0x3ECCCCCD
        mov dword ptr ss : [esp+0x28], 0xBCA3D70A
        mov dword ptr ss : [esp+0x2C], 0
        call public_5a10e0
        push 1
        xor esi, esi
        push esi
        push 1
        push esi
        push 0x40066666
        mov dword ptr ss : [ebp+0xF38], eax
        mov cl, byte ptr ds : [eax+0x6C]
        push 0x3CF5C28F
        push 0x3EA3D70A
        and cl, bl
        mov byte ptr ds : [eax+0x6C], cl
        fld dword ptr ds : [public_5d2ed4]
        fadd dword ptr ds : [public_5d2ac0]
        push esi
        lea edx, ss:[esp+0x30]
        push edx
/*FIXUP push offset public_5d0608 @0x48fd07*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0608
        fstp dword ptr ss : [esp+0x38]
/*FIXUP push offset public_5d33e0 @0x48fd10*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d33e0
        mov ecx, ebp
        mov dword ptr ss : [esp+0x40], 0x3E83126F
        mov dword ptr ss : [esp+0x44], 0
        call public_5a0e30
        mov dword ptr ss : [ebp+0x8F0], eax
        fld dword ptr ds : [public_5d2ed8]
        fsub dword ptr ds : [public_5d33dc]
        mov dword ptr ss : [esp+0x10], 0x3E158106
        mov dword ptr ss : [esp+0x14], 0x3CD4FDF4
        mov dword ptr ss : [esp+0x18], esi
        fstp dword ptr ss : [esp+0x1C]
        push esi
        push esi
        push 0x327
        push esi
        push esi
        lea eax, ss:[esp+0x24]
        push eax
        lea ecx, ss:[esp+0x34]
        push ecx
/*FIXUP push offset public_5ced30 @0x48fd69*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ced30
/*FIXUP push offset public_5d33bc @0x48fd6e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d33bc
        mov ecx, ebp
        mov dword ptr ss : [esp+0x44], 0xBE72B021
        mov dword ptr ss : [esp+0x48], esi
        call public_5a0d00
        push 1
        push esi
        push 1
        push 0x219D
        push 0x3FF33333
        push 0x3CF5C28F
        push 0x3E9374BC
        push esi
        mov dword ptr ss : [ebp+0x8FC], eax
        fld dword ptr ds : [public_5d2ed8]
        fsub dword ptr ds : [public_5d33b8]
        lea edx, ss:[esp+0x30]
        push edx
/*FIXUP push offset public_5d0410 @0x48fdb7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0410
        fstp dword ptr ss : [esp+0x38]
/*FIXUP push offset public_5d339c @0x48fdc0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d339c
        mov ecx, ebp
        mov dword ptr ss : [esp+0x40], 0xBE560419
        mov dword ptr ss : [esp+0x44], esi
        call public_5a0e30
        push esi
        push esi
        push 0x328
        push esi
        push esi
        mov dword ptr ss : [ebp+0x900], eax
        fld dword ptr ds : [public_5d2ed4]
        fadd dword ptr ds : [public_5d3398]
        lea eax, ss:[esp+0x24]
        push eax
        lea ecx, ss:[esp+0x34]
        push ecx
/*FIXUP push offset public_5ced30 @0x48fdfd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ced30
        fstp dword ptr ss : [esp+0x3C]
/*FIXUP push offset public_5d337c @0x48fe06*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d337c
        mov ecx, ebp
        mov dword ptr ss : [esp+0x34], 0x3E083127
        mov dword ptr ss : [esp+0x38], 0x3CD4FDF4
        mov dword ptr ss : [esp+0x3C], esi
        mov dword ptr ss : [esp+0x44], 0xBE6B851F
        mov dword ptr ss : [esp+0x48], esi
        call public_5a0d00
        push 1
        push esi
        push 1
        push 0x4DA
        push 0x3FF33333
        push 0x3CF5C28F
        push 0x3E883127
        push esi
        mov dword ptr ss : [ebp+0x904], eax
        fld dword ptr ds : [public_5d2ed4]
        fadd dword ptr ds : [public_5d3378]
        lea edx, ss:[esp+0x30]
        push edx
/*FIXUP push offset public_5d0410 @0x48fe63*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0410
        fstp dword ptr ss : [esp+0x38]
/*FIXUP push offset public_5d3360 @0x48fe6c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d3360
        mov ecx, ebp
        mov dword ptr ss : [esp+0x40], 0xBE52F1AA
        mov dword ptr ss : [esp+0x44], esi
        call public_5a0e30
        mov dword ptr ss : [ebp+0x908], eax
        mov ecx, dword ptr ss : [ebp+0x904]
        mov eax, dword ptr ds : [ecx]
        push esi
        push 1
        push 1
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ss : [ebp+0x908]
        mov edx, dword ptr ds : [ecx]
        push esi
        push 1
        push 1
        call dword ptr ds : [edx+0xA8]
        fld dword ptr ds : [public_5d2ed4]
        fadd dword ptr ds : [public_5d335c]
        push esi
        push esi
        push 0x329
        push esi
        push esi
        lea eax, ss:[esp+0x24]
        push eax
        lea ecx, ss:[esp+0x34]
        push ecx
/*FIXUP push offset public_5ced30 @0x48fecf*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ced30
        fstp dword ptr ss : [esp+0x3C]
/*FIXUP push offset public_5d3344 @0x48fed8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d3344
        mov ecx, ebp
        mov dword ptr ss : [esp+0x34], 0x3D89374C
        mov dword ptr ss : [esp+0x38], 0x3CD4FDF4
        mov dword ptr ss : [esp+0x3C], esi
        mov dword ptr ss : [esp+0x44], 0xBE6B851F
        mov dword ptr ss : [esp+0x48], esi
        call public_5a0d00
        push 1
        push esi
        push 1
        push 0x4DC
        push 0x3FF33333
        push 0x3CF5C28F
        push 0x3E072B02
        push esi
        mov dword ptr ss : [ebp+0xAC0], eax
        fld dword ptr ds : [public_5d2ed4]
        fadd dword ptr ds : [public_5d3340]
        lea edx, ss:[esp+0x30]
        push edx
/*FIXUP push offset public_5d0410 @0x48ff35*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0410
        fstp dword ptr ss : [esp+0x38]
/*FIXUP push offset public_5d332c @0x48ff3e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d332c
        mov ecx, ebp
        mov dword ptr ss : [esp+0x40], 0xBE52F1AA
        mov dword ptr ss : [esp+0x44], esi
        call public_5a0e30
        push esi
        push esi
        push 0x32A
        push esi
        push esi
        mov dword ptr ss : [ebp+0xAC4], eax
        fld dword ptr ds : [public_5d2ed4]
        fadd dword ptr ds : [public_5d3328]
        lea eax, ss:[esp+0x24]
        push eax
        lea ecx, ss:[esp+0x34]
        push ecx
/*FIXUP push offset public_5ced30 @0x48ff7b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ced30
        fstp dword ptr ss : [esp+0x3C]
/*FIXUP push offset public_5d3314 @0x48ff84*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d3314
        mov ecx, ebp
        mov dword ptr ss : [esp+0x34], 0x3D89374C
        mov dword ptr ss : [esp+0x38], 0x3CD4FDF4
        mov dword ptr ss : [esp+0x3C], esi
        mov dword ptr ss : [esp+0x44], 0xBE6B851F
        mov dword ptr ss : [esp+0x48], esi
        call public_5a0d00
        mov dword ptr ss : [ebp+0xAC8], eax
        fld dword ptr ds : [public_5d2ed4]
        fadd dword ptr ds : [public_5d3310]
        push 1
        push esi
        push 1
        push 0x4DD
        push 0x3FF33333
        push 0x3CF5C28F
        push 0x3E072B02
        push esi
        lea edx, ss:[esp+0x30]
        push edx
/*FIXUP push offset public_5d0410 @0x48ffe1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0410
        fstp dword ptr ss : [esp+0x38]
/*FIXUP push offset public_5d32fc @0x48ffea*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d32fc
        mov ecx, ebp
        mov dword ptr ss : [esp+0x40], 0xBE52F1AA
        mov dword ptr ss : [esp+0x44], esi
        call public_5a0e30
        mov ecx, dword ptr ss : [ebp+0xAC0]
        push esi
        push 1
        mov dword ptr ss : [ebp+0xACC], eax
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ss : [ebp+0xAC4]
        mov edx, dword ptr ds : [ecx]
        push esi
        push 1
        push 1
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ss : [ebp+0xAC8]
        mov eax, dword ptr ds : [ecx]
        push esi
        push 1
        push 1
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ss : [ebp+0xACC]
        mov edx, dword ptr ds : [ecx]
        push esi
        push 1
        push 1
        call dword ptr ds : [edx+0xA8]
        lea eax, ss:[esp+0x10]
        push eax
        push esi
        push esi
        push esi
        push 1
        push esi
        push esi
        push 1
        push esi
        push esi
        push esi
        lea ecx, ss:[esp+0x48]
        push ecx
        push esi
        lea edx, ss:[esp+0x60]
        push edx
/*FIXUP push offset public_5d32c4 @0x490070*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d32c4
/*FIXUP push offset public_5d32b0 @0x490075*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d32b0
        mov ecx, ebp
        mov dword ptr ss : [esp+0x50], esi
        mov dword ptr ss : [esp+0x54], esi
        mov dword ptr ss : [esp+0x58], esi
        mov dword ptr ss : [esp+0x5C], esi
        mov dword ptr ss : [esp+0x60], esi
        mov dword ptr ss : [esp+0x64], esi
        mov dword ptr ss : [esp+0x6C], esi
        mov dword ptr ss : [esp+0x70], esi
        mov dword ptr ss : [esp+0x74], esi
        call public_5a0db0
        push esi
        push 1
        mov dword ptr ss : [ebp+0xAD0], eax
        mov edx, dword ptr ds : [eax]
        push 1
        mov ecx, eax
        call dword ptr ds : [edx+0xA8]
        mov dword ptr ss : [esp+0x10], 0x3E158106
        fld dword ptr ds : [public_5d2ed8]
        push esi
        fsub dword ptr ds : [public_5d32ac]
        push esi
        push esi
        push esi
        lea eax, ss:[esp+0x20]
        push eax
        lea ecx, ss:[esp+0x30]
        push ecx
        fstp dword ptr ss : [esp+0x34]
/*FIXUP push offset public_5d3294 @0x4900e0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d3294
        mov ecx, ebp
        mov dword ptr ss : [esp+0x30], 0x3D8B4396
        mov dword ptr ss : [esp+0x34], esi
        mov dword ptr ss : [esp+0x3C], 0x3E395810
        mov dword ptr ss : [esp+0x40], esi
        call public_5a0d60
        push esi
        push esi
        push esi
        mov dword ptr ss : [ebp+0xAD4], eax
        fld dword ptr ds : [public_5d2ed8]
        fsub dword ptr ds : [public_5d32ac]
        push esi
        lea edx, ss:[esp+0x20]
        push edx
        lea eax, ss:[esp+0x30]
        push eax
        fstp dword ptr ss : [esp+0x34]
/*FIXUP push offset public_5d327c @0x490128*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d327c
        mov ecx, ebp
        mov dword ptr ss : [esp+0x2C], 0x3E158106
        mov dword ptr ss : [esp+0x30], 0x3D8B4396
        mov dword ptr ss : [esp+0x34], esi
        mov dword ptr ss : [esp+0x3C], 0x3D3C6A7F
        mov dword ptr ss : [esp+0x40], esi
        call public_5a0d60
        push esi
        push esi
        push esi
        push esi
        mov dword ptr ss : [ebp+0xAD8], eax
        fld dword ptr ds : [public_5d2ed8]
        fsub dword ptr ds : [public_5d32ac]
        lea ecx, ss:[esp+0x20]
        push ecx
        lea edx, ss:[esp+0x30]
        push edx
        fstp dword ptr ss : [esp+0x34]
/*FIXUP push offset public_5d3264 @0x490178*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d3264
        mov ecx, ebp
        mov dword ptr ss : [esp+0x2C], 0x3E158106
        mov dword ptr ss : [esp+0x30], 0x3D8B4396
        mov dword ptr ss : [esp+0x34], esi
        mov dword ptr ss : [esp+0x3C], 0xBDB645A2
        mov dword ptr ss : [esp+0x40], esi
        call public_5a0d60
        push esi
        push 3
        push 5
        push esi
        mov dword ptr ss : [ebp+0xADC], eax
        fld dword ptr ds : [public_5d2ed8]
        fadd dword ptr ds : [public_5d3260]
        push 0x3E91EB85
        push 0x3C9BA5E3
        lea eax, ss:[esp+0x28]
        push eax
        fstp dword ptr ss : [esp+0x2C]
/*FIXUP push offset public_5d3240 @0x4901cf*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d3240
        mov ecx, ebp
        mov dword ptr ss : [esp+0x34], 0xBD6D9168
        mov dword ptr ss : [esp+0x38], esi
        call public_5a17e0
        mov dword ptr ss : [ebp+0xAE0], eax
        fld dword ptr ds : [public_5d2ed8]
        fsub dword ptr ds : [public_5d323c]
        push 1
        push esi
        push esi
        push esi
        push 0x3FB33333
        push 0x3CF5C28F
        push 0x3E91EB85
        push esi
        lea ecx, ss:[esp+0x30]
        push ecx
/*FIXUP push offset public_5d29f8 @0x490213*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d29f8
        fstp dword ptr ss : [esp+0x38]
/*FIXUP push offset public_5d3220 @0x49021c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d3220
        mov ecx, ebp
        mov dword ptr ss : [esp+0x40], 0x3E808313
        mov dword ptr ss : [esp+0x44], esi
        call public_5a0e30
        push 5
        push esi
        mov dword ptr ss : [ebp+0xAE4], eax
        mov edx, dword ptr ds : [eax]
        push 0x22
        mov ecx, eax
        call dword ptr ds : [edx+0xA8]
        mov eax, dword ptr ss : [ebp+0xAE4]
        mov eax, dword ptr ds : [eax+0x334]
        cmp byte ptr ds : [eax+0x30], 1
        je public_490262
        mov byte ptr ds : [eax+0x30], 1
        mov dword ptr ds : [eax+0x28], esi
        public_490262 : nop
        fld dword ptr ds : [public_5d2ed8]
        push 1
        fsub dword ptr ds : [public_5d323c]
        push esi
        push esi
        push esi
        push 0x3FB33333
        push 0x3CF5C28F
        push 0x3E91EB85
        push esi
        lea ecx, ss:[esp+0x30]
        push ecx
/*FIXUP push offset public_5d29f8 @0x490288*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d29f8
        fstp dword ptr ss : [esp+0x38]
/*FIXUP push offset public_5d3204 @0x490291*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d3204
        mov ecx, ebp
        mov dword ptr ss : [esp+0x40], 0x3DED9168
        mov dword ptr ss : [esp+0x44], 0
        call public_5a0e30
        push 5
        push esi
        mov dword ptr ss : [ebp+0xAE8], eax
        mov edx, dword ptr ds : [eax]
        push 0x22
        mov ecx, eax
        call dword ptr ds : [edx+0xA8]
        mov eax, dword ptr ss : [ebp+0xAE8]
        mov eax, dword ptr ds : [eax+0x334]
        cmp byte ptr ds : [eax+0x30], 1
        je public_4902db
        mov byte ptr ds : [eax+0x30], 1
        mov dword ptr ds : [eax+0x28], esi
        public_4902db : nop
        fld dword ptr ds : [public_5d2ed8]
        push 1
        fsub dword ptr ds : [public_5d323c]
        push esi
        push esi
        push esi
        push 0x3FB33333
        push 0x3CF5C28F
        push 0x3E91EB85
        push esi
        lea ecx, ss:[esp+0x30]
        push ecx
/*FIXUP push offset public_5d29f8 @0x490301*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d29f8
        fstp dword ptr ss : [esp+0x38]
/*FIXUP push offset public_5d31e8 @0x49030a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d31e8
        mov ecx, ebp
        mov dword ptr ss : [esp+0x40], 0xBC9BA5E4
        mov dword ptr ss : [esp+0x44], 0
        call public_5a0e30
        push 5
        push esi
        mov dword ptr ss : [ebp+0xAEC], eax
        mov edx, dword ptr ds : [eax]
        push 0x22
        mov ecx, eax
        call dword ptr ds : [edx+0xA8]
        mov eax, dword ptr ss : [ebp+0xAEC]
        mov eax, dword ptr ds : [eax+0x334]
        cmp byte ptr ds : [eax+0x30], 1
        je public_490354
        mov byte ptr ds : [eax+0x30], 1
        mov dword ptr ds : [eax+0x28], esi
        public_490354 : nop
        push 1
        push esi
        push esi
        push 0x4E1
        push 0x3FF33333
        push 0x3CF5C28F
        push 0x3E072B02
        push esi
        lea ecx, ss:[esp+0x30]
        push ecx
/*FIXUP push offset public_5d01a8 @0x490372*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d01a8
/*FIXUP push offset public_5d31d4 @0x490377*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d31d4
        mov ecx, ebp
        mov dword ptr ss : [esp+0x3C], 0xBD6147AE
        mov dword ptr ss : [esp+0x40], 0xBDB851EC
        mov dword ptr ss : [esp+0x44], 0
        call public_5a0e30
        push esi
        push 1
        mov dword ptr ss : [ebp+0xAF8], eax
        mov edx, dword ptr ds : [eax]
        push 1
        mov ecx, eax
        call dword ptr ds : [edx+0xA8]
        push 1
        push esi
        push esi
        push 0x4E2
        push 0x3FF33333
        push 0x3CF5C28F
        push 0x3E072B02
        push esi
        lea eax, ss:[esp+0x30]
        push eax
/*FIXUP push offset public_5d01a8 @0x4903ce*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d01a8
/*FIXUP push offset public_5d31c0 @0x4903d3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d31c0
        mov ecx, ebp
        mov dword ptr ss : [esp+0x3C], 0xBE7AE148
        mov dword ptr ss : [esp+0x40], 0xBDFBE76D
        mov dword ptr ss : [esp+0x44], 0
        call public_5a0e30
        push esi
        push 1
        mov dword ptr ss : [ebp+0xAFC], eax
        mov edx, dword ptr ds : [eax]
        push 1
        mov ecx, eax
        call dword ptr ds : [edx+0xA8]
        push 1
        push esi
        push esi
        push 0x4E3
        push 0x3FF33333
        push 0x3CF5C28F
        push 0x3E072B02
        push esi
        lea eax, ss:[esp+0x30]
        push eax
/*FIXUP push offset public_5d01a8 @0x49042a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d01a8
/*FIXUP push offset public_5d31ac @0x49042f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d31ac
        mov ecx, ebp
        mov dword ptr ss : [esp+0x3C], 0x3BA3D70A
        mov dword ptr ss : [esp+0x40], 0x3DF7CED9
        mov dword ptr ss : [esp+0x44], 0
        call public_5a0e30
        push esi
        push 1
        mov dword ptr ss : [ebp+0xB00], eax
        mov edx, dword ptr ds : [eax]
        push 1
        mov ecx, eax
        call dword ptr ds : [edx+0xA8]
        push 1
        push esi
        push esi
        push 0x4E4
        push 0x3FF33333
        mov dword ptr ss : [esp+0x24], 0x3D851EB8
        mov dword ptr ss : [esp+0x28], 0xBE19999A
        mov dword ptr ss : [esp+0x2C], 0
        push 0x3CF5C28F
        push 0x3E072B02
        push esi
        lea eax, ss:[esp+0x30]
        push eax
/*FIXUP push offset public_5d01a8 @0x49049e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d01a8
/*FIXUP push offset public_5d3194 @0x4904a3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d3194
        mov ecx, ebp
        call public_5a0e30
        push esi
        push 1
        mov dword ptr ss : [ebp+0xB04], eax
        mov edx, dword ptr ds : [eax]
        push 1
        mov ecx, eax
        call dword ptr ds : [edx+0xA8]
        push 1
        push esi
        push 1
        push esi
        push 0x3FC00000
        push 0x3CF5C28F
        push 0x3F0C0831
        push esi
        lea eax, ss:[esp+0x30]
        push eax
/*FIXUP push offset public_5d0608 @0x4904df*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0608
/*FIXUP push offset public_5d3180 @0x4904e4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d3180
        mov ecx, ebp
        mov dword ptr ss : [esp+0x3C], 0xBE8C49BA
        mov dword ptr ss : [esp+0x40], 0x3E883127
        mov dword ptr ss : [esp+0x44], 0
        call public_5a0e30
        mov ebx, dword ptr ds : [public_5c71ec]
        lea ecx, ss:[ebp+0xB08]
        mov dword ptr ss : [ebp+0xB54], eax
        mov dword ptr ss : [esp+0x28], esi
        mov dword ptr ss : [esp+0x38], ecx
        public_490522 : nop
        lea edi, ds:[esi+0x506]
        lea edx, ds:[edi-0x4C5]
        push edx
        lea eax, ss:[esp+0x74]
/*FIXUP push offset public_5d316c @0x490533*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d316c
        push eax
        call ebx
        fild dword ptr ss : [esp+0x34]
        add esp, 0xC
        push 1
        fmul dword ptr ds : [public_5d3168]
        push 0
        push 1
        push edi
        fsub dword ptr ds : [public_5d3164]
        push 0x3FF33333
        push 0x3CF5C28F
        push 0x3DA3D70A
        push 0
        fstp dword ptr ss : [esp+0x30]
        lea ecx, ss:[esp+0x30]
        push ecx
/*FIXUP push offset public_5d0608 @0x49056f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0608
        lea edx, ss:[esp+0x98]
        push edx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x40], 0xBE96872B
        mov dword ptr ss : [esp+0x44], 0
        call public_5a0e30
        mov ecx, dword ptr ss : [esp+0x38]
        inc esi
        mov dword ptr ds : [ecx], eax
        add ecx, 4
        cmp esi, 8
        mov dword ptr ss : [esp+0x28], esi
        mov dword ptr ss : [esp+0x38], ecx
        jl public_490522
        xor esi, esi
        lea eax, ss:[ebp+0xB28]
        mov dword ptr ss : [esp+0x28], esi
        mov dword ptr ss : [esp+0x38], eax
        mov edi, edi
        public_4905c0 : nop
        lea edi, ds:[esi+0x515]
        lea ecx, ds:[edi-0x514]
        push ecx
        lea edx, ss:[esp+0x74]
/*FIXUP push offset public_5d3150 @0x4905d1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d3150
        push edx
        call ebx
        fild dword ptr ss : [esp+0x34]
        add esp, 0xC
        push 1
        fmul dword ptr ds : [public_5d3168]
        push 0
        push 1
        push edi
        fsubr dword ptr ds : [public_5d314c]
        push 0x3FF33333
        push 0x3CF5C28F
        push 0x3D03126F
        push 0
        fstp dword ptr ss : [esp+0x34]
        lea eax, ss:[esp+0x30]
        push eax
/*FIXUP push offset public_5d0608 @0x49060d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0608
        lea ecx, ss:[esp+0x98]
        push ecx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x3C], 0xBE9E353F
        mov dword ptr ss : [esp+0x44], 0
        call public_5a0e30
        mov ecx, dword ptr ss : [esp+0x38]
        inc esi
        mov dword ptr ds : [ecx], eax
        add ecx, 4
        cmp esi, 8
        mov dword ptr ss : [esp+0x28], esi
        mov dword ptr ss : [esp+0x38], ecx
        jl public_4905c0
        mov edx, dword ptr ds : [public_679bb0]
        push 1
        push 0
        push 0
        push 0x553
        push 0x400CCCCD
        push 0x3CF5C28F
        push 0x3F07AE14
        push 0
        lea eax, ss:[esp+0x30]
        push eax
/*FIXUP push offset public_5d0608 @0x490673*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0608
/*FIXUP push offset public_5d3138 @0x490678*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d3138
        mov ecx, ebp
        mov dword ptr ss : [esp+0x68], edx
        mov dword ptr ss : [esp+0x3C], 0xBE22D0E5
        mov dword ptr ss : [esp+0x40], 0x3E46A7F0
        mov dword ptr ss : [esp+0x44], 0
        call public_5a0e30
        push 0
        push 1
        mov dword ptr ss : [ebp+0xC44], eax
        mov edx, dword ptr ds : [eax]
        push 1
        mov ecx, eax
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ss : [ebp+0xC44]
        mov eax, dword ptr ds : [ecx]
        push 1
        lea edx, ss:[esp+0x40]
        push edx
        push 0x33
        call dword ptr ds : [eax+0xA8]
        push 1
        push 0
        push 0
        push 0x555
        push 0x400CCCCD
        push 0x3CF5C28F
        push 0x3F07AE14
        push 0
        lea eax, ss:[esp+0x30]
        push eax
/*FIXUP push offset public_5d0608 @0x4906ee*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0608
/*FIXUP push offset public_5d3124 @0x4906f3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d3124
        mov ecx, ebp
        mov dword ptr ss : [esp+0x3C], 0xBE22D0E5
        mov dword ptr ss : [esp+0x40], 0x3DB851EC
        mov dword ptr ss : [esp+0x44], 0
        call public_5a0e30
        push 0
        push 1
        mov dword ptr ss : [ebp+0xC48], eax
        mov edx, dword ptr ds : [eax]
        push 1
        mov ecx, eax
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ss : [ebp+0xC48]
        mov eax, dword ptr ds : [ecx]
        push 1
        lea edx, ss:[esp+0x40]
        push edx
        push 0x33
        call dword ptr ds : [eax+0xA8]
        push 1
        push 0
        push 0
        push 0x556
        push 0x400CCCCD
        push 0x3CF5C28F
        push 0x3F07AE14
        push 0
        lea eax, ss:[esp+0x30]
        push eax
/*FIXUP push offset public_5d0608 @0x490765*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0608
/*FIXUP push offset public_5d3110 @0x49076a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d3110
        mov ecx, ebp
        mov dword ptr ss : [esp+0x3C], 0xBE22D0E5
        mov dword ptr ss : [esp+0x40], 0x3E0F5C29
        mov dword ptr ss : [esp+0x44], 0
        call public_5a0e30
        push 0
        push 1
        mov dword ptr ss : [ebp+0xC4C], eax
        mov edx, dword ptr ds : [eax]
        push 1
        mov ecx, eax
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ss : [ebp+0xC4C]
        mov eax, dword ptr ds : [ecx]
        push 1
        lea edx, ss:[esp+0x40]
        push edx
        push 0x33
        call dword ptr ds : [eax+0xA8]
        push 1
        push 0
        push 0
        push 0x557
        push 0x400CCCCD
        push 0x3CF5C28F
        push 0x3F07AE14
        push 0
        lea eax, ss:[esp+0x30]
        push eax
/*FIXUP push offset public_5d0608 @0x4907dc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0608
/*FIXUP push offset public_5d30f8 @0x4907e1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d30f8
        mov ecx, ebp
        mov dword ptr ss : [esp+0x3C], 0xBE22D0E5
        mov dword ptr ss : [esp+0x40], 0xBD408312
        mov dword ptr ss : [esp+0x44], 0
        call public_5a0e30
        push 0
        push 1
        mov dword ptr ss : [ebp+0xC50], eax
        mov edx, dword ptr ds : [eax]
        push 1
        mov ecx, eax
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ss : [ebp+0xC50]
        mov eax, dword ptr ds : [ecx]
        push 1
        lea edx, ss:[esp+0x40]
        push edx
        push 0x33
        call dword ptr ds : [eax+0xA8]
        push 1
        push 0
        push 0
        push 0x3AF
        push 0x400CCCCD
        push 0x3CF5C28F
        push 0x3F07AE14
        push 0
        lea eax, ss:[esp+0x30]
        push eax
/*FIXUP push offset public_5d0608 @0x490853*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0608
/*FIXUP push offset public_5d30dc @0x490858*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d30dc
        mov ecx, ebp
        mov dword ptr ss : [esp+0x3C], 0xBE22D0E5
        mov dword ptr ss : [esp+0x40], 0xBE4AC083
        mov dword ptr ss : [esp+0x44], 0
        call public_5a0e30
        push 0
        push 1
        mov dword ptr ss : [ebp+0xC54], eax
        mov edx, dword ptr ds : [eax]
        push 1
        mov ecx, eax
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ss : [ebp+0xC54]
        mov eax, dword ptr ds : [ecx]
        push 1
        lea edx, ss:[esp+0x40]
        push edx
        push 0x33
        call dword ptr ds : [eax+0xA8]
        mov dword ptr ss : [esp+0x10], 0x3E083127
        mov dword ptr ss : [esp+0x14], 0x3CD4FDF4
        mov dword ptr ss : [esp+0x18], 0
        mov dword ptr ss : [esp+0x1C], 0
        mov dword ptr ss : [esp+0x20], 0xBE820C4A
        push 0
        push 0
        push 0x32B
        push 0
        push 0
        lea eax, ss:[esp+0x24]
        push eax
        lea ecx, ss:[esp+0x34]
        push ecx
/*FIXUP push offset public_5ced30 @0x4908e8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ced30
/*FIXUP push offset public_5d30c0 @0x4908ed*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d30c0
        mov ecx, ebp
        mov dword ptr ss : [esp+0x48], 0
        call public_5a0d00
        push 1
        push 0
        push 1
        push 0x3A1
        push 0x3FF33333
        push 0x3CF5C28F
        push 0x3E883127
        push 0
        lea edx, ss:[esp+0x30]
        push edx
/*FIXUP push offset public_5d0410 @0x490922*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0410
/*FIXUP push offset public_5d30a8 @0x490927*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d30a8
        mov ecx, ebp
        mov dword ptr ss : [ebp+0xF3C], eax
        mov dword ptr ss : [esp+0x3C], 0xBE083127
        mov dword ptr ss : [esp+0x40], 0xBE6A7EFA
        mov dword ptr ss : [esp+0x44], 0
        call public_5a0e30
        mov dword ptr ss : [ebp+0xF40], eax
        mov eax, dword ptr ss : [ebp+0xF3C]
        and byte ptr ds : [eax+0x6C], 0xFC
        mov eax, dword ptr ss : [ebp+0xF40]
        mov cl, byte ptr ds : [eax+0x6C]
        and cl, 0xFC
        xor esi, esi
        mov byte ptr ds : [eax+0x6C], cl
        mov dword ptr ss : [esp+0x28], esi
        lea edi, ss:[ebp+0xF88]
        lea esp, ss:[esp]
        public_490980 : nop
        push esi
        lea eax, ss:[esp+0x74]
/*FIXUP push offset public_5d3094 @0x490985*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d3094
        push eax
        call ebx
        fild dword ptr ss : [esp+0x34]
        add esp, 0xC
        push 1
        fmul dword ptr ds : [public_5d011c]
        push 0
        push 0
        push 0
        fsubr dword ptr ds : [public_5d14ac]
        push 0x3FF33333
        push 0x3CF5C28F
        push 0x3EC7AE14
        push 0
        fst dword ptr ss : [esp+0x58]
        lea ecx, ss:[esp+0x30]
        fstp dword ptr ss : [esp+0x34]
        push ecx
/*FIXUP push offset public_5d010c @0x4909c6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d010c
        lea edx, ss:[esp+0x98]
        push edx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x3C], 0xBE849BA6
        mov dword ptr ss : [esp+0x44], 0
        call public_5a0e30
        push esi
        mov dword ptr ds : [edi-0x3C], eax
        lea eax, ss:[esp+0x74]
/*FIXUP push offset public_5d307c @0x4909f2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d307c
        push eax
        call ebx
        mov ecx, dword ptr ss : [esp+0x44]
        add esp, 0xC
        push 1
        push 0
        push 0
        push 0
        push 0x3FF33333
        push 0x3CF5C28F
        push 0x3E570A3D
        push 0
        lea edx, ss:[esp+0x3C]
        push edx
/*FIXUP push offset public_5d010c @0x490a1f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d010c
        lea eax, ss:[esp+0x98]
        mov dword ptr ss : [esp+0x48], ecx
        push eax
        mov ecx, ebp
        mov dword ptr ss : [esp+0x48], 0x3C9BA5E3
        mov dword ptr ss : [esp+0x50], 0
        call public_5a0e30
        inc esi
        mov dword ptr ds : [edi], eax
        add edi, 4
        cmp esi, 0xF
        mov dword ptr ss : [esp+0x28], esi
        jl public_490980
        push 0
        push 3
        push 5
        push 0
        push 0x3ECFDF3B
        push 0x3C9BA5E3
        lea ecx, ss:[esp+0x28]
        push ecx
/*FIXUP push offset public_5d3064 @0x490a71*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d3064
        mov ecx, ebp
        mov dword ptr ss : [esp+0x30], 0x3F543958
        mov dword ptr ss : [esp+0x34], 0xBD6D9168
        mov dword ptr ss : [esp+0x38], 0
        call public_5a17e0
        push 1
        push 0
        push 0
        push 0x3CC
        push 0x3FF33333
        push 0x3CF5C28F
        push 0x3E8ED917
        push 0
        lea edx, ss:[esp+0x30]
        push edx
/*FIXUP push offset public_5d01a8 @0x490ab6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d01a8
/*FIXUP push offset public_5d3050 @0x490abb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d3050
        mov ecx, ebp
        mov dword ptr ss : [ebp+0xFC4], eax
        mov dword ptr ss : [esp+0x3C], 0xBE85A1CB
        mov dword ptr ss : [esp+0x40], 0x3E604189
        mov dword ptr ss : [esp+0x44], 0
        call public_5a0e30
        push 1
        push 0
        push 0
        push 0x3CD
        push 0x3FF33333
        push 0x3CF5C28F
        push 0x3E604189
        push 0
        mov dword ptr ss : [ebp+0xFC8], eax
        lea eax, ss:[esp+0x30]
        push eax
/*FIXUP push offset public_5d01a8 @0x490b0c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d01a8
/*FIXUP push offset public_5d3038 @0x490b11*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d3038
        mov ecx, ebp
        mov dword ptr ss : [esp+0x3C], 0x3C83126F
        mov dword ptr ss : [esp+0x40], 0x3E604189
        mov dword ptr ss : [esp+0x44], 0
        call public_5a0e30
        mov dword ptr ss : [ebp+0xFCC], eax
        call public_4c4690
        mov cl, byte ptr ss : [ebp+0xBCC]
        neg eax
        sbb al, al
        inc al
        test cl, cl
        je public_490b52
        mov al, 1
        public_490b52 : nop
        mov ecx, dword ptr ss : [ebp+0x8FC]
        mov edx, dword ptr ds : [ecx]
        movzx esi, al
        push 0
        push esi
        push 1
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ss : [ebp+0x900]
        mov eax, dword ptr ds : [ecx]
        push 0
        push esi
        push 1
        call dword ptr ds : [eax+0xA8]
        mov ecx, ebp
        call public_49f7a0
        mov ecx, ebp
        call public_4975a0
        mov ecx, ebp
        call public_49f0e0
        mov ecx, ebp
        call public_49a580
        mov ecx, ebp
        call public_49f7a0
        call public_4c4fb0
        test eax, eax
        jle public_490bb3
        mov dword ptr ds : [public_6720a0], 3
        jmp public_490bcc
        public_490bb3 : nop
        mov eax, dword ptr ds : [public_6720a0]
        cmp eax, 6
        je public_490bc2
        cmp eax, 7
        jne public_490bcc
        public_490bc2 : nop
        mov dword ptr ds : [public_6720a0], 0
        public_490bcc : nop
        movzx eax, byte ptr ds : [public_611c5c]
        mov ecx, dword ptr ss : [ebp+0x7F0]
        mov edx, dword ptr ds : [ecx]
        push 0
        push eax
        push 0xC
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [public_6720a0]
        push ecx
        mov ecx, ebp
        call public_4a0220
        mov ebx, dword ptr ds : [public_6720a4]
        mov ecx, dword ptr ss : [ebp+0xC5C]
        mov edx, dword ptr ds : [ecx]
        xor eax, eax
        test ebx, ebx
        sete al
        push 0
        push eax
        push 0xC
        call dword ptr ds : [edx+0xA8]
        mov ebx, dword ptr ds : [public_6720a4]
        mov ecx, dword ptr ss : [ebp+0xC60]
        mov edx, dword ptr ds : [ecx]
        xor eax, eax
        cmp ebx, 1
        sete al
        push 0
        push eax
        push 0xC
        call dword ptr ds : [edx+0xA8]
        mov ebx, dword ptr ds : [public_6720a4]
        mov ecx, dword ptr ss : [ebp+0xC64]
        mov edx, dword ptr ds : [ecx]
        xor eax, eax
        cmp ebx, 2
        sete al
        push 0
        push eax
        push 0xC
        call dword ptr ds : [edx+0xA8]
        mov cl, byte ptr ss : [ebp+0x6C]
        mov edx, dword ptr ss : [ebp]
        and cl, 0xFC
        mov byte ptr ss : [ebp+0x6C], cl
        sub esp, 0xC
        mov dword ptr ss : [esp+0x38], 0x3F1FBE77
        mov ecx, dword ptr ss : [esp+0x38]
        mov eax, esp
        mov dword ptr ds : [eax], ecx
        mov dword ptr ss : [esp+0x3C], 0xBE6B851F
        mov ecx, dword ptr ss : [esp+0x3C]
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ss : [esp+0x40], 0xBE6147AE
        mov ecx, dword ptr ss : [esp+0x40]
        mov dword ptr ds : [eax+8], ecx
        mov ecx, ebp
        call dword ptr ds : [edx+0x7C]
        mov edx, dword ptr ss : [ebp]
        lea eax, ss:[ebp+0x60]
        push eax
        mov ecx, ebp
        call dword ptr ds : [edx+0x14]
        mov ecx, dword ptr ss : [esp+0x178]
        mov edx, dword ptr ss : [esp+0x174]
        push ecx
        push edx
        mov ecx, ebp
        call public_4b5060
        pop edi
        pop esi
        test al, al
        pop ebp
        setne al
        pop ebx
        add esp, 0x160
        ret 8
        UNREACHABLE_TRAP(0x48eba0)
    }
}

#undef public_48ef6c
#undef public_48f613
#undef public_48f6ef
#undef public_48f7cb
#undef public_48f8a7
#undef public_48f983
#undef public_48fa5f
#undef public_48fb3b
#undef public_48fc17
#undef public_490262
#undef public_4902db
#undef public_490354
#undef public_490522
#undef public_4905c0
#undef public_490980
#undef public_490b52
#undef public_490bb3
#undef public_490bc2
#undef public_490bcc
