#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4424f0);
CLANG_FORWARD_PROC_SYMBOL(public_45dcd0);
CLANG_FORWARD_PROC_SYMBOL(public_4a7670);
CLANG_FORWARD_PROC_SYMBOL(public_4b5060);
CLANG_FORWARD_PROC_SYMBOL(public_4bbfb0);
CLANG_FORWARD_PROC_SYMBOL(public_5a0c90);
CLANG_FORWARD_PROC_SYMBOL(public_5a0d00);
CLANG_FORWARD_PROC_SYMBOL(public_5a0e30);
CLANG_FORWARD_PROC_SYMBOL(public_5a10e0);
CLANG_FORWARD_PROC_SYMBOL(public_5a1340);

#define public_4bb8c2 _public_4bb8c2
#define public_4bb8db _public_4bb8db
#define public_4bb922 _public_4bb922
#define public_4bb93d _public_4bb93d
#define public_4bb96b _public_4bb96b
#define public_4bb973 _public_4bb973
#define public_4bba94 _public_4bba94
#define public_4bbbb6 _public_4bbbb6
#define public_4bbc60 _public_4bbc60
#define public_4bbdaf _public_4bbdaf
#define public_4bbf15 _public_4bbf15
#define public_4bbf3e _public_4bbf3e
#define public_4bbf40 _public_4bbf40

