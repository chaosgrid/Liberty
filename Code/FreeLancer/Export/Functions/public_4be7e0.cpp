#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_422b80);
CLANG_FORWARD_PROC_SYMBOL(public_4be7e0);
CLANG_FORWARD_PROC_SYMBOL(public_59db20);
CLANG_FORWARD_PROC_SYMBOL(public_5a0c90);
CLANG_FORWARD_PROC_SYMBOL(public_5a0db0);
CLANG_FORWARD_PROC_SYMBOL(public_5a0e30);
CLANG_FORWARD_PROC_SYMBOL(public_5a1340);

#define public_4be8fd _public_4be8fd
#define public_4be904 _public_4be904

PROC_DECLARE(0x4be7e0, internal_4be7e0, public_4be7e0);
extern "C" NAKED register_t __cdecl internal_4be7e0()
{
    __asm
    {
        sub esp, 0x30
        mov eax, dword ptr ss : [esp+0x38]
        fld dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+8]
        fadd dword ptr ds : [public_5d6130]
        push ebp
        mov ebp, dword ptr ds : [public_5c71ec]
        push esi
        mov esi, ecx
        fstp dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        push edi
        mov edi, dword ptr ss : [esp+0x40]
        mov dword ptr ss : [esp+0x10], ecx
        mov dword ptr ss : [esp+0x14], edx
        je public_4be8fd
        mov cl, byte ptr ds : [eax+0x5C]
        test cl, cl
        je public_4be8fd
        fld dword ptr ss : [esp+0x10]
        mov eax, edx
        fadd dword ptr ds : [public_5d612c]
        push eax
        sub esp, 8
        lea ecx, ss:[esp+0x30]
        fstp dword ptr ss : [esp+4]
        mov dword ptr ss : [esp+0x24], 0
        fld dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x28], 0
        fadd dword ptr ds : [public_5d6128]
        mov dword ptr ss : [esp+0x2C], 0
        fstp dword ptr ss : [esp]
        call public_422b80
        mov ecx, dword ptr ds : [public_6728b8]
        push ecx
