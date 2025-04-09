#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4b5060);
CLANG_FORWARD_PROC_SYMBOL(public_4d4fa0);
CLANG_FORWARD_PROC_SYMBOL(public_5760d0);
CLANG_FORWARD_PROC_SYMBOL(public_5a0db0);
CLANG_FORWARD_PROC_SYMBOL(public_5a0e30);

PROC_DECLARE(0x4d4fa0, internal_4d4fa0, public_4d4fa0);
extern "C" NAKED register_t __cdecl internal_4d4fa0()
{
    __asm
    {
        sub esp, 0x24
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        push 0
/*FIXUP push offset public_5d7e10 @0x4d4faa*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d7e10
        call dword ptr ds : [eax+0x98]
        lea ecx, ss:[esp+4]
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
        lea edx, ss:[esp+0x3C]
        push edx
        push 0
        lea eax, ss:[esp+0x50]
        push eax
/*FIXUP push offset public_5d7dec @0x4d4fda*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d7dec
/*FIXUP push offset public_5d7de0 @0x4d4fdf*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d7de0
        mov ecx, esi
        mov dword ptr ss : [esp+0x44], 0
        mov dword ptr ss : [esp+0x48], 0
        mov dword ptr ss : [esp+0x4C], 0
        mov dword ptr ss : [esp+0x50], 0
        mov dword ptr ss : [esp+0x54], 0
        mov dword ptr ss : [esp+0x58], 0
        mov dword ptr ss : [esp+0x5C], 0x3BA3D70A
        mov dword ptr ss : [esp+0x60], 0xBEBAE148
        mov dword ptr ss : [esp+0x64], 0xBF800000
        call public_5a0db0
        lea ecx, ss:[esp+0x1C]
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
        lea edx, ss:[esp+0x3C]
        push edx
        push 0
        mov dword ptr ds : [esi+0x34C], eax
        lea eax, ss:[esp+0x38]
        push eax
/*FIXUP push offset public_5d7dc0 @0x4d505e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d7dc0
/*FIXUP push offset public_5d7db4 @0x4d5063*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d7db4
        mov ecx, esi
        mov dword ptr ss : [esp+0x5C], 0
        mov dword ptr ss : [esp+0x60], 0
        mov dword ptr ss : [esp+0x64], 0
        mov dword ptr ss : [esp+0x50], 0x3DAE147B
        mov dword ptr ss : [esp+0x54], 0x3BB43958
        mov dword ptr ss : [esp+0x58], 0
        mov dword ptr ss : [esp+0x44], 0x3BA3D70A
        mov dword ptr ss : [esp+0x48], 0xBEC08312
        mov dword ptr ss : [esp+0x4C], 0xBF800000
        call public_5a0db0
        push 0
        push 0x470
        mov dword ptr ds : [esi+0x330], eax
        mov edx, dword ptr ds : [eax]
        push 3
        mov ecx, eax
        call dword ptr ds : [edx+0xA8]
        mov dword ptr ss : [esp+0x1C], 0
        mov dword ptr ss : [esp+0x20], 0
        mov dword ptr ss : [esp+0x24], 0
        mov dword ptr ss : [esp+0x10], 0x3DAE147B
        mov dword ptr ss : [esp+0x14], 0x3BB43958
        mov dword ptr ss : [esp+0x18], 0
        mov dword ptr ss : [esp+4], 0x3BA3D70A
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
        lea ecx, ss:[esp+0x3C]
        push ecx
        push 0
        lea edx, ss:[esp+0x38]
        push edx
/*FIXUP push offset public_5d7d90 @0x4d512d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d7d90
/*FIXUP push offset public_5d7d84 @0x4d5132*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d7d84
        mov ecx, esi
        mov dword ptr ss : [esp+0x48], 0xBEBB645A
        mov dword ptr ss : [esp+0x4C], 0xBF800000
        call public_5a0db0
        push 0
        push 0x471
        mov dword ptr ds : [esi+0x334], eax
        mov edx, dword ptr ds : [eax]
        push 3
        mov ecx, eax
        call dword ptr ds : [edx+0xA8]
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
        lea ecx, ss:[esp+0x3C]
        push ecx
        push 0
        lea edx, ss:[esp+0x38]
        push edx
/*FIXUP push offset public_5d7d60 @0x4d518c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d7d60
/*FIXUP push offset public_5d7d54 @0x4d5191*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d7d54
        mov ecx, esi
        mov dword ptr ss : [esp+0x5C], 0
        mov dword ptr ss : [esp+0x60], 0
        mov dword ptr ss : [esp+0x64], 0
        mov dword ptr ss : [esp+0x50], 0x3DAE147B
        mov dword ptr ss : [esp+0x54], 0x3BB43958
        mov dword ptr ss : [esp+0x58], 0
        mov dword ptr ss : [esp+0x44], 0x3BA3D70A
        mov dword ptr ss : [esp+0x48], 0xBEB5C28F
        mov dword ptr ss : [esp+0x4C], 0xBF800000
        call public_5a0db0
        push 0
        push 0x3F2
        mov dword ptr ds : [esi+0x338], eax
        mov edx, dword ptr ds : [eax]
        push 3
        mov ecx, eax
        call dword ptr ds : [edx+0xA8]
        push 1
        push 0
        push 1
        push 0
        push 0x3F800000
        push 0x3CF5C28F
        push 0x3D656042
        push 0
        lea eax, ss:[esp+0x3C]
        push eax
        mov dword ptr ss : [esp+0x40], 0x3DDD2F1B
        mov dword ptr ss : [esp+0x44], 0x3C03126F
        mov dword ptr ss : [esp+0x48], 0
/*FIXUP push offset public_5d0608 @0x4d5234*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0608
/*FIXUP push offset public_5d7d44 @0x4d5239*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d7d44
        mov ecx, esi
        call public_5a0e30
        push 1
        push 0
        push 1
        push 0
        push 0x3F800000
        push 0x3CF5C28F
        push 0x3D656042
        push 0
        lea ecx, ss:[esp+0x3C]
        push ecx
/*FIXUP push offset public_5d0608 @0x4d5263*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0608
/*FIXUP push offset public_5d7d38 @0x4d5268*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d7d38
        mov ecx, esi
        mov dword ptr ds : [esi+0x33C], eax
        mov dword ptr ss : [esp+0x48], 0xBE23D70A
        mov dword ptr ss : [esp+0x4C], 0x3C03126F
        mov dword ptr ss : [esp+0x50], 0
        call public_5a0e30
        mov dword ptr ds : [esi+0x340], eax
        mov dword ptr ss : [esp+4], 0x3DCCCCCD
        mov eax, dword ptr ss : [esp+4]
        lea edx, ds:[esi+0xB4]
        mov dword ptr ds : [edx], eax
        mov dword ptr ss : [esp+8], 0x3CA3D70A
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [edx+4], ecx
        mov dword ptr ss : [esp+0xC], 0
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [edx+8], eax
        mov dword ptr ss : [esp+4], 0x3BA3D70A
        mov edx, dword ptr ss : [esp+4]
        lea ecx, ds:[esi+0xC0]
        mov dword ptr ds : [ecx], edx
        mov dword ptr ss : [esp+8], 0
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ds : [ecx+4], eax
        mov dword ptr ss : [esp+0xC], 0
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [ecx+8], edx
        push 0x6D
        lea ecx, ds:[esi+0x32C]
        call public_5760d0
        mov eax, dword ptr ds : [esi]
        sub esp, 0xC
        mov dword ptr ss : [esp+0x10], 0x3BA3D70A
        mov edx, dword ptr ss : [esp+0x10]
        mov ecx, esp
        mov dword ptr ds : [ecx], edx
        mov dword ptr ss : [esp+0x14], 0xBEBAE148
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [ecx+4], edx
        mov dword ptr ss : [esp+0x18], 0xBF800000
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [ecx+8], edx
        mov ecx, esi
        call dword ptr ds : [eax+0x7C]
        mov eax, dword ptr ds : [esi]
        lea ecx, ds:[esi+0x60]
        push ecx
        mov ecx, esi
        call dword ptr ds : [eax+0x14]
        mov edx, dword ptr ss : [esp+0x30]
        mov eax, dword ptr ss : [esp+0x2C]
        push edx
        push eax
        mov ecx, esi
        call public_4b5060
        test al, al
        setne al
        pop esi
        add esp, 0x24
        ret 8
        UNREACHABLE_TRAP(0x4d4fa0)
    }
}
