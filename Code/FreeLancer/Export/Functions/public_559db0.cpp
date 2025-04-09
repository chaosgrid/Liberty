#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_411c50);
CLANG_FORWARD_PROC_SYMBOL(public_4205c0);
CLANG_FORWARD_PROC_SYMBOL(public_420690);
CLANG_FORWARD_PROC_SYMBOL(public_4206c0);
CLANG_FORWARD_PROC_SYMBOL(public_425b30);
CLANG_FORWARD_PROC_SYMBOL(public_512660);
CLANG_FORWARD_PROC_SYMBOL(public_559db0);
CLANG_FORWARD_PROC_SYMBOL(public_55d870);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e90);
CLANG_FORWARD_JUMP_SYMBOL(public_5c15f6);

#define public_559e25 _public_559e25
#define public_559e40 _public_559e40
#define public_559e51 _public_559e51
#define public_559e82 _public_559e82
#define public_559eb2 _public_559eb2
#define public_559ecd _public_559ecd
#define public_559edc _public_559edc
#define public_559f0e _public_559f0e
#define public_559f3e _public_559f3e
#define public_559f59 _public_559f59
#define public_559f68 _public_559f68
#define public_559f9a _public_559f9a
#define public_559fd8 _public_559fd8
#define public_559ffd _public_559ffd
#define public_55a070 _public_55a070
#define public_55a0c1 _public_55a0c1
#define public_55a0c5 _public_55a0c5
#define public_55a106 _public_55a106
#define public_55a121 _public_55a121
#define public_55a144 _public_55a144
#define public_55a163 _public_55a163
#define public_55a172 _public_55a172
#define public_55a187 _public_55a187
#define public_55a194 _public_55a194
#define public_55a19f _public_55a19f
#define public_55a1cd _public_55a1cd
#define public_55a2a1 _public_55a2a1
#define public_55a2a9 _public_55a2a9
#define public_55a2be _public_55a2be
#define public_55a2d6 _public_55a2d6
#define public_55a34b _public_55a34b

PROC_DECLARE(0x559db0, internal_559db0, public_559db0);
extern "C" NAKED register_t __cdecl internal_559db0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5c15f6 @0x559db8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c15f6
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, 0x16C4
        mov dword ptr fs : [0], esp
        call public_5b7e90
        mov al, byte ptr ds : [public_679af0]
        test al, al
        jne public_55a34b
        mov eax, dword ptr ds : [public_5c6dd8]
        push esi
        mov byte ptr ds : [public_679af0], 1
        mov ecx, dword ptr ds : [eax]
        push ecx
