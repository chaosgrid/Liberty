#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4b5060);
CLANG_FORWARD_PROC_SYMBOL(public_4e0ee0);
CLANG_FORWARD_PROC_SYMBOL(public_57da40);
CLANG_FORWARD_PROC_SYMBOL(public_57eb40);
CLANG_FORWARD_PROC_SYMBOL(public_5a0c90);
CLANG_FORWARD_PROC_SYMBOL(public_5a0db0);
CLANG_FORWARD_PROC_SYMBOL(public_5a0e30);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5be802);

#define public_4e184b _public_4e184b
#define public_4e1878 _public_4e1878
#define public_4e1891 _public_4e1891
#define public_4e18be _public_4e18be

PROC_DECLARE(0x4e0ee0, internal_4e0ee0, public_4e0ee0);
extern "C" NAKED register_t __cdecl internal_4e0ee0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5be802 @0x4e0ee2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5be802
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x30
        push ebx
        push ebp
        push esi
        push edi
        lea eax, ss:[esp+0x1C]
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
        lea ecx, ss:[esp+0x54]
        push ecx
        push 0
        lea edx, ss:[esp+0x68]
        push edx
/*FIXUP push offset public_5d8ce0 @0x4e0f23*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d8ce0
/*FIXUP push offset public_5d8ccc @0x4e0f28*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d8ccc
        mov ecx, esi
        mov dword ptr ss : [esp+0x5C], 0
        mov dword ptr ss : [esp+0x60], 0
        mov dword ptr ss : [esp+0x64], 0
        mov dword ptr ss : [esp+0x68], 0
        mov dword ptr ss : [esp+0x6C], 0
        mov dword ptr ss : [esp+0x70], 0
        mov dword ptr ss : [esp+0x74], 0xBEAE5604
        mov dword ptr ss : [esp+0x78], 0xBE78D4FE
        mov dword ptr ss : [esp+0x7C], 0xBF68F5C3
        call public_5a0db0
        mov dword ptr ds : [esi+0x494], eax
        lea eax, ss:[esp+0x34]
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
        lea ecx, ss:[esp+0x54]
        push ecx
        push 0
        lea edx, ss:[esp+0x50]
        push edx
/*FIXUP push offset public_5d8ca8 @0x4e0fa7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d8ca8
/*FIXUP push offset public_5d8c90 @0x4e0fac*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d8c90
        mov ecx, esi
        mov dword ptr ss : [esp+0x74], 0
        mov dword ptr ss : [esp+0x78], 0
        mov dword ptr ss : [esp+0x7C], 0
        mov dword ptr ss : [esp+0x68], 0
        mov dword ptr ss : [esp+0x6C], 0
        mov dword ptr ss : [esp+0x70], 0
        mov dword ptr ss : [esp+0x5C], 0xBED22D0E
        mov dword ptr ss : [esp+0x60], 0xBEBD70A4
        mov dword ptr ss : [esp+0x64], 0xBF800000
        call public_5a0db0
        mov dword ptr ds : [esi+0x5FC], eax
        mov dword ptr ss : [esp+0x1C], 0x3DDF3B64
        mov ecx, dword ptr ss : [esp+0x1C]
        lea eax, ds:[esi+0xB4]
        mov dword ptr ss : [esp+0x20], 0x3CA3D70A
        mov edx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ss : [esp+0x24], 0
        mov ecx, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ss : [esp+0x1C], 0xBECDD2F2
        mov dword ptr ss : [esp+0x20], 0xBEBDF3B6
        mov dword ptr ss : [esp+0x24], 0
        lea edx, ds:[esi+0xC0]
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x20]
        push 0
        push 0
        push 0x3FE
        push 0
        push 0
        push 1
        push 0
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ss : [esp+0x40]
        mov dword ptr ds : [edx+4], ecx
        lea ecx, ss:[esp+0x50]
        push ecx
        push 0
        mov dword ptr ds : [edx+8], eax
        lea edx, ds:[esi+0x49C]
        push edx
        push 0
/*FIXUP push offset public_5d87b8 @0x4e108b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d87b8
        push 0
/*FIXUP push offset public_5d8c6c @0x4e1092*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d8c6c
/*FIXUP push offset public_5d8c5c @0x4e1097*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d8c5c
        mov ecx, esi
        mov dword ptr ss : [esp+0x70], 0x3CA3D70A
        mov dword ptr ss : [esp+0x74], 0x3CA3D70A
        mov dword ptr ss : [esp+0x78], 0
        call public_5a0c90
        push 0
        push 1
        mov dword ptr ds : [esi+0x490], eax
        mov edx, dword ptr ds : [eax]
        push 0x36
        mov ecx, eax
        call dword ptr ds : [edx+0xA8]
        push 1
        push 0
        push 1
        push 0
        push 0x3F800000
        push 0x3CF5C28F
        push 0x3E51EB85
        push 0
        lea eax, ss:[esp+0x54]
        push eax
/*FIXUP push offset public_5d4ddc @0x4e10ef*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d4ddc
/*FIXUP push offset public_5d8c4c @0x4e10f4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d8c4c
        mov ecx, esi
        mov dword ptr ss : [esp+0x60], 0xBEF9DB23
        mov dword ptr ss : [esp+0x64], 0xBE4CCCCD
        mov dword ptr ss : [esp+0x68], 0
        call public_5a0e30
        push 0x14
        push 1
        mov dword ptr ds : [esi+0x4C8], eax
        mov edx, dword ptr ds : [eax]
        push 0x50
        mov ecx, eax
        call dword ptr ds : [edx+0xA8]
        mov eax, dword ptr ds : [esi+0x4C8]
        push 1
        push 0
        push 1
        push 0
        push 0x3F800000
        mov dword ptr ss : [esp+0x30], 0xBEF9DB23
        mov ecx, dword ptr ss : [esp+0x30]
        add eax, 0x2D4
        mov dword ptr ds : [eax], ecx
        mov dword ptr ss : [esp+0x34], 0xBE4CCCCD
        mov edx, dword ptr ss : [esp+0x34]
        push 0x3CF5C28F
        mov dword ptr ss : [esp+0x3C], 0
        mov ecx, dword ptr ss : [esp+0x3C]
        mov dword ptr ds : [eax+4], edx
        push 0x3E51EB85
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ss : [esp+0x50], 0xBEF9DB23
        mov dword ptr ss : [esp+0x54], 0xBE5F3B64
        mov dword ptr ss : [esp+0x58], 0
        push 0
        lea edx, ss:[esp+0x54]
        push edx
/*FIXUP push offset public_5d4ddc @0x4e119b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d4ddc
/*FIXUP push offset public_5d8c3c @0x4e11a0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d8c3c
        mov ecx, esi
        call public_5a0e30
        push 0x14
        push 1
        mov dword ptr ds : [esi+0x4CC], eax
        mov edx, dword ptr ds : [eax]
        push 0x50
        mov ecx, eax
        call dword ptr ds : [edx+0xA8]
        mov eax, dword ptr ds : [esi+0x4CC]
        push 0
        push 0
        push 0x420
        push 0
        push 0
        push 1
        add eax, 0x2D4
        push 0
        mov dword ptr ss : [esp+0x38], 0xBEF9DB23
        mov ecx, dword ptr ss : [esp+0x38]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ss : [esp+0x3C], 0xBE5F3B64
        mov edx, dword ptr ss : [esp+0x3C]
        mov dword ptr ds : [eax+4], edx
        lea edx, ss:[esp+0x50]
        push edx
        push 0
        mov dword ptr ss : [esp+0x48], 0
        mov ecx, dword ptr ss : [esp+0x48]
        mov dword ptr ds : [eax+8], ecx
        lea eax, ss:[esp+0x4C]
        push eax
        push 0
/*FIXUP push offset public_5d1528 @0x4e1218*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1528
        push 0
/*FIXUP push offset public_5d8c18 @0x4e121f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d8c18
/*FIXUP push offset public_5d8c00 @0x4e1224*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d8c00
        mov ecx, esi
        mov dword ptr ss : [esp+0x70], 0x3C656042
        mov dword ptr ss : [esp+0x74], 0x3C656042
        mov dword ptr ss : [esp+0x78], 0
        mov dword ptr ss : [esp+0x64], 0xBE8624DD
        mov dword ptr ss : [esp+0x68], 0xBE72B021
        mov dword ptr ss : [esp+0x6C], 0
        call public_5a0c90
        push 0
        push 0
        push 0x41F
        push 0
        push 0
        push 1
        push 0
        lea ecx, ss:[esp+0x50]
        push ecx
        push 0
        lea edx, ss:[esp+0x4C]
        push edx
        push 0
/*FIXUP push offset public_5d1528 @0x4e127f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1528
        push 0
/*FIXUP push offset public_5d8be0 @0x4e1286*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d8be0
/*FIXUP push offset public_5d8bcc @0x4e128b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d8bcc
        mov ecx, esi
        mov dword ptr ds : [esi+0x4DC], eax
        mov dword ptr ss : [esp+0x70], 0x3C656042
        mov dword ptr ss : [esp+0x74], 0x3C656042
        mov dword ptr ss : [esp+0x78], 0
        mov dword ptr ss : [esp+0x64], 0xBE8624DD
        mov dword ptr ss : [esp+0x68], 0xBE89374C
        mov dword ptr ss : [esp+0x6C], 0
        call public_5a0c90
        mov dword ptr ds : [esi+0x4E0], eax
        mov dword ptr ss : [esp+0x34], 0x3C656042
        mov dword ptr ss : [esp+0x38], 0x3C656042
        mov dword ptr ss : [esp+0x3C], 0
        mov dword ptr ss : [esp+0x28], 0xBED26E98
        mov dword ptr ss : [esp+0x2C], 0xBEBD70A4
        push 0x8A
        push 0
        push 0x440
        push 0
        push 0
        push 1
        push 0
        lea eax, ss:[esp+0x50]
        push eax
        push 0
        lea ecx, ss:[esp+0x4C]
        push ecx
        push 0
/*FIXUP push offset public_5d1528 @0x4e131d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1528
        push 0
/*FIXUP push offset public_5d8ba4 @0x4e1324*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d8ba4
/*FIXUP push offset public_5d8b90 @0x4e1329*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d8b90
        mov ecx, esi
        mov dword ptr ss : [esp+0x6C], 0
        call public_5a0c90
        push 0x8B
        push 0
        push 0xBC2
        push 0
        push 0
        push 1
        push 0
        lea edx, ss:[esp+0x50]
        push edx
        push 0
        mov dword ptr ds : [esi+0x4D0], eax
        lea eax, ss:[esp+0x4C]
        push eax
        push 0
/*FIXUP push offset public_5d1528 @0x4e1365*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1528
        push 0
/*FIXUP push offset public_5d8b6c @0x4e136c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d8b6c
/*FIXUP push offset public_5d8b58 @0x4e1371*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d8b58
        mov ecx, esi
        mov dword ptr ss : [esp+0x70], 0x3C656042
        mov dword ptr ss : [esp+0x74], 0x3C656042
        mov dword ptr ss : [esp+0x78], 0
        mov dword ptr ss : [esp+0x64], 0xBED26E98
        mov dword ptr ss : [esp+0x68], 0xBEBD70A4
        mov dword ptr ss : [esp+0x6C], 0
        call public_5a0c90
        push 0
        push 0
        push 0x3FD
        push 0
        push 0
        push 1
        push 0
        lea ecx, ss:[esp+0x50]
        push ecx
        push 0
        lea edx, ss:[esp+0x4C]
        push edx
        push 0
/*FIXUP push offset public_5d1528 @0x4e13cc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1528
        push 0
/*FIXUP push offset public_5d8b34 @0x4e13d3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d8b34
/*FIXUP push offset public_5d8b20 @0x4e13d8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d8b20
        mov ecx, esi
        mov dword ptr ds : [esi+0x4D4], eax
        mov dword ptr ss : [esp+0x70], 0x3C656042
        mov dword ptr ss : [esp+0x74], 0x3C656042
        mov dword ptr ss : [esp+0x78], 0
        mov dword ptr ss : [esp+0x64], 0xBEE3D70A
        mov dword ptr ss : [esp+0x68], 0xBEBD70A4
        mov dword ptr ss : [esp+0x6C], 0
        call public_5a0c90
        push 0
        mov dword ptr ds : [esi+0x4E4], eax
        mov dword ptr ss : [esp+0x38], 0x3C656042
        mov dword ptr ss : [esp+0x3C], 0x3C656042
        mov dword ptr ss : [esp+0x40], 0
        mov dword ptr ss : [esp+0x2C], 0xBEE3D70A
        mov dword ptr ss : [esp+0x30], 0xBEBD70A4
        mov dword ptr ss : [esp+0x34], 0
        push 0
        push 0x621
        push 0
        push 0
        push 1
        push 0
        lea eax, ss:[esp+0x50]
        push eax
        push 0
        lea ecx, ss:[esp+0x4C]
        push ecx
        push 0
/*FIXUP push offset public_5d1528 @0x4e146f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1528
        push 0
/*FIXUP push offset public_5d8afc @0x4e1476*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d8afc
/*FIXUP push offset public_5d8ae0 @0x4e147b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d8ae0
        mov ecx, esi
        call public_5a0c90
        push 0
        push 0
        push 0xBC3
        push 0
        push 0
        push 1
        push 0
        lea edx, ss:[esp+0x50]
        push edx
        push 0
        mov dword ptr ds : [esi+0x4E8], eax
        lea eax, ss:[esp+0x4C]
        push eax
        push 0
/*FIXUP push offset public_5d1528 @0x4e14ac*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1528
        push 0
/*FIXUP push offset public_5d8ac4 @0x4e14b3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d8ac4
/*FIXUP push offset public_5d8ab0 @0x4e14b8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d8ab0
        mov ecx, esi
        mov dword ptr ss : [esp+0x70], 0x3C656042
        mov dword ptr ss : [esp+0x74], 0x3C656042
        mov dword ptr ss : [esp+0x78], 0
        mov dword ptr ss : [esp+0x64], 0xBE4ED917
        mov dword ptr ss : [esp+0x68], 0xBEBD70A4
        mov dword ptr ss : [esp+0x6C], 0
        call public_5a0c90
        push 0
        push 0
        push 0x409
        push 0
        push 0
        push 1
        push 0
        lea ecx, ss:[esp+0x50]
        push ecx
        push 0
        lea edx, ss:[esp+0x4C]
        push edx
        push 0
/*FIXUP push offset public_5ced30 @0x4e1513*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ced30
        push 0
/*FIXUP push offset public_5d871c @0x4e151a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d871c
/*FIXUP push offset public_5d8a9c @0x4e151f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d8a9c
        mov ecx, esi
        mov dword ptr ds : [esi+0x4D8], eax
        mov dword ptr ss : [esp+0x70], 0x3C656042
        mov dword ptr ss : [esp+0x74], 0x3C656042
        mov dword ptr ss : [esp+0x78], 0
        mov dword ptr ss : [esp+0x64], 0xBEC5A1CB
        mov dword ptr ss : [esp+0x68], 0xBE9DB22D
        mov dword ptr ss : [esp+0x6C], 0xBF000000
        call public_5a0c90
        push 0x54
        push 0
        push 0x448
        push 0
        mov dword ptr ds : [esi+0x4EC], eax
        mov dword ptr ss : [esp+0x44], 0x3C656042
        mov dword ptr ss : [esp+0x48], 0x3C656042
        mov dword ptr ss : [esp+0x4C], 0
        mov dword ptr ss : [esp+0x38], 0xBEAF9DB2
        mov dword ptr ss : [esp+0x3C], 0xBEBD70A4
        mov dword ptr ss : [esp+0x40], 0
        push 0
        push 1
        push 0
        lea eax, ss:[esp+0x50]
        push eax
        push 0
        lea ecx, ss:[esp+0x4C]
        push ecx
        push 0
/*FIXUP push offset public_5ced30 @0x4e15b6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ced30
        push 0
/*FIXUP push offset public_5d8a78 @0x4e15bd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d8a78
/*FIXUP push offset public_5d8a64 @0x4e15c2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d8a64
        mov ecx, esi
        call public_5a0c90
        push 0x58
        push 0
        push 0x5FF
        push 0
        push 0
        push 1
        push 0
        lea edx, ss:[esp+0x50]
        push edx
        push 0
        mov dword ptr ds : [esi+0x600], eax
        lea eax, ss:[esp+0x4C]
        push eax
        push 0
/*FIXUP push offset public_5ced30 @0x4e15f3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ced30
        push 0
/*FIXUP push offset public_5d8a3c @0x4e15fa*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d8a3c
/*FIXUP push offset public_5d8a2c @0x4e15ff*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d8a2c
        mov ecx, esi
        mov dword ptr ss : [esp+0x70], 0x3C656042
        mov dword ptr ss : [esp+0x74], 0x3C656042
        mov dword ptr ss : [esp+0x78], 0
        mov dword ptr ss : [esp+0x64], 0xBEC10625
        mov dword ptr ss : [esp+0x68], 0xBEBD70A4
        mov dword ptr ss : [esp+0x6C], 0
        call public_5a0c90
        push 0x26
        push 0
        push 0x3E2
        push 0
        push 0
        push 1
        push 0
        lea ecx, ss:[esp+0x50]
        push ecx
        push 0
        lea edx, ss:[esp+0x4C]
        push edx
        push 0
/*FIXUP push offset public_5ced30 @0x4e165a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ced30
        push 0
/*FIXUP push offset public_5d8a0c @0x4e1661*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d8a0c
/*FIXUP push offset public_5d89fc @0x4e1666*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d89fc
        mov ecx, esi
        mov dword ptr ds : [esi+0x604], eax
        mov dword ptr ss : [esp+0x70], 0x3C656042
        mov dword ptr ss : [esp+0x74], 0x3C656042
        mov dword ptr ss : [esp+0x78], 0
        mov dword ptr ss : [esp+0x64], 0xBEF53F7D
        mov dword ptr ss : [esp+0x68], 0xBEBD70A4
        mov dword ptr ss : [esp+0x6C], 0
        call public_5a0c90
        push 0x59
        push 0
        push 0x60C
        push 0
        push 0
        push 1
        mov dword ptr ds : [esi+0x608], eax
        mov dword ptr ss : [esp+0x4C], 0x3C656042
        mov dword ptr ss : [esp+0x50], 0x3C656042
        mov dword ptr ss : [esp+0x54], 0
        mov dword ptr ss : [esp+0x40], 0xBE8E5604
        mov dword ptr ss : [esp+0x44], 0xBEBD70A4
        mov dword ptr ss : [esp+0x48], 0
        push 0
        lea eax, ss:[esp+0x50]
        push eax
        push 0
        lea ecx, ss:[esp+0x4C]
        push ecx
        push 0
/*FIXUP push offset public_5ced30 @0x4e16fd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ced30
        push 0
/*FIXUP push offset public_5d89dc @0x4e1704*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d89dc
/*FIXUP push offset public_5d89cc @0x4e1709*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d89cc
        mov ecx, esi
        call public_5a0c90
        push 0
        push 1
        mov dword ptr ds : [esi+0x60C], eax
        mov edx, dword ptr ds : [eax]
        push 1
        mov ecx, eax
        call dword ptr ds : [edx+0xA8]
        push 1
        push 0x574
        push 1
        push 0
        push 0x3F666666
        push 0x3CF5C28F
        push 0x3E6978D5
        push 0
        lea eax, ss:[esp+0x54]
        push eax
/*FIXUP push offset public_5d4ddc @0x4e174c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d4ddc
/*FIXUP push offset public_5d89bc @0x4e1751*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d89bc
        mov ecx, esi
        mov dword ptr ss : [esp+0x60], 0xBEFAE148
        mov dword ptr ss : [esp+0x64], 0xBEB8D4FE
        mov dword ptr ss : [esp+0x68], 0
        call public_5a0e30
        mov edx, dword ptr ds : [esi-0x38]
        lea ecx, ds:[esi-0x38]
        push 1
        mov dword ptr ds : [esi+0x61C], eax
        call dword ptr ds : [edx+0x34]
        mov ecx, dword ptr ds : [esi+0x4DC]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 1
        push 1
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0x4E0]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 1
        push 1
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x4D8]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 1
        push 1
        call dword ptr ds : [eax+0xA8]
        mov ebp, dword ptr ds : [esi+0x610]
        mov ecx, dword ptr ds : [esi+0x600]
        mov edx, dword ptr ds : [ecx]
        xor eax, eax
        test ebp, ebp
        sete al
        push 0
        push eax
        push 0xC
        call dword ptr ds : [edx+0xA8]
        mov ebp, dword ptr ds : [esi+0x610]
        mov ecx, dword ptr ds : [esi+0x604]
        mov edx, dword ptr ds : [ecx]
        xor eax, eax
        cmp ebp, 1
        sete al
        push 0
        push eax
        push 0xC
        call dword ptr ds : [edx+0xA8]
        push 0x3EA8
        lea ecx, ss:[esp+0x20]
        call dword ptr ds : [public_5c62b8]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov dword ptr ss : [esp+0x48], 0
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x10], eax
        mov edi, dword ptr ds : [esi+0x4F4]
        mov ebp, dword ptr ds : [edi+4]
        lea ebx, ds:[esi+0x4F0]
        push 0xC
        mov byte ptr ss : [esp+0x4C], 1
        call public_5b7e84
        add esp, 4
        test ebp, ebp
        mov dword ptr ds : [eax], edi
        jne public_4e184b
        mov ebp, eax
        public_4e184b : nop
        mov dword ptr ds : [eax+4], ebp
        mov dword ptr ds : [edi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        lea edi, ds:[eax+8]
        mov dword ptr ds : [ecx], eax
        mov dword ptr ss : [esp+0x14], edi
        mov dword ptr ss : [esp+0x18], edi
        test edi, edi
        mov ebp, dword ptr ss : [esp+0x10]
        mov byte ptr ss : [esp+0x48], 2
        je public_4e1878
        mov eax, dword ptr ss : [ebp]
        mov ecx, ebp
        call dword ptr ds : [eax+0x1C]
        mov dword ptr ds : [edi], eax
        public_4e1878 : nop
        mov ecx, dword ptr ds : [ebx+8]
        inc ecx
        test ebp, ebp
        mov dword ptr ds : [ebx+8], ecx
        mov byte ptr ss : [esp+0x48], 0
        je public_4e1891
        mov edx, dword ptr ss : [ebp]
        push 1
        mov ecx, ebp
        call dword ptr ds : [edx]
        public_4e1891 : nop
        lea ecx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x48], 0xFFFFFFFF
        call dword ptr ds : [public_5c62b4]
        push ebx
        push 0x60070
        call public_57da40
        add esp, 8
        test al, al
        je public_4e18be
        push ebx
        call public_57eb40
        add esp, 4
        public_4e18be : nop
        mov eax, dword ptr ds : [esi]
        sub esp, 0xC
        mov dword ptr ss : [esp+0x28], 0
        mov edx, dword ptr ss : [esp+0x28]
        mov ecx, esp
        mov dword ptr ds : [ecx], edx
        mov dword ptr ss : [esp+0x2C], 0
        mov edx, dword ptr ss : [esp+0x2C]
        mov dword ptr ds : [ecx+4], edx
        mov dword ptr ss : [esp+0x30], 0xBF800000
        mov edx, dword ptr ss : [esp+0x30]
        mov dword ptr ds : [ecx+8], edx
        mov ecx, esi
        call dword ptr ds : [eax+0x7C]
        mov eax, dword ptr ds : [esi]
        lea ecx, ds:[esi+0x60]
        push ecx
        mov ecx, esi
        call dword ptr ds : [eax+0x14]
        mov edx, dword ptr ss : [esp+0x54]
        mov eax, dword ptr ss : [esp+0x50]
        push edx
        push eax
        mov ecx, esi
        call public_4b5060
        mov ecx, dword ptr ss : [esp+0x40]
        pop edi
        pop esi
        test al, al
        pop ebp
        setne al
        mov dword ptr fs : [0], ecx
        pop ebx
        add esp, 0x3C
        ret 8
        UNREACHABLE_TRAP(0x4e0ee0)
    }
}

#undef public_4e184b
#undef public_4e1878
#undef public_4e1891
#undef public_4e18be
