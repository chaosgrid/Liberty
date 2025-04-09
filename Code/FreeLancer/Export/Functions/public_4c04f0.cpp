#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_46b450);
CLANG_FORWARD_PROC_SYMBOL(public_4a1ad0);
CLANG_FORWARD_PROC_SYMBOL(public_4b5060);
CLANG_FORWARD_PROC_SYMBOL(public_4be7e0);
CLANG_FORWARD_PROC_SYMBOL(public_4bf120);
CLANG_FORWARD_PROC_SYMBOL(public_4bf720);
CLANG_FORWARD_PROC_SYMBOL(public_4c1a10);
CLANG_FORWARD_PROC_SYMBOL(public_4c1ae0);
CLANG_FORWARD_PROC_SYMBOL(public_4c45d0);
CLANG_FORWARD_PROC_SYMBOL(public_4c4640);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);
CLANG_FORWARD_PROC_SYMBOL(public_579c40);
CLANG_FORWARD_PROC_SYMBOL(public_579cc0);
CLANG_FORWARD_PROC_SYMBOL(public_59db20);
CLANG_FORWARD_PROC_SYMBOL(public_5a0c90);
CLANG_FORWARD_PROC_SYMBOL(public_5a0db0);
CLANG_FORWARD_PROC_SYMBOL(public_5a0e30);
CLANG_FORWARD_PROC_SYMBOL(public_5a0ef0);
CLANG_FORWARD_PROC_SYMBOL(public_5a1020);
CLANG_FORWARD_PROC_SYMBOL(public_5a1340);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5bd658);

#define public_4c0557 _public_4c0557
#define public_4c0564 _public_4c0564
#define public_4c058c _public_4c058c
#define public_4c0590 _public_4c0590
#define public_4c05c4 _public_4c05c4
#define public_4c05d3 _public_4c05d3
#define public_4c0db3 _public_4c0db3
#define public_4c0db5 _public_4c0db5
#define public_4c18c0 _public_4c18c0
#define public_4c18c2 _public_4c18c2
#define public_4c1918 _public_4c1918
#define public_4c191a _public_4c191a
#define public_4c1977 _public_4c1977
#define public_4c1979 _public_4c1979
#define public_4c19bf _public_4c19bf
#define public_4c19e3 _public_4c19e3
#define public_4c19f0 _public_4c19f0

PROC_DECLARE(0x4c04f0, internal_4c04f0, public_4c04f0);
extern "C" NAKED register_t __cdecl internal_4c04f0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5bd658 @0x4c04f8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bd658
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr fs : [0], esp
        sub esp, 0x80
        push esi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0x94]
        push eax
        push ecx
        mov ecx, esi
        call public_4b5060
        test al, al
        je public_4c19f0
        mov edx, dword ptr ds : [public_674a8c]
        push ebx
        push edi
        push edx
        call public_4c45d0
        mov edi, eax
        mov eax, dword ptr ds : [public_674a88]
        push eax
        call public_4c45d0
        xor ebx, ebx
        add esp, 8
        cmp edi, ebx
        je public_4c0557
        mov edi, dword ptr ds : [edi+0x14]
        mov dword ptr ds : [esi+0x3C8], edi
        public_4c0557 : nop
        cmp eax, ebx
        je public_4c0564
        mov eax, dword ptr ds : [eax+0x14]
        mov dword ptr ds : [esi+0x3D0], eax
        public_4c0564 : nop
        call public_54baf0
        cmp eax, ebx
        je public_4c058c
        add eax, 0xC
        cmp eax, ebx
        je public_4c058c
        mov eax, dword ptr ds : [eax+4]
        cmp eax, ebx
        je public_4c058c
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x503
        cmp ecx, 0x503
        je public_4c0590
        public_4c058c : nop
        xor eax, eax
        jmp public_4c05d3
        public_4c0590 : nop
        mov ecx, dword ptr ds : [eax+0x88]
        mov edx, dword ptr ds : [ecx+0x140]
        mov dword ptr ds : [esi+0x3CC], edx
        mov ecx, dword ptr ds : [eax+0x88]
        mov ecx, dword ptr ds : [ecx+0x144]
        cmp ecx, 0xFFFFFFFF
        mov dword ptr ds : [esi+0x3D4], ecx
        mov edx, 0x2FAF080
        jne public_4c05c4
        mov dword ptr ds : [esi+0x3D4], edx
        public_4c05c4 : nop
        cmp dword ptr ds : [esi+0x3CC], 0xFFFFFFFF
        jne public_4c05d3
        mov dword ptr ds : [esi+0x3CC], edx
        public_4c05d3 : nop
        push ebp
        mov dword ptr ds : [esi+0x438], eax
        call public_4c4640
        fstp qword ptr ds : [esi+0x3C0]
        fld dword ptr ds : [public_6728bc]
        lea eax, ds:[esi+0xA8]
        fstp dword ptr ss : [esp+0x24]
        fld dword ptr ds : [public_612188]
        mov ecx, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [eax], ecx
        fstp dword ptr ss : [esp+0x28]
        mov edx, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ss : [esp+0x2C], 0
        mov ecx, dword ptr ss : [esp+0x2C]
        push ebx
        mov dword ptr ds : [eax+8], ecx
