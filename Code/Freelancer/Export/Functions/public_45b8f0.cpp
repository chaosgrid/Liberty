#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4b5060);
CLANG_FORWARD_PROC_SYMBOL(public_5760d0);
CLANG_FORWARD_PROC_SYMBOL(public_5a0c90);
CLANG_FORWARD_PROC_SYMBOL(public_5a0db0);

#define public_45b978 _public_45b978
#define public_45b9ce _public_45b9ce
#define public_45c1f8 _public_45c1f8
#define public_45c220 _public_45c220
#define public_45c270 _public_45c270

PROC_DECLARE(0x45b8f0, internal_45b8f0, public_45b8f0);
extern "C" NAKED register_t __cdecl internal_45b8f0()
{
    __asm
    {
        sub esp, 0x48
        push ebx
        push esi
        push edi
        mov edi, dword ptr ds : [public_5c60d0]
        mov esi, ecx
        call edi
        test al, al
        lea ecx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x20], 0
        mov dword ptr ss : [esp+0x1C], 0
        mov dword ptr ss : [esp+0x18], 0
        je public_45b978
        lea eax, ss:[esp+0xC]
        push eax
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
        push ecx
        push 0
        lea edx, ss:[esp+0x58]
        push edx
        mov dword ptr ss : [esp+0x44], 0
        mov dword ptr ss : [esp+0x48], 0
        mov dword ptr ss : [esp+0x4C], 0
        mov dword ptr ss : [esp+0x5C], 0x3ECE5604
        mov dword ptr ss : [esp+0x60], 0x3EBB645A
        mov dword ptr ss : [esp+0x64], 0xBF800000
/*FIXUP push offset public_5ced70 @0x45b971*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ced70
        jmp public_45b9ce
        public_45b978 : nop
        lea eax, ss:[esp+0x24]
        push eax
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
        push ecx
        push 0
        lea edx, ss:[esp+0x40]
        push edx
        mov dword ptr ss : [esp+0x5C], 0
        mov dword ptr ss : [esp+0x60], 0
        mov dword ptr ss : [esp+0x64], 0
        mov dword ptr ss : [esp+0x44], 0x3EB95810
        mov dword ptr ss : [esp+0x48], 0x3EBB645A
        mov dword ptr ss : [esp+0x4C], 0xBF800000
/*FIXUP push offset public_5ced50 @0x45b9c9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ced50
        public_45b9ce : nop
        mov ecx, esi
/*FIXUP push offset public_5ced40 @0x45b9d0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ced40
        call public_5a0db0
        push 0
        push 0
        push 0
        push 0
        push 0
        push 0
        push 0
        mov dword ptr ds : [esi+0x3B4], eax
        lea eax, ss:[esp+0x40]
        push eax
        push 0
        lea ecx, ss:[esp+0x3C]
        push ecx
        push 0
/*FIXUP push offset public_5ced30 @0x45b9fc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ced30
        push 0
/*FIXUP push offset public_5ced0c @0x45ba03*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ced0c
/*FIXUP push offset public_5cecfc @0x45ba08*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cecfc
        mov ecx, esi
        mov dword ptr ss : [esp+0x60], 0x3C9374BC
        mov dword ptr ss : [esp+0x64], 0x3C9374BC
        mov dword ptr ss : [esp+0x68], 0
        mov dword ptr ss : [esp+0x54], 0x3EE978D6
        mov dword ptr ss : [esp+0x58], 0x3EEB020C
        mov dword ptr ss : [esp+0x5C], 0xBFA00000
        call public_5a0c90
        push 0x63
        mov dword ptr ds : [esi+0x370], eax
        push 0
        push 0x3FC
        add eax, 0x2D4
        push 0
        mov dword ptr ss : [esp+0x1C], 0x3EE978D6
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], edx
        push 0
        mov dword ptr ss : [esp+0x24], 0x3EEB020C
        mov ecx, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ss : [esp+0x28], 0xBFA00000
        mov edx, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [eax+8], edx
        mov eax, dword ptr ds : [esi+0x370]
        mov cl, byte ptr ds : [eax+0x6C]
        push 0
        push 0
        mov bl, 0xFC
        and cl, bl
        mov byte ptr ds : [eax+0x6C], cl
        lea eax, ss:[esp+0x40]
        push eax
        push 0
        lea ecx, ss:[esp+0x3C]
        push ecx
        push 0
/*FIXUP push offset public_5ced30 @0x45baaa*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ced30
        push 0
/*FIXUP push offset public_5ced0c @0x45bab1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ced0c
/*FIXUP push offset public_5cece8 @0x45bab6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cece8
        mov ecx, esi
        mov dword ptr ss : [esp+0x60], 0x3C9374BC
        mov dword ptr ss : [esp+0x64], 0x3C9374BC
        mov dword ptr ss : [esp+0x68], 0
        mov dword ptr ss : [esp+0x54], 0x3EE978D6
        mov dword ptr ss : [esp+0x58], 0x3EEB020C
        mov dword ptr ss : [esp+0x5C], 0xBFA00000
        call public_5a0c90
        push 0
        push 1
        mov dword ptr ds : [esi+0x38C], eax
        mov edx, dword ptr ds : [eax]
        push 0x36
        mov ecx, eax
        call dword ptr ds : [edx+0xA8]
        mov dword ptr ss : [esp+0x24], 0x3C9374BC
        mov dword ptr ss : [esp+0x28], 0x3C9374BC
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x18], 0x3F010625
        push 0
        push 0
        push 0
        push 0
        push 0
        push 0
        push 0
        lea eax, ss:[esp+0x40]
        push eax
        push 0
        lea ecx, ss:[esp+0x3C]
        push ecx
        push 0
/*FIXUP push offset public_5ced30 @0x45bb44*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ced30
        push 0
/*FIXUP push offset public_5cecbc @0x45bb4b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cecbc
/*FIXUP push offset public_5ceca8 @0x45bb50*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ceca8
        mov ecx, esi
        mov dword ptr ss : [esp+0x58], 0x3EEB020C
        mov dword ptr ss : [esp+0x5C], 0xBFA00000
        call public_5a0c90
        push 0x66
        mov dword ptr ds : [esi+0x374], eax
        push 0
        push 0x3ED
        add eax, 0x2D4
        push 0
        mov dword ptr ss : [esp+0x1C], 0x3F010625
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], edx
        push 0
        mov dword ptr ss : [esp+0x24], 0x3EEB020C
        mov ecx, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ss : [esp+0x28], 0xBFA00000
        mov edx, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [eax+8], edx
        mov eax, dword ptr ds : [esi+0x374]
        mov cl, byte ptr ds : [eax+0x6C]
        push 0
        push 0
        and cl, bl
        mov byte ptr ds : [eax+0x6C], cl
        lea eax, ss:[esp+0x40]
        push eax
        push 0
        lea ecx, ss:[esp+0x3C]
        push ecx
        push 0
/*FIXUP push offset public_5ced30 @0x45bbd0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ced30
        push 0
/*FIXUP push offset public_5cecbc @0x45bbd7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cecbc
/*FIXUP push offset public_5cec90 @0x45bbdc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cec90
        mov ecx, esi
        mov dword ptr ss : [esp+0x60], 0x3C9374BC
        mov dword ptr ss : [esp+0x64], 0x3C9374BC
        mov dword ptr ss : [esp+0x68], 0
        mov dword ptr ss : [esp+0x54], 0x3F010625
        mov dword ptr ss : [esp+0x58], 0x3EEB020C
        mov dword ptr ss : [esp+0x5C], 0xBFA00000
        call public_5a0c90
        push 0
        push 1
        mov dword ptr ds : [esi+0x390], eax
        mov edx, dword ptr ds : [eax]
        push 0x36
        mov ecx, eax
        call dword ptr ds : [edx+0xA8]
        push 0
        push 0
        push 0
        push 0
        push 0
        push 0
        mov dword ptr ss : [esp+0x3C], 0x3C9374BC
        mov dword ptr ss : [esp+0x40], 0x3C9374BC
        mov dword ptr ss : [esp+0x44], 0
        mov dword ptr ss : [esp+0x30], 0x3ED0E561
        mov dword ptr ss : [esp+0x34], 0x3EEB020C
        mov dword ptr ss : [esp+0x38], 0xBFA00000
        push 0
        lea eax, ss:[esp+0x40]
        push eax
        push 0
        lea ecx, ss:[esp+0x3C]
        push ecx
        push 0
/*FIXUP push offset public_5ced30 @0x45bc7a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ced30
        push 0
/*FIXUP push offset public_5cec64 @0x45bc81*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cec64
/*FIXUP push offset public_5cec50 @0x45bc86*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cec50
        mov ecx, esi
        call public_5a0c90
        push 0x67
        mov dword ptr ds : [esi+0x378], eax
        push 0
        push 0x421
        add eax, 0x2D4
        push 0
        mov dword ptr ss : [esp+0x1C], 0x3ED0E561
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], edx
        push 0
        mov dword ptr ss : [esp+0x24], 0x3EEB020C
        mov ecx, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ss : [esp+0x28], 0xBFA00000
        mov edx, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [eax+8], edx
        mov eax, dword ptr ds : [esi+0x378]
        mov cl, byte ptr ds : [eax+0x6C]
        push 0
        push 0
        and cl, bl
        mov byte ptr ds : [eax+0x6C], cl
        lea eax, ss:[esp+0x40]
        push eax
        push 0
        lea ecx, ss:[esp+0x3C]
        push ecx
        push 0
/*FIXUP push offset public_5ced30 @0x45bcf6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ced30
        push 0
/*FIXUP push offset public_5cec64 @0x45bcfd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cec64
/*FIXUP push offset public_5cec38 @0x45bd02*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cec38
        mov ecx, esi
        mov dword ptr ss : [esp+0x60], 0x3C9374BC
        mov dword ptr ss : [esp+0x64], 0x3C9374BC
        mov dword ptr ss : [esp+0x68], 0
        mov dword ptr ss : [esp+0x54], 0x3ED0E561
        mov dword ptr ss : [esp+0x58], 0x3EEB020C
        mov dword ptr ss : [esp+0x5C], 0xBFA00000
        call public_5a0c90
        push 0
        push 1
        mov dword ptr ds : [esi+0x394], eax
        mov edx, dword ptr ds : [eax]
        push 0x36
        mov ecx, eax
        call dword ptr ds : [edx+0xA8]
        push 0
        push 0
        push 0
        push 0
        push 0
        push 0
        push 0
        lea eax, ss:[esp+0x40]
        push eax
        push 0
        lea ecx, ss:[esp+0x3C]
        push ecx
        push 0
/*FIXUP push offset public_5ced30 @0x45bd70*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ced30
        push 0
        mov dword ptr ss : [esp+0x58], 0x3C9374BC
        mov dword ptr ss : [esp+0x5C], 0x3C9374BC
        mov dword ptr ss : [esp+0x60], 0
        mov dword ptr ss : [esp+0x4C], 0x3F0D4FE0
        mov dword ptr ss : [esp+0x50], 0x3EEB020C
        mov dword ptr ss : [esp+0x54], 0xBFA00000
/*FIXUP push offset public_5cec08 @0x45bda7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cec08
/*FIXUP push offset public_5cebf4 @0x45bdac*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cebf4
        mov ecx, esi
        call public_5a0c90
        push 0x65
        mov dword ptr ds : [esi+0x37C], eax
        push 0
        push 0x55F
        add eax, 0x2D4
        push 0
        mov dword ptr ss : [esp+0x1C], 0x3F0D4FE0
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], edx
        push 0
        mov dword ptr ss : [esp+0x24], 0x3EEB020C
        mov ecx, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ss : [esp+0x28], 0xBFA00000
        mov edx, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [eax+8], edx
        mov eax, dword ptr ds : [esi+0x37C]
        mov cl, byte ptr ds : [eax+0x6C]
        push 0
        push 0
        and cl, bl
        mov byte ptr ds : [eax+0x6C], cl
        lea eax, ss:[esp+0x40]
        push eax
        push 0
        lea ecx, ss:[esp+0x3C]
        push ecx
        push 0
/*FIXUP push offset public_5ced30 @0x45be1c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ced30
        push 0
/*FIXUP push offset public_5cec08 @0x45be23*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cec08
/*FIXUP push offset public_5cebdc @0x45be28*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cebdc
        mov ecx, esi
        mov dword ptr ss : [esp+0x60], 0x3C9374BC
        mov dword ptr ss : [esp+0x64], 0x3C9374BC
        mov dword ptr ss : [esp+0x68], 0
        mov dword ptr ss : [esp+0x54], 0x3F0D4FE0
        mov dword ptr ss : [esp+0x58], 0x3EEB020C
        mov dword ptr ss : [esp+0x5C], 0xBFA00000
        call public_5a0c90
        push 0
        push 1
        mov dword ptr ds : [esi+0x398], eax
        mov edx, dword ptr ds : [eax]
        push 0x36
        mov ecx, eax
        call dword ptr ds : [edx+0xA8]
        push 0
        push 0
        push 0
        push 0
        push 0
        push 0
        push 0
        lea eax, ss:[esp+0x40]
        push eax
        push 0
        lea ecx, ss:[esp+0x3C]
        push ecx
        push 0
/*FIXUP push offset public_5ced30 @0x45be96*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ced30
        push 0
/*FIXUP push offset public_5cebb4 @0x45be9d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cebb4
/*FIXUP push offset public_5ceba4 @0x45bea2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ceba4
        mov ecx, esi
        mov dword ptr ss : [esp+0x60], 0x3C9374BC
        mov dword ptr ss : [esp+0x64], 0x3C9374BC
        mov dword ptr ss : [esp+0x68], 0
        mov dword ptr ss : [esp+0x54], 0x3F19999A
        mov dword ptr ss : [esp+0x58], 0x3EEB020C
        mov dword ptr ss : [esp+0x5C], 0xBFA00000
        call public_5a0c90
        mov dword ptr ds : [esi+0x388], eax
        mov dword ptr ss : [esp+0xC], 0x3F19999A
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ss : [esp+0x10], 0x3EEB020C
        mov dword ptr ss : [esp+0x14], 0xBFA00000
        add eax, 0x2D4
        mov ecx, dword ptr ss : [esp+0x10]
        push 0x6A
        push 0
        push 0x570
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [eax+4], ecx
        push 0
        push 0
        mov dword ptr ds : [eax+8], edx
        mov eax, dword ptr ds : [esi+0x388]
        mov cl, byte ptr ds : [eax+0x6C]
        push 0
        push 0
        and cl, bl
        mov byte ptr ds : [eax+0x6C], cl
        lea eax, ss:[esp+0x40]
        push eax
        push 0
        lea ecx, ss:[esp+0x3C]
        push ecx
        push 0
/*FIXUP push offset public_5ced30 @0x45bf42*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ced30
        push 0
/*FIXUP push offset public_5cebb4 @0x45bf49*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cebb4
/*FIXUP push offset public_5ceb90 @0x45bf4e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ceb90
        mov ecx, esi
        mov dword ptr ss : [esp+0x60], 0x3C9374BC
        mov dword ptr ss : [esp+0x64], 0x3C9374BC
        mov dword ptr ss : [esp+0x68], 0
        mov dword ptr ss : [esp+0x54], 0x3F19999A
        mov dword ptr ss : [esp+0x58], 0x3EEB020C
        mov dword ptr ss : [esp+0x5C], 0xBFA00000
        call public_5a0c90
        push 0
        push 1
        mov dword ptr ds : [esi+0x3A4], eax
        mov edx, dword ptr ds : [eax]
        push 0x36
        mov ecx, eax
        call dword ptr ds : [edx+0xA8]
        call edi
        test al, al
        jne public_45c1f8
        push 0
        push 0
        push 0
        push 0
        push 0
        push 0
        push 0
        lea eax, ss:[esp+0x40]
        push eax
        push 0
        lea ecx, ss:[esp+0x3C]
        push ecx
        push 0
/*FIXUP push offset public_5ced30 @0x45bfc6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ced30
        push 0
/*FIXUP push offset public_5ceb68 @0x45bfcd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ceb68
/*FIXUP push offset public_5ceb58 @0x45bfd2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ceb58
        mov ecx, esi
        mov dword ptr ss : [esp+0x60], 0x3C9374BC
        mov dword ptr ss : [esp+0x64], 0x3C9374BC
        mov dword ptr ss : [esp+0x68], 0
        mov dword ptr ss : [esp+0x54], 0x3EB851EC
        mov dword ptr ss : [esp+0x58], 0x3EEB020C
        mov dword ptr ss : [esp+0x5C], 0xBFA00000
        call public_5a0c90
        push 0x68
        mov dword ptr ds : [esi+0x380], eax
        push 0
        push 0x435
        add eax, 0x2D4
        push 0
        mov dword ptr ss : [esp+0x1C], 0x3EB851EC
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], edx
        push 0
        mov dword ptr ss : [esp+0x24], 0x3EEB020C
        mov ecx, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ss : [esp+0x28], 0xBFA00000
        mov edx, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [eax+8], edx
        mov eax, dword ptr ds : [esi+0x380]
        mov cl, byte ptr ds : [eax+0x6C]
        push 0
        push 0
        and cl, bl
        mov byte ptr ds : [eax+0x6C], cl
        lea eax, ss:[esp+0x40]
        push eax
        push 0
        lea ecx, ss:[esp+0x3C]
        push ecx
        push 0
/*FIXUP push offset public_5ced30 @0x45c072*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ced30
        push 0
/*FIXUP push offset public_5ceb68 @0x45c079*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ceb68
/*FIXUP push offset public_5ceb44 @0x45c07e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ceb44
        mov ecx, esi
        mov dword ptr ss : [esp+0x60], 0x3C9374BC
        mov dword ptr ss : [esp+0x64], 0x3C9374BC
        mov dword ptr ss : [esp+0x68], 0
        mov dword ptr ss : [esp+0x54], 0x3EB851EC
        mov dword ptr ss : [esp+0x58], 0x3EEB020C
        mov dword ptr ss : [esp+0x5C], 0xBFA00000
        call public_5a0c90
        push 0
        push 1
        mov dword ptr ds : [esi+0x39C], eax
        mov edx, dword ptr ds : [eax]
        push 0x36
        mov ecx, eax
        call dword ptr ds : [edx+0xA8]
        push 0
        push 0
        mov dword ptr ss : [esp+0x2C], 0x3C9374BC
        mov dword ptr ss : [esp+0x30], 0x3C9374BC
        mov dword ptr ss : [esp+0x34], 0
        mov dword ptr ss : [esp+0x20], 0x3E9FBE78
        mov dword ptr ss : [esp+0x24], 0x3EEB020C
        mov dword ptr ss : [esp+0x28], 0xBFA00000
        push 0
        push 0
        push 0
        push 0
        push 0
        lea eax, ss:[esp+0x40]
        push eax
        push 0
        lea ecx, ss:[esp+0x3C]
        push ecx
        push 0
/*FIXUP push offset public_5ced30 @0x45c11c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ced30
        push 0
/*FIXUP push offset public_5ceb1c @0x45c123*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ceb1c
/*FIXUP push offset public_5ceb0c @0x45c128*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ceb0c
        mov ecx, esi
        call public_5a0c90
        push 0x69
        mov dword ptr ds : [esi+0x384], eax
        push 0
        push 0x560
        add eax, 0x2D4
        push 0
        mov dword ptr ss : [esp+0x1C], 0x3E9FBE78
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], edx
        push 0
        mov dword ptr ss : [esp+0x24], 0x3EEB020C
        mov ecx, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ss : [esp+0x28], 0xBFA00000
        mov edx, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [eax+8], edx
        mov eax, dword ptr ds : [esi+0x384]
        mov cl, byte ptr ds : [eax+0x6C]
        push 0
        push 0
        and cl, bl
        mov byte ptr ds : [eax+0x6C], cl
        lea eax, ss:[esp+0x40]
        push eax
        push 0
        lea ecx, ss:[esp+0x3C]
        push ecx
        push 0
/*FIXUP push offset public_5ced30 @0x45c198*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ced30
        push 0
/*FIXUP push offset public_5ceb1c @0x45c19f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ceb1c
/*FIXUP push offset public_5ceaf8 @0x45c1a4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ceaf8
        mov ecx, esi
        mov dword ptr ss : [esp+0x60], 0x3C9374BC
        mov dword ptr ss : [esp+0x64], 0x3C9374BC
        mov dword ptr ss : [esp+0x68], 0
        mov dword ptr ss : [esp+0x54], 0x3E9FBE78
        mov dword ptr ss : [esp+0x58], 0x3EEB020C
        mov dword ptr ss : [esp+0x5C], 0xBFA00000
        call public_5a0c90
        push 0
        push 1
        mov dword ptr ds : [esi+0x3A0], eax
        mov edx, dword ptr ds : [eax]
        push 0x36
        mov ecx, eax
        call dword ptr ds : [edx+0xA8]
        jmp public_45c220
        public_45c1f8 : nop
        mov dword ptr ds : [esi+0x380], 0
        mov dword ptr ds : [esi+0x384], 0
        mov dword ptr ds : [esi+0x39C], 0
        mov dword ptr ds : [esi+0x3A0], 0
        public_45c220 : nop
        mov dword ptr ss : [esp+0x30], 0x63
        mov dword ptr ss : [esp+0x34], 0x66
        mov dword ptr ss : [esp+0x38], 0x67
        mov dword ptr ss : [esp+0x3C], 0x65
        mov dword ptr ss : [esp+0x40], 0x6A
        mov dword ptr ss : [esp+0x44], 0x68
        mov dword ptr ss : [esp+0x48], 0x69
        mov dword ptr ss : [esp+0x4C], 0x6E
        mov dword ptr ss : [esp+0x50], 0x6B
        xor edi, edi
        lea ebx, ds:[esi+0x32C]
        public_45c270 : nop
        mov eax, dword ptr ss : [esp+edi*4+0x30]
        push eax
        mov ecx, ebx
        call public_5760d0
        inc edi
        cmp edi, 9
        jb public_45c270
        mov ecx, dword ptr ds : [esi+0x370]
        mov edx, dword ptr ds : [esi+0x374]
        mov eax, dword ptr ds : [esi+0x378]
        mov dword ptr ds : [esi+0x3B8], ecx
        mov ecx, dword ptr ds : [esi+0x37C]
        mov dword ptr ds : [esi+0x3BC], edx
        mov edx, dword ptr ds : [esi+0x388]
        mov dword ptr ds : [esi+0x3C0], eax
        mov eax, dword ptr ds : [esi+0x380]
        mov dword ptr ds : [esi+0x3C4], ecx
        mov ecx, dword ptr ds : [esi+0x384]
        mov dword ptr ds : [esi+0x3C8], edx
        mov edx, dword ptr ds : [esi+0x38C]
        mov dword ptr ds : [esi+0x3CC], eax
        mov eax, dword ptr ds : [esi+0x390]
        mov dword ptr ds : [esi+0x3D0], ecx
        mov ecx, dword ptr ds : [esi+0x394]
        mov dword ptr ds : [esi+0x3D4], edx
        mov edx, dword ptr ds : [esi+0x398]
        mov dword ptr ds : [esi+0x3D8], eax
        mov eax, dword ptr ds : [esi+0x3A4]
        mov dword ptr ds : [esi+0x3DC], ecx
        mov ecx, dword ptr ds : [esi+0x39C]
        mov dword ptr ds : [esi+0x3E0], edx
        mov edx, dword ptr ds : [esi+0x3A0]
        mov dword ptr ds : [esi+0x3E4], eax
        mov dword ptr ds : [esi+0x3E8], ecx
        mov dword ptr ds : [esi+0x3EC], edx
        mov dword ptr ss : [esp+0xC], 0
        mov ecx, dword ptr ss : [esp+0xC]
        lea eax, ds:[esi+0x3F0]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ss : [esp+0x10], 0x3D75C28F
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ss : [esp+0x14], 0xBFA00000
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ss : [esp+0xC], 0
        mov eax, dword ptr ss : [esp+0xC]
        lea edx, ds:[esi+0x3FC]
        mov dword ptr ds : [edx], eax
        mov dword ptr ss : [esp+0x10], 0x3D8F5C29
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edx+4], ecx
        mov dword ptr ss : [esp+0x14], 0xBFA00000
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [edx+8], eax
        mov dword ptr ss : [esp+0xC], 0
        mov edx, dword ptr ss : [esp+0xC]
        lea ecx, ds:[esi+0x408]
        mov dword ptr ds : [ecx], edx
        mov dword ptr ss : [esp+0x10], 0x3D8F5C29
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx+4], eax
        mov dword ptr ss : [esp+0x14], 0xBFA00000
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [ecx+8], edx
        mov dword ptr ss : [esp+0xC], 0
        mov ecx, dword ptr ss : [esp+0xC]
        lea eax, ds:[esi+0x414]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ss : [esp+0x10], 0x3DA3D70A
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ss : [esp+0x14], 0xBFA00000
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ss : [esp+0xC], 0
        mov eax, dword ptr ss : [esp+0xC]
        lea edx, ds:[esi+0x420]
        mov dword ptr ss : [esp+0x10], 0x3DA3D70A
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edx], eax
        mov dword ptr ss : [esp+0x14], 0xBFA00000
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [edx+4], ecx
        mov dword ptr ds : [edx+8], eax
        mov dword ptr ss : [esp+0xC], 0
        mov dword ptr ss : [esp+0x10], 0x3D6147AE
        mov dword ptr ss : [esp+0x14], 0xBF800000
        mov edx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ss : [esp+0x10]
        lea ecx, ds:[esi+0x42C]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [ecx+4], eax
        mov dword ptr ds : [ecx+8], edx
        mov dword ptr ss : [esp+0xC], 0
        mov ecx, dword ptr ss : [esp+0xC]
        lea eax, ds:[esi+0x438]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ss : [esp+0x10], 0x3D4CCCCD
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ss : [esp+0x14], 0xBF800000
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ss : [esp+0xC], 0xBF1EB852
        mov eax, dword ptr ss : [esp+0xC]
        lea edx, ds:[esi+0x444]
        mov dword ptr ds : [edx], eax
        mov dword ptr ss : [esp+0x10], 0x3E99999A
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edx+4], ecx
        mov dword ptr ss : [esp+0x14], 0xBFA00000
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [edx+8], eax
        mov dword ptr ss : [esp+0xC], 0
        mov edx, dword ptr ss : [esp+0xC]
        lea ecx, ds:[esi+0x450]
        mov dword ptr ds : [ecx], edx
        mov dword ptr ss : [esp+0x10], 0x3D9BA5E3
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx+4], eax
        mov dword ptr ss : [esp+0x14], 0xBFA4DD2F
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [ecx+8], edx
        mov dword ptr ss : [esp+0xC], 0
        mov ecx, dword ptr ss : [esp+0xC]
        lea eax, ds:[esi+0x45C]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ss : [esp+0x10], 0x3D9BA5E3
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ss : [esp+0x14], 0xBFA4DD2F
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ss : [esp+0xC], 0
        mov eax, dword ptr ss : [esp+0xC]
        lea edx, ds:[esi+0x468]
        mov dword ptr ds : [edx], eax
        mov dword ptr ss : [esp+0x10], 0x3D9BA5E3
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edx+4], ecx
        mov dword ptr ss : [esp+0x14], 0xBFA4DD2F
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [edx+8], eax
        mov dword ptr ss : [esp+0xC], 0
        mov edx, dword ptr ss : [esp+0xC]
        lea ecx, ds:[esi+0x474]
        mov dword ptr ds : [ecx], edx
        mov dword ptr ss : [esp+0x10], 0x3D9BA5E3
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx+4], eax
        mov dword ptr ss : [esp+0x14], 0xBFA4DD2F
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [ecx+8], edx
        mov dword ptr ss : [esp+0xC], 0
        mov ecx, dword ptr ss : [esp+0xC]
        lea eax, ds:[esi+0x480]
        mov dword ptr ss : [esp+0x10], 0
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ss : [esp+0x14], 0xBF800000
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ss : [esp+0xC], 0
        mov dword ptr ss : [esp+0x10], 0
        mov dword ptr ss : [esp+0x14], 0xBF800000
        lea edx, ds:[esi+0x48C]
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [edx+4], ecx
        mov dword ptr ds : [edx+8], eax
        mov dword ptr ss : [esp+0xC], 0
        mov edx, dword ptr ss : [esp+0xC]
        lea ecx, ds:[esi+0x4B4]
        mov dword ptr ds : [ecx], edx
        mov dword ptr ss : [esp+0x10], 0x3D8F5C29
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx+4], eax
        mov dword ptr ss : [esp+0x14], 0xBFBC28F6
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [ecx+8], edx
        mov dword ptr ss : [esp+0xC], 0
        mov ecx, dword ptr ss : [esp+0xC]
        lea eax, ds:[esi+0x4C0]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ss : [esp+0x10], 0x3D9BA5E3
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ss : [esp+0x14], 0xBFA4DD2F
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ss : [esp+0xC], 0
        mov eax, dword ptr ss : [esp+0xC]
        lea edx, ds:[esi+0x4CC]
        mov dword ptr ds : [edx], eax
        mov dword ptr ss : [esp+0x10], 0x3D9BA5E3
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edx+4], ecx
        mov dword ptr ss : [esp+0x14], 0xBFA4DD2F
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [edx+8], eax
        mov dword ptr ss : [esp+0xC], 0
        mov edx, dword ptr ss : [esp+0xC]
        lea ecx, ds:[esi+0x4D8]
        mov dword ptr ds : [ecx], edx
        mov dword ptr ss : [esp+0x10], 0x3D9BA5E3
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx+4], eax
        mov dword ptr ss : [esp+0x14], 0xBFA4DD2F
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [ecx+8], edx
        mov dword ptr ss : [esp+0xC], 0
        mov ecx, dword ptr ss : [esp+0xC]
        lea eax, ds:[esi+0x4E4]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ss : [esp+0x10], 0x3D9BA5E3
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ss : [esp+0x14], 0xBFA4DD2F
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ss : [esp+0xC], 0
        mov eax, dword ptr ss : [esp+0xC]
        lea edx, ds:[esi+0x4F0]
        mov dword ptr ds : [edx], eax
        mov dword ptr ss : [esp+0x10], 0x3D6147AE
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edx+4], ecx
        mov dword ptr ss : [esp+0x14], 0xBF800000
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [edx+8], eax
        mov dword ptr ss : [esp+0xC], 0
        mov edx, dword ptr ss : [esp+0xC]
        lea ecx, ds:[esi+0x4FC]
        mov dword ptr ds : [ecx], edx
        mov dword ptr ss : [esp+0x10], 0x3D4CCCCD
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx+4], eax
        mov dword ptr ss : [esp+0x14], 0xBF800000
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [ecx+8], edx
        mov eax, 0x3D4CCCCD
        mov ecx, 0x3DA3D70A
        mov dword ptr ds : [esi+0x498], ecx
        mov dword ptr ds : [esi+0x49C], eax
        mov dword ptr ds : [esi+0x4A0], eax
        mov dword ptr ds : [esi+0x4A4], eax
        mov dword ptr ds : [esi+0x4A8], eax
        mov eax, dword ptr ss : [esp+0x5C]
        mov dword ptr ds : [esi+0x4AC], ecx
        mov dword ptr ds : [esi+0x4B0], ecx
        mov ecx, dword ptr ss : [esp+0x58]
        push eax
        push ecx
        mov ecx, esi
        call public_4b5060
        pop edi
        test al, al
        pop esi
        setne al
        pop ebx
        add esp, 0x48
        ret 8
        UNREACHABLE_TRAP(0x45b8f0)
    }
}

#undef public_45b978
#undef public_45b9ce
#undef public_45c1f8
#undef public_45c220
#undef public_45c270