/*FIXUP push offset public_5e158c @0x559dec*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e158c
        mov ecx, offset public_679a2c
        call public_425b30
/*FIXUP push offset public_5e1580 @0x559dfb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e1580
        lea ecx, ss:[esp+0x20]
        xor esi, esi
        call public_4205c0
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, offset public_679a2c
        call public_420690
        test al, al
        je public_559e25
        mov eax, dword ptr ds : [public_679a40]
        jmp public_559e40
        public_559e25 : nop
        lea eax, ss:[esp+0x1C]
        push eax
        lea ecx, ss:[esp+0xC]
        push ecx
        mov ecx, offset public_679a2c
        call public_4206c0
        mov eax, dword ptr ds : [eax]
        mov dword ptr ds : [public_679a40], eax
        public_559e40 : nop
        mov ecx, dword ptr ds : [public_679a30]
        cmp eax, ecx
        je public_559e51
        lea esi, ds:[eax+0x28]
        test esi, esi
        jne public_559e82
        public_559e51 : nop
        push 2
        push 0x10000
        lea ecx, ss:[esp+0x18]
        call public_411c50
        mov edx, dword ptr ds : [eax]
        mov eax, dword ptr ds : [public_5c6d18]
/*FIXUP push offset public_5e1580 @0x559e68*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e1580
        push 0xF2
/*FIXUP push offset public_5d3c00 @0x559e72*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d3c00
/*FIXUP push offset public_5c958c @0x559e77*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c958c
        push edx
        call dword ptr ds : [eax]
        add esp, 0x14
        public_559e82 : nop
        mov dword ptr ds : [public_679af4], esi
/*FIXUP push offset public_5e1574 @0x559e88*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e1574
        lea ecx, ss:[esp+0x20]
        xor esi, esi
        call public_4205c0
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, offset public_679a2c
        call public_420690
        test al, al
        je public_559eb2
        mov eax, dword ptr ds : [public_679a40]
        jmp public_559ecd
        public_559eb2 : nop
        lea edx, ss:[esp+0x1C]
        push edx
        lea eax, ss:[esp+0xC]
        push eax
        mov ecx, offset public_679a2c
        call public_4206c0
        mov eax, dword ptr ds : [eax]
        mov dword ptr ds : [public_679a40], eax
        public_559ecd : nop
        cmp eax, dword ptr ds : [public_679a30]
        je public_559edc
        lea esi, ds:[eax+0x28]
        test esi, esi
        jne public_559f0e
        public_559edc : nop
        push 2
        push 0x10000
        lea ecx, ss:[esp+0x18]
        call public_411c50
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [public_5c6d18]
/*FIXUP push offset public_5e1574 @0x559ef4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e1574
        push 0xF2
/*FIXUP push offset public_5d3c00 @0x559efe*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d3c00
/*FIXUP push offset public_5c958c @0x559f03*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c958c
        push ecx
        call dword ptr ds : [edx]
        add esp, 0x14
        public_559f0e : nop
        mov dword ptr ds : [public_679af8], esi
/*FIXUP push offset public_5e155c @0x559f14*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e155c
        lea ecx, ss:[esp+0x20]
        xor esi, esi
        call public_4205c0
        lea eax, ss:[esp+0x1C]
        push eax
        mov ecx, offset public_679a2c
        call public_420690
        test al, al
        je public_559f3e
        mov eax, dword ptr ds : [public_679a40]
        jmp public_559f59
        public_559f3e : nop
        lea ecx, ss:[esp+0x1C]
        push ecx
        lea edx, ss:[esp+0xC]
        push edx
        mov ecx, offset public_679a2c
        call public_4206c0
        mov eax, dword ptr ds : [eax]
        mov dword ptr ds : [public_679a40], eax
        public_559f59 : nop
        cmp eax, dword ptr ds : [public_679a30]
        je public_559f68
        lea esi, ds:[eax+0x28]
        test esi, esi
        jne public_559f9a
        public_559f68 : nop
        push 2
        push 0x10000
        lea ecx, ss:[esp+0x18]
        call public_411c50
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [public_5c6d18]
/*FIXUP push offset public_5e155c @0x559f80*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e155c
        push 0xF2
/*FIXUP push offset public_5d3c00 @0x559f8a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d3c00
/*FIXUP push offset public_5c958c @0x559f8f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c958c
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        public_559f9a : nop
        mov dword ptr ds : [public_679afc], esi
/*FIXUP push offset public_5e154c @0x559fa0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e154c
        lea ecx, ss:[esp+0x20]
        xor esi, esi
        call public_4205c0
        lea edx, ss:[esp+0x1C]
        push edx
        lea eax, ss:[esp+0xC]
        push eax
        mov ecx, offset public_679a2c
        call public_512660
        mov eax, dword ptr ds : [public_679a30]
        mov ecx, dword ptr ss : [esp+8]
        cmp ecx, eax
        je public_559fd8
        lea esi, ds:[ecx+0x28]
        test esi, esi
        jne public_559ffd
        public_559fd8 : nop
        mov ecx, dword ptr ds : [public_5c6d18]
/*FIXUP push offset public_5e154c @0x559fde*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e154c
        push 0xF2
/*FIXUP push offset public_5d3c00 @0x559fe8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d3c00
        mov eax, 0x100002
/*FIXUP push offset public_5c958c @0x559ff2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c958c
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        public_559ffd : nop
        mov edx, dword ptr ds : [public_5c6dd8]
        mov dword ptr ds : [public_679b00], esi
        mov eax, dword ptr ds : [edx]
        push eax
        lea ecx, ss:[esp+0x60]
/*FIXUP push offset public_5e1530 @0x55a010*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e1530
        push ecx
        call dword ptr ds : [public_5c6068]
        add esp, 0xC
        lea ecx, ss:[esp+0x160]
        call dword ptr ds : [public_5c605c]
        push 0
        lea edx, ss:[esp+0x60]
        push edx
        lea ecx, ss:[esp+0x168]
        mov dword ptr ss : [esp+0x16D8], 0
        call dword ptr ds : [public_5c6058]
        test al, al
        je public_55a2d6
        lea ecx, ss:[esp+0x160]
        call dword ptr ds : [public_5c6054]
        test al, al
        je public_55a2d6
        push ebx
        push ebp
        push edi
        nop 
        lea esp, ss:[esp]
        public_55a070 : nop
        xor edi, edi
/*FIXUP push offset public_5e1528 @0x55a072*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e1528
        lea ecx, ss:[esp+0x170]
        mov dword ptr ss : [esp+0x1C], 0
        mov dword ptr ss : [esp+0x24], 0
        mov dword ptr ss : [esp+0x14], 0
        xor ebx, ebx
        mov dword ptr ss : [esp+0x20], edi
        call dword ptr ds : [public_5c6050]
        test al, al
        je public_55a2be
        lea ecx, ss:[esp+0x16C]
        call dword ptr ds : [public_5c669c]
        test al, al
        je public_55a2be
        jmp public_55a0c5
        public_55a0c1 : nop
        mov edi, dword ptr ss : [esp+0x1C]
        public_55a0c5 : nop
        mov esi, dword ptr ds : [public_5c6cf4]
/*FIXUP push offset public_5e0af8 @0x55a0cb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e0af8
        lea ecx, ss:[esp+0x170]
        call esi
        test al, al
        lea ecx, ss:[esp+0x16C]
        je public_55a121
        push 0
        call dword ptr ds : [public_5c6d00]
        mov ebx, eax
        test ebx, ebx
        mov dword ptr ss : [esp+0x10], 4
        jle public_55a106
        mov eax, 0x100
        cdq 
        idiv ebx
        mov dword ptr ss : [esp+0x10], eax
        public_55a106 : nop
        fild dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x18], 0
        fdivr dword ptr ds : [public_5c75dc]
        fstp dword ptr ss : [esp+0x10]
        jmp public_55a2a1
/*FIXUP public_55a121 : nop
        push offset public_5da594 @0x55a121*/
  FIXUP public_55a121 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5da594
        call esi
        test al, al
        lea ecx, ss:[esp+0x16C]
        je public_55a144
        push 0
        call dword ptr ds : [public_5c6d00]
        mov dword ptr ss : [esp+0x1C], eax
        jmp public_55a2a9