/*FIXUP push offset public_5d611c @0x4be86f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d611c
/*FIXUP push offset public_5d601c @0x4be874*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d601c
/*FIXUP push offset public_6724b8 @0x4be879*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6724b8
        call ebp
        mov eax, dword ptr ds : [public_6728b8]
        add esp, 0x10
        push 0
        push 0
        push 0
        push 1
        push 0
        push 0
        push 0
        inc eax
        lea edx, ss:[esp+0x34]
        push edx
        push 0
        mov dword ptr ds : [public_6728b8], eax
        lea eax, ss:[esp+0x48]
        push eax
        push 0
        push 0
/*FIXUP push offset public_5d60ec @0x4be8ac*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d60ec
/*FIXUP push offset public_5d60ec @0x4be8b1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d60ec
/*FIXUP push offset public_6724b8 @0x4be8b6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6724b8
        mov ecx, edi
        call public_5a0c90
        mov dword ptr ds : [esi+0x10], eax
        mov dword ptr ds : [eax+0x2F0], esi
        mov eax, dword ptr ds : [esi+0x10]
        lea ecx, ds:[eax+0x80]
        push ecx
        lea ecx, ds:[eax+0xB4]
        call public_5a1340
        mov edx, dword ptr ds : [esi+0x10]
        push 0
        mov dword ptr ds : [edx+0x74], 0x3E8
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [ecx]
        push 1
        push 1
        call dword ptr ds : [eax+0xA8]
        jmp public_4be904
        public_4be8fd : nop
        mov dword ptr ds : [esi+0x10], 0
        public_4be904 : nop
        mov ecx, dword ptr ds : [public_6728b8]
        push ecx
/*FIXUP push offset public_5d60e0 @0x4be90b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d60e0
/*FIXUP push offset public_5d601c @0x4be910*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d601c
/*FIXUP push offset public_6724b8 @0x4be915*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6724b8
        mov dword ptr ss : [esp+0x28], 0
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x30], 0
        call ebp
        mov eax, dword ptr ds : [public_6728b8]
        add esp, 0x10
        push 0
        push 0
        push 0
        push 1
        push 0
        push 0
        push 1
        inc eax
        lea edx, ss:[esp+0x34]
        push edx
        push 0
        mov dword ptr ds : [public_6728b8], eax
        lea eax, ss:[esp+0x30]
        push eax
        push 0
        push 0
/*FIXUP push offset public_5d60a8 @0x4be960*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d60a8
/*FIXUP push offset public_5d60a8 @0x4be965*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d60a8
/*FIXUP push offset public_6724b8 @0x4be96a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6724b8
        mov ecx, edi
        call public_5a0c90
        mov dword ptr ds : [esi+0xC], eax
        mov dword ptr ds : [eax+0x2F0], esi
        mov eax, dword ptr ds : [esi+0xC]
        lea ecx, ds:[eax+0x80]
        push ecx
        lea ecx, ds:[eax+0xB4]
        call public_5a1340
        fld dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+0x14]
        fsub dword ptr ds : [public_5d60a4]
        mov eax, dword ptr ss : [esp+0x10]
        push edx
        push eax
        push ecx
        lea ecx, ss:[esp+0x30]
        fstp dword ptr ss : [esp]
        mov dword ptr ss : [esp+0x24], 0
        mov dword ptr ss : [esp+0x28], 0
        mov dword ptr ss : [esp+0x2C], 0
        call public_422b80
        mov ecx, dword ptr ds : [public_6728b8]
        push ecx
/*FIXUP push offset public_5d6098 @0x4be9d4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d6098
/*FIXUP push offset public_5d601c @0x4be9d9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d601c
/*FIXUP push offset public_6724b8 @0x4be9de*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6724b8
        call ebp
        mov edx, dword ptr ds : [public_6728b8]
        add esp, 0x10
        push 0
        push 0
        push 0
        push 1
        push 0
        push 0
        push 1
        inc edx
        mov dword ptr ds : [public_6728b8], edx
        lea edx, ss:[esp+0x34]
        push edx
        push 0
        lea eax, ss:[esp+0x48]
        push eax
        push 0
        push 0
/*FIXUP push offset public_5d6068 @0x4bea13*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d6068
/*FIXUP push offset public_5d6068 @0x4bea18*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d6068
/*FIXUP push offset public_6724b8 @0x4bea1d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6724b8
        mov ecx, edi
        call public_5a0c90
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [eax+0x2F0], esi
        mov ecx, dword ptr ds : [esi+8]
        mov byte ptr ds : [ecx+0x337], 1
        mov eax, dword ptr ds : [esi+8]
        lea edx, ds:[eax+0x80]
        push edx
        lea ecx, ds:[eax+0xB4]
        call public_5a1340
        fld dword ptr ss : [esp+0xC]
        mov eax, dword ptr ss : [esp+0x14]
        fsub dword ptr ds : [public_5d60a4]
        mov ecx, dword ptr ss : [esp+0x10]
        push eax
        push ecx
        push ecx
        lea ecx, ss:[esp+0x3C]
        fstp dword ptr ss : [esp]
        mov dword ptr ss : [esp+0x24], 0
        mov dword ptr ss : [esp+0x28], 0
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x30], 0
        mov dword ptr ss : [esp+0x34], 0
        mov dword ptr ss : [esp+0x38], 0
        call public_422b80
        mov edx, dword ptr ds : [public_6728b8]
        push edx
/*FIXUP push offset public_5d605c @0x4beaa9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d605c
/*FIXUP push offset public_5d601c @0x4beaae*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d601c
/*FIXUP push offset public_6724b8 @0x4beab3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6724b8
        call ebp
        add esp, 0x10
        mov edx, dword ptr ds : [public_6728b8]
        lea eax, ss:[esp+0x18]
        push eax
        push 0
        push 0
        push 0x64
        push 1
        push 1
        push 0
        push 1
        push 0
        push 0
        push 0
        inc edx
        lea ecx, ss:[esp+0x50]
        push ecx
        push 0
        mov dword ptr ds : [public_6728b8], edx
        lea edx, ss:[esp+0x64]
        push edx
/*FIXUP push offset public_5d6068 @0x4beaef*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d6068
/*FIXUP push offset public_6724b8 @0x4beaf4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6724b8
        mov ecx, edi
        call public_5a0db0
        mov dword ptr ds : [esi+0x14], eax
        mov dword ptr ds : [eax+0x2EC], eax
        mov eax, dword ptr ds : [esi+0x14]
        mov dword ptr ds : [eax+0x2F0], esi
        mov eax, dword ptr ds : [esi+0x14]
        lea ecx, ds:[eax+0x80]
        push ecx
        lea ecx, ds:[eax+0xB4]
        call public_5a1340
        mov edx, dword ptr ds : [esi+0xC]
        mov eax, dword ptr ds : [esi+0x14]
        mov dword ptr ds : [edx+0x2EC], eax
        fld dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+0x14]
        fsub dword ptr ds : [public_5c99c8]
        mov edx, dword ptr ss : [esp+0x10]
        push ecx
        push edx
        push ecx
        lea ecx, ss:[esp+0x3C]
        fstp dword ptr ss : [esp]
        call public_422b80
        mov eax, dword ptr ds : [public_6728b8]
        push eax
/*FIXUP push offset public_5d010c @0x4beb5a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d010c
/*FIXUP push offset public_5d601c @0x4beb5f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d601c
/*FIXUP push offset public_6724b8 @0x4beb64*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6724b8
        call ebp
        mov eax, dword ptr ds : [public_6728b8]
        add esp, 0x10
        push 0
        push 0
        push 0
        push 0
        push 0x3FC00000
        push 0x3D872B02
        push 0x3E6B851F
        push 0
        lea ecx, ss:[esp+0x50]
        push ecx
/*FIXUP push offset public_5d010c @0x4beb91*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d010c
        inc eax
/*FIXUP push offset public_6724b8 @0x4beb97*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6724b8
        mov ecx, edi
        mov dword ptr ds : [public_6728b8], eax
        call public_5a0e30
        fld dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x14]
        fsub dword ptr ds : [public_5c99c8]
        push edx
        sub esp, 8
        fstp dword ptr ss : [esp+4]
        lea ecx, ss:[esp+0x3C]
        fld dword ptr ss : [esp+0x18]
        mov dword ptr ds : [esi+0x18], eax
        fadd dword ptr ds : [public_5d011c]
        fstp dword ptr ss : [esp]
        call public_422b80
        mov eax, dword ptr ds : [public_6728b8]
        push eax
/*FIXUP push offset public_5d6050 @0x4bebdd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d6050
/*FIXUP push offset public_5d601c @0x4bebe2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d601c
/*FIXUP push offset public_6724b8 @0x4bebe7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6724b8
        call ebp
        mov eax, dword ptr ds : [public_6728b8]
        add esp, 0x10
        push 0
        push 0
        push 2
        push 0
        push 0x3FC00000
        push 0x3CCCCCCD
        push 0x3E428F5C
        push 0
        lea ecx, ss:[esp+0x50]
        push ecx
/*FIXUP push offset public_5d010c @0x4bec14*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d010c
        inc eax
/*FIXUP push offset public_6724b8 @0x4bec1a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6724b8
        mov ecx, edi
        mov dword ptr ds : [public_6728b8], eax
        call public_5a0e30
        mov dword ptr ds : [esi+0x1C], eax
        mov edx, dword ptr ds : [public_6728b8]
        push edx
/*FIXUP push offset public_5d6044 @0x4bec35*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d6044
/*FIXUP push offset public_5d601c @0x4bec3a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d601c
/*FIXUP push offset public_6724b8 @0x4bec3f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6724b8
        call ebp
        mov ecx, dword ptr ds : [public_6728b8]
        push 0
        push edi
        inc ecx
/*FIXUP push offset public_5d6034 @0x4bec50*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d6034
/*FIXUP push offset public_6724b8 @0x4bec55*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6724b8
        mov dword ptr ds : [public_6728b8], ecx
        call public_59db20
        mov dword ptr ds : [esi+0x20], eax
        add esp, 0x20
        mov dword ptr ss : [esp+0x18], 0x3CD844D0
        mov ecx, dword ptr ss : [esp+0x18]
        add eax, 0xB4
        mov dword ptr ss : [esp+0x1C], 0x3B51B717
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x20], 0
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax+8], ecx
        mov edx, dword ptr ds : [esi+0x20]
        mov byte ptr ds : [edx+0x348], 1
        fld dword ptr ss : [esp+0xC]
        fsub dword ptr ds : [public_5d6030]
        mov eax, dword ptr ds : [esi+0x20]
        add eax, 0xA8
        mov byte ptr ss : [esp+0x44], 0
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x18]
        fsub dword ptr ds : [public_5d602c]
        mov byte ptr ss : [esp+0x45], 0xC8
        mov byte ptr ss : [esp+0x46], 0
        mov byte ptr ss : [esp+0x47], 0xFF
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [eax+4], edx
        fstp dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [eax+8], ecx
        mov edx, dword ptr ds : [esi+0x20]
        mov eax, 0x42C80000
        mov dword ptr ds : [edx+0x330], eax
        mov ecx, dword ptr ds : [esi+0x20]
        mov dword ptr ds : [ecx+0x334], eax
        mov edx, dword ptr ds : [esi+0x20]
        mov eax, dword ptr ss : [esp+0x44]
        push 0
        mov dword ptr ds : [edx+0x340], eax
        mov ecx, dword ptr ds : [esi+0x20]
        mov edx, dword ptr ds : [ecx]
        push 0x10000
        push 0x19
        call dword ptr ds : [edx+0xA8]
        pop edi
        pop esi
        pop ebp
        add esp, 0x30
        ret 8
        UNREACHABLE_TRAP(0x4be7e0)
    }
}

#undef public_4be8fd
#undef public_4be904