/*FIXUP push offset public_5d6c68 @0x4c061e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d6c68
        mov ecx, esi
        mov dword ptr ss : [esp+0x20], 0
        mov dword ptr ss : [esp+0x24], 0
        mov dword ptr ss : [esp+0x28], 0
        call dword ptr ds : [edx+0x98]
        lea eax, ds:[esi+0x80]
        push eax
        lea ecx, ds:[esi+0xB4]
        call public_5a1340
        mov ecx, dword ptr ds : [public_6728b8]
        mov edi, dword ptr ds : [public_5c71ec]
        push ecx
/*FIXUP push offset public_5d6c5c @0x4c0662*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d6c5c
/*FIXUP push offset public_5d601c @0x4c0667*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d601c
/*FIXUP push offset public_6724b8 @0x4c066c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6724b8
        call edi
        add esp, 0x10
        mov ecx, dword ptr ds : [public_6728b8]
        lea edx, ss:[esp+0x18]
        push edx
        push ebx
        push ebx
        push ebx
        push 1
        push ebx
        push ebx
        push ebx
        push 1
        push 1
        push 1
        inc ecx
        lea eax, ss:[esp+0x44]
        push eax
        mov dword ptr ds : [public_6728b8], ecx
/*FIXUP push offset public_5d6c4c @0x4c069b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d6c4c
        lea ecx, ss:[esp+0x4C]
        push ecx
/*FIXUP push offset public_5d6c18 @0x4c06a5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d6c18
/*FIXUP push offset public_6724b8 @0x4c06aa*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6724b8
        mov ecx, esi
        call public_5a0db0
        push ebx
        push 1
        mov dword ptr ds : [esi+0x3A0], eax
        mov edx, dword ptr ds : [eax]
        push 1
        mov ecx, eax
        call dword ptr ds : [edx+0xA8]
        mov eax, dword ptr ds : [public_6728b8]
        push eax
/*FIXUP push offset public_5d6c0c @0x4c06d1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d6c0c
/*FIXUP push offset public_5d601c @0x4c06d6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d601c
/*FIXUP push offset public_6724b8 @0x4c06db*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6724b8
        call edi
        mov eax, dword ptr ds : [public_6728b8]
        add esp, 0x10
        inc eax
        lea ecx, ss:[esp+0x18]
        mov dword ptr ds : [public_6728b8], eax
        push ecx
        push ebx
        push ebx
        push ebx
        push 1
        push ebx
        push ebx
        push 1
        push ebx
        push 1
        push 1
        lea edx, ss:[esp+0x44]
        push edx
/*FIXUP push offset public_5d6bfc @0x4c0708*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d6bfc
        lea eax, ss:[esp+0x4C]
        push eax
/*FIXUP push offset public_5d6bc0 @0x4c0712*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d6bc0
/*FIXUP push offset public_6724b8 @0x4c0717*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6724b8
        mov ecx, esi
        call public_5a0db0
        mov dword ptr ds : [esi+0x3A4], eax
        mov ecx, dword ptr ds : [public_6728b8]
        push ecx
/*FIXUP push offset public_5d6bb4 @0x4c0730*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d6bb4
/*FIXUP push offset public_5d601c @0x4c0735*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d601c
/*FIXUP push offset public_6724b8 @0x4c073a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6724b8
        call edi
        mov edx, dword ptr ds : [public_6728b8]
        add esp, 0x10
        push ebx
        push ebx
        push 1
        push 0x754
        push 0x40000000
        push 0x3D50E560
        push 0x3E3020C5
        inc edx
/*FIXUP push offset public_5d6ba4 @0x4c0763*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d6ba4
        mov dword ptr ds : [public_6728b8], edx
        lea edx, ss:[esp+0x38]
        push edx
/*FIXUP push offset public_5ce91c @0x4c0773*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ce91c
/*FIXUP push offset public_6724b8 @0x4c0778*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6724b8
        mov ecx, esi
        call public_5a0e30
        mov dword ptr ds : [esi+0x3A8], eax
        mov eax, dword ptr ds : [public_6728b8]
        push eax
/*FIXUP push offset public_5d6b98 @0x4c0790*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d6b98
/*FIXUP push offset public_5d601c @0x4c0795*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d601c
/*FIXUP push offset public_6724b8 @0x4c079a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6724b8
        call edi
        mov ecx, dword ptr ds : [public_6728b8]
        add esp, 0x10
        push ebx
        push ebx
        push 1
        push ebx
        push 0x40000000
        push 0x3D1FBE77
        inc ecx
        push 0x3ED47AE1
        mov dword ptr ds : [public_6728b8], ecx
/*FIXUP push offset public_5d6b88 @0x4c07c5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d6b88
        lea ecx, ss:[esp+0x38]
        push ecx
/*FIXUP push offset public_5d6b78 @0x4c07cf*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d6b78
/*FIXUP push offset public_6724b8 @0x4c07d4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6724b8
        mov ecx, esi
        call public_5a0e30
        mov dword ptr ds : [esi+0x398], eax
        mov edx, dword ptr ds : [public_6728b8]
        push edx
/*FIXUP push offset public_5d6b6c @0x4c07ed*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d6b6c
/*FIXUP push offset public_5d601c @0x4c07f2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d601c
/*FIXUP push offset public_6724b8 @0x4c07f7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6724b8
        call edi
        mov eax, dword ptr ds : [public_6728b8]
        add esp, 0x10
        inc eax
        mov dword ptr ds : [public_6728b8], eax
        push ebx
        push ebx
        push 1
        push ebx
        push 0x40000000
        push 0x3D1FBE77
        push 0x3ED47AE1
/*FIXUP push offset public_5d6b5c @0x4c0820*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d6b5c
        lea eax, ss:[esp+0x38]
        push eax
/*FIXUP push offset public_5d6b78 @0x4c082a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d6b78
/*FIXUP push offset public_6724b8 @0x4c082f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6724b8
        mov ecx, esi
        call public_5a0e30
        mov ecx, dword ptr ds : [esi+0x398]
        push ebx
/*FIXUP push offset public_6732f0 @0x4c0842*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6732f0
        mov dword ptr ds : [esi+0x39C], eax
        mov edx, dword ptr ds : [ecx]
        push 0x1D
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x39C]
        mov eax, dword ptr ds : [ecx]
        push ebx
/*FIXUP push offset public_5d6b44 @0x4c0860*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d6b44
        push 0x1D
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [public_6728b8]
        push ecx
/*FIXUP push offset public_5d6b30 @0x4c0874*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d6b30
/*FIXUP push offset public_5d601c @0x4c0879*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d601c
/*FIXUP push offset public_6724b8 @0x4c087e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6724b8
        call edi
        mov ecx, dword ptr ds : [public_6728b8]
        add esp, 0x10
        push ebx
        push ebx
        push 1
        push ebx
        push 0x3FC00000
        push 0x3CED9168
        push 0x3ED47AE1
/*FIXUP push offset public_5d6b1c @0x4c08a2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d6b1c
        lea edx, ss:[esp+0x38]
        push edx
        inc ecx
/*FIXUP push offset public_5d01a8 @0x4c08ad*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d01a8
        mov dword ptr ds : [public_6728b8], ecx
/*FIXUP push offset public_6724b8 @0x4c08b8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6724b8
        mov ecx, esi
        call public_5a0e30
        mov dword ptr ds : [esi+0x410], eax
        mov eax, dword ptr ds : [public_6728b8]
        push eax
/*FIXUP push offset public_5d6b08 @0x4c08d0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d6b08
/*FIXUP push offset public_5d601c @0x4c08d5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d601c
/*FIXUP push offset public_6724b8 @0x4c08da*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6724b8
        call edi
        mov ebp, dword ptr ds : [public_6728b8]
        add esp, 0x10
        push ebx
        push ebx
        push 1
        push ebx
        push 0x3FC00000
        push 0x3CED9168
        push 0x3ED47AE1
/*FIXUP push offset public_5d6af4 @0x4c08fe*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d6af4
        lea ecx, ss:[esp+0x38]
        push ecx
/*FIXUP push offset public_5d01a8 @0x4c0908*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d01a8
        inc ebp
/*FIXUP push offset public_6724b8 @0x4c090e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6724b8
        mov ecx, esi
        mov dword ptr ds : [public_6728b8], ebp
        call public_5a0e30
        mov ecx, dword ptr ds : [esi+0x410]
        push ebx
        push 0x75A
        mov dword ptr ds : [esi+0x414], eax
        mov edx, dword ptr ds : [ecx]
        push 0x1E
        call dword ptr ds : [edx+0xA8]
        push 0xC0
        push ebx
        push ebx
        push 0xFF
        lea ecx, ss:[esp+0x24]
        call public_4a1ad0
        mov eax, dword ptr ds : [esi+0x410]
        mov ecx, dword ptr ss : [esp+0x14]
        push ebx
        mov dword ptr ds : [eax+0x348], ecx
        mov ecx, dword ptr ds : [esi+0x414]
        mov edx, dword ptr ds : [ecx]
        push 0x75A
        push 0x1E
        call dword ptr ds : [edx+0xA8]
        push 0xC0
        push ebx
        push ebx
        push 0xFF
        lea ecx, ss:[esp+0x24]
        call public_4a1ad0
        mov eax, dword ptr ds : [esi+0x414]
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax+0x348], ecx
        mov edx, dword ptr ds : [public_6728b8]
        push edx
/*FIXUP push offset public_5d6ae0 @0x4c09a3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d6ae0
/*FIXUP push offset public_5d601c @0x4c09a8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d601c
/*FIXUP push offset public_6724b8 @0x4c09ad*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6724b8
        call edi
        add esp, 0x10
        mov edx, dword ptr ds : [public_6728b8]
        lea eax, ss:[esp+0x18]
        push eax
        push ebx
        push ebx
        push ebx
        push 1
        push ebx
        push ebx
        push 1
        push ebx
        push 1
        push 1
        inc edx
        lea ecx, ss:[esp+0x44]
        push ecx
/*FIXUP push offset public_5d6ac4 @0x4c09d6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d6ac4
        mov dword ptr ds : [public_6728b8], edx
        lea edx, ss:[esp+0x4C]
        push edx
/*FIXUP push offset public_5d6a94 @0x4c09e6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d6a94
/*FIXUP push offset public_6724b8 @0x4c09eb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6724b8
        mov ecx, esi
        call public_5a0db0
        lea ecx, ds:[eax+0x80]
        push ecx
        lea ecx, ds:[eax+0xB4]
        mov dword ptr ds : [esi+0x3B8], eax
        call public_5a1340
        mov edx, dword ptr ds : [esi+0x3B8]
        mov byte ptr ss : [esp+0x10], 0xFF
        mov byte ptr ss : [esp+0x11], bl
        mov byte ptr ss : [esp+0x12], bl
        mov byte ptr ss : [esp+0x13], 0xC0
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edx+0x410], eax
        mov ecx, dword ptr ds : [esi+0x3B8]
        mov byte ptr ss : [esp+0x10], 0xFF
        mov byte ptr ss : [esp+0x11], bl
        mov byte ptr ss : [esp+0x12], bl
        mov byte ptr ss : [esp+0x13], 0xC0
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx+0x414], edx
        mov eax, dword ptr ds : [public_6728b8]
        push eax
/*FIXUP push offset public_5d6a84 @0x4c0a59*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d6a84
/*FIXUP push offset public_5d601c @0x4c0a5e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d601c
/*FIXUP push offset public_6724b8 @0x4c0a63*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6724b8
        call edi
        mov ecx, dword ptr ds : [public_6728b8]
        add esp, 0x10
        push ebx
        push ebx
        push 1
        push 0x755
        inc ecx
        mov dword ptr ds : [public_6728b8], ecx
        mov ecx, dword ptr ds : [esi+0x3B8]
        fld dword ptr ds : [ecx+0xB4]
        push 0x3FA00000
        push 0x3D50E560
        fadd st(0), st
        push ecx
        lea edx, ss:[esp+0x34]
        fstp dword ptr ss : [esp]
/*FIXUP push offset public_5d6a6c @0x4c0aa3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d6a6c
        push edx
/*FIXUP push offset public_5d01a8 @0x4c0aa9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d01a8
/*FIXUP push offset public_6724b8 @0x4c0aae*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6724b8
        mov ecx, esi
        call public_5a0e30
        mov dword ptr ds : [esi+0x3B4], eax
        mov eax, dword ptr ds : [public_6728b8]
        push eax
/*FIXUP push offset public_5d6ae0 @0x4c0ac6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d6ae0
/*FIXUP push offset public_5d601c @0x4c0acb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d601c
/*FIXUP push offset public_6724b8 @0x4c0ad0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6724b8
        call edi
        add esp, 0x10
        mov eax, dword ptr ds : [public_6728b8]
        lea ecx, ss:[esp+0x18]
        push ecx
        push ebx
        push ebx
        push ebx
        push 1
        push ebx
        push ebx
        push 1
        push ebx
        push 1
        push 1
        inc eax
        lea edx, ss:[esp+0x44]
        push edx
/*FIXUP push offset public_5d6ac4 @0x4c0af8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d6ac4
        mov dword ptr ds : [public_6728b8], eax
        lea eax, ss:[esp+0x4C]
        push eax
/*FIXUP push offset public_5d6a38 @0x4c0b07*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d6a38
/*FIXUP push offset public_6724b8 @0x4c0b0c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6724b8
        mov ecx, esi
        call public_5a0db0
        mov ecx, dword ptr ds : [esi+0x3B8]
        push ebx
        push 1
        mov dword ptr ds : [esi+0x3BC], eax
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx+0xA8]
        mov eax, dword ptr ds : [public_6728b8]
        push eax
/*FIXUP push offset public_5d6a24 @0x4c0b37*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d6a24
/*FIXUP push offset public_5d601c @0x4c0b3c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d601c
/*FIXUP push offset public_6724b8 @0x4c0b41*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6724b8
        call edi
        mov eax, dword ptr ds : [public_6728b8]
        add esp, 0x10
        lea ecx, ss:[esp+0x18]
        push ecx
        push ebx
        push ebx
        push ebx
        push 1
        push ebx
        push ebx
        inc eax
        push 1
        mov dword ptr ds : [public_6728b8], eax
        push ebx
        push 1
        push 1
        lea edx, ss:[esp+0x44]
        push edx
/*FIXUP push offset public_5d6a08 @0x4c0b6e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d6a08
        lea eax, ss:[esp+0x4C]
        push eax
/*FIXUP push offset public_5d6a94 @0x4c0b78*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d6a94
/*FIXUP push offset public_6724b8 @0x4c0b7d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6724b8
        mov ecx, esi
        call public_5a0db0
        lea ecx, ds:[eax+0x80]
        push ecx
        lea ecx, ds:[eax+0xB4]
        mov dword ptr ds : [esi+0x3DC], eax
        call public_5a1340
        mov edx, dword ptr ds : [esi+0x3DC]
        mov byte ptr ss : [esp+0x10], 0xFF
        mov byte ptr ss : [esp+0x11], bl
        mov byte ptr ss : [esp+0x12], bl
        mov byte ptr ss : [esp+0x13], 0xC0
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edx+0x410], eax
        mov ecx, dword ptr ds : [esi+0x3DC]
        mov byte ptr ss : [esp+0x10], 0xFF
        mov byte ptr ss : [esp+0x11], bl
        mov byte ptr ss : [esp+0x12], bl
        mov byte ptr ss : [esp+0x13], 0xC0
        mov edx, dword ptr ss : [esp+0x10]
        push ebx
        mov dword ptr ds : [ecx+0x414], edx
        mov ecx, dword ptr ds : [esi+0x3DC]
        mov eax, dword ptr ds : [ecx]
        push 1
        push 1
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [public_6728b8]
        push ecx
/*FIXUP push offset public_5d69f8 @0x4c0bff*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d69f8
/*FIXUP push offset public_5d601c @0x4c0c04*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d601c
/*FIXUP push offset public_6724b8 @0x4c0c09*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6724b8
        call edi
        mov ebp, dword ptr ds : [public_6728b8]
        add esp, 0x10
        push ebx
        push ebx
        push 1
        push 0x755
        push 0x3FA00000
        inc ebp
        mov dword ptr ds : [public_6728b8], ebp
        mov edx, dword ptr ds : [esi+0x3DC]
        fld dword ptr ds : [edx+0xB4]
        push 0x3D50E560
        push ecx
        fadd st(0), st
        lea eax, ss:[esp+0x34]
        mov ecx, esi
        fstp dword ptr ss : [esp]
/*FIXUP push offset public_5d69e0 @0x4c0c4b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d69e0
        push eax
/*FIXUP push offset public_5d01a8 @0x4c0c51*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d01a8
/*FIXUP push offset public_6724b8 @0x4c0c56*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6724b8
        call public_5a0e30
        mov dword ptr ds : [esi+0x3D8], eax
        mov ecx, dword ptr ds : [public_6728b8]
        push ecx
/*FIXUP push offset public_5d6a24 @0x4c0c6d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d6a24
/*FIXUP push offset public_5d601c @0x4c0c72*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d601c
/*FIXUP push offset public_6724b8 @0x4c0c77*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6724b8
        call edi
        mov edx, dword ptr ds : [public_6728b8]
        add esp, 0x10
        inc edx
        mov dword ptr ds : [public_6728b8], edx
        lea edx, ss:[esp+0x18]
        push edx
        push ebx
        push ebx
        push ebx
        push 1
        push ebx
        push ebx
        push 1
        push ebx
        push 1
        push 1
        lea eax, ss:[esp+0x44]
        push eax
/*FIXUP push offset public_5d6a08 @0x4c0ca6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d6a08
        lea ecx, ss:[esp+0x4C]
        push ecx
/*FIXUP push offset public_5d6a38 @0x4c0cb0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d6a38
/*FIXUP push offset public_6724b8 @0x4c0cb5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6724b8
        mov ecx, esi
        call public_5a0db0
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [esi+0x3E0], eax
        lea eax, ss:[esp+0x60]
        push eax
/*FIXUP push offset public_5d69c4 @0x4c0cce*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d69c4
        mov ecx, esi
        mov dword ptr ss : [esp+0x88], 0x3F800000
        mov dword ptr ss : [esp+0x78], 0x3F800000
        mov dword ptr ss : [esp+0x68], 0x3F800000
        mov dword ptr ss : [esp+0x84], 0
        mov dword ptr ss : [esp+0x80], 0
        mov dword ptr ss : [esp+0x7C], 0
        mov dword ptr ss : [esp+0x74], 0
        mov dword ptr ss : [esp+0x70], 0
        mov dword ptr ss : [esp+0x6C], 0
        mov dword ptr ss : [esp+0x94], 0
        mov dword ptr ss : [esp+0x90], 0
        mov dword ptr ss : [esp+0x8C], 0
        call dword ptr ds : [edx+0x90]
        push 0x2C
        call public_5b7e84
        mov ebp, eax
        add esp, 4
        mov dword ptr ss : [esp+0x14], ebp
        cmp ebp, ebx
        mov dword ptr ss : [esp+0x98], ebx
        je public_4c0db3
        fld dword ptr ss : [esp+0x8C]
        lea ecx, ss:[esp+0x24]
        fld dword ptr ss : [esp+0x88]
        push ecx
        fsub dword ptr ds : [public_5d69c0]
        push esi
        fld dword ptr ss : [esp+0x8C]
        mov ecx, ebp
        fadd dword ptr ds : [public_5d1f04]
        mov dword ptr ss : [ebp], offset public_5d6028
        mov dword ptr ss : [ebp+4], ebx
        mov dword ptr ss : [ebp+0x24], ebx
        fstp dword ptr ss : [esp+0x2C]
        fstp dword ptr ss : [esp+0x30]
        fstp dword ptr ss : [esp+0x34]
        call public_4be7e0
        mov eax, ebp
        jmp public_4c0db5
        public_4c0db3 : nop
        xor eax, eax
        public_4c0db5 : nop
        mov dword ptr ds : [esi+0x33C], eax
        mov edx, dword ptr ds : [public_6728b8]
        push edx
/*FIXUP push offset public_5d69b4 @0x4c0dc2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d69b4
/*FIXUP push offset public_5d601c @0x4c0dc7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d601c
        or ebp, 0xFFFFFFFF
/*FIXUP push offset public_6724b8 @0x4c0dcf*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6724b8
        mov dword ptr ss : [esp+0xA8], ebp
        call edi
        mov ecx, dword ptr ds : [public_6728b8]
        add esp, 0x10
        push ebx
        push ebx
        push 1
        push ebx
        push 0x3FC00000
        push 0x3D50E560
        push 0x3ED47AE1
/*FIXUP push offset public_5d69a0 @0x4c0dfa*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d69a0
        lea eax, ss:[esp+0x38]
        push eax
        inc ecx
/*FIXUP push offset public_5d010c @0x4c0e05*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d010c
        mov dword ptr ds : [public_6728b8], ecx
/*FIXUP push offset public_6724b8 @0x4c0e10*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6724b8
        mov ecx, esi
        call public_5a0e30
        mov dword ptr ds : [esi+0x348], eax
        mov ecx, dword ptr ds : [public_6728b8]
        push ecx
/*FIXUP push offset public_5d6994 @0x4c0e29*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d6994
/*FIXUP push offset public_5d601c @0x4c0e2e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d601c
/*FIXUP push offset public_6724b8 @0x4c0e33*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6724b8
        call edi
        add esp, 0x10
        mov ecx, dword ptr ds : [public_6728b8]
        lea edx, ss:[esp+0x18]
        push edx
        push ebx
        push ebx
        push ebx
        push 1
        push ebx
        push ebx
        push ebx
        push 1
        push 1
        push 1
        inc ecx
        lea eax, ss:[esp+0x44]
        push eax
        mov dword ptr ds : [public_6728b8], ecx
/*FIXUP push offset public_5d6978 @0x4c0e62*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d6978
        lea ecx, ss:[esp+0x4C]
        push ecx
/*FIXUP push offset public_5d6944 @0x4c0e6c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d6944
/*FIXUP push offset public_6724b8 @0x4c0e71*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6724b8
        mov ecx, esi
        call public_5a0db0
        lea edx, ds:[eax+0x80]
        push edx
        lea ecx, ds:[eax+0xB4]
        mov dword ptr ds : [esi+0x350], eax
        call public_5a1340
        fld dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ds : [public_6728b8]
        fadd dword ptr ds : [public_5c99c8]
        mov eax, dword ptr ss : [esp+0x18]
        push ecx
/*FIXUP push offset public_5d6938 @0x4c0eae*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d6938
        fstp dword ptr ss : [esp+0x30]
/*FIXUP push offset public_5d601c @0x4c0eb7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d601c
/*FIXUP push offset public_6724b8 @0x4c0ebc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6724b8
        fstp dword ptr ss : [esp+0x3C]
        mov dword ptr ss : [esp+0x34], eax
        call edi
        mov eax, dword ptr ds : [public_6728b8]
        add esp, 0x10
        inc eax
        mov dword ptr ds : [public_6728b8], eax
        mov eax, dword ptr ds : [esi+0x350]
        mov edx, dword ptr ds : [eax+0xB8]
        fld dword ptr ds : [eax+0xB4]
        push ebx
        fadd st(0), st
        push ebx
        push 1
        push ebx
        push 0x3FC00000
        push edx
        push ecx
        fstp dword ptr ss : [esp]
/*FIXUP push offset public_5d6978 @0x4c0efc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d6978
        lea eax, ss:[esp+0x44]
        push eax
/*FIXUP push offset public_5d010c @0x4c0f06*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d010c
/*FIXUP push offset public_6724b8 @0x4c0f0b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6724b8
        mov ecx, esi
        call public_5a0e30
        push ebx
        mov ecx, esi
        mov dword ptr ds : [esi+0x35C], eax
        call public_4c1a10
        mov ecx, dword ptr ds : [public_6728b8]
        push ecx
/*FIXUP push offset public_5d692c @0x4c0f2c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d692c
/*FIXUP push offset public_5d601c @0x4c0f31*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d601c
/*FIXUP push offset public_6724b8 @0x4c0f36*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6724b8
        call edi
        mov eax, dword ptr ds : [public_6728b8]
        add esp, 0x10
        push ebx
        push ebx
        push ebx
        push 1
        push ebx
        push ebx
        push ebx
        inc eax
        lea edx, ss:[esp+0x34]
        push edx
/*FIXUP push offset public_5d6914 @0x4c0f53*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d6914
        mov dword ptr ds : [public_6728b8], eax
        lea eax, ss:[esp+0x3C]
        push eax
        push ebx
        push ebx
/*FIXUP push offset public_5d68d8 @0x4c0f64*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d68d8
/*FIXUP push offset public_5d68d8 @0x4c0f69*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d68d8
/*FIXUP push offset public_6724b8 @0x4c0f6e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6724b8
        mov ecx, esi
        call public_5a0c90
        lea ecx, ds:[eax+0x80]
        push ecx
        lea ecx, ds:[eax+0xB4]
        mov dword ptr ds : [esi+0x354], eax
        call public_5a1340
        mov edx, dword ptr ds : [public_6728b8]
        push edx
/*FIXUP push offset public_5d68cc @0x4c0f99*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d68cc
/*FIXUP push offset public_5d601c @0x4c0f9e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d601c
/*FIXUP push offset public_6724b8 @0x4c0fa3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6724b8
        call edi
        mov eax, dword ptr ds : [public_6728b8]
        add esp, 0x10
        push ebx
        push ebx
        push ebx
        push 1
        push ebx
        push ebx
        inc eax
        push ebx
        mov dword ptr ds : [public_6728b8], eax
        lea eax, ss:[esp+0x34]
        push eax
/*FIXUP push offset public_5d68b4 @0x4c0fc5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d68b4
        lea ecx, ss:[esp+0x3C]
        push ecx
        push ebx
        push ebx
/*FIXUP push offset public_5d687c @0x4c0fd1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d687c
/*FIXUP push offset public_5d687c @0x4c0fd6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d687c
/*FIXUP push offset public_6724b8 @0x4c0fdb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6724b8
        mov ecx, esi
        call public_5a0c90
        lea edx, ds:[eax+0x80]
        push edx
        lea ecx, ds:[eax+0xB4]
        mov dword ptr ds : [esi+0x358], eax
        call public_5a1340
        mov eax, dword ptr ds : [public_6728b8]
        push eax
/*FIXUP push offset public_5d686c @0x4c1005*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d686c
/*FIXUP push offset public_5d601c @0x4c100a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d601c
/*FIXUP push offset public_6724b8 @0x4c100f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6724b8
        call edi
        add esp, 0x10
        mov ecx, dword ptr ds : [public_6728b8]
        push ebx
        push ebx
        push 1
        push 0x64
        push ebx
        push ebx
        inc ecx
        mov dword ptr ds : [public_6728b8], ecx
        lea ecx, ss:[esp+0x30]
        push ecx
/*FIXUP push offset public_5d684c @0x4c1033*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d684c
/*FIXUP push offset public_5d682c @0x4c1038*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d682c
        lea edx, ss:[esp+0x3C]
        push edx
        lea eax, ss:[esp+0x40]
        push eax
/*FIXUP push offset public_5d67f0 @0x4c1047*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d67f0
        push ebx
        lea ecx, ss:[esp+0x4C]
        push ecx
/*FIXUP push offset public_5d67d8 @0x4c1052*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d67d8
        lea edx, ss:[esp+0x54]
        push edx
/*FIXUP push offset public_5d67a8 @0x4c105c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d67a8
        push ebx
        lea eax, ss:[esp+0x60]
        push eax
/*FIXUP push offset public_5d678c @0x4c1067*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d678c
        lea ecx, ss:[esp+0x68]
        push ecx
/*FIXUP push offset public_5d6758 @0x4c1071*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d6758
        push 1
        lea edx, ss:[esp+0x74]
        push edx
/*FIXUP push offset public_5d6740 @0x4c107d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d6740
        lea eax, ss:[esp+0x7C]
        push eax
/*FIXUP push offset public_5d6708 @0x4c1087*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d6708
/*FIXUP push offset public_6724b8 @0x4c108c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6724b8
        mov ecx, esi
        call public_5a0ef0
        lea ecx, ds:[eax+0x32C]
        push ecx
        lea ecx, ds:[eax+0x390]
        mov dword ptr ds : [esi+0x34C], eax
        call public_5a1340
        mov eax, dword ptr ds : [esi+0x34C]
        lea edx, ds:[eax+0x3D0]
        push edx
        lea ecx, ds:[eax+0x434]
        call public_5a1340
        mov eax, dword ptr ds : [esi+0x34C]
        lea ecx, ds:[eax+0x474]
        push ecx
        lea ecx, ds:[eax+0x4D8]
        call public_5a1340
        mov eax, dword ptr ds : [esi+0x34C]
        lea edx, ds:[eax+0x518]
        push edx
        lea ecx, ds:[eax+0x5E8]
        call public_5a1340
        mov eax, dword ptr ds : [public_6728b8]
        push eax
/*FIXUP push offset public_5d66f4 @0x4c10fe*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d66f4
/*FIXUP push offset public_5d601c @0x4c1103*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d601c
/*FIXUP push offset public_6724b8 @0x4c1108*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6724b8
        call edi
        mov ecx, dword ptr ds : [public_6728b8]
        add esp, 0x10
        push ebx
        push ebx
        push ebx
        push 1
        push ebx
        push ebx
        push 1
        inc ecx
        mov dword ptr ds : [public_6728b8], ecx
        lea ecx, ss:[esp+0x34]
        push ecx
/*FIXUP push offset public_5d66dc @0x4c112d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d66dc
        lea edx, ss:[esp+0x3C]
        push edx
        push ebx
        push ebx
/*FIXUP push offset public_5d66a4 @0x4c1139*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d66a4
/*FIXUP push offset public_5d66a4 @0x4c113e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d66a4
/*FIXUP push offset public_6724b8 @0x4c1143*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6724b8
        mov ecx, esi
        call public_5a0c90
        lea ecx, ds:[eax+0x80]
        push ecx
        lea ecx, ds:[eax+0xB4]
        mov dword ptr ds : [esi+0x41C], eax
        call public_5a1340
        mov edx, dword ptr ds : [public_6728b8]
        push edx
/*FIXUP push offset public_5d6694 @0x4c116e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d6694
/*FIXUP push offset public_5d601c @0x4c1173*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d601c
/*FIXUP push offset public_6724b8 @0x4c1178*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6724b8
        call edi
        mov eax, dword ptr ds : [public_6728b8]
        add esp, 0x10
        push ebx
        push ebx
        push 1
        inc eax
        mov dword ptr ds : [public_6728b8], eax
        mov eax, dword ptr ds : [esi+0x41C]
        fld dword ptr ds : [eax+0xB8]
        push 0x756
        push 0x40000000
        fadd st(0), st
        sub esp, 8
        mov ecx, esi
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [eax+0xB4]
        lea eax, ss:[esp+0x34]
        fadd st(0), st
        fstp dword ptr ss : [esp]
/*FIXUP push offset public_5d66dc @0x4c11c1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d66dc
        push eax
/*FIXUP push offset public_5d0410 @0x4c11c7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0410
/*FIXUP push offset public_6724b8 @0x4c11cc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6724b8
        call public_5a0e30
        mov dword ptr ds : [esi+0x420], eax
        mov ecx, dword ptr ds : [public_6728b8]
        push ecx
/*FIXUP push offset public_5d6688 @0x4c11e3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d6688
/*FIXUP push offset public_5d601c @0x4c11e8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d601c
/*FIXUP push offset public_6724b8 @0x4c11ed*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6724b8
        mov dword ptr ss : [esp+0x34], 0x3B03126F
        mov dword ptr ss : [esp+0x38], 0xBBE56042
        mov dword ptr ss : [esp+0x3C], 0
        call edi
        mov ecx, dword ptr ds : [public_6728b8]
        add esp, 0x10
        lea edx, ss:[esp+0x18]
        push edx
        push ebx
        inc ecx
        push ebx
        mov dword ptr ds : [public_6728b8], ecx
        push ebx
        push 1
        push ebx
        push ebx
        push ebx
        push 1
        push 1
        push ebx
        lea eax, ss:[esp+0x44]
        push eax
/*FIXUP push offset public_5d666c @0x4c1233*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d666c
        lea ecx, ss:[esp+0x58]
        push ecx
/*FIXUP push offset public_5d663c @0x4c123d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d663c
/*FIXUP push offset public_6724b8 @0x4c1242*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6724b8
        mov ecx, esi
        call public_5a0db0
        push ebx
        push 1
        mov dword ptr ds : [esi+0x368], eax
        mov edx, dword ptr ds : [eax]
        push 1
        mov ecx, eax
        call dword ptr ds : [edx+0xA8]
        mov eax, dword ptr ds : [public_6728b8]
        push eax
/*FIXUP push offset public_5d6630 @0x4c1269*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d6630
/*FIXUP push offset public_5d601c @0x4c126e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d601c
/*FIXUP push offset public_6724b8 @0x4c1273*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6724b8
        call edi
        mov ecx, dword ptr ds : [public_6728b8]
        add esp, 0x10
        push ebx
        push ebx
        push ebx
        push 1
        push ebx
        push ebx
        push ebx
        inc ecx
        mov dword ptr ds : [public_6728b8], ecx
        lea ecx, ss:[esp+0x34]
        push ecx
/*FIXUP push offset public_5d6614 @0x4c1297*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d6614
        lea edx, ss:[esp+0x3C]
        push edx
        push ebx
        push ebx
/*FIXUP push offset public_5d687c @0x4c12a3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d687c
/*FIXUP push offset public_5d687c @0x4c12a8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d687c
/*FIXUP push offset public_6724b8 @0x4c12ad*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6724b8
        mov ecx, esi
        call public_5a0c90
        lea ecx, ds:[eax+0x80]
        push ecx
        lea ecx, ds:[eax+0xB4]
        mov dword ptr ds : [esi+0x36C], eax
        call public_5a1340
        mov ecx, dword ptr ds : [esi+0x36C]
        mov edx, dword ptr ds : [ecx]
        push ebx
        push 1
        push 1
        call dword ptr ds : [edx+0xA8]
        mov eax, dword ptr ds : [public_6728b8]
        mov byte ptr ss : [esp+0x10], bl
        mov byte ptr ss : [esp+0x11], bl
        mov byte ptr ss : [esp+0x12], bl
        mov byte ptr ss : [esp+0x13], bl
        mov byte ptr ss : [esp+0x14], bl
        mov byte ptr ss : [esp+0x15], bl
        mov byte ptr ss : [esp+0x16], bl
        mov byte ptr ss : [esp+0x17], bl
        mov dword ptr ss : [esp+0x24], 0x3E051EB8
        mov dword ptr ss : [esp+0x28], 0xBD408312
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x30], 0
        mov dword ptr ss : [esp+0x34], 0x43870000
        mov dword ptr ss : [esp+0x38], 0
        mov dword ptr ss : [esp+0x3C], 0
        mov dword ptr ss : [esp+0x40], 0
        mov dword ptr ss : [esp+0x44], 0x41F00000
        push eax
/*FIXUP push offset public_5d6608 @0x4c1352*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d6608
/*FIXUP push offset public_5d601c @0x4c1357*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d601c
/*FIXUP push offset public_6724b8 @0x4c135c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6724b8
        call edi
        mov eax, dword ptr ds : [public_6728b8]
        add esp, 0x10
        lea ecx, ss:[esp+0x10]
        push ecx
        lea edx, ss:[esp+0x18]
        push edx
        push ebx
        push ebx
        inc eax
/*FIXUP push offset public_5d65ec @0x4c1378*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d65ec
        mov dword ptr ds : [public_6728b8], eax
        lea eax, ss:[esp+0x38]
        push eax
        lea ecx, ss:[esp+0x48]
        push ecx
        lea edx, ss:[esp+0x34]
        push edx
        lea eax, ss:[esp+0x5C]
        push eax
/*FIXUP push offset public_6724b8 @0x4c1396*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6724b8
        mov ecx, esi
        call public_5a1020
        push ebx
        push 1
        mov dword ptr ds : [esi+0x370], eax
        mov edx, dword ptr ds : [eax]
        push 1
        mov ecx, eax
        call dword ptr ds : [edx+0xA8]
        mov eax, dword ptr ds : [esi+0x370]
        and byte ptr ds : [eax+0x518], 0x7F
        mov eax, dword ptr ds : [public_6728b8]
        push eax
/*FIXUP push offset public_5d65e0 @0x4c13ca*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d65e0
/*FIXUP push offset public_5d601c @0x4c13cf*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d601c
/*FIXUP push offset public_6724b8 @0x4c13d4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6724b8
        mov dword ptr ss : [esp+0x4C], 0x3DC28F5C
        mov dword ptr ss : [esp+0x50], 0x3C4CCCCD
        mov dword ptr ss : [esp+0x54], 0
        call edi
        mov edx, dword ptr ds : [public_6728b8]
        add esp, 0x10
        push ebx
        push ebx
        push ebx
        push ebx
        push 0x3FC00000
        push 0x3C23D70A
        push 0x3E828F5C
/*FIXUP push offset public_5d65c4 @0x4c140f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d65c4
        lea ecx, ss:[esp+0x5C]
        push ecx
/*FIXUP push offset public_5d01a8 @0x4c1419*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d01a8
        inc edx
/*FIXUP push offset public_6724b8 @0x4c141f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6724b8
        mov ecx, esi
        mov dword ptr ds : [public_6728b8], edx
        call public_5a0e30
        push ebx
        push 1
        mov dword ptr ds : [esi+0x374], eax
        mov edx, dword ptr ds : [eax]
        push 1
        mov ecx, eax
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x374]
        mov eax, dword ptr ds : [ecx]
        push 1
        push ebx
        push 0x22
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [public_6728b8]
        push ecx
/*FIXUP push offset public_5d65bc @0x4c1460*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d65bc
/*FIXUP push offset public_5d601c @0x4c1465*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d601c
/*FIXUP push offset public_6724b8 @0x4c146a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6724b8
        call edi
        inc dword ptr ds : [public_6728b8]
        mov edx, dword ptr ds : [esi+0x368]
        push ebx
        push edx
/*FIXUP push offset public_5cf24c @0x4c147f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cf24c
/*FIXUP push offset public_6724b8 @0x4c1484*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6724b8
        call public_59db20
        add esp, 0x20
        push 0x3E51EB85
        push 0x3E6B851F
        mov ecx, eax
        mov dword ptr ds : [esi+0x378], eax
        call public_579cc0
        mov ecx, dword ptr ds : [esi+0x378]
        lea eax, ss:[esp+0x3C]
        push eax
        mov dword ptr ss : [esp+0x40], 0xBDFDF3B6
        mov dword ptr ss : [esp+0x44], 0x3D051EB8
        mov dword ptr ss : [esp+0x48], 0
        call public_579c40
        mov eax, dword ptr ds : [esi+0x378]
        and byte ptr ds : [eax+0x6C], 0xFC
        mov ecx, dword ptr ds : [public_6728b8]
        push ecx
/*FIXUP push offset public_5d65b0 @0x4c14e1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d65b0
/*FIXUP push offset public_5d601c @0x4c14e6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d601c
/*FIXUP push offset public_6724b8 @0x4c14eb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6724b8
        mov dword ptr ss : [esp+0x4C], 0x3C23D70A
        mov dword ptr ss : [esp+0x50], 0xBBE56042
        mov dword ptr ss : [esp+0x54], 0
        call edi
        add esp, 0x10
        mov ecx, dword ptr ds : [public_6728b8]
        lea edx, ss:[esp+0x18]
        push edx
        push ebx
        push ebx
        push ebx
        push 1
        push ebx
        push ebx
        push ebx
        push 1
        push 1
        push ebx
        inc ecx
        lea eax, ss:[esp+0x44]
        push eax
        mov dword ptr ds : [public_6728b8], ecx
/*FIXUP push offset public_5d6594 @0x4c1531*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d6594
        lea ecx, ss:[esp+0x70]
        push ecx
/*FIXUP push offset public_5d663c @0x4c153b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d663c
/*FIXUP push offset public_6724b8 @0x4c1540*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6724b8
        mov ecx, esi
        call public_5a0db0
        push ebx
        push 1
        mov dword ptr ds : [esi+0x37C], eax
        mov edx, dword ptr ds : [eax]
        push 1
        mov ecx, eax
        call dword ptr ds : [edx+0xA8]
        mov eax, dword ptr ds : [public_6728b8]
        push eax
/*FIXUP push offset public_5d6588 @0x4c1567*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d6588
/*FIXUP push offset public_5d601c @0x4c156c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d601c
/*FIXUP push offset public_6724b8 @0x4c1571*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6724b8
        mov dword ptr ss : [esp+0x4C], 0x3C23D70A
        mov dword ptr ss : [esp+0x50], 0
        mov dword ptr ss : [esp+0x54], 0
        call edi
        mov ecx, dword ptr ds : [public_6728b8]
        add esp, 0x10
        push ebx
        push ebx
        push ebx
        push 1
        push ebx
        push ebx
        push ebx
        inc ecx
        mov dword ptr ds : [public_6728b8], ecx
        lea ecx, ss:[esp+0x34]
        push ecx
/*FIXUP push offset public_5d656c @0x4c15ad*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d656c
        lea edx, ss:[esp+0x60]
        push edx
        push ebx
        push ebx
/*FIXUP push offset public_5d687c @0x4c15b9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d687c
/*FIXUP push offset public_5d687c @0x4c15be*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d687c
/*FIXUP push offset public_6724b8 @0x4c15c3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6724b8
        mov ecx, esi
        call public_5a0c90
        lea ecx, ds:[eax+0x80]
        push ecx
        lea ecx, ds:[eax+0xB4]
        mov dword ptr ds : [esi+0x380], eax
        call public_5a1340
        mov ecx, dword ptr ds : [esi+0x380]
        mov edx, dword ptr ds : [ecx]
        push ebx
        push 1
        push 1
        call dword ptr ds : [edx+0xA8]
        mov eax, dword ptr ds : [public_6728b8]
        push eax
/*FIXUP push offset public_5d6560 @0x4c1600*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d6560
/*FIXUP push offset public_5d601c @0x4c1605*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d601c
/*FIXUP push offset public_6724b8 @0x4c160a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6724b8
        mov byte ptr ss : [esp+0x24], bl
        mov byte ptr ss : [esp+0x25], bl
        mov byte ptr ss : [esp+0x26], bl
        mov byte ptr ss : [esp+0x27], bl
        mov byte ptr ss : [esp+0x20], bl
        mov byte ptr ss : [esp+0x21], bl
        mov byte ptr ss : [esp+0x22], bl
        mov byte ptr ss : [esp+0x23], bl
        mov dword ptr ss : [esp+0x4C], 0x3E051EB8
        mov dword ptr ss : [esp+0x50], 0xBD408312
        mov dword ptr ss : [esp+0x54], 0
        mov dword ptr ss : [esp+0x40], 0
        mov dword ptr ss : [esp+0x44], 0x43870000
        mov dword ptr ss : [esp+0x48], 0
        mov dword ptr ss : [esp+0x34], 0x3C23D70A
        mov dword ptr ss : [esp+0x38], 0
        mov dword ptr ss : [esp+0x3C], 0
        mov dword ptr ss : [esp+0x58], 0
        mov dword ptr ss : [esp+0x5C], 0
        mov dword ptr ss : [esp+0x60], 0x41F00000
        call edi
        mov eax, dword ptr ds : [public_6728b8]
        add esp, 0x10
        lea ecx, ss:[esp+0x14]
        push ecx
        lea edx, ss:[esp+0x14]
        push edx
        push ebx
        push ebx
        inc eax
/*FIXUP push offset public_5d6544 @0x4c16a6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d6544
        mov dword ptr ds : [public_6728b8], eax
        lea eax, ss:[esp+0x50]
        push eax
        lea ecx, ss:[esp+0x48]
        push ecx
        lea edx, ss:[esp+0x40]
        push edx
        lea eax, ss:[esp+0x68]
        push eax
/*FIXUP push offset public_6724b8 @0x4c16c4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6724b8
        mov ecx, esi
        call public_5a1020
        mov dword ptr ds : [esi+0x384], eax
        mov edx, dword ptr ds : [eax]
        push ebx
        push 1
        push 1
        mov ecx, eax
        call dword ptr ds : [edx+0xA8]
        mov eax, dword ptr ds : [esi+0x384]
        and byte ptr ds : [eax+0x518], 0x7F
        mov eax, dword ptr ds : [public_6728b8]
        push eax
/*FIXUP push offset public_5d6538 @0x4c16f8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d6538
/*FIXUP push offset public_5d601c @0x4c16fd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d601c
/*FIXUP push offset public_6724b8 @0x4c1702*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6724b8
        mov dword ptr ss : [esp+0x58], 0x3DD70A3D
        mov dword ptr ss : [esp+0x5C], 0x3C4CCCCD
        mov dword ptr ss : [esp+0x60], 0
        call edi
        mov edx, dword ptr ds : [public_6728b8]
        add esp, 0x10
        push ebx
        push ebx
        push ebx
        push ebx
        push 0x3FC00000
        push 0x3C23D70A
        push 0x3E828F5C
/*FIXUP push offset public_5d651c @0x4c173d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d651c
        lea ecx, ss:[esp+0x68]
        push ecx
/*FIXUP push offset public_5d01a8 @0x4c1747*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d01a8
        inc edx
/*FIXUP push offset public_6724b8 @0x4c174d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6724b8
        mov ecx, esi
        mov dword ptr ds : [public_6728b8], edx
        call public_5a0e30
        push ebx
        push 1
        mov dword ptr ds : [esi+0x388], eax
        mov edx, dword ptr ds : [eax]
        push 1
        mov ecx, eax
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x388]
        mov eax, dword ptr ds : [ecx]
        push 1
        push ebx
        push 0x22
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [public_6728b8]
        push ecx
/*FIXUP push offset public_5d6514 @0x4c178e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d6514
/*FIXUP push offset public_5d601c @0x4c1793*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d601c
/*FIXUP push offset public_6724b8 @0x4c1798*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6724b8
        call edi
        inc dword ptr ds : [public_6728b8]
        mov edx, dword ptr ds : [esi+0x37C]
        push ebx
        push edx
/*FIXUP push offset public_5cf24c @0x4c17ad*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cf24c
/*FIXUP push offset public_6724b8 @0x4c17b2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6724b8
        call public_59db20
        add esp, 0x20
        push 0x3E51EB85
        push 0x3E6B851F
        mov ecx, eax
        mov dword ptr ds : [esi+0x38C], eax
        call public_579cc0
        mov ecx, dword ptr ds : [esi+0x38C]
        lea eax, ss:[esp+0x54]
        push eax
        mov dword ptr ss : [esp+0x58], 0xBDEF9DB2
        mov dword ptr ss : [esp+0x5C], 0x3D051EB8
        mov dword ptr ss : [esp+0x60], 0
        call public_579c40
        mov eax, dword ptr ds : [esi+0x38C]
        and byte ptr ds : [eax+0x6C], 0xFC
        mov ecx, dword ptr ds : [public_6728b8]
        push ecx
/*FIXUP push offset public_5d6508 @0x4c180f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d6508
/*FIXUP push offset public_5d601c @0x4c1814*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d601c
/*FIXUP push offset public_6724b8 @0x4c1819*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6724b8
        call edi
        mov edx, dword ptr ds : [public_6728b8]
        add esp, 0x10
        push ebx
        push ebx
        push ebx
        mov edi, 1
        push edi
        push ebx
        push ebx
        push ebx
        inc edx
        mov dword ptr ds : [public_6728b8], edx
        lea edx, ss:[esp+0x34]
        push edx
/*FIXUP push offset public_5d64f8 @0x4c1841*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d64f8
        lea eax, ss:[esp+0x3C]
        push eax
        push ebx
        push ebx
/*FIXUP push offset public_5d687c @0x4c184d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d687c
/*FIXUP push offset public_5d687c @0x4c1852*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d687c
/*FIXUP push offset public_6724b8 @0x4c1857*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6724b8
        mov ecx, esi
        call public_5a0c90
        lea ecx, ds:[eax+0x80]
        push ecx
        lea ecx, ds:[eax+0xB4]
        mov dword ptr ds : [esi+0x340], eax
        call public_5a1340
        push 0x68
        call public_5b7e84
        add esp, 4
        mov dword ptr ss : [esp+0x14], eax
        cmp eax, ebx
        mov dword ptr ss : [esp+0x98], edi
        je public_4c18c0
        push ebx
        push edi
        push 5
/*FIXUP push offset public_5d64e0 @0x4c1898*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d64e0
/*FIXUP push offset public_5d64cc @0x4c189d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d64cc
/*FIXUP push offset public_5d64b4 @0x4c18a2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d64b4
/*FIXUP push offset public_5d64a0 @0x4c18a7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d64a0
/*FIXUP push offset public_5d6488 @0x4c18ac*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d6488
/*FIXUP push offset public_5d646c @0x4c18b1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d646c
        push esi
        mov ecx, eax
        call public_4bf120
        jmp public_4c18c2
        public_4c18c0 : nop
        xor eax, eax
        public_4c18c2 : nop
        push 0x68
        mov dword ptr ss : [esp+0x9C], ebp
        mov dword ptr ds : [esi+0x330], eax
        call public_5b7e84
        add esp, 4
        mov dword ptr ss : [esp+0x14], eax
        cmp eax, ebx
        mov dword ptr ss : [esp+0x98], 2
        je public_4c1918
        push edi
        push edi
        push 5
/*FIXUP push offset public_5d644c @0x4c18f0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d644c
/*FIXUP push offset public_5d6430 @0x4c18f5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d6430
/*FIXUP push offset public_5d6418 @0x4c18fa*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d6418
/*FIXUP push offset public_5d6404 @0x4c18ff*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d6404
/*FIXUP push offset public_5d63ec @0x4c1904*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d63ec
/*FIXUP push offset public_5d63d0 @0x4c1909*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d63d0
        push esi
        mov ecx, eax
        call public_4bf120
        jmp public_4c191a
        public_4c1918 : nop
        xor eax, eax
        public_4c191a : nop
        mov ecx, eax
        mov dword ptr ss : [esp+0x98], ebp
        mov dword ptr ds : [esi+0x338], eax
        call public_4bf720
        push 0x68
        call public_5b7e84
        add esp, 4
        mov dword ptr ss : [esp+0x14], eax
        cmp eax, ebx
        mov dword ptr ss : [esp+0x98], 3
        je public_4c1977
        push edi
        push ebx
        push 5
/*FIXUP push offset public_5d63b8 @0x4c194f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d63b8
/*FIXUP push offset public_5d63a4 @0x4c1954*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d63a4
/*FIXUP push offset public_5d638c @0x4c1959*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d638c
/*FIXUP push offset public_5d6378 @0x4c195e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d6378
/*FIXUP push offset public_5d6360 @0x4c1963*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d6360
/*FIXUP push offset public_5d69c4 @0x4c1968*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d69c4
        push esi
        mov ecx, eax
        call public_4bf120
        jmp public_4c1979
        public_4c1977 : nop
        xor eax, eax
        public_4c1979 : nop
        push edi
        mov ecx, esi
        mov dword ptr ss : [esp+0x9C], ebp
        mov dword ptr ds : [esi+0x334], eax
        call public_4c1ae0
        push 2
        mov ecx, esi
        call public_4c1ae0
        mov dword ptr ds : [esi+0x70], edi
        mov eax, dword ptr ds : [public_674aa0]
        cmp eax, ebx
        pop ebp
        je public_4c19bf
        mov al, byte ptr ds : [eax+0x4D0]
        cmp al, bl
        mov byte ptr ds : [esi+0x435], al
        je public_4c19bf
        mov ecx, dword ptr ds : [public_674aa0]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x30]
        public_4c19bf : nop
        mov eax, dword ptr ds : [public_674b04]
        cmp eax, ebx
        je public_4c19e3
        mov al, byte ptr ds : [eax+0x4D0]
        cmp al, bl
        mov byte ptr ds : [esi+0x434], al
        je public_4c19e3
        mov ecx, dword ptr ds : [public_674b04]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x30]
        public_4c19e3 : nop
        push edi
        call public_46b450
        add esp, 4
        pop edi
        mov al, 1
        pop ebx
        public_4c19f0 : nop
        mov ecx, dword ptr ss : [esp+0x84]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x8C
        ret 8
        UNREACHABLE_TRAP(0x4c04f0)
    }
}

#undef public_4c0557
#undef public_4c0564
#undef public_4c058c
#undef public_4c0590
#undef public_4c05c4
#undef public_4c05d3
#undef public_4c0db3
#undef public_4c0db5
#undef public_4c18c0
#undef public_4c18c2
#undef public_4c1918
#undef public_4c191a
#undef public_4c1977
#undef public_4c1979
#undef public_4c19bf
#undef public_4c19e3
#undef public_4c19f0