/*FIXUP public_55a144 : nop
        push offset public_5e151c @0x55a144*/
  FIXUP public_55a144 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e151c
        call esi
        test al, al
        je public_55a163
        push 0
        lea ecx, ss:[esp+0x170]
        call dword ptr ds : [public_5c6d00]
        jmp public_55a2a9
        public_55a163 : nop
        xor ebp, ebp
        cmp edi, 2
        jne public_55a172
        mov ebp, dword ptr ds : [public_679afc]
        jmp public_55a19f
        public_55a172 : nop
        cmp edi, 3
        jne public_55a187
        mov ebp, dword ptr ds : [public_679b00]
        mov dword ptr ss : [esp+0x10], 0x3F000000
        jmp public_55a19f
        public_55a187 : nop
        cmp ebx, 0x20
        jne public_55a194
        mov ebp, dword ptr ds : [public_679af4]
        jmp public_55a19f
        public_55a194 : nop
        cmp ebx, 0x40
        jne public_55a19f
        mov ebp, dword ptr ds : [public_679af8]
        public_55a19f : nop
        push 1
        lea ecx, ss:[esp+0x170]
        mov dword ptr ss : [esp+0x18], 0
        call dword ptr ds : [public_5c6cf8]
        test al, al
        jne public_55a1cd
        push 1
        lea ecx, ss:[esp+0x170]
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ss : [esp+0x14]
        public_55a1cd : nop
        lea ecx, ss:[esp+0x16C]
        call dword ptr ds : [public_5c60b8]
        mov esi, eax
        mov al, byte ptr ss : [esp+0x27]
        push 0
        lea ecx, ss:[esp+0x48]
        mov byte ptr ss : [esp+0x48], al
        call dword ptr ds : [public_5c7084]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        push ecx
        push esi
        lea ecx, ss:[esp+0x4C]
        mov byte ptr ss : [esp+0x16E4], 1
        call dword ptr ds : [public_5c7088]
        mov ecx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x54], ecx
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x58], edx
        mov dword ptr ss : [esp+0x5C], eax
        mov dword ptr ss : [esp+0x60], ebp
        mov dword ptr ss : [esp+0x64], ecx
        mov eax, dword ptr ds : [public_679a4c]
        lea edx, ss:[esp+0x44]
        push edx
        push 1
        push eax
        mov ecx, offset public_679a44
        mov byte ptr ss : [esp+0x16E8], 2
        call public_55d870
        push 1
        lea ecx, ss:[esp+0x48]
        mov byte ptr ss : [esp+0x16E0], 0
        call dword ptr ds : [public_5c7084]
        fld dword ptr ss : [esp+0x10]
        fadd dword ptr ss : [esp+0x18]
        fst dword ptr ss : [esp+0x18]
        fcomp dword ptr ds : [public_5e1518]
        fnstsw ax
        test ah, 0x41
        jne public_55a2a9
        fld dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x18], 0
        fadd dword ptr ss : [esp+0x20]
        fst dword ptr ss : [esp+0x20]
        fcomp dword ptr ds : [public_5e1518]
        fnstsw ax
        test ah, 0x41
        jne public_55a2a9
        public_55a2a1 : nop
        mov dword ptr ss : [esp+0x20], 0
        public_55a2a9 : nop
        lea ecx, ss:[esp+0x16C]
        call dword ptr ds : [public_5c669c]
        test al, al
        jne public_55a0c1
        public_55a2be : nop
        lea ecx, ss:[esp+0x16C]
        call dword ptr ds : [public_5c6054]
        test al, al
        jne public_55a070
        pop edi
        pop ebp
        pop ebx
        public_55a2d6 : nop
        lea eax, ss:[esp+0x1588]
        mov dword ptr ss : [esp+0x16D0], 3
        mov dword ptr ss : [esp+8], eax
        lea ecx, ss:[esp+0x1588]
        mov byte ptr ss : [esp+0x16D0], 4
        call dword ptr ds : [public_5c604c]
        push 1
        lea ecx, ss:[esp+0x158C]
        mov byte ptr ss : [esp+0x16D4], 3
        call dword ptr ds : [public_5c7084]
        lea ecx, ss:[esp+0x160]
        mov dword ptr ss : [esp+0x16D0], 5
        call dword ptr ds : [public_5c604c]
        push 1
        lea ecx, ss:[esp+0x164]
        mov dword ptr ss : [esp+0x16D4], 0xFFFFFFFF
        call dword ptr ds : [public_5c7084]
        pop esi
        public_55a34b : nop
        mov ecx, dword ptr ss : [esp+0x16C4]
        mov dword ptr fs : [0], ecx
        add esp, 0x16D0
        ret 
        UNREACHABLE_TRAP(0x559db0)
    }
}

#undef public_559e25
#undef public_559e40
#undef public_559e51
#undef public_559e82
#undef public_559eb2
#undef public_559ecd
#undef public_559edc
#undef public_559f0e
#undef public_559f3e
#undef public_559f59
#undef public_559f68
#undef public_559f9a
#undef public_559fd8
#undef public_559ffd
#undef public_55a070
#undef public_55a0c1
#undef public_55a0c5
#undef public_55a106
#undef public_55a121
#undef public_55a144
#undef public_55a163
#undef public_55a172
#undef public_55a187
#undef public_55a194
#undef public_55a19f
#undef public_55a1cd
#undef public_55a2a1
#undef public_55a2a9
#undef public_55a2be
#undef public_55a2d6
#undef public_55a34b