PROC_DECLARE(0x4bb810, internal_4bb810, public_4bb810);
extern "C" NAKED register_t __cdecl internal_4bb810()
{
    __asm
    {
        sub esp, 0x1C
        push esi
        push edi
        push 1
        mov esi, ecx
        call public_4424f0
        mov eax, dword ptr ds : [esi]
        add esp, 4
        push 0
/*FIXUP push offset public_5ce994 @0x4bb825*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ce994
        mov ecx, esi
        call dword ptr ds : [eax+0x98]
        lea ecx, ds:[esi+0x80]
        push ecx
        lea ecx, ds:[esi+0xB4]
        call public_5a1340
        mov ecx, dword ptr ds : [public_66d3f0]
        call public_45dcd0
        test al, al
        jne public_4bb8c2
        push 0
        push 0
        push 0x409
        push 0
        push 0
        push 0
        push 0
        lea edx, ss:[esp+0x28]
        push edx
        push 0
        lea eax, ss:[esp+0x3C]
        push eax
        push 0
/*FIXUP push offset public_5ced30 @0x4bb872*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ced30
        push 0
/*FIXUP push offset public_5d01d0 @0x4bb879*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d01d0
/*FIXUP push offset public_5d5d5c @0x4bb87e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d5d5c
        mov ecx, esi
        mov dword ptr ss : [esp+0x48], 0x3C9374BC
        mov dword ptr ss : [esp+0x4C], 0x3C9374BC
        mov dword ptr ss : [esp+0x50], 0
        mov dword ptr ss : [esp+0x54], 0x3ECF5C29
        mov dword ptr ss : [esp+0x58], 0x3E74BC6A
        mov dword ptr ss : [esp+0x5C], 0
        call public_5a0c90
        mov dword ptr ds : [esi+0x330], eax
        jmp public_4bb8db
        public_4bb8c2 : nop
        mov byte ptr ds : [public_67dcc8], 1
        call public_4a7670
        mov byte ptr ds : [esi+0x37D], al
        mov byte ptr ds : [esi+0x38C], 1
        public_4bb8db : nop
        mov edi, dword ptr ds : [public_5c60d0]
        call edi
        test al, al
        push 1
        push 0
        mov dword ptr ss : [esp+0x28], 0
        mov dword ptr ss : [esp+0x24], 0x3E808312
        mov dword ptr ss : [esp+0x20], 0xBED70A3D
        push 1
        je public_4bb922
        push 0x610
        push 0x40000000
        push 0x3CF5C28F
        push 0x3F59DB23
        push 0
        lea ecx, ss:[esp+0x38]
        push ecx
        jmp public_4bb93d
        public_4bb922 : nop
        push 0x62F
        push 0x40000000
        push 0x3CF5C28F
        push 0x3F59DB23
        push 0
        lea edx, ss:[esp+0x38]
        push edx
/*FIXUP public_4bb93d : nop
        push offset public_5ce91c @0x4bb93d*/
  FIXUP public_4bb93d : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ce91c
        mov ecx, esi
/*FIXUP push offset public_5d5d4c @0x4bb944*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d5d4c
        call public_5a0e30
        mov ecx, dword ptr ds : [public_66d3f0]
        call public_45dcd0
        test al, al
        je public_4bb96b
        call edi
        test al, al
        mov dword ptr ss : [esp+8], 0x3E9E353F
        je public_4bb973
        public_4bb96b : nop
        mov dword ptr ss : [esp+8], 0x3EBC6A7F
        public_4bb973 : nop
        mov ecx, dword ptr ss : [esp+8]
        push 1
        lea eax, ss:[esp+0x1C]
        push eax
        push ecx
        push 0x3F451EB8
/*FIXUP push offset public_5d5d34 @0x4bb984*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d5d34
        mov ecx, esi
        mov dword ptr ss : [esp+0x2C], 0xBEC7AE14
        mov dword ptr ss : [esp+0x30], 0x3E4CCCCD
        mov dword ptr ss : [esp+0x34], 0
        call public_5a10e0
        mov dword ptr ds : [esi+0x334], eax
        mov dword ptr ds : [esi+0x380], 0
        mov dword ptr ds : [esi+0x384], 0
        mov dword ptr ds : [esi+0x388], 0xFFFFFFFF
        mov ecx, dword ptr ds : [public_66d3f0]
        call public_45dcd0
        test al, al
        je public_4bbdaf
        mov byte ptr ds : [public_66d359], 1
        mov dword ptr ss : [esp+0xC], 0x3E083127
        mov dword ptr ss : [esp+0x10], 0x3CD4FDF4
        mov dword ptr ss : [esp+0x14], 0
        call edi
        test al, al
        je public_4bba94
        push 0
        push 0
        push 0x320
        push 0
        push 0
        lea edx, ss:[esp+0x20]
        push edx
        lea eax, ss:[esp+0x30]
        push eax
/*FIXUP push offset public_5ced30 @0x4bba1f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ced30
/*FIXUP push offset public_5d5d20 @0x4bba24*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d5d20
        mov ecx, esi
        mov dword ptr ss : [esp+0x3C], 0xBE8E5604
        mov dword ptr ss : [esp+0x40], 0xBE570A3D
        mov dword ptr ss : [esp+0x44], 0
        call public_5a0d00
        push 0
        push 0
        push 0x321
        push 0
        push 0
        lea ecx, ss:[esp+0x20]
        push ecx
        lea edx, ss:[esp+0x30]
        push edx
/*FIXUP push offset public_5ced30 @0x4bba5f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ced30
/*FIXUP push offset public_5d5d0c @0x4bba64*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d5d0c
        mov ecx, esi
        mov dword ptr ds : [esi+0x33C], eax
        mov dword ptr ss : [esp+0x3C], 0x3E8C49BA
        mov dword ptr ss : [esp+0x40], 0xBE570A3D
        mov dword ptr ss : [esp+0x44], 0
        call public_5a0d00
        mov dword ptr ds : [esi+0x340], eax
        public_4bba94 : nop
        push 0
        push 0
        push 0x322
        push 0
        push 0
        lea eax, ss:[esp+0x20]
        push eax
        lea ecx, ss:[esp+0x30]
        push ecx
/*FIXUP push offset public_5ced30 @0x4bbaab*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ced30
/*FIXUP push offset public_5d4ef8 @0x4bbab0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d4ef8
        mov ecx, esi
        mov dword ptr ss : [esp+0x3C], 0xBA83126F
        mov dword ptr ss : [esp+0x40], 0xBE570A3D
        mov dword ptr ss : [esp+0x44], 0
        call public_5a0d00
        mov dword ptr ds : [esi+0x344], eax
        call edi
        test al, al
        jne public_4bbbb6
        push 0
        push 0
        push 0x5D0
        push 0
        push 0
        lea edx, ss:[esp+0x20]
        push edx
        lea eax, ss:[esp+0x30]
        push eax
/*FIXUP push offset public_5ced30 @0x4bbafb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ced30
/*FIXUP push offset public_5d5cf8 @0x4bbb00*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d5cf8
        mov ecx, esi
        mov dword ptr ss : [esp+0x3C], 0xBE8E5604
        mov dword ptr ss : [esp+0x40], 0xBE178D50
        mov dword ptr ss : [esp+0x44], 0
        call public_5a0d00
        push 0
        push 0
        push 0x5D1
        push 0
        push 0
        lea ecx, ss:[esp+0x20]
        push ecx
        lea edx, ss:[esp+0x30]
        push edx
/*FIXUP push offset public_5ced30 @0x4bbb3b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ced30
/*FIXUP push offset public_5d5ce0 @0x4bbb40*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d5ce0
        mov ecx, esi
        mov dword ptr ds : [esi+0x354], eax
        mov dword ptr ss : [esp+0x3C], 0xBA83126F
        mov dword ptr ss : [esp+0x40], 0xBE178D50
        mov dword ptr ss : [esp+0x44], 0
        call public_5a0d00
        push 0
        push 0
        push 0x5D2
        push 0
        push 0
        mov dword ptr ds : [esi+0x358], eax
        lea eax, ss:[esp+0x20]
        push eax
        lea ecx, ss:[esp+0x30]
        push ecx
/*FIXUP push offset public_5ced30 @0x4bbb87*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ced30
/*FIXUP push offset public_5d5cc8 @0x4bbb8c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d5cc8
        mov ecx, esi
        mov dword ptr ss : [esp+0x3C], 0x3E8C49BA
        mov dword ptr ss : [esp+0x40], 0xBE178D50
        mov dword ptr ss : [esp+0x44], 0
        call public_5a0d00
        mov dword ptr ds : [esi+0x35C], eax
        public_4bbbb6 : nop
        call edi
        test al, al
        je public_4bbc60
        push 1
        push 0
        push 1
        push 0x652
        push 0x3FF33333
        push 0x3CF5C28F
        push 0x3E8624DD
        push 0
        lea edx, ss:[esp+0x38]
        push edx
/*FIXUP push offset public_5d0410 @0x4bbbe1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0410
/*FIXUP push offset public_5d5cb4 @0x4bbbe6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d5cb4
        mov ecx, esi
        mov dword ptr ss : [esp+0x44], 0xBED16873
        mov dword ptr ss : [esp+0x48], 0xBE428F5C
        mov dword ptr ss : [esp+0x4C], 0
        call public_5a0e30
        push 1
        push 0
        push 1
        push 0x653
        push 0x3FF33333
        push 0x3CF5C28F
        push 0x3E8624DD
        push 0
        mov dword ptr ds : [esi+0x348], eax
        lea eax, ss:[esp+0x38]
        push eax
/*FIXUP push offset public_5d0410 @0x4bbc31*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0410
/*FIXUP push offset public_5d5ca0 @0x4bbc36*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d5ca0
        mov ecx, esi
        mov dword ptr ss : [esp+0x44], 0x3E126E98
        mov dword ptr ss : [esp+0x48], 0xBE428F5C
        mov dword ptr ss : [esp+0x4C], 0
        call public_5a0e30
        mov dword ptr ds : [esi+0x34C], eax
        public_4bbc60 : nop
        push 1
        push 0
        push 1
        push 0x655
        push 0x3FF33333
        push 0x3CF5C28F
        push 0x3E8624DD
        push 0
        lea ecx, ss:[esp+0x38]
        push ecx
/*FIXUP push offset public_5d0410 @0x4bbc81*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0410
/*FIXUP push offset public_5d5c90 @0x4bbc86*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d5c90
        mov ecx, esi
        mov dword ptr ss : [esp+0x44], 0xBE051EB8
        mov dword ptr ss : [esp+0x48], 0xBE428F5C
        mov dword ptr ss : [esp+0x4C], 0
        call public_5a0e30
        mov dword ptr ds : [esi+0x350], eax
        call edi
        test al, al
        jne public_4bbf15
        push 1
        push 0
        push 1
        push 0x751
        push 0x3FF33333
        push 0x3CF5C28F
        push 0x3E8624DD
        push 0
        lea edx, ss:[esp+0x38]
        push edx
/*FIXUP push offset public_5d0410 @0x4bbcdb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0410
/*FIXUP push offset public_5d5c80 @0x4bbce0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d5c80
        mov ecx, esi
        mov dword ptr ss : [esp+0x44], 0xBED16873
        mov dword ptr ss : [esp+0x48], 0xBE03126F
        mov dword ptr ss : [esp+0x4C], 0
        call public_5a0e30
        push 1
        push 0
        push 1
        push 0x5CE
        push 0x3FF33333
        push 0x3CF5C28F
        push 0x3E8624DD
        push 0
        mov dword ptr ds : [esi+0x360], eax
        lea eax, ss:[esp+0x38]
        push eax
/*FIXUP push offset public_5d0410 @0x4bbd2b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0410
/*FIXUP push offset public_5d5c6c @0x4bbd30*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d5c6c
        mov ecx, esi
        mov dword ptr ss : [esp+0x44], 0xBE051EB8
        mov dword ptr ss : [esp+0x48], 0xBE03126F
        mov dword ptr ss : [esp+0x4C], 0
        call public_5a0e30
        push 1
        push 0
        push 1
        push 0x5CF
        push 0x3FF33333
        push 0x3CF5C28F
        push 0x3E8624DD
        push 0
        lea ecx, ss:[esp+0x38]
        push ecx
/*FIXUP push offset public_5d0410 @0x4bbd75*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0410
/*FIXUP push offset public_5d5c58 @0x4bbd7a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d5c58
        mov ecx, esi
        mov dword ptr ds : [esi+0x364], eax
        mov dword ptr ss : [esp+0x44], 0x3E126E98
        mov dword ptr ss : [esp+0x48], 0xBE03126F
        mov dword ptr ss : [esp+0x4C], 0
        call public_5a0e30
        mov dword ptr ds : [esi+0x368], eax
        jmp public_4bbf15
        public_4bbdaf : nop
        call edi
        test al, al
        je public_4bbf15
        push 0
        push 0
        push 0x323
        push 0
        push 0
        lea edx, ss:[esp+0x2C]
        push edx
        lea eax, ss:[esp+0x24]
        push eax
/*FIXUP push offset public_5ced30 @0x4bbdd0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ced30
/*FIXUP push offset public_5d5c48 @0x4bbdd5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d5c48
        mov ecx, esi
        mov dword ptr ss : [esp+0x3C], 0x3E083127
        mov dword ptr ss : [esp+0x40], 0x3CD4FDF4
        mov dword ptr ss : [esp+0x44], 0
        mov dword ptr ss : [esp+0x30], 0xBE4FDF3B
        mov dword ptr ss : [esp+0x34], 0xBE570A3D
        mov dword ptr ss : [esp+0x38], 0
        call public_5a0d00
        push 1
        push 0
        push 1
        push 0x628
        push 0x40000000
        push 0x3CF5C28F
        push 0x3E883127
        push 0
        lea ecx, ss:[esp+0x38]
        push ecx
/*FIXUP push offset public_5d0410 @0x4bbe32*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0410
/*FIXUP push offset public_5d5c3c @0x4bbe37*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d5c3c
        mov ecx, esi
        mov dword ptr ds : [esi+0x36C], eax
        mov dword ptr ss : [esp+0x44], 0xBEAB020C
        mov dword ptr ss : [esp+0x48], 0xBE408312
        mov dword ptr ss : [esp+0x4C], 0
        call public_5a0e30
        push 0
        push 0
        push 0x324
        push 0
        push 0
        lea edx, ss:[esp+0x2C]
        push edx
        mov dword ptr ds : [esi+0x370], eax
        lea eax, ss:[esp+0x24]
        push eax
/*FIXUP push offset public_5ced30 @0x4bbe7e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ced30
/*FIXUP push offset public_5d5c30 @0x4bbe83*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d5c30
        mov ecx, esi
        mov dword ptr ss : [esp+0x3C], 0x3E083127
        mov dword ptr ss : [esp+0x40], 0x3CD4FDF4
        mov dword ptr ss : [esp+0x44], 0
        mov dword ptr ss : [esp+0x30], 0x3E4DD2F2
        mov dword ptr ss : [esp+0x34], 0xBE570A3D
        mov dword ptr ss : [esp+0x38], 0
        call public_5a0d00
        push 1
        push 0
        push 1
        push 0x629
        push 0x40000000
        push 0x3CF5C28F
        push 0x3E89374C
        push 0
        lea ecx, ss:[esp+0x38]
        push ecx
/*FIXUP push offset public_5d0410 @0x4bbee0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0410
/*FIXUP push offset public_5d5c28 @0x4bbee5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d5c28
        mov ecx, esi
        mov dword ptr ds : [esi+0x374], eax
        mov dword ptr ss : [esp+0x44], 0x3D8B4396
        mov dword ptr ss : [esp+0x48], 0xBE408312
        mov dword ptr ss : [esp+0x4C], 0
        call public_5a0e30
        mov dword ptr ds : [esi+0x378], eax
        public_4bbf15 : nop
        mov eax, dword ptr ds : [public_672950]
        cmp dword ptr ds : [eax], eax
        jne public_4bbf3e
        mov ecx, dword ptr ds : [public_66d3f0]
        call public_45dcd0
        test al, al
        jne public_4bbf3e
        call edi
        test al, al
        je public_4bbf3e
        mov byte ptr ds : [esi+0x37C], 0
        push 0
        jmp public_4bbf40
        public_4bbf3e : nop
        push 1
        public_4bbf40 : nop
        mov ecx, esi
        call public_4bbfb0
        mov edx, dword ptr ds : [esi]
        sub esp, 0xC
        mov dword ptr ss : [esp+0x18], 0
        mov ecx, dword ptr ss : [esp+0x18]
        mov eax, esp
        mov dword ptr ds : [eax], ecx
        mov dword ptr ss : [esp+0x1C], 0
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ss : [esp+0x20], 0
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [eax+8], ecx
        mov ecx, esi
        call dword ptr ds : [edx+0x7C]
        mov al, byte ptr ds : [esi+0x6C]
        mov edx, dword ptr ss : [esp+0x2C]
        and al, 0xFC
        mov byte ptr ds : [esi+0x6C], al
        mov eax, dword ptr ss : [esp+0x28]
        push edx
        push eax
        mov ecx, esi
        call public_4b5060
        test al, al
        pop edi
        setne al
        pop esi
        add esp, 0x1C
        ret 8
        UNREACHABLE_TRAP(0x4bb810)
    }
}

#undef public_4bb8c2
#undef public_4bb8db
#undef public_4bb922
#undef public_4bb93d
#undef public_4bb96b
#undef public_4bb973
#undef public_4bba94
#undef public_4bbbb6
#undef public_4bbc60
#undef public_4bbdaf
#undef public_4bbf15
#undef public_4bbf3e
#undef public_4bbf40
