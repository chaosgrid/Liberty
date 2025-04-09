#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4779a0);
CLANG_FORWARD_PROC_SYMBOL(public_4b5060);
CLANG_FORWARD_PROC_SYMBOL(public_4c4ce0);
CLANG_FORWARD_PROC_SYMBOL(public_576360);
CLANG_FORWARD_PROC_SYMBOL(public_5a0c90);
CLANG_FORWARD_PROC_SYMBOL(public_5a0d00);
CLANG_FORWARD_PROC_SYMBOL(public_5a0db0);
CLANG_FORWARD_PROC_SYMBOL(public_5a0e30);
CLANG_FORWARD_PROC_SYMBOL(public_5a0fb0);
CLANG_FORWARD_PROC_SYMBOL(public_5a1080);
CLANG_FORWARD_PROC_SYMBOL(public_5a1340);
CLANG_FORWARD_PROC_SYMBOL(public_5a17e0);

#define public_4b2e10 _public_4b2e10

PROC_DECLARE(0x4b2c90, internal_4b2c90, public_4b2c90);
extern "C" NAKED register_t __cdecl internal_4b2c90()
{
    __asm
    {
        sub esp, 0x2BC
        push ebx
        push ebp
        push esi
        push edi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        push 0
/*FIXUP push offset public_5cb748 @0x4b2ca0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb748
        call dword ptr ds : [eax+0x98]
        lea ecx, ds:[esi+0x80]
        push ecx
        lea ecx, ds:[esi+0xB4]
        call public_5a1340
        push 0
        push 0
        push 0x438
        push 0
        push 0
        lea edx, ss:[esp+0x44]
        push edx
        lea eax, ss:[esp+0x3C]
        push eax
/*FIXUP push offset public_5d2ae0 @0x4b2cd4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d2ae0
/*FIXUP push offset public_5d5420 @0x4b2cd9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d5420
        mov ecx, esi
        mov dword ptr ss : [esp+0x54], 0x3E083127
        mov dword ptr ss : [esp+0x58], 0x3CD4FDF4
        mov dword ptr ss : [esp+0x5C], 0
        mov dword ptr ss : [esp+0x48], 0
        mov dword ptr ss : [esp+0x4C], 0xBE50E560
        mov dword ptr ss : [esp+0x50], 0
        call public_5a0d00
        push 0
        push 1
        mov dword ptr ds : [esi+0x344], eax
        mov edx, dword ptr ds : [eax]
        push 1
        mov ecx, eax
        call dword ptr ds : [edx+0xA8]
        push 0
        push 0
        push 1
        push 0x427
        push 0x3FC00000
        push 0x3D75C28F
        push 0x3E87AE14
        push 0
        lea eax, ss:[esp+0x44]
        push eax
/*FIXUP push offset public_5d0410 @0x4b2d4c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0410
/*FIXUP push offset public_5d5414 @0x4b2d51*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d5414
        mov ecx, esi
        mov dword ptr ss : [esp+0x50], 0
        mov dword ptr ss : [esp+0x54], 0xBE5D2F1B
        mov dword ptr ss : [esp+0x58], 0
        call public_5a0e30
        push 0
        push 1
        mov dword ptr ds : [esi+0x478], eax
        mov edx, dword ptr ds : [eax]
        push 1
        mov ecx, eax
        call dword ptr ds : [edx+0xA8]
        push 0
        push 0
        push 0x2148
        push 0
        push 0
        push 0
        push 0
        lea eax, ss:[esp+0x40]
        push eax
        push 0
        lea ecx, ss:[esp+0x54]
        mov dword ptr ss : [esp+0x48], 0x3CA3D70A
        mov dword ptr ss : [esp+0x4C], 0x3CA3D70A
        mov dword ptr ss : [esp+0x50], 0
        mov dword ptr ss : [esp+0x54], 0x3E6147AE
        mov dword ptr ss : [esp+0x58], 0x3E6C8B44
        mov dword ptr ss : [esp+0x5C], 0
        push ecx
        push 0
/*FIXUP push offset public_5ced30 @0x4b2dda*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ced30
        push 0
/*FIXUP push offset public_5cf1f4 @0x4b2de1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cf1f4
/*FIXUP push offset public_5d5400 @0x4b2de6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d5400
        mov ecx, esi
        call public_5a0c90
        mov ebx, dword ptr ds : [public_5c71ec]
        xor edi, edi
        mov dword ptr ds : [esi+0x348], eax
        mov dword ptr ss : [esp+0x1C], edi
        lea ebp, ds:[esi+0x370]
        lea ebx, ds:[ebx]
        public_4b2e10 : nop
        push edi
        lea edx, ss:[esp+0xD0]
/*FIXUP push offset public_5d53ec @0x4b2e18*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d53ec
        push edx
        call ebx
        fild dword ptr ss : [esp+0x28]
        add esp, 0xC
        push 0
        fmul dword ptr ds : [public_5d53e8]
        push 0x43A
        push 0
        push 1
        push 0
        fstp dword ptr ss : [esp+0x30]
        fld dword ptr ds : [public_5d53e4]
        push 0
        fsub dword ptr ss : [esp+0x34]
        lea eax, ss:[esp+0x3C]
        push eax
        push 0
        lea ecx, ss:[esp+0x50]
        fst dword ptr ss : [esp+0x40]
        push ecx
        fstp dword ptr ss : [esp+0x58]
        push 0
/*FIXUP push offset public_5ced30 @0x4b2e60*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ced30
/*FIXUP push offset public_5cb0d0 @0x4b2e65*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb0d0
/*FIXUP push offset public_5d4e20 @0x4b2e6a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d4e20
        lea edx, ss:[esp+0x100]
        push edx
        mov ecx, esi
        mov dword ptr ss : [esp+0x5C], 0x3C656042
        mov dword ptr ss : [esp+0x60], 0x3C656042
        mov dword ptr ss : [esp+0x64], 0
        mov dword ptr ss : [esp+0x68], 0xBE5C28F6
        mov dword ptr ss : [esp+0x70], 0
        call public_5a0fb0
        push edi
        mov dword ptr ss : [ebp-0x24], eax
        lea eax, ss:[esp+0xD0]
/*FIXUP push offset public_5d53cc @0x4b2eb1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d53cc
        push eax
        call ebx
        mov ecx, dword ptr ss : [esp+0x2C]
        add esp, 0xC
        push 0
        push 0
        push 0
        push 0
        push 0
        lea edx, ss:[esp+0xD4]
        push edx
        lea eax, ss:[esp+0xB4]
        push eax
        mov dword ptr ss : [esp+0xBC], ecx
/*FIXUP push offset public_5ced30 @0x4b2ee1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ced30
        lea ecx, ss:[esp+0xEC]
        push ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0xE4], 0x3C656042
        mov dword ptr ss : [esp+0xE8], 0x3C656042
        mov dword ptr ss : [esp+0xEC], 0
        mov dword ptr ss : [esp+0xC0], 0xBE5C28F6
        mov dword ptr ss : [esp+0xC8], 0
        call public_5a0d00
        push edi
        lea edx, ss:[esp+0xD0]
/*FIXUP push offset public_5d53b8 @0x4b2f34*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d53b8
        push edx
        mov dword ptr ss : [ebp], eax
        call ebx
        fld dword ptr ds : [public_5d53b4]
        fsub dword ptr ss : [esp+0x28]
        add esp, 0xC
        mov dword ptr ss : [esp+0xB4], 0x3C656042
        mov dword ptr ss : [esp+0xB8], 0x3C656042
        fst dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0xBC], 0
        fstp dword ptr ss : [esp+0x64]
        mov dword ptr ss : [esp+0x60], 0xBE343958
        mov dword ptr ss : [esp+0x68], 0
        push 0
        push 0
        push 0
        push 0
        push 0
        lea eax, ss:[esp+0xC8]
        push eax
        lea ecx, ss:[esp+0x78]
        push ecx
/*FIXUP push offset public_5ced30 @0x4b2f9c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ced30
        lea edx, ss:[esp+0xEC]
        push edx
        mov ecx, esi
        call public_5a0d00
        push edi
        mov dword ptr ss : [ebp+0x24], eax
        lea eax, ss:[esp+0xD0]
/*FIXUP push offset public_5d53a0 @0x4b2fbb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d53a0
        push eax
        call ebx
        add esp, 0xC
        mov ecx, dword ptr ss : [esp+0x20]
        lea edx, ss:[esp+0x48]
        push edx
        push 0
        push 0
        push 0x6E
        push 1
        push 1
        push 0
        push 1
        push 0
        push 0
        push 0
        lea eax, ss:[esp+0xA4]
        push eax
        mov dword ptr ss : [esp+0xDC], ecx
        push 0
        lea ecx, ss:[esp+0xDC]
        push ecx
/*FIXUP push offset public_5cb0d0 @0x4b2ffc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb0d0
        lea edx, ss:[esp+0x108]
        push edx
        mov ecx, esi
        mov dword ptr ss : [esp+0x88], 0
        mov dword ptr ss : [esp+0x8C], 0
        mov dword ptr ss : [esp+0x90], 0
        mov dword ptr ss : [esp+0xB8], 0x3C656042
        mov dword ptr ss : [esp+0xBC], 0x3C656042
        mov dword ptr ss : [esp+0xC0], 0
        mov dword ptr ss : [esp+0xE8], 0xBE343958
        mov dword ptr ss : [esp+0xF0], 0xBF8CCCCD
        call public_5a0db0
        mov dword ptr ss : [ebp+0x48], eax
        mov cl, byte ptr ds : [eax+0x6C]
        and cl, 0xF7
        push edi
        mov byte ptr ds : [eax+0x6C], cl
        lea eax, ss:[esp+0xD0]
/*FIXUP push offset public_5d538c @0x4b307c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d538c
        push eax
        call ebx
        fld dword ptr ds : [public_5d53b4]
        fsub dword ptr ss : [esp+0x28]
        add esp, 0xC
        push 0
        push 0
        push 0
        fstp dword ptr ss : [esp+0x64]
        push 0
        push 0
        lea ecx, ss:[esp+0xA4]
        push ecx
        lea edx, ss:[esp+0x6C]
        push edx
        mov dword ptr ss : [esp+0xAC], 0x3E2F1AA0
        mov dword ptr ss : [esp+0xB0], 0x3C656042
        mov dword ptr ss : [esp+0xB4], 0
        mov dword ptr ss : [esp+0x70], 0x3CA3D70A
        mov dword ptr ss : [esp+0x78], 0
/*FIXUP push offset public_5ced30 @0x4b30dd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ced30
        lea eax, ss:[esp+0xEC]
        push eax
        mov ecx, esi
        call public_5a0d00
        push edi
        lea ecx, ss:[esp+0xD0]
/*FIXUP push offset public_5d5378 @0x4b30f9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d5378
        push ecx
        mov dword ptr ss : [ebp+0x6C], eax
        call ebx
        fld dword ptr ss : [esp+0x28]
        fsubr qword ptr ds : [public_5d5370]
        add esp, 0xC
        push 0
        push 0
        push 0
        fst dword ptr ss : [esp+0x2C]
        push 0x3F6
        fstp dword ptr ss : [esp+0x80]
        push 0x3F99999A
        push 0x3CF5C28F
        push 0x3E8A3D71
        push 0
        lea edx, ss:[esp+0x8C]
        push edx
/*FIXUP push offset public_5d010c @0x4b3140*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d010c
        lea eax, ss:[esp+0xF4]
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x98], 0xBC23D70A
        mov dword ptr ss : [esp+0xA0], 0
        call public_5a0e30
        push edi
        lea ecx, ss:[esp+0xD0]
/*FIXUP push offset public_5d5358 @0x4b3172*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d5358
        push ecx
        mov dword ptr ss : [ebp+0x90], eax
        call ebx
        add esp, 0xC
        mov edx, dword ptr ss : [esp+0x20]
        push 0
        push 0
        push 2
        push 0x40E
        push 0x3F99999A
        push 0x3CF5C28F
        push 0x3DD70A3D
        push 0
        lea eax, ss:[esp+0xA4]
        push eax
/*FIXUP push offset public_5d010c @0x4b31ab*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d010c
        lea ecx, ss:[esp+0xF4]
        push ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0xB0], 0x3E0B4396
        mov dword ptr ss : [esp+0xB4], edx
        mov dword ptr ss : [esp+0xB8], 0
        call public_5a0e30
        push edi
        lea edx, ss:[esp+0xD0]
/*FIXUP push offset public_5d5344 @0x4b31e4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d5344
        push edx
        mov dword ptr ss : [ebp+0xB4], eax
        call ebx
        fld dword ptr ds : [public_5d0434]
        mov eax, dword ptr ds : [public_679bac]
        fsub dword ptr ss : [esp+0x28]
        add esp, 0xC
        push eax
        push eax
        fstp dword ptr ss : [esp+0x1C]
        push 0x43C
        push 1
        lea eax, ss:[esp+0x4C]
        push eax
        mov dword ptr ss : [esp+0x50], 0x3C656042
        mov dword ptr ss : [esp+0x54], 0x3B03126F
        mov dword ptr ss : [esp+0x58], 0
        mov dword ptr ss : [esp+0x24], 0xBE343958
        mov dword ptr ss : [esp+0x2C], 0x3A83126F
        push 0
        lea ecx, ss:[esp+0x28]
        push ecx
/*FIXUP push offset public_5c865c @0x4b3245*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c865c
        lea edx, ss:[esp+0xEC]
        push edx
        mov ecx, esi
        call public_5a1080
        push 0
        push 0x10000
        mov dword ptr ss : [ebp+0xD8], eax
        mov edx, dword ptr ds : [eax]
        push 0x19
        mov ecx, eax
        call dword ptr ds : [edx+0xA8]
        inc edi
        add ebp, 4
        cmp edi, 9
        mov dword ptr ss : [esp+0x1C], edi
        jl public_4b2e10
        push 0
        push 9
        push 5
        push 0
        push 0x3E6B851F
        push 0x3C9374BC
        lea eax, ss:[esp+0x28]
        push eax
/*FIXUP push offset public_5d5334 @0x4b329a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d5334
        mov ecx, esi
        mov dword ptr ss : [esp+0x30], 0x3E428F5C
        mov dword ptr ss : [esp+0x34], 0x3E0F5C29
        mov dword ptr ss : [esp+0x38], 0xBF800000
        call public_5a17e0
        push 0
        push 0
        push 1
        push 0x4A8
        push 0x3FD9999A
        push 0x3CF5C28F
        push 0x3EF74BC7
        push 0
        lea ecx, ss:[esp+0x30]
        push ecx
/*FIXUP push offset public_5ce91c @0x4b32df*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ce91c
/*FIXUP push offset public_5d5328 @0x4b32e4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d5328
        mov ecx, esi
        mov dword ptr ds : [esi+0x46C], eax
        mov dword ptr ss : [esp+0x3C], 0x3C23D70A
        mov dword ptr ss : [esp+0x40], 0x3E6E978D
        mov dword ptr ss : [esp+0x44], 0
        call public_5a0e30
        push 0
        push 0
        push 0x439
        push 0
        push 0
        push 0
        push 0
        lea edx, ss:[esp+0x2C]
        push edx
        push 0
        lea eax, ss:[esp+0x60]
        push eax
        push 0
/*FIXUP push offset public_5ced30 @0x4b332d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ced30
        push 0
/*FIXUP push offset public_5d52f8 @0x4b3334*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d52f8
/*FIXUP push offset public_5d52e4 @0x4b3339*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d52e4
        mov ecx, esi
        mov dword ptr ss : [esp+0x4C], 0x3CA3D70A
        mov dword ptr ss : [esp+0x50], 0x3CA3D70A
        mov dword ptr ss : [esp+0x54], 0
        mov dword ptr ss : [esp+0x78], 0xBE5C28F6
        mov dword ptr ss : [esp+0x7C], 0xBE051EB8
        mov dword ptr ss : [esp+0x80], 0
        call public_5a0c90
        push 0
        push 0
        push 1
        push 0
        push 0x3FB33333
        push 0x3CF5C28F
        push 0x3EF9DB23
        push 0
        lea ecx, ss:[esp+0x30]
        push ecx
/*FIXUP push offset public_5d0608 @0x4b3396*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0608
/*FIXUP push offset public_5d52d0 @0x4b339b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d52d0
        mov ecx, esi
        mov dword ptr ds : [esi+0x470], eax
        mov dword ptr ss : [esp+0x3C], 0x3BA3D70A
        mov dword ptr ss : [esp+0x40], 0x3E449BA6
        mov dword ptr ss : [esp+0x44], 0
        call public_5a0e30
        push 0
        mov dword ptr ds : [esi+0x47C], eax
        mov dword ptr ss : [esp+0x14], 0xBD89374C
        mov dword ptr ss : [esp+0x18], 0xBE051EB8
        mov dword ptr ss : [esp+0x1C], 0
        push 0
        push 0
        push 0x4A9
        push 0x3F99999A
        push 0x3CF5C28F
        push 0x3E19999A
        push 0
        lea edx, ss:[esp+0x30]
        push edx
/*FIXUP push offset public_5d0608 @0x4b3404*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0608
/*FIXUP push offset public_5d52bc @0x4b3409*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d52bc
        mov ecx, esi
        call public_5a0e30
        push 0
        push 0
        push 2
        push 0
        push 0x3F99999A
        push 0x3CF5C28F
        push 0x3E19999A
        push 0
        lea eax, ss:[esp+0x30]
        push eax
/*FIXUP push offset public_5d0608 @0x4b3433*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0608
/*FIXUP push offset public_5d52ac @0x4b3438*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d52ac
        mov ecx, esi
        mov dword ptr ss : [esp+0x3C], 0x3DF5C28F
        mov dword ptr ss : [esp+0x40], 0xBE051EB8
        mov dword ptr ss : [esp+0x44], 0
        call public_5a0e30
        push 0
        push 0
        push 1
        push 0x4AA
        push 0x3F99999A
        push 0x3CF5C28F
        push 0x3EF9DB23
        push 0
        lea ecx, ss:[esp+0x30]
        push ecx
/*FIXUP push offset public_5d0608 @0x4b347d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0608
/*FIXUP push offset public_5d5298 @0x4b3482*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d5298
        mov ecx, esi
        mov dword ptr ds : [esi+0x474], eax
        mov dword ptr ss : [esp+0x3C], 0x3BA3D70A
        mov dword ptr ss : [esp+0x40], 0xBE47AE14
        mov dword ptr ss : [esp+0x44], 0
        call public_5a0e30
        push 0
        push 1
        mov dword ptr ds : [esi+0x480], eax
        mov edx, dword ptr ds : [eax]
        push 1
        mov ecx, eax
        call dword ptr ds : [edx+0xA8]
        push 0x476
        call public_4c4ce0
        push eax
        lea eax, ss:[esp+0xD4]
        push eax
        call public_4779a0
        mov ecx, dword ptr ds : [esi+0x47C]
        mov edx, dword ptr ds : [ecx]
        add esp, 0xC
        push 0
        lea eax, ss:[esp+0xD0]
        push eax
        push 0x1D
        call dword ptr ds : [edx+0xA8]
        push 0
        lea ecx, ds:[esi+0x32C]
        call public_576360
        mov ecx, dword ptr ss : [esp+0x2D4]
        mov edx, dword ptr ss : [esp+0x2D0]
        push ecx
        push edx
        mov ecx, esi
        call public_4b5060
        test al, al
        pop edi
        setne al
        pop esi
        pop ebp
        pop ebx
        add esp, 0x2BC
        ret 8
        UNREACHABLE_TRAP(0x4b2c90)
    }
}

#undef public_4b2e10
