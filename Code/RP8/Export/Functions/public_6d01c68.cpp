#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d15f80);
CLANG_FORWARD_PROC_SYMBOL(public_6d16ff0);
CLANG_FORWARD_PROC_SYMBOL(public_6d175f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d17630);
CLANG_FORWARD_PROC_SYMBOL(public_6d176a0);
CLANG_FORWARD_PROC_SYMBOL(public_6d176e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d19530);
CLANG_FORWARD_PROC_SYMBOL(public_6d19c30);
CLANG_FORWARD_PROC_SYMBOL(public_6d5cd40);

#define public_6d01cb4 _public_6d01cb4
#define public_6d01cda _public_6d01cda
#define public_6d01ced _public_6d01ced
#define public_6d02077 _public_6d02077
#define public_6d02080 _public_6d02080
#define public_6d020a3 _public_6d020a3

PROC_DECLARE(0x6d01c68, internal_6d01c68, public_6d01c68);
extern "C" NAKED register_t __cdecl internal_6d01c68()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x168
        mov dword ptr ss : [ebp-8], 0
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [eax+4]
        sub ecx, dword ptr ss : [ebp-8]
        neg ecx
        sbb ecx, ecx
        inc ecx
        test ecx, ecx
        je public_6d01cda
        mov edx, dword ptr ss : [ebp+8]
        add edx, 4
        mov dword ptr ss : [ebp-0xC], edx
        mov eax, dword ptr ss : [ebp-0xC]
        cmp dword ptr ds : [eax], 0
        je public_6d01cb4
        mov ecx, dword ptr ss : [ebp-0xC]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ss : [ebp-0xC]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [edx]
        push ecx
        call dword ptr ds : [edx+8]
        mov eax, dword ptr ss : [ebp-0xC]
        mov dword ptr ds : [eax], 0
        public_6d01cb4 : nop
        mov ecx, dword ptr ss : [ebp-0xC]
        push ecx
