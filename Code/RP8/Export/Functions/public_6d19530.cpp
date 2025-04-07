#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d15f80);
CLANG_FORWARD_PROC_SYMBOL(public_6d16b90);
CLANG_FORWARD_PROC_SYMBOL(public_6d16ff0);
CLANG_FORWARD_PROC_SYMBOL(public_6d17190);
CLANG_FORWARD_PROC_SYMBOL(public_6d175f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d17630);
CLANG_FORWARD_PROC_SYMBOL(public_6d176a0);
CLANG_FORWARD_PROC_SYMBOL(public_6d194f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d19530);

PROC_DECLARE(0x6d19530, internal_6d19530, public_6d19530);
extern "C" NAKED register_t __cdecl internal_6d19530()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x30C
        mov ecx, dword ptr ss : [ebp+8]
        call public_6d16ff0
        mov dword ptr ss : [ebp-4], 4
        push 0
        push 0
        push 0
/*FIXUP push offset public_6d6b6c0 @0x6d1954e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b6c0
        push 4
        lea ecx, ss:[ebp-0x18]
        call public_6d176a0
        lea ecx, ss:[ebp-0x198]
        call public_6d194f0
        push eax
        lea eax, ss:[ebp-4]
        push eax
        lea ecx, ss:[ebp-0x184]
        call public_6d17190
        push eax
        lea ecx, ss:[ebp-0x1A0]
        push ecx
        mov ecx, dword ptr ss : [ebp+8]
        call public_6d16b90
        mov edx, dword ptr ds : [eax]
        mov dword ptr ss : [ebp-0x16C], edx
        mov eax, dword ptr ss : [ebp-0x16C]
        add eax, 0x10
        mov dword ptr ss : [ebp-0x1A4], eax
        mov cl, byte ptr ss : [ebp-8]
        push ecx
        mov edx, dword ptr ss : [ebp-0xC]
        push edx
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        mov ecx, dword ptr ss : [ebp-0x18]
        push ecx
        mov edx, dword ptr ss : [ebp-0x14]
        push edx
        mov ecx, dword ptr ss : [ebp-0x1A4]
        call public_6d176a0
        mov dword ptr ss : [ebp-0x1C], 5
        push 0
        push 0
        push 0
/*FIXUP push offset public_6d6b6ac @0x6d195cb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b6ac
        push 5
        lea ecx, ss:[ebp-0x30]
        call public_6d176a0
        lea ecx, ss:[ebp-0x1D4]
        call public_6d194f0
        push eax
        lea eax, ss:[ebp-0x1C]
        push eax
        lea ecx, ss:[ebp-0x1C0]
        call public_6d17190
        push eax
        lea ecx, ss:[ebp-0x1DC]
        push ecx
        mov ecx, dword ptr ss : [ebp+8]
        call public_6d16b90
        mov edx, dword ptr ds : [eax]
        mov dword ptr ss : [ebp-0x1A8], edx
        mov eax, dword ptr ss : [ebp-0x1A8]
        add eax, 0x10
        mov dword ptr ss : [ebp-0x1E0], eax
        mov cl, byte ptr ss : [ebp-0x20]
        push ecx
        mov edx, dword ptr ss : [ebp-0x24]
        push edx
        mov eax, dword ptr ss : [ebp-0x28]
        push eax
        mov ecx, dword ptr ss : [ebp-0x30]
        push ecx
        mov edx, dword ptr ss : [ebp-0x2C]
        push edx
        mov ecx, dword ptr ss : [ebp-0x1E0]
        call public_6d176a0
        mov dword ptr ss : [ebp-0x34], 6
        push 0
        push 0
        push 0
/*FIXUP push offset public_6d6b698 @0x6d19648*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b698
        push 6
        lea ecx, ss:[ebp-0x48]
        call public_6d176a0
        lea ecx, ss:[ebp-0x210]
        call public_6d194f0
        push eax
        lea eax, ss:[ebp-0x34]
        push eax
        lea ecx, ss:[ebp-0x1FC]
        call public_6d17190
        push eax
        lea ecx, ss:[ebp-0x218]
        push ecx
        mov ecx, dword ptr ss : [ebp+8]
        call public_6d16b90
        mov edx, dword ptr ds : [eax]
        mov dword ptr ss : [ebp-0x1E4], edx
        mov eax, dword ptr ss : [ebp-0x1E4]
        add eax, 0x10
        mov dword ptr ss : [ebp-0x21C], eax
        mov cl, byte ptr ss : [ebp-0x38]
        push ecx
        mov edx, dword ptr ss : [ebp-0x3C]
        push edx
        mov eax, dword ptr ss : [ebp-0x40]
        push eax
        mov ecx, dword ptr ss : [ebp-0x48]
        push ecx
        mov edx, dword ptr ss : [ebp-0x44]
        push edx
        mov ecx, dword ptr ss : [ebp-0x21C]
        call public_6d176a0
        mov dword ptr ss : [ebp-0x4C], 7
        push 0
        push 0
        push 0
/*FIXUP push offset public_6d6b684 @0x6d196c5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b684
        push 7
        lea ecx, ss:[ebp-0x60]
        call public_6d176a0
        lea ecx, ss:[ebp-0x24C]
        call public_6d194f0
        push eax
        lea eax, ss:[ebp-0x4C]
        push eax
        lea ecx, ss:[ebp-0x238]
        call public_6d17190
        push eax
        lea ecx, ss:[ebp-0x254]
        push ecx
        mov ecx, dword ptr ss : [ebp+8]
        call public_6d16b90
        mov edx, dword ptr ds : [eax]
        mov dword ptr ss : [ebp-0x220], edx
        mov eax, dword ptr ss : [ebp-0x220]
        add eax, 0x10
        mov dword ptr ss : [ebp-0x258], eax
        mov cl, byte ptr ss : [ebp-0x50]
        push ecx
        mov edx, dword ptr ss : [ebp-0x54]
        push edx
        mov eax, dword ptr ss : [ebp-0x58]
        push eax
        mov ecx, dword ptr ss : [ebp-0x60]
        push ecx
        mov edx, dword ptr ss : [ebp-0x5C]
        push edx
        mov ecx, dword ptr ss : [ebp-0x258]
        call public_6d176a0
        mov dword ptr ss : [ebp-0x64], 8
        push 0
        push 0
        push 0
/*FIXUP push offset public_6d6b670 @0x6d19742*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b670
        push 8
        lea ecx, ss:[ebp-0x78]
        call public_6d176a0
        lea ecx, ss:[ebp-0x288]
        call public_6d194f0
        push eax
        lea eax, ss:[ebp-0x64]
        push eax
        lea ecx, ss:[ebp-0x274]
        call public_6d17190
        push eax
        lea ecx, ss:[ebp-0x290]
        push ecx
        mov ecx, dword ptr ss : [ebp+8]
        call public_6d16b90
        mov edx, dword ptr ds : [eax]
        mov dword ptr ss : [ebp-0x25C], edx
        mov eax, dword ptr ss : [ebp-0x25C]
        add eax, 0x10
        mov dword ptr ss : [ebp-0x294], eax
        mov cl, byte ptr ss : [ebp-0x68]
        push ecx
        mov edx, dword ptr ss : [ebp-0x6C]
        push edx
        mov eax, dword ptr ss : [ebp-0x70]
        push eax
        mov ecx, dword ptr ss : [ebp-0x78]
        push ecx
        mov edx, dword ptr ss : [ebp-0x74]
        push edx
        mov ecx, dword ptr ss : [ebp-0x294]
        call public_6d176a0
        mov dword ptr ss : [ebp-0x7C], 9
        push 0
        push 0
        push 0
/*FIXUP push offset public_6d6b664 @0x6d197bf*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b664
        push 9
        lea ecx, ss:[ebp-0x90]
        call public_6d176a0
        lea ecx, ss:[ebp-0x2C4]
        call public_6d194f0
        push eax
        lea eax, ss:[ebp-0x7C]
        push eax
        lea ecx, ss:[ebp-0x2B0]
        call public_6d17190
        push eax
        lea ecx, ss:[ebp-0x2CC]
        push ecx
        mov ecx, dword ptr ss : [ebp+8]
        call public_6d16b90
        mov edx, dword ptr ds : [eax]
        mov dword ptr ss : [ebp-0x298], edx
        mov eax, dword ptr ss : [ebp-0x298]
        add eax, 0x10
        mov dword ptr ss : [ebp-0x2D0], eax
        mov cl, byte ptr ss : [ebp-0x80]
        push ecx
        mov edx, dword ptr ss : [ebp-0x84]
        push edx
        mov eax, dword ptr ss : [ebp-0x88]
        push eax
        mov ecx, dword ptr ss : [ebp-0x90]
        push ecx
        mov edx, dword ptr ss : [ebp-0x8C]
        push edx
        mov ecx, dword ptr ss : [ebp-0x2D0]
        call public_6d176a0
        mov dword ptr ss : [ebp-0x94], 0xA
        push 0
        push 0
        push 0
/*FIXUP push offset public_6d6b658 @0x6d1984e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b658
        push 0xA
        lea ecx, ss:[ebp-0xA8]
        call public_6d176a0
        lea ecx, ss:[ebp-0x300]
        call public_6d194f0
        push eax
        lea eax, ss:[ebp-0x94]
        push eax
        lea ecx, ss:[ebp-0x2EC]
        call public_6d17190
        push eax
        lea ecx, ss:[ebp-0x308]
        push ecx
        mov ecx, dword ptr ss : [ebp+8]
        call public_6d16b90
        mov edx, dword ptr ds : [eax]
        mov dword ptr ss : [ebp-0x2D4], edx
        mov eax, dword ptr ss : [ebp-0x2D4]
        add eax, 0x10
        mov dword ptr ss : [ebp-0x30C], eax
        mov cl, byte ptr ss : [ebp-0x98]
        push ecx
        mov edx, dword ptr ss : [ebp-0x9C]
        push edx
        mov eax, dword ptr ss : [ebp-0xA0]
        push eax
        mov ecx, dword ptr ss : [ebp-0xA8]
        push ecx
        mov edx, dword ptr ss : [ebp-0xA4]
        push edx
        mov ecx, dword ptr ss : [ebp-0x30C]
        call public_6d176a0
        mov dword ptr ss : [ebp-0xAC], 0xB
        push 0
        push 0
        push 0
/*FIXUP push offset public_6d6b64c @0x6d198e3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b64c
        push 0xB
        lea ecx, ss:[ebp-0xC0]
        call public_6d175f0
        push eax
        lea eax, ss:[ebp-0xAC]
        push eax
        mov ecx, dword ptr ss : [ebp+8]
        call public_6d15f80
        mov ecx, eax
        call public_6d17630
        mov dword ptr ss : [ebp-0xC4], 0xC
        push 0
        push 0
        push 0
/*FIXUP push offset public_6d6b640 @0x6d1991c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b640
        push 0xC
        lea ecx, ss:[ebp-0xD8]
        call public_6d175f0
        push eax
        lea ecx, ss:[ebp-0xC4]
        push ecx
        mov ecx, dword ptr ss : [ebp+8]
        call public_6d15f80
        mov ecx, eax
        call public_6d17630
        mov dword ptr ss : [ebp-0xDC], 0xD
        push 0
        push 0
        push 0
/*FIXUP push offset public_6d6b638 @0x6d19955*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b638
        push 0xD
        lea ecx, ss:[ebp-0xF0]
        call public_6d175f0
        push eax
        lea edx, ss:[ebp-0xDC]
        push edx
        mov ecx, dword ptr ss : [ebp+8]
        call public_6d15f80
        mov ecx, eax
        call public_6d17630
        mov dword ptr ss : [ebp-0xF4], 0xE
        push 0
        push 0
        push 0
/*FIXUP push offset public_6d6b620 @0x6d1998e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b620
        push 0xE
        lea ecx, ss:[ebp-0x108]
        call public_6d175f0
        push eax
        lea eax, ss:[ebp-0xF4]
        push eax
        mov ecx, dword ptr ss : [ebp+8]
        call public_6d15f80
        mov ecx, eax
        call public_6d17630
        mov dword ptr ss : [ebp-0x10C], 0xF
        push 0
        push 0
        push 0
/*FIXUP push offset public_6d6b608 @0x6d199c7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b608
        push 0xF
        lea ecx, ss:[ebp-0x120]
        call public_6d175f0
        push eax
        lea ecx, ss:[ebp-0x10C]
        push ecx
        mov ecx, dword ptr ss : [ebp+8]
        call public_6d15f80
        mov ecx, eax
        call public_6d17630
        mov dword ptr ss : [ebp-0x124], 0x10
        push 0
        push 0
        push 0
/*FIXUP push offset public_6d6b5f4 @0x6d19a00*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b5f4
        push 0x10
        lea ecx, ss:[ebp-0x138]
        call public_6d175f0
        push eax
        lea edx, ss:[ebp-0x124]
        push edx
        mov ecx, dword ptr ss : [ebp+8]
        call public_6d15f80
        mov ecx, eax
        call public_6d17630
        mov dword ptr ss : [ebp-0x13C], 0x11
        push 0
        push 0
        push 0
/*FIXUP push offset public_6d6b5e4 @0x6d19a39*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b5e4
        push 0x11
        lea ecx, ss:[ebp-0x150]
        call public_6d175f0
        push eax
        lea eax, ss:[ebp-0x13C]
        push eax
        mov ecx, dword ptr ss : [ebp+8]
        call public_6d15f80
        mov ecx, eax
        call public_6d17630
        mov dword ptr ss : [ebp-0x154], 0x12
        push 0
        push 0
        push 0
/*FIXUP push offset public_6d6b5d4 @0x6d19a72*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b5d4
        push 0x12
        lea ecx, ss:[ebp-0x168]
        call public_6d175f0
        push eax
        lea ecx, ss:[ebp-0x154]
        push ecx
        mov ecx, dword ptr ss : [ebp+8]
        call public_6d15f80
        mov ecx, eax
        call public_6d17630
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d19530)
    }
}
