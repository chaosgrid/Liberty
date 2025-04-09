#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4b5060);
CLANG_FORWARD_PROC_SYMBOL(public_5760d0);
CLANG_FORWARD_PROC_SYMBOL(public_5a0c90);
CLANG_FORWARD_PROC_SYMBOL(public_5a0d00);
CLANG_FORWARD_PROC_SYMBOL(public_5a0db0);
CLANG_FORWARD_PROC_SYMBOL(public_5a0e30);
CLANG_FORWARD_PROC_SYMBOL(public_5a10e0);

PROC_DECLARE(0x4a61b0, internal_4a61b0, public_4a61b0);
extern "C" NAKED register_t __cdecl internal_4a61b0()
{
    __asm
    {
        sub esp, 0x30
        push esi
        lea eax, ss:[esp+4]
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
        mov esi, ecx
        lea ecx, ss:[esp+0x3C]
        push ecx
        push 0
        lea edx, ss:[esp+0x50]
        push edx
/*FIXUP push offset public_5ce994 @0x4a61db*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ce994
/*FIXUP push offset public_5d45e4 @0x4a61e0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d45e4
        mov ecx, esi
        mov dword ptr ss : [esp+0x44], 0
        mov dword ptr ss : [esp+0x48], 0
        mov dword ptr ss : [esp+0x4C], 0
        mov dword ptr ss : [esp+0x50], 0
        mov dword ptr ss : [esp+0x54], 0
        mov dword ptr ss : [esp+0x58], 0
        mov dword ptr ss : [esp+0x5C], 0
        mov dword ptr ss : [esp+0x60], 0
        mov dword ptr ss : [esp+0x64], 0
        call public_5a0db0
        push 1
        push 0
        push 1
        push 0x3E8
        push 0x3F99999A
        push 0x3D75C28F
        push 0x3F56C8B4
        push 0
        lea eax, ss:[esp+0x3C]
        push eax
/*FIXUP push offset public_5ce91c @0x4a6255*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ce91c
/*FIXUP push offset public_5d45d0 @0x4a625a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d45d0
        mov ecx, esi
        mov dword ptr ss : [esp+0x48], 0xBED60419
        mov dword ptr ss : [esp+0x4C], 0x3E818937
        mov dword ptr ss : [esp+0x50], 0
        call public_5a0e30
        push 1
        lea ecx, ss:[esp+0x20]
        push ecx
        push 0x3EAE147B
        push 0x3F48F5C3
/*FIXUP push offset public_5d45b8 @0x4a628f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d45b8
        mov ecx, esi
        mov dword ptr ds : [esi+0x348], eax
        mov dword ptr ss : [esp+0x30], 0xBECCCCCD
        mov dword ptr ss : [esp+0x34], 0x3E395810
        mov dword ptr ss : [esp+0x38], 0
        call public_5a10e0
        push 0
        push 0
        push 0x332
        push 0
        push 0
        lea edx, ss:[esp+0x30]
        push edx
        mov dword ptr ds : [esi+0x34C], eax
        lea eax, ss:[esp+0x28]
        push eax
/*FIXUP push offset public_5ced30 @0x4a62d6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ced30
/*FIXUP push offset public_5d45a0 @0x4a62db*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d45a0
        mov ecx, esi
        mov dword ptr ss : [esp+0x40], 0x3DB851EC
        mov dword ptr ss : [esp+0x44], 0x3CD4FDF4
        mov dword ptr ss : [esp+0x48], 0
        mov dword ptr ss : [esp+0x34], 0xBE116873
        mov dword ptr ss : [esp+0x38], 0xBE570A3D
        mov dword ptr ss : [esp+0x3C], 0
        call public_5a0d00
        push 0
        push 0
        push 0x409
        push 0
        push 0
        push 0
        push 0
        lea ecx, ss:[esp+0x38]
        push ecx
        push 0
        lea edx, ss:[esp+0x34]
        push edx
        push 0
/*FIXUP push offset public_5ced30 @0x4a6336*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ced30
        push 0
/*FIXUP push offset public_5d4584 @0x4a633d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d4584
/*FIXUP push offset public_5d456c @0x4a6342*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d456c
        mov ecx, esi
        mov dword ptr ds : [esi+0x33C], eax
        mov dword ptr ss : [esp+0x58], 0x3C9374BC
        mov dword ptr ss : [esp+0x5C], 0x3C9374BC
        mov dword ptr ss : [esp+0x60], 0
        mov dword ptr ss : [esp+0x4C], 0x3ECB4396
        mov dword ptr ss : [esp+0x50], 0x3E6C8B44
        mov dword ptr ss : [esp+0x54], 0
        call public_5a0c90
        push 0
        push 0
        push 0x333
        push 0
        push 0
        mov dword ptr ds : [esi+0x344], eax
        lea eax, ss:[esp+0x30]
        push eax
        lea ecx, ss:[esp+0x28]
        push ecx
/*FIXUP push offset public_5ced30 @0x4a63a1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ced30
/*FIXUP push offset public_5d4550 @0x4a63a6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d4550
        mov ecx, esi
        mov dword ptr ss : [esp+0x40], 0x3DB851EC
        mov dword ptr ss : [esp+0x44], 0x3CD4FDF4
        mov dword ptr ss : [esp+0x48], 0
        mov dword ptr ss : [esp+0x34], 0x3E051EB8
        mov dword ptr ss : [esp+0x38], 0xBE570A3D
        mov dword ptr ss : [esp+0x3C], 0
        call public_5a0d00
        push 1
        push 0
        push 1
        push 0x4AD
        push 0x3FC00000
        push 0x3D75C28F
        push 0x3E3020C5
        push 0
        lea edx, ss:[esp+0x3C]
        push edx
/*FIXUP push offset public_5d0410 @0x4a6403*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0410
/*FIXUP push offset public_5d4538 @0x4a6408*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d4538
        mov ecx, esi
        mov dword ptr ds : [esi+0x354], eax
        mov dword ptr ss : [esp+0x48], 0xBE6B851F
        mov dword ptr ss : [esp+0x4C], 0xBE408312
        mov dword ptr ss : [esp+0x50], 0
        call public_5a0e30
        push 1
        push 0
        push 1
        push 0x548
        push 0x3FC00000
        push 0x3D75C28F
        push 0x3E353F7D
        push 0
        mov dword ptr ds : [esi+0x340], eax
        lea eax, ss:[esp+0x3C]
        push eax
/*FIXUP push offset public_5d0410 @0x4a6459*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0410
        mov dword ptr ss : [esp+0x44], 0x3D27EF9E
        mov dword ptr ss : [esp+0x48], 0xBE408312
        mov dword ptr ss : [esp+0x4C], 0
/*FIXUP push offset public_5d4520 @0x4a6476*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d4520
        mov ecx, esi
        call public_5a0e30
        push 0
        push 0
        push 0x334
        push 0
        push 0
        lea ecx, ss:[esp+0x30]
        push ecx
        lea edx, ss:[esp+0x28]
        push edx
/*FIXUP push offset public_5ced30 @0x4a6499*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ced30
/*FIXUP push offset public_5d4508 @0x4a649e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d4508
        mov ecx, esi
        mov dword ptr ds : [esi+0x358], eax
        mov dword ptr ss : [esp+0x40], 0x3DB851EC
        mov dword ptr ss : [esp+0x44], 0x3CD4FDF4
        mov dword ptr ss : [esp+0x48], 0
        mov dword ptr ss : [esp+0x34], 0
        mov dword ptr ss : [esp+0x38], 0xBE570A3D
        mov dword ptr ss : [esp+0x3C], 0
        call public_5a0d00
        push 1
        push 0
        push 1
        push 0x3A1
        push 0x3FC00000
        push 0x3D75C28F
        push 0x3E374BC7
        push 0
        mov dword ptr ds : [esi+0x35C], eax
        lea eax, ss:[esp+0x3C]
        push eax
/*FIXUP push offset public_5d0410 @0x4a6507*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0410
/*FIXUP push offset public_5d44f0 @0x4a650c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d44f0
        mov ecx, esi
        mov dword ptr ss : [esp+0x48], 0xBDB851EC
        mov dword ptr ss : [esp+0x4C], 0xBE428F5C
        mov dword ptr ss : [esp+0x50], 0
        call public_5a0e30
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [esi+0x360], eax
        lea eax, ss:[esp+0x28]
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x30], 0
        mov dword ptr ss : [esp+0x34], 0xBFA4DD2F
        call dword ptr ds : [edx+0x14]
        push 0xF
        lea ecx, ds:[esi+0x32C]
        call public_5760d0
        mov ecx, dword ptr ss : [esp+0x3C]
        mov edx, dword ptr ds : [esi+4]
        push ecx
        push edx
        mov ecx, esi
        call public_4b5060
        test al, al
        setne al
        pop esi
        add esp, 0x30
        ret 8
        UNREACHABLE_TRAP(0x4a61b0)
    }
}