/*FIXUP push offset public_6d64218 @0x6d01cb8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d64218
        call dword ptr ds : [public_6d5e014]
        mov dword ptr ss : [ebp-0x168], eax
        mov edx, dword ptr ss : [ebp-0x168]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ss : [ebp-0x168]
        push ecx
        call dword ptr ds : [eax]
        public_6d01cda : nop
        cmp dword ptr ds : [public_6d70540], 0
        jne public_6d01ced
        call public_6d5cd40
        mov dword ptr ds : [public_6d70540], eax
        public_6d01ced : nop
        mov edx, dword ptr ss : [ebp+8]
        add edx, 0x25C
        mov dword ptr ss : [ebp-0x164], edx
        mov ecx, dword ptr ss : [ebp-0x164]
        call public_6d16ff0
        mov dword ptr ss : [ebp-0x10], 0
        push 1
        push 0
        push 1
/*FIXUP push offset public_6d6add8 @0x6d01d14*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6add8
        push 0
        lea ecx, ss:[ebp-0x24]
        call public_6d176a0
        lea eax, ss:[ebp-0x24]
        push eax
        lea ecx, ss:[ebp-0x10]
        push ecx
        mov ecx, dword ptr ss : [ebp-0x164]
        call public_6d15f80
        mov ecx, eax
        call public_6d17630
        mov dword ptr ss : [ebp-0x28], 1
        push 1
        push 0
        push 1
/*FIXUP push offset public_6d6adcc @0x6d01d4a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6adcc
        push 1
        lea ecx, ss:[ebp-0x3C]
        call public_6d175f0
        push eax
        lea edx, ss:[ebp-0x28]
        push edx
        mov ecx, dword ptr ss : [ebp-0x164]
        call public_6d15f80
        mov ecx, eax
        call public_6d17630
        mov dword ptr ss : [ebp-0x40], 7
        push 1
        push 0
        push 1
/*FIXUP push offset public_6d6adb8 @0x6d01d7d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6adb8
        push 7
        lea ecx, ss:[ebp-0x54]
        call public_6d175f0
        push eax
        lea eax, ss:[ebp-0x40]
        push eax
        mov ecx, dword ptr ss : [ebp-0x164]
        call public_6d15f80
        mov ecx, eax
        call public_6d17630
        mov dword ptr ss : [ebp-0x58], 0xB
        push 1
        push 0
        push 1
/*FIXUP push offset public_6d6adac @0x6d01db0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6adac
        push 0xB
        lea ecx, ss:[ebp-0x6C]
        call public_6d175f0
        push eax
        lea ecx, ss:[ebp-0x58]
        push ecx
        mov ecx, dword ptr ss : [ebp-0x164]
        call public_6d15f80
        mov ecx, eax
        call public_6d17630
        mov dword ptr ss : [ebp-0x70], 8
        push 1
        push 0
        push 0
/*FIXUP push offset public_6d6ada0 @0x6d01de3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6ada0
        push 8
        lea ecx, ss:[ebp-0x84]
        call public_6d175f0
        push eax
        lea edx, ss:[ebp-0x70]
        push edx
        mov ecx, dword ptr ss : [ebp-0x164]
        call public_6d15f80
        mov ecx, eax
        call public_6d17630
        mov dword ptr ss : [ebp-0x88], 9
        mov dword ptr ss : [ebp-0x160], 0x3F800000
        push 1
        push 0
        mov eax, dword ptr ss : [ebp-0x160]
        push eax
/*FIXUP push offset public_6d6ad90 @0x6d01e2b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6ad90
        push 9
        lea ecx, ss:[ebp-0x9C]
        call public_6d175f0
        push eax
        lea ecx, ss:[ebp-0x88]
        push ecx
        mov ecx, dword ptr ss : [ebp-0x164]
        call public_6d15f80
        mov ecx, eax
        call public_6d17630
        mov dword ptr ss : [ebp-0xA0], 0xA
        push 1
        push 0
        push 0xFFFFFFFF
/*FIXUP push offset public_6d6ad80 @0x6d01e67*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6ad80
        push 0xA
        lea ecx, ss:[ebp-0xB4]
        call public_6d175f0
        push eax
        lea edx, ss:[ebp-0xA0]
        push edx
        mov ecx, dword ptr ss : [ebp-0x164]
        call public_6d15f80
        mov ecx, eax
        call public_6d17630
        mov dword ptr ss : [ebp-0xB8], 2
        push 1
        push 0
        push 1
/*FIXUP push offset public_6d6ad74 @0x6d01ea3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6ad74
        push 2
        lea ecx, ss:[ebp-0xCC]
        call public_6d175f0
        push eax
        lea eax, ss:[ebp-0xB8]
        push eax
        mov ecx, dword ptr ss : [ebp-0x164]
        call public_6d15f80
        mov ecx, eax
        call public_6d17630
        mov dword ptr ss : [ebp-0xD0], 3
        push 1
        push 0
        push 0
/*FIXUP push offset public_6d6ad60 @0x6d01edf*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6ad60
        push 3
        lea ecx, ss:[ebp-0xE4]
        call public_6d175f0
        push eax
        lea ecx, ss:[ebp-0xD0]
        push ecx
        mov ecx, dword ptr ss : [ebp-0x164]
        call public_6d15f80
        mov ecx, eax
        call public_6d17630
        mov dword ptr ss : [ebp-0xE8], 4
        push 1
        push 0
        push 1
/*FIXUP push offset public_6d6ad4c @0x6d01f1b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6ad4c
        push 4
        lea ecx, ss:[ebp-0xFC]
        call public_6d175f0
        push eax
        lea edx, ss:[ebp-0xE8]
        push edx
        mov ecx, dword ptr ss : [ebp-0x164]
        call public_6d15f80
        mov ecx, eax
        call public_6d17630
        mov dword ptr ss : [ebp-0x100], 5
        push 1
        push 0
        push 1
/*FIXUP push offset public_6d6ad38 @0x6d01f57*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6ad38
        push 5
        lea ecx, ss:[ebp-0x114]
        call public_6d175f0
        push eax
        lea eax, ss:[ebp-0x100]
        push eax
        mov ecx, dword ptr ss : [ebp-0x164]
        call public_6d15f80
        mov ecx, eax
        call public_6d17630
        mov dword ptr ss : [ebp-0x118], 6
        push 1
        push 0
        push 1
/*FIXUP push offset public_6d6ad24 @0x6d01f93*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6ad24
        push 6
        lea ecx, ss:[ebp-0x12C]
        call public_6d175f0
        push eax
        lea ecx, ss:[ebp-0x118]
        push ecx
        mov ecx, dword ptr ss : [ebp-0x164]
        call public_6d15f80
        mov ecx, eax
        call public_6d17630
        mov dword ptr ss : [ebp-0x130], 0xC
        push 1
        push 0
        push 0
/*FIXUP push offset public_6d6ad14 @0x6d01fcf*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6ad14
        push 0xC
        lea ecx, ss:[ebp-0x144]
        call public_6d175f0
        push eax
        lea edx, ss:[ebp-0x130]
        push edx
        mov ecx, dword ptr ss : [ebp-0x164]
        call public_6d15f80
        mov ecx, eax
        call public_6d17630
        mov dword ptr ss : [ebp-0x148], 0xD
        push 1
        push 0
        push 0
/*FIXUP push offset public_6d6ad08 @0x6d0200b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6ad08
        push 0xD
        lea ecx, ss:[ebp-0x15C]
        call public_6d175f0
        push eax
        lea eax, ss:[ebp-0x148]
        push eax
        mov ecx, dword ptr ss : [ebp-0x164]
        call public_6d15f80
        mov ecx, eax
        call public_6d17630
        mov ecx, dword ptr ss : [ebp+8]
        add ecx, 0x270
        push ecx
        call public_6d19530
        add esp, 4
        mov edx, dword ptr ss : [ebp+8]
        add edx, 0x284
        push edx
        call public_6d176e0
        add esp, 4
        push 1
        mov eax, dword ptr ss : [ebp+8]
        add eax, 0x298
        push eax
        call public_6d19c30
        add esp, 8
        mov dword ptr ss : [ebp-4], 0
        jmp public_6d02080
        public_6d02077 : nop
        mov ecx, dword ptr ss : [ebp-4]
        add ecx, 1
        mov dword ptr ss : [ebp-4], ecx
        public_6d02080 : nop
        cmp dword ptr ss : [ebp-4], 8
        jae public_6d020a3
        push 0
        mov edx, dword ptr ss : [ebp-4]
        imul edx, 0x14
        mov eax, dword ptr ss : [ebp+8]
        lea ecx, ds:[eax+edx+0x298]
        push ecx
        call public_6d19c30
        add esp, 8
        jmp public_6d02077
        public_6d020a3 : nop
        xor eax, eax
        mov esp, ebp
        pop ebp
        ret 4
        UNREACHABLE_TRAP(0x6d01c68)
    }
}

#undef public_6d01cb4
#undef public_6d01cda
#undef public_6d01ced
#undef public_6d02077
#undef public_6d02080
#undef public_6d020a3
