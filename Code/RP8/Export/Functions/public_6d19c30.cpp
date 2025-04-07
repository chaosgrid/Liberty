#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d15f80);
CLANG_FORWARD_PROC_SYMBOL(public_6d16b90);
CLANG_FORWARD_PROC_SYMBOL(public_6d16ff0);
CLANG_FORWARD_PROC_SYMBOL(public_6d17190);
CLANG_FORWARD_PROC_SYMBOL(public_6d175f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d17630);
CLANG_FORWARD_PROC_SYMBOL(public_6d176a0);
CLANG_FORWARD_PROC_SYMBOL(public_6d194f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d19c30);

#define public_6d19d4c _public_6d19d4c
#define public_6d19e46 _public_6d19e46

PROC_DECLARE(0x6d19c30, internal_6d19c30, public_6d19c30);
extern "C" NAKED register_t __cdecl internal_6d19c30()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x610
        mov ecx, dword ptr ss : [ebp+8]
        call public_6d16ff0
        movzx eax, byte ptr ss : [ebp+0xC]
        test eax, eax
        je public_6d19d4c
        mov dword ptr ss : [ebp-4], 1
        push 1
        push 0
        push 4
/*FIXUP push offset public_6d6b834 @0x6d19c5a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b834
        push 1
        lea ecx, ss:[ebp-0x18]
        call public_6d176a0
        lea ecx, ss:[ebp-0x2E8]
        call public_6d194f0
        push eax
        lea ecx, ss:[ebp-4]
        push ecx
        lea ecx, ss:[ebp-0x2D4]
        call public_6d17190
        push eax
        lea edx, ss:[ebp-0x2F0]
        push edx
        mov ecx, dword ptr ss : [ebp+8]
        call public_6d16b90
        mov eax, dword ptr ds : [eax]
        mov dword ptr ss : [ebp-0x2BC], eax
        mov ecx, dword ptr ss : [ebp-0x2BC]
        add ecx, 0x10
        mov dword ptr ss : [ebp-0x2F4], ecx
        mov dl, byte ptr ss : [ebp-8]
        push edx
        mov eax, dword ptr ss : [ebp-0xC]
        push eax
        mov ecx, dword ptr ss : [ebp-0x10]
        push ecx
        mov edx, dword ptr ss : [ebp-0x18]
        push edx
        mov eax, dword ptr ss : [ebp-0x14]
        push eax
        mov ecx, dword ptr ss : [ebp-0x2F4]
        call public_6d176a0
        mov dword ptr ss : [ebp-0x1C], 4
        push 1
        push 0
        push 2
/*FIXUP push offset public_6d6b82c @0x6d19cd7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b82c
        push 4
        lea ecx, ss:[ebp-0x30]
        call public_6d176a0
        lea ecx, ss:[ebp-0x324]
        call public_6d194f0
        push eax
        lea ecx, ss:[ebp-0x1C]
        push ecx
        lea ecx, ss:[ebp-0x310]
        call public_6d17190
        push eax
        lea edx, ss:[ebp-0x32C]
        push edx
        mov ecx, dword ptr ss : [ebp+8]
        call public_6d16b90
        mov eax, dword ptr ds : [eax]
        mov dword ptr ss : [ebp-0x2F8], eax
        mov ecx, dword ptr ss : [ebp-0x2F8]
        add ecx, 0x10
        mov dword ptr ss : [ebp-0x330], ecx
        mov dl, byte ptr ss : [ebp-0x20]
        push edx
        mov eax, dword ptr ss : [ebp-0x24]
        push eax
        mov ecx, dword ptr ss : [ebp-0x28]
        push ecx
        mov edx, dword ptr ss : [ebp-0x30]
        push edx
        mov eax, dword ptr ss : [ebp-0x2C]
        push eax
        mov ecx, dword ptr ss : [ebp-0x330]
        call public_6d176a0
        jmp public_6d19e46
        public_6d19d4c : nop
        mov dword ptr ss : [ebp-0x34], 1
        push 1
        push 0
        push 1
/*FIXUP push offset public_6d6b834 @0x6d19d59*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b834
        push 1
        lea ecx, ss:[ebp-0x48]
        call public_6d176a0
        lea ecx, ss:[ebp-0x360]
        call public_6d194f0
        push eax
        lea ecx, ss:[ebp-0x34]
        push ecx
        lea ecx, ss:[ebp-0x34C]
        call public_6d17190
        push eax
        lea edx, ss:[ebp-0x368]
        push edx
        mov ecx, dword ptr ss : [ebp+8]
        call public_6d16b90
        mov eax, dword ptr ds : [eax]
        mov dword ptr ss : [ebp-0x334], eax
        mov ecx, dword ptr ss : [ebp-0x334]
        add ecx, 0x10
        mov dword ptr ss : [ebp-0x36C], ecx
        mov dl, byte ptr ss : [ebp-0x38]
        push edx
        mov eax, dword ptr ss : [ebp-0x3C]
        push eax
        mov ecx, dword ptr ss : [ebp-0x40]
        push ecx
        mov edx, dword ptr ss : [ebp-0x48]
        push edx
        mov eax, dword ptr ss : [ebp-0x44]
        push eax
        mov ecx, dword ptr ss : [ebp-0x36C]
        call public_6d176a0
        mov dword ptr ss : [ebp-0x4C], 4
        push 1
        push 0
        push 1
/*FIXUP push offset public_6d6b82c @0x6d19dd6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b82c
        push 4
        lea ecx, ss:[ebp-0x60]
        call public_6d176a0
        lea ecx, ss:[ebp-0x39C]
        call public_6d194f0
        push eax
        lea ecx, ss:[ebp-0x4C]
        push ecx
        lea ecx, ss:[ebp-0x388]
        call public_6d17190
        push eax
        lea edx, ss:[ebp-0x3A4]
        push edx
        mov ecx, dword ptr ss : [ebp+8]
        call public_6d16b90
        mov eax, dword ptr ds : [eax]
        mov dword ptr ss : [ebp-0x370], eax
        mov ecx, dword ptr ss : [ebp-0x370]
        add ecx, 0x10
        mov dword ptr ss : [ebp-0x3A8], ecx
        mov dl, byte ptr ss : [ebp-0x50]
        push edx
        mov eax, dword ptr ss : [ebp-0x54]
        push eax
        mov ecx, dword ptr ss : [ebp-0x58]
        push ecx
        mov edx, dword ptr ss : [ebp-0x60]
        push edx
        mov eax, dword ptr ss : [ebp-0x5C]
        push eax
        mov ecx, dword ptr ss : [ebp-0x3A8]
        call public_6d176a0
        public_6d19e46 : nop
        mov dword ptr ss : [ebp-0x64], 2
        push 1
        push 0
        push 2
/*FIXUP push offset public_6d6b820 @0x6d19e53*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b820
        push 2
        lea ecx, ss:[ebp-0x78]
        call public_6d176a0
        lea ecx, ss:[ebp-0x3D8]
        call public_6d194f0
        push eax
        lea ecx, ss:[ebp-0x64]
        push ecx
        lea ecx, ss:[ebp-0x3C4]
        call public_6d17190
        push eax
        lea edx, ss:[ebp-0x3E0]
        push edx
        mov ecx, dword ptr ss : [ebp+8]
        call public_6d16b90
        mov eax, dword ptr ds : [eax]
        mov dword ptr ss : [ebp-0x3AC], eax
        mov ecx, dword ptr ss : [ebp-0x3AC]
        add ecx, 0x10
        mov dword ptr ss : [ebp-0x3E4], ecx
        mov dl, byte ptr ss : [ebp-0x68]
        push edx
        mov eax, dword ptr ss : [ebp-0x6C]
        push eax
        mov ecx, dword ptr ss : [ebp-0x70]
        push ecx
        mov edx, dword ptr ss : [ebp-0x78]
        push edx
        mov eax, dword ptr ss : [ebp-0x74]
        push eax
        mov ecx, dword ptr ss : [ebp-0x3E4]
        call public_6d176a0
        mov dword ptr ss : [ebp-0x7C], 3
        push 1
        push 0
        push 1
/*FIXUP push offset public_6d6b814 @0x6d19ed0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b814
        push 3
        lea ecx, ss:[ebp-0x90]
        call public_6d176a0
        lea ecx, ss:[ebp-0x414]
        call public_6d194f0
        push eax
        lea ecx, ss:[ebp-0x7C]
        push ecx
        lea ecx, ss:[ebp-0x400]
        call public_6d17190
        push eax
        lea edx, ss:[ebp-0x41C]
        push edx
        mov ecx, dword ptr ss : [ebp+8]
        call public_6d16b90
        mov eax, dword ptr ds : [eax]
        mov dword ptr ss : [ebp-0x3E8], eax
        mov ecx, dword ptr ss : [ebp-0x3E8]
        add ecx, 0x10
        mov dword ptr ss : [ebp-0x420], ecx
        mov dl, byte ptr ss : [ebp-0x80]
        push edx
        mov eax, dword ptr ss : [ebp-0x84]
        push eax
        mov ecx, dword ptr ss : [ebp-0x88]
        push ecx
        mov edx, dword ptr ss : [ebp-0x90]
        push edx
        mov eax, dword ptr ss : [ebp-0x8C]
        push eax
        mov ecx, dword ptr ss : [ebp-0x420]
        call public_6d176a0
        mov dword ptr ss : [ebp-0x94], 5
        push 1
        push 0
        push 2
/*FIXUP push offset public_6d6b808 @0x6d19f5f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b808
        push 5
        lea ecx, ss:[ebp-0xA8]
        call public_6d176a0
        lea ecx, ss:[ebp-0x450]
        call public_6d194f0
        push eax
        lea ecx, ss:[ebp-0x94]
        push ecx
        lea ecx, ss:[ebp-0x43C]
        call public_6d17190
        push eax
        lea edx, ss:[ebp-0x458]
        push edx
        mov ecx, dword ptr ss : [ebp+8]
        call public_6d16b90
        mov eax, dword ptr ds : [eax]
        mov dword ptr ss : [ebp-0x424], eax
        mov ecx, dword ptr ss : [ebp-0x424]
        add ecx, 0x10
        mov dword ptr ss : [ebp-0x45C], ecx
        mov dl, byte ptr ss : [ebp-0x98]
        push edx
        mov eax, dword ptr ss : [ebp-0x9C]
        push eax
        mov ecx, dword ptr ss : [ebp-0xA0]
        push ecx
        mov edx, dword ptr ss : [ebp-0xA8]
        push edx
        mov eax, dword ptr ss : [ebp-0xA4]
        push eax
        mov ecx, dword ptr ss : [ebp-0x45C]
        call public_6d176a0
        mov dword ptr ss : [ebp-0xAC], 6
        push 1
        push 0
        push 1
/*FIXUP push offset public_6d6b7fc @0x6d19ff4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b7fc
        push 6
        lea ecx, ss:[ebp-0xC0]
        call public_6d176a0
        lea ecx, ss:[ebp-0x48C]
        call public_6d194f0
        push eax
        lea ecx, ss:[ebp-0xAC]
        push ecx
        lea ecx, ss:[ebp-0x478]
        call public_6d17190
        push eax
        lea edx, ss:[ebp-0x494]
        push edx
        mov ecx, dword ptr ss : [ebp+8]
        call public_6d16b90
        mov eax, dword ptr ds : [eax]
        mov dword ptr ss : [ebp-0x460], eax
        mov ecx, dword ptr ss : [ebp-0x460]
        add ecx, 0x10
        mov dword ptr ss : [ebp-0x498], ecx
        mov dl, byte ptr ss : [ebp-0xB0]
        push edx
        mov eax, dword ptr ss : [ebp-0xB4]
        push eax
        mov ecx, dword ptr ss : [ebp-0xB8]
        push ecx
        mov edx, dword ptr ss : [ebp-0xC0]
        push edx
        mov eax, dword ptr ss : [ebp-0xBC]
        push eax
        mov ecx, dword ptr ss : [ebp-0x498]
        call public_6d176a0
        mov dword ptr ss : [ebp-0xC4], 7
        mov dword ptr ss : [ebp-0x49C], 0
        push 1
        push 0
        mov ecx, dword ptr ss : [ebp-0x49C]
        push ecx
/*FIXUP push offset public_6d6b7ec @0x6d1a098*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b7ec
        push 7
        lea ecx, ss:[ebp-0xD8]
        call public_6d176a0
        lea ecx, ss:[ebp-0x4CC]
        call public_6d194f0
        push eax
        lea edx, ss:[ebp-0xC4]
        push edx
        lea ecx, ss:[ebp-0x4B8]
        call public_6d17190
        push eax
        lea eax, ss:[ebp-0x4D4]
        push eax
        mov ecx, dword ptr ss : [ebp+8]
        call public_6d16b90
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [ebp-0x4A0], ecx
        mov edx, dword ptr ss : [ebp-0x4A0]
        add edx, 0x10
        mov dword ptr ss : [ebp-0x4D8], edx
        mov al, byte ptr ss : [ebp-0xC8]
        push eax
        mov ecx, dword ptr ss : [ebp-0xCC]
        push ecx
        mov edx, dword ptr ss : [ebp-0xD0]
        push edx
        mov eax, dword ptr ss : [ebp-0xD8]
        push eax
        mov ecx, dword ptr ss : [ebp-0xD4]
        push ecx
        mov ecx, dword ptr ss : [ebp-0x4D8]
        call public_6d176a0
        mov dword ptr ss : [ebp-0xDC], 8
        mov dword ptr ss : [ebp-0x4DC], 0
        push 1
        push 0
        mov edx, dword ptr ss : [ebp-0x4DC]
        push edx
/*FIXUP push offset public_6d6b7dc @0x6d1a13c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b7dc
        push 8
        lea ecx, ss:[ebp-0xF0]
        call public_6d176a0
        lea ecx, ss:[ebp-0x50C]
        call public_6d194f0
        push eax
        lea eax, ss:[ebp-0xDC]
        push eax
        lea ecx, ss:[ebp-0x4F8]
        call public_6d17190
        push eax
        lea ecx, ss:[ebp-0x514]
        push ecx
        mov ecx, dword ptr ss : [ebp+8]
        call public_6d16b90
        mov edx, dword ptr ds : [eax]
        mov dword ptr ss : [ebp-0x4E0], edx
        mov eax, dword ptr ss : [ebp-0x4E0]
        add eax, 0x10
        mov dword ptr ss : [ebp-0x518], eax
        mov cl, byte ptr ss : [ebp-0xE0]
        push ecx
        mov edx, dword ptr ss : [ebp-0xE4]
        push edx
        mov eax, dword ptr ss : [ebp-0xE8]
        push eax
        mov ecx, dword ptr ss : [ebp-0xF0]
        push ecx
        mov edx, dword ptr ss : [ebp-0xEC]
        push edx
        mov ecx, dword ptr ss : [ebp-0x518]
        call public_6d176a0
        mov dword ptr ss : [ebp-0xF4], 9
        mov dword ptr ss : [ebp-0x51C], 0
        push 1
        push 0
        mov eax, dword ptr ss : [ebp-0x51C]
        push eax
/*FIXUP push offset public_6d6b7cc @0x6d1a1e0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b7cc
        push 9
        lea ecx, ss:[ebp-0x108]
        call public_6d176a0
        lea ecx, ss:[ebp-0x54C]
        call public_6d194f0
        push eax
        lea ecx, ss:[ebp-0xF4]
        push ecx
        lea ecx, ss:[ebp-0x538]
        call public_6d17190
        push eax
        lea edx, ss:[ebp-0x554]
        push edx
        mov ecx, dword ptr ss : [ebp+8]
        call public_6d16b90
        mov eax, dword ptr ds : [eax]
        mov dword ptr ss : [ebp-0x520], eax
        mov ecx, dword ptr ss : [ebp-0x520]
        add ecx, 0x10
        mov dword ptr ss : [ebp-0x558], ecx
        mov dl, byte ptr ss : [ebp-0xF8]
        push edx
        mov eax, dword ptr ss : [ebp-0xFC]
        push eax
        mov ecx, dword ptr ss : [ebp-0x100]
        push ecx
        mov edx, dword ptr ss : [ebp-0x108]
        push edx
        mov eax, dword ptr ss : [ebp-0x104]
        push eax
        mov ecx, dword ptr ss : [ebp-0x558]
        call public_6d176a0
        mov dword ptr ss : [ebp-0x10C], 0xA
        mov dword ptr ss : [ebp-0x55C], 0
        push 1
        push 0
        mov ecx, dword ptr ss : [ebp-0x55C]
        push ecx
/*FIXUP push offset public_6d6b7bc @0x6d1a284*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b7bc
        push 0xA
        lea ecx, ss:[ebp-0x120]
        call public_6d176a0
        lea ecx, ss:[ebp-0x58C]
        call public_6d194f0
        push eax
        lea edx, ss:[ebp-0x10C]
        push edx
        lea ecx, ss:[ebp-0x578]
        call public_6d17190
        push eax
        lea eax, ss:[ebp-0x594]
        push eax
        mov ecx, dword ptr ss : [ebp+8]
        call public_6d16b90
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [ebp-0x560], ecx
        mov edx, dword ptr ss : [ebp-0x560]
        add edx, 0x10
        mov dword ptr ss : [ebp-0x598], edx
        mov al, byte ptr ss : [ebp-0x110]
        push eax
        mov ecx, dword ptr ss : [ebp-0x114]
        push ecx
        mov edx, dword ptr ss : [ebp-0x118]
        push edx
        mov eax, dword ptr ss : [ebp-0x120]
        push eax
        mov ecx, dword ptr ss : [ebp-0x11C]
        push ecx
        mov ecx, dword ptr ss : [ebp-0x598]
        call public_6d176a0
        mov dword ptr ss : [ebp-0x124], 0xB
        push 1
        push 0
        push 0
/*FIXUP push offset public_6d6b7ac @0x6d1a319*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b7ac
        push 0xB
        lea ecx, ss:[ebp-0x138]
        call public_6d176a0
        lea ecx, ss:[ebp-0x5C8]
        call public_6d194f0
        push eax
        lea edx, ss:[ebp-0x124]
        push edx
        lea ecx, ss:[ebp-0x5B4]
        call public_6d17190
        push eax
        lea eax, ss:[ebp-0x5D0]
        push eax
        mov ecx, dword ptr ss : [ebp+8]
        call public_6d16b90
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [ebp-0x59C], ecx
        mov edx, dword ptr ss : [ebp-0x59C]
        add edx, 0x10
        mov dword ptr ss : [ebp-0x5D4], edx
        mov al, byte ptr ss : [ebp-0x128]
        push eax
        mov ecx, dword ptr ss : [ebp-0x12C]
        push ecx
        mov edx, dword ptr ss : [ebp-0x130]
        push edx
        mov eax, dword ptr ss : [ebp-0x138]
        push eax
        mov ecx, dword ptr ss : [ebp-0x134]
        push ecx
        mov ecx, dword ptr ss : [ebp-0x5D4]
        call public_6d176a0
        mov dword ptr ss : [ebp-0x13C], 0xD
        push 1
        push 0
        push 1
/*FIXUP push offset public_6d6b7a0 @0x6d1a3ae*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b7a0
        push 0xD
        lea ecx, ss:[ebp-0x150]
        call public_6d176a0
        lea ecx, ss:[ebp-0x604]
        call public_6d194f0
        push eax
        lea edx, ss:[ebp-0x13C]
        push edx
        lea ecx, ss:[ebp-0x5F0]
        call public_6d17190
        push eax
        lea eax, ss:[ebp-0x60C]
        push eax
        mov ecx, dword ptr ss : [ebp+8]
        call public_6d16b90
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [ebp-0x5D8], ecx
        lea edx, ss:[ebp-0x150]
        push edx
        mov ecx, dword ptr ss : [ebp-0x5D8]
        add ecx, 0x10
        call public_6d17630
        mov dword ptr ss : [ebp-0x154], 0xE
        push 1
        push 0
        push 1
/*FIXUP push offset public_6d6b794 @0x6d1a41b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b794
        push 0xE
        lea ecx, ss:[ebp-0x168]
        call public_6d175f0
        push eax
        lea eax, ss:[ebp-0x154]
        push eax
        mov ecx, dword ptr ss : [ebp+8]
        call public_6d15f80
        mov ecx, eax
        call public_6d17630
        mov dword ptr ss : [ebp-0x16C], 0xF
        push 1
        push 0
        push 0
/*FIXUP push offset public_6d6b788 @0x6d1a454*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b788
        push 0xF
        lea ecx, ss:[ebp-0x180]
        call public_6d175f0
        push eax
        lea ecx, ss:[ebp-0x16C]
        push ecx
        mov ecx, dword ptr ss : [ebp+8]
        call public_6d15f80
        mov ecx, eax
        call public_6d17630
        mov dword ptr ss : [ebp-0x184], 0x10
        push 1
        push 0
        push 2
/*FIXUP push offset public_6d6b77c @0x6d1a48d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b77c
        push 0x10
        lea ecx, ss:[ebp-0x198]
        call public_6d175f0
        push eax
        lea edx, ss:[ebp-0x184]
        push edx
        mov ecx, dword ptr ss : [ebp+8]
        call public_6d15f80
        mov ecx, eax
        call public_6d17630
        mov dword ptr ss : [ebp-0x19C], 0x11
        push 1
        push 0
        push 2
/*FIXUP push offset public_6d6b770 @0x6d1a4c6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b770
        push 0x11
        lea ecx, ss:[ebp-0x1B0]
        call public_6d175f0
        push eax
        lea eax, ss:[ebp-0x19C]
        push eax
        mov ecx, dword ptr ss : [ebp+8]
        call public_6d15f80
        mov ecx, eax
        call public_6d17630
        mov dword ptr ss : [ebp-0x1B4], 0x12
        push 1
        push 0
        push 1
/*FIXUP push offset public_6d6b764 @0x6d1a4ff*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b764
        push 0x12
        lea ecx, ss:[ebp-0x1C8]
        call public_6d175f0
        push eax
        lea ecx, ss:[ebp-0x1B4]
        push ecx
        mov ecx, dword ptr ss : [ebp+8]
        call public_6d15f80
        mov ecx, eax
        call public_6d17630
        mov dword ptr ss : [ebp-0x1CC], 0x13
        mov dword ptr ss : [ebp-0x610], 0
        push 1
        push 0
        mov edx, dword ptr ss : [ebp-0x610]
        push edx
/*FIXUP push offset public_6d6b754 @0x6d1a547*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b754
        push 0x13
        lea ecx, ss:[ebp-0x1E0]
        call public_6d175f0
        push eax
        lea eax, ss:[ebp-0x1CC]
        push eax
        mov ecx, dword ptr ss : [ebp+8]
        call public_6d15f80
        mov ecx, eax
        call public_6d17630
        mov dword ptr ss : [ebp-0x1E4], 0x14
        push 1
        push 0
        push 0
/*FIXUP push offset public_6d6b748 @0x6d1a580*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b748
        push 0x14
        lea ecx, ss:[ebp-0x1F8]
        call public_6d175f0
        push eax
        lea ecx, ss:[ebp-0x1E4]
        push ecx
        mov ecx, dword ptr ss : [ebp+8]
        call public_6d15f80
        mov ecx, eax
        call public_6d17630
        mov dword ptr ss : [ebp-0x1FC], 0x15
        push 1
        push 0
        push 1
/*FIXUP push offset public_6d6b738 @0x6d1a5b9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b738
        push 0x15
        lea ecx, ss:[ebp-0x210]
        call public_6d175f0
        push eax
        lea edx, ss:[ebp-0x1FC]
        push edx
        mov ecx, dword ptr ss : [ebp+8]
        call public_6d15f80
        mov ecx, eax
        call public_6d17630
        mov dword ptr ss : [ebp-0x214], 0x16
        push 1
        push 0
        push 0
/*FIXUP push offset public_6d6b728 @0x6d1a5f2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b728
        push 0x16
        lea ecx, ss:[ebp-0x228]
        call public_6d175f0
        push eax
        lea eax, ss:[ebp-0x214]
        push eax
        mov ecx, dword ptr ss : [ebp+8]
        call public_6d15f80
        mov ecx, eax
        call public_6d17630
        mov dword ptr ss : [ebp-0x22C], 0x17
        push 1
        push 0
        push 0
/*FIXUP push offset public_6d6b718 @0x6d1a62b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b718
        push 0x17
        lea ecx, ss:[ebp-0x240]
        call public_6d175f0
        push eax
        lea ecx, ss:[ebp-0x22C]
        push ecx
        mov ecx, dword ptr ss : [ebp+8]
        call public_6d15f80
        mov ecx, eax
        call public_6d17630
        mov dword ptr ss : [ebp-0x244], 0x18
        push 1
        push 0
        push 0
/*FIXUP push offset public_6d6b700 @0x6d1a664*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b700
        push 0x18
        lea ecx, ss:[ebp-0x258]
        call public_6d175f0
        push eax
        lea edx, ss:[ebp-0x244]
        push edx
        mov ecx, dword ptr ss : [ebp+8]
        call public_6d15f80
        mov ecx, eax
        call public_6d17630
        mov dword ptr ss : [ebp-0x25C], 0x19
        push 1
        push 0
        push 1
/*FIXUP push offset public_6d6b6f4 @0x6d1a69d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b6f4
        push 0x19
        lea ecx, ss:[ebp-0x270]
        call public_6d175f0
        push eax
        lea eax, ss:[ebp-0x25C]
        push eax
        mov ecx, dword ptr ss : [ebp+8]
        call public_6d15f80
        mov ecx, eax
        call public_6d17630
        mov dword ptr ss : [ebp-0x274], 0x1A
        push 1
        push 0
        push 1
/*FIXUP push offset public_6d6b6e8 @0x6d1a6d6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b6e8
        push 0x1A
        lea ecx, ss:[ebp-0x288]
        call public_6d175f0
        push eax
        lea ecx, ss:[ebp-0x274]
        push ecx
        mov ecx, dword ptr ss : [ebp+8]
        call public_6d15f80
        mov ecx, eax
        call public_6d17630
        mov dword ptr ss : [ebp-0x28C], 0x1B
        push 1
        push 0
        push 1
/*FIXUP push offset public_6d6b6dc @0x6d1a70f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b6dc
        push 0x1B
        lea ecx, ss:[ebp-0x2A0]
        call public_6d175f0
        push eax
        lea edx, ss:[ebp-0x28C]
        push edx
        mov ecx, dword ptr ss : [ebp+8]
        call public_6d15f80
        mov ecx, eax
        call public_6d17630
        mov dword ptr ss : [ebp-0x2A4], 0x1C
        push 1
        push 0
        push 1
/*FIXUP push offset public_6d6b6d0 @0x6d1a748*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b6d0
        push 0x1C
        lea ecx, ss:[ebp-0x2B8]
        call public_6d175f0
        push eax
        lea eax, ss:[ebp-0x2A4]
        push eax
        mov ecx, dword ptr ss : [ebp+8]
        call public_6d15f80
        mov ecx, eax
        call public_6d17630
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d19c30)
    }
}

#undef public_6d19d4c
#undef public_6d19e46
