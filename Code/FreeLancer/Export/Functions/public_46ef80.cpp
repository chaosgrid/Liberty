#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4347e0);
CLANG_FORWARD_PROC_SYMBOL(public_46f6d0);
CLANG_FORWARD_PROC_SYMBOL(public_46fa80);
CLANG_FORWARD_PROC_SYMBOL(public_470040);
CLANG_FORWARD_PROC_SYMBOL(public_4b5060);
CLANG_FORWARD_PROC_SYMBOL(public_5760d0);
CLANG_FORWARD_PROC_SYMBOL(public_5a0c90);
CLANG_FORWARD_PROC_SYMBOL(public_5a0e30);
CLANG_FORWARD_PROC_SYMBOL(public_5a1340);
CLANG_FORWARD_PROC_SYMBOL(public_5a17e0);

#define public_46f07e _public_46f07e
#define public_46f2a0 _public_46f2a0
#define public_46f4d6 _public_46f4d6

PROC_DECLARE(0x46ef80, internal_46ef80, public_46ef80);
extern "C" NAKED register_t __cdecl internal_46ef80()
{
    __asm
    {
        sub esp, 0x134
        mov eax, dword ptr ss : [esp+0x13C]
        push ebx
        push ebp
        push esi
        push edi
        mov esi, ecx
        mov edx, dword ptr ds : [esi]
        xor edi, edi
        push edi
/*FIXUP push offset public_5ce994 @0x46ef98*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ce994
        mov dword ptr ds : [esi+0x330], eax
        mov dword ptr ds : [esi+0x350], edi
        mov dword ptr ds : [esi+0x34C], edi
        call dword ptr ds : [edx+0x98]
        lea eax, ds:[esi+0x80]
        push eax
        lea ecx, ds:[esi+0xB4]
        call public_5a1340
        push 1
        push edi
        push 1
        push edi
        push 0x3FC00000
        push 0x3D75C28F
        push 0x3F5645A2
        push edi
        lea ecx, ss:[esp+0x40]
        push ecx
/*FIXUP push offset public_5ce91c @0x46efe2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ce91c
/*FIXUP push offset public_5d01fc @0x46efe7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d01fc
        mov ecx, esi
        mov dword ptr ss : [esp+0x4C], 0xBED58106
        mov dword ptr ss : [esp+0x50], 0x3E841893
        mov dword ptr ss : [esp+0x54], edi
        call public_5a0e30
        mov edx, dword ptr ds : [public_6119f8]
        push edx
/*FIXUP push offset public_66fc60 @0x46f00e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        mov ebx, eax
        mov eax, dword ptr ds : [public_67eca8]
        push 0x3D5
        push eax
        call public_4347e0
        mov eax, dword ptr ds : [esi+0x330]
        add esp, 0x10
        cmp eax, edi
        je public_46f07e
        push eax
        call dword ptr ds : [public_5c603c]
        mov ebp, eax
        add esp, 4
        cmp ebp, edi
        je public_46f07e
        mov edi, dword ptr ds : [public_5c70ac]
/*FIXUP push offset public_5d01f4 @0x46f048*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d01f4
/*FIXUP push offset public_66fc60 @0x46f04d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call edi
        mov ecx, dword ptr ds : [public_6119f8]
        mov edx, dword ptr ss : [ebp+0x14]
        mov eax, dword ptr ds : [public_67eca8]
        push ecx
/*FIXUP push offset public_66dc60 @0x46f063*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66dc60
        push edx
        push eax
        call public_4347e0
/*FIXUP push offset public_66dc60 @0x46f06f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66dc60
/*FIXUP push offset public_66fc60 @0x46f074*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call edi
        add esp, 0x20
/*FIXUP public_46f07e : nop
        push offset public_66fc60 @0x46f07e*/
  FIXUP public_46f07e : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call dword ptr ds : [public_616420]
        mov edx, dword ptr ds : [ebx]
        push 0
/*FIXUP push offset public_66fc60 @0x46f08d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        push 0x1D
        mov ecx, ebx
        call dword ptr ds : [edx+0xA8]
        push 0
        push 0
        push 0x409
        push 0
        push 0
        push 0
        push 0
        lea eax, ss:[esp+0x3C]
        push eax
        push 0
        lea ecx, ss:[esp+0x34]
        push ecx
        push 0
/*FIXUP push offset public_5ced30 @0x46f0bb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ced30
        push 0
/*FIXUP push offset public_5d01d0 @0x46f0c2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d01d0
/*FIXUP push offset public_5d01b4 @0x46f0c7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d01b4
        mov ecx, esi
        mov dword ptr ss : [esp+0x5C], 0x3C9374BC
        mov dword ptr ss : [esp+0x60], 0x3C9374BC
        mov dword ptr ss : [esp+0x64], 0
        mov dword ptr ss : [esp+0x4C], 0x3ECD4FDF
        mov dword ptr ss : [esp+0x50], 0x3E72B021
        mov dword ptr ss : [esp+0x54], 0
        call public_5a0c90
        push 1
        push 0
        push 0
        push 0x3D6
        push 0x3FF33333
        push 0x3CF5C28F
        push 0x3DCCCCCD
        push 0
        lea edx, ss:[esp+0x30]
        push edx
/*FIXUP push offset public_5d01a8 @0x46f124*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d01a8
/*FIXUP push offset public_5d018c @0x46f129*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d018c
        mov ecx, esi
        mov dword ptr ds : [esi+0x334], eax
        mov dword ptr ss : [esp+0x3C], 0xBEC7AE14
        mov dword ptr ss : [esp+0x40], 0x3E428F5C
        mov dword ptr ss : [esp+0x44], 0
        call public_5a0e30
        push 0
        push 1
        mov dword ptr ds : [esi+0x338], eax
        mov edx, dword ptr ds : [eax]
        push 0x24
        mov ecx, eax
        call dword ptr ds : [edx+0xA8]
        push 1
        push 0
        push 0
        push 0x3CC
        push 0x3FF33333
        push 0x3CF5C28F
        push 0x3E851EB8
        push 0
        lea eax, ss:[esp+0x30]
        push eax
/*FIXUP push offset public_5d01a8 @0x46f18a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d01a8
/*FIXUP push offset public_5d0170 @0x46f18f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0170
        mov ecx, esi
        mov dword ptr ss : [esp+0x3C], 0xBDCAC083
        mov dword ptr ss : [esp+0x40], 0x3E428F5C
        mov dword ptr ss : [esp+0x44], 0
        call public_5a0e30
        push 0
        push 1
        mov dword ptr ds : [esi+0x33C], eax
        mov edx, dword ptr ds : [eax]
        push 0x24
        mov ecx, eax
        call dword ptr ds : [edx+0xA8]
        push 1
        push 0
        push 0
        push 0x3CD
        push 0x3FF33333
        push 0x3CF5C28F
        push 0x3E4CCCCD
        push 0
        lea eax, ss:[esp+0x30]
        push eax
/*FIXUP push offset public_5d01a8 @0x46f1ea*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d01a8
/*FIXUP push offset public_5d0154 @0x46f1ef*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0154
        mov ecx, esi
        mov dword ptr ss : [esp+0x3C], 0x3E343958
        mov dword ptr ss : [esp+0x40], 0x3E428F5C
        mov dword ptr ss : [esp+0x44], 0
        call public_5a0e30
        push 0
        push 1
        mov dword ptr ds : [esi+0x340], eax
        mov edx, dword ptr ds : [eax]
        push 0x24
        mov ecx, eax
        call dword ptr ds : [edx+0xA8]
        push 1
        push 0
        push 0
        push 0x3D8
        push 0x3FF33333
        push 0x3CF5C28F
        push 0x3DCCCCCD
        push 0
        lea eax, ss:[esp+0x30]
        push eax
/*FIXUP push offset public_5d01a8 @0x46f24a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d01a8
/*FIXUP push offset public_5d0138 @0x46f24f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0138
        mov ecx, esi
        mov dword ptr ss : [esp+0x3C], 0xBE8B4396
        mov dword ptr ss : [esp+0x40], 0x3E428F5C
        mov dword ptr ss : [esp+0x44], 0
        call public_5a0e30
        push 0
        push 1
        mov dword ptr ds : [esi+0x344], eax
        mov edx, dword ptr ds : [eax]
        push 0x24
        mov ecx, eax
        call dword ptr ds : [edx+0xA8]
        mov ebp, dword ptr ds : [public_5c71ec]
        xor edi, edi
        mov dword ptr ss : [esp+0x1C], edi
        lea ebx, ds:[esi+0x358]
        nop 
        lea esp, ss:[esp]
        public_46f2a0 : nop
        push edi
        lea eax, ss:[esp+0x48]
/*FIXUP push offset public_5d0120 @0x46f2a5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0120
        push eax
        call ebp
        fild dword ptr ss : [esp+0x28]
        add esp, 0xC
        push 1
        fmul dword ptr ds : [public_5d011c]
        push 0
        push 0
        push 0
        fsubr dword ptr ds : [public_5d0118]
        push 0x3FF33333
        push 0x3CF5C28F
        push 0x3DCCCCCD
        push 0
        fst dword ptr ss : [esp+0x3C]
        lea ecx, ss:[esp+0x30]
        fstp dword ptr ss : [esp+0x34]
        push ecx
/*FIXUP push offset public_5d010c @0x46f2e6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d010c
        lea edx, ss:[esp+0x6C]
        push edx
        mov ecx, esi
        mov dword ptr ss : [esp+0x3C], 0xBEC7AE14
        mov dword ptr ss : [esp+0x44], 0
        call public_5a0e30
        push 0
        push 1
        mov dword ptr ds : [ebx-4], eax
        mov edx, dword ptr ds : [eax]
        push 0x24
        mov ecx, eax
        call dword ptr ds : [edx+0xA8]
        push edi
        lea eax, ss:[esp+0x48]
/*FIXUP push offset public_5d00f0 @0x46f31f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d00f0
        push eax
        call ebp
        mov ecx, dword ptr ss : [esp+0x28]
        add esp, 0xC
        push 1
        push 0
        push 0
        push 0
        push 0x3FF33333
        push 0x3CF5C28F
        push 0x3DCCCCCD
        push 0
        lea edx, ss:[esp+0x40]
        push edx
/*FIXUP push offset public_5d010c @0x46f34c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d010c
        lea eax, ss:[esp+0x6C]
        mov dword ptr ss : [esp+0x4C], ecx
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x4C], 0xBE8B4396
        mov dword ptr ss : [esp+0x54], 0
        call public_5a0e30
        push 0
        push 1
        mov dword ptr ds : [ebx], eax
        mov edx, dword ptr ds : [eax]
        push 0x24
        mov ecx, eax
        call dword ptr ds : [edx+0xA8]
        push edi
        lea eax, ss:[esp+0x48]
/*FIXUP push offset public_5d00d8 @0x46f388*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d00d8
        push eax
        call ebp
        mov ecx, dword ptr ss : [esp+0x28]
        add esp, 0xC
        push 1
        push 0
        push 0
        mov dword ptr ss : [esp+0x44], 0xBDCAC083
        mov dword ptr ss : [esp+0x48], ecx
        mov dword ptr ss : [esp+0x4C], 0
        push 0
        push 0x3FF33333
        push 0x3CF5C28F
        push 0x3E851EB8
        push 0
        lea edx, ss:[esp+0x58]
        push edx
/*FIXUP push offset public_5d010c @0x46f3c9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d010c
        lea eax, ss:[esp+0x6C]
        push eax
        mov ecx, esi
        call public_5a0e30
        push 0
        push 1
        mov dword ptr ds : [ebx+4], eax
        mov edx, dword ptr ds : [eax]
        push 0x24
        mov ecx, eax
        call dword ptr ds : [edx+0xA8]
        push edi
        lea eax, ss:[esp+0x48]
/*FIXUP push offset public_5d00c0 @0x46f3f2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d00c0
        push eax
        call ebp
        mov ecx, dword ptr ss : [esp+0x28]
        add esp, 0xC
        push 1
        push 0
        push 0
        push 0
        push 0x3FF33333
        push 0x3CF5C28F
        push 0x3E4CCCCD
        push 0
        lea edx, ss:[esp+0x4C]
        push edx
/*FIXUP push offset public_5d010c @0x46f41f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d010c
        lea eax, ss:[esp+0x6C]
        mov dword ptr ss : [esp+0x58], ecx
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x58], 0x3E343958
        mov dword ptr ss : [esp+0x60], 0
        call public_5a0e30
        push 0
        push 1
        mov dword ptr ds : [ebx+8], eax
        mov edx, dword ptr ds : [eax]
        push 0x24
        mov ecx, eax
        call dword ptr ds : [edx+0xA8]
        inc edi
        add ebx, 0x10
        cmp edi, 0xD
        mov dword ptr ss : [esp+0x1C], edi
        jl public_46f2a0
        push 0
        push 3
        push 5
        push 0
        push 0x3ECFDF3B
        push 0x3C9BA5E3
        lea eax, ss:[esp+0x44]
        push eax
/*FIXUP push offset public_5d00a8 @0x46f47f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d00a8
        mov ecx, esi
        mov dword ptr ss : [esp+0x4C], 0x3EC83127
        mov dword ptr ss : [esp+0x50], 0x3E6D9168
        mov dword ptr ss : [esp+0x54], 0xBFA4DD2F
        call public_5a17e0
        mov ecx, dword ptr ds : [esi+0x330]
        push ecx
        mov dword ptr ds : [esi+0x348], eax
        call public_46f6d0
        mov ecx, dword ptr ds : [esi+0x34C]
        mov eax, 1
        add esp, 4
        cmp ecx, eax
        je public_46f4d6
        push eax
        mov dword ptr ds : [esi+0x34C], eax
        call public_470040
        add esp, 4
        public_46f4d6 : nop
        mov ecx, esi
        call public_46fa80
        push 0xF
        lea ecx, ds:[esi+0x32C]
        call public_5760d0
        mov edx, dword ptr ds : [esi]
        sub esp, 0xC
        mov dword ptr ss : [esp+0x2C], 0
        mov ecx, dword ptr ss : [esp+0x2C]
        mov eax, esp
        mov dword ptr ds : [eax], ecx
        mov dword ptr ss : [esp+0x30], 0x3D9BA5E3
        mov ecx, dword ptr ss : [esp+0x30]
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ss : [esp+0x34], 0xBFA4DD2F
        mov ecx, dword ptr ss : [esp+0x34]
        mov dword ptr ds : [eax+8], ecx
        mov ecx, esi
        call dword ptr ds : [edx+0x7C]
        mov edx, dword ptr ds : [esi]
        lea eax, ds:[esi+0x60]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x14]
        mov ecx, dword ptr ds : [esi+4]
        push 0
        push ecx
        mov ecx, esi
        call public_4b5060
        pop edi
        pop esi
        test al, al
        pop ebp
        setne al
        pop ebx
        add esp, 0x134
        ret 8
        UNREACHABLE_TRAP(0x46ef80)
    }
}

#undef public_46f07e
#undef public_46f2a0
#undef public_46f4d6
