#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4b5060);
CLANG_FORWARD_PROC_SYMBOL(public_4da930);
CLANG_FORWARD_PROC_SYMBOL(public_4dd9e0);
CLANG_FORWARD_PROC_SYMBOL(public_5a0c90);
CLANG_FORWARD_PROC_SYMBOL(public_5a0db0);
CLANG_FORWARD_PROC_SYMBOL(public_5a0e30);
CLANG_FORWARD_PROC_SYMBOL(public_5a17e0);

#define public_4dab21 _public_4dab21

PROC_DECLARE(0x4da930, internal_4da930, public_4da930);
extern "C" NAKED register_t __cdecl internal_4da930()
{
    __asm
    {
        sub esp, 0x128
        push ebx
        push ebp
        push esi
        push edi
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
        mov esi, ecx
        lea ecx, ss:[esp+0x54]
        push ecx
        push 0
        lea edx, ss:[esp+0x44]
        push edx
/*FIXUP push offset public_5d8818 @0x4da961*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d8818
/*FIXUP push offset public_5d8804 @0x4da966*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d8804
        mov ecx, esi
        mov dword ptr ss : [esp+0x5C], 0
        mov dword ptr ss : [esp+0x60], 0
        mov dword ptr ss : [esp+0x64], 0
        mov dword ptr ss : [esp+0x68], 0
        mov dword ptr ss : [esp+0x6C], 0
        mov dword ptr ss : [esp+0x70], 0
        mov dword ptr ss : [esp+0x50], 0x3EAD6A16
        mov dword ptr ss : [esp+0x54], 0xBE78D4FE
        mov dword ptr ss : [esp+0x58], 0xBF68F5C3
        call public_5a0db0
        mov dword ptr ds : [esi+0x494], eax
        lea eax, ss:[esp+0x10]
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
        lea ecx, ss:[esp+0x54]
        push ecx
        push 0
        lea edx, ss:[esp+0x50]
        push edx
/*FIXUP push offset public_5d87e0 @0x4da9e5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d87e0
/*FIXUP push offset public_5d87c8 @0x4da9ea*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d87c8
        mov ecx, esi
        mov dword ptr ss : [esp+0x50], 0
        mov dword ptr ss : [esp+0x54], 0
        mov dword ptr ss : [esp+0x58], 0
        mov dword ptr ss : [esp+0x68], 0
        mov dword ptr ss : [esp+0x6C], 0
        mov dword ptr ss : [esp+0x70], 0
        mov dword ptr ss : [esp+0x5C], 0x3ED1F8A1
        mov dword ptr ss : [esp+0x60], 0xBEBD70A4
        mov dword ptr ss : [esp+0x64], 0xBF800000
        call public_5a0db0
        mov dword ptr ds : [esi+0x564], eax
        mov dword ptr ss : [esp+0x1C], 0x3DD70A3D
        mov ecx, dword ptr ss : [esp+0x1C]
        lea eax, ds:[esi+0xB4]
        mov dword ptr ss : [esp+0x20], 0x3CA3D70A
        mov edx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ss : [esp+0x24], 0
        mov ecx, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ss : [esp+0x1C], 0x3ECCCCCD
        mov dword ptr ss : [esp+0x20], 0xBEBDF3B6
        mov dword ptr ss : [esp+0x24], 0
        lea edx, ds:[esi+0xC0]
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x20]
        push 0
        push 0
        push 0x3FF
        push 0
        push 0
        push 1
        push 0
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ss : [esp+0x40]
        mov dword ptr ds : [edx+4], ecx
        lea ecx, ss:[esp+0x2C]
        push ecx
        push 0
        mov dword ptr ds : [edx+8], eax
        lea edx, ds:[esi+0x49C]
        push edx
        push 0
/*FIXUP push offset public_5d87b8 @0x4daac9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d87b8
        push 0
/*FIXUP push offset public_5d8790 @0x4daad0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d8790
/*FIXUP push offset public_5d8780 @0x4daad5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d8780
        mov ecx, esi
        mov dword ptr ss : [esp+0x4C], 0x3CA3D70A
        mov dword ptr ss : [esp+0x50], 0x3CA3D70A
        mov dword ptr ss : [esp+0x54], 0
        call public_5a0c90
        push 0
        push 1
        mov dword ptr ds : [esi+0x490], eax
        mov edx, dword ptr ds : [eax]
        push 0x36
        mov ecx, eax
        call dword ptr ds : [edx+0xA8]
        mov ebp, dword ptr ds : [public_5c71ec]
        xor ebx, ebx
        mov dword ptr ss : [esp+0x34], ebx
        lea edi, ds:[esi+0x4D0]
        public_4dab21 : nop
        push ebx
        lea eax, ss:[esp+0x3C]
/*FIXUP push offset public_5d876c @0x4dab26*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d876c
        push eax
        call ebp
        fild dword ptr ss : [esp+0x40]
        add esp, 0xC
        push 1
        fmul dword ptr ds : [public_5d3ee8]
        push 0
        push 1
        lea ecx, ds:[ebx+0x515]
        push ecx
        fstp dword ptr ss : [esp+0x44]
        fld dword ptr ds : [public_5d8768]
        push 0x3F800000
        fsub dword ptr ss : [esp+0x48]
        push 0x3C8B4395
        push 0x3CA3D70A
        push 0
        lea edx, ss:[esp+0x30]
        fstp dword ptr ss : [esp+0x34]
        push edx
/*FIXUP push offset public_5d4ddc @0x4dab70*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d4ddc
        lea eax, ss:[esp+0x60]
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x3C], 0x3E8A3D71
        mov dword ptr ss : [esp+0x44], 0
        call public_5a0e30
        push 0
        push 1
        mov dword ptr ds : [edi+0x28], eax
        mov edx, dword ptr ds : [eax]
        push 0x24
        mov ecx, eax
        call dword ptr ds : [edx+0xA8]
        push ebx
        lea eax, ss:[esp+0x3C]
/*FIXUP push offset public_5d8758 @0x4daba9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d8758
        push eax
        call ebp
        fld dword ptr ss : [esp+0x40]
        fsubr qword ptr ds : [public_5d8750]
        add esp, 0xC
        push 1
        push 0
        push 0
        fst dword ptr ss : [esp+0x40]
        push 0
        fstp dword ptr ss : [esp+0x3C]
        push 0x3F800000
        push 0x3C8B4395
        push 0x3E28F5C3
        push 0
        lea ecx, ss:[esp+0x48]
        push ecx
/*FIXUP push offset public_5d4ddc @0x4dabe4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d4ddc
        lea edx, ss:[esp+0x60]
        push edx
        mov ecx, esi
        mov dword ptr ss : [esp+0x54], 0x3E9374BC
        mov dword ptr ss : [esp+0x5C], 0
        call public_5a0e30
        push 0
        push 1
        mov dword ptr ds : [edi], eax
        mov edx, dword ptr ds : [eax]
        push 0x24
        mov ecx, eax
        call dword ptr ds : [edx+0xA8]
        push ebx
        lea eax, ss:[esp+0x3C]
/*FIXUP push offset public_5d8740 @0x4dac1c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d8740
        push eax
        call ebp
        mov ecx, dword ptr ss : [esp+0x40]
        add esp, 0xC
        mov dword ptr ss : [esp+0x1C], 0x3EEA7EFA
        mov dword ptr ss : [esp+0x20], ecx
        mov dword ptr ss : [esp+0x24], 0
        push 1
        push 0
        push 0
        push 0x514
        push 0x3F800000
        push 0x3C8B4396
        push 0x3D23D70A
        push 0
        lea edx, ss:[esp+0x3C]
        push edx
/*FIXUP push offset public_5d4ddc @0x4dac60*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d4ddc
        lea eax, ss:[esp+0x60]
        push eax
        mov ecx, esi
        call public_5a0e30
        push 0
        push 1
        mov dword ptr ds : [edi+0x50], eax
        mov edx, dword ptr ds : [eax]
        push 0x24
        mov ecx, eax
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [edi+0x28]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 1
        push 1
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [edi]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 1
        push 1
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [edi+0x50]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 1
        push 1
        call dword ptr ds : [eax+0xA8]
        inc ebx
        add edi, 4
        cmp ebx, 0xA
        mov dword ptr ss : [esp+0x34], ebx
        jl public_4dab21
        push 0
        push 0
        push 0x409
        push 0
        push 0
        push 1
        push 0
        lea ecx, ss:[esp+0x2C]
        push ecx
        push 0
        lea edx, ss:[esp+0x4C]
        push edx
        push 0
/*FIXUP push offset public_5ced30 @0x4dace6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ced30
        push 0
/*FIXUP push offset public_5d871c @0x4daced*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d871c
/*FIXUP push offset public_5d8708 @0x4dacf2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d8708
        mov ecx, esi
        mov dword ptr ss : [esp+0x4C], 0x3C656042
        mov dword ptr ss : [esp+0x50], 0x3C656042
        mov dword ptr ss : [esp+0x54], 0
        mov dword ptr ss : [esp+0x64], 0x3EC41893
        mov dword ptr ss : [esp+0x68], 0xBE9D2F1B
        mov dword ptr ss : [esp+0x6C], 0xBF000000
        call public_5a0c90
        push 0x8F
        push 0
        push 0x43E
        push 0
        push 0
        push 1
        push 0
        mov dword ptr ds : [esi+0x548], eax
        lea eax, ss:[esp+0x2C]
        push eax
        push 0
        lea ecx, ss:[esp+0x4C]
        push ecx
        push 0
/*FIXUP push offset public_5d1528 @0x4dad56*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1528
        push 0
/*FIXUP push offset public_5d86e0 @0x4dad5d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d86e0
/*FIXUP push offset public_5d86d0 @0x4dad62*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d86d0
        mov ecx, esi
        mov dword ptr ss : [esp+0x4C], 0x3C656042
        mov dword ptr ss : [esp+0x50], 0x3C656042
        mov dword ptr ss : [esp+0x54], 0
        mov dword ptr ss : [esp+0x64], 0x3EAE978D
        mov dword ptr ss : [esp+0x68], 0xBEBDF3B6
        mov dword ptr ss : [esp+0x6C], 0
        call public_5a0c90
        push 1
        push 0x4B2
        push 1
        push 0
        push 0x3F4CCCCD
        push 0x3CF5C28F
        push 0x3D0B4396
        push 0
        lea edx, ss:[esp+0x30]
        push edx
/*FIXUP push offset public_5d4ddc @0x4dadbf*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d4ddc
/*FIXUP push offset public_5d86c0 @0x4dadc4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d86c0
        mov ecx, esi
        mov dword ptr ds : [esi+0x570], eax
        mov dword ptr ss : [esp+0x3C], 0x3EB1A9FC
        mov dword ptr ss : [esp+0x40], 0xBEB7CED9
        mov dword ptr ss : [esp+0x44], 0
        call public_5a0e30
        push 0x10
/*FIXUP push offset public_5d86b8 @0x4dadf0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d86b8
        mov dword ptr ds : [esi+0x574], eax
        mov edx, dword ptr ds : [eax]
        push 0x1D
        mov ecx, eax
        call dword ptr ds : [edx+0xA8]
        mov dword ptr ss : [esp+0x10], 0x3C656042
        mov dword ptr ss : [esp+0x14], 0x3C656042
        mov dword ptr ss : [esp+0x18], 0
        mov dword ptr ss : [esp+0x28], 0x3ECB4396
        mov dword ptr ss : [esp+0x2C], 0xBEBDF3B6
        push 0x90
        push 0
        push 0x4B5
        push 0
        push 0
        push 1
        push 0
        lea eax, ss:[esp+0x2C]
        push eax
        push 0
        lea ecx, ss:[esp+0x4C]
        push ecx
        push 0
/*FIXUP push offset public_5d1528 @0x4dae51*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1528
        push 0
/*FIXUP push offset public_5d8690 @0x4dae58*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d8690
/*FIXUP push offset public_5d867c @0x4dae5d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d867c
        mov ecx, esi
        mov dword ptr ss : [esp+0x6C], 0
        call public_5a0c90
        push 1
        push 0x4B3
        push 1
        push 0
        push 0x3F4CCCCD
        push 0x3CF5C28F
        push 0x3D0B4396
        push 0
        lea edx, ss:[esp+0x30]
        push edx
/*FIXUP push offset public_5d4ddc @0x4dae92*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d4ddc
/*FIXUP push offset public_5d8668 @0x4dae97*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d8668
        mov ecx, esi
        mov dword ptr ds : [esi+0x578], eax
        mov dword ptr ss : [esp+0x3C], 0x3ECED917
        mov dword ptr ss : [esp+0x40], 0xBEB7CED9
        mov dword ptr ss : [esp+0x44], 0
        call public_5a0e30
        push 0x10
/*FIXUP push offset public_5d86b8 @0x4daec3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d86b8
        mov dword ptr ds : [esi+0x57C], eax
        mov edx, dword ptr ds : [eax]
        push 0x1D
        mov ecx, eax
        call dword ptr ds : [edx+0xA8]
        push 0
        push 0xA
        push 5
        push 0
        push 0x3DF1A9FC
        push 0x3C83126F
        lea eax, ss:[esp+0x28]
        push eax
/*FIXUP push offset public_5d8654 @0x4daef1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d8654
        mov ecx, esi
        mov dword ptr ss : [esp+0x30], 0x3EFAE148
        mov dword ptr ss : [esp+0x34], 0xBE6F9DB2
        mov dword ptr ss : [esp+0x38], 0xBF800000
        call public_5a17e0
        mov edx, dword ptr ds : [esi-0x38]
        lea edi, ds:[esi-0x38]
        push 1
        mov ecx, edi
        mov dword ptr ds : [esi+0x58C], eax
        call dword ptr ds : [edx+0x34]
        push 1
        push 0
        push 1
        push 0
        push 0x3FC00000
        push 0x3CF5C28F
        push 0x3F82D0E5
        push 0
        lea eax, ss:[esp+0x30]
        push eax
/*FIXUP push offset public_5ce91c @0x4daf46*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ce91c
        mov dword ptr ss : [esp+0x38], 0xBF0353F8
        mov dword ptr ss : [esp+0x3C], 0xBE947AE1
        mov dword ptr ss : [esp+0x40], 0
/*FIXUP push offset public_5d8644 @0x4daf63*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d8644
        mov ecx, esi
        call public_5a0e30
        push 1
        push 0
        push 1
        push 0
        push 0x3FA66666
        push 0x3CF5C28F
        push 0x3F839581
        push 0
        lea ecx, ss:[esp+0x30]
        push ecx
/*FIXUP push offset public_5d0608 @0x4daf8d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0608
/*FIXUP push offset public_5d862c @0x4daf92*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d862c
        mov ecx, esi
        mov dword ptr ds : [esi+0x584], eax
        mov dword ptr ss : [esp+0x3C], 0xBF0353F8
        mov dword ptr ss : [esp+0x40], 0xBEA45A1D
        mov dword ptr ss : [esp+0x44], 0
        call public_5a0e30
        mov dword ptr ds : [esi+0x588], eax
        mov eax, dword ptr ds : [esi+0x584]
        mov cl, byte ptr ds : [eax+0x6C]
        mov bl, 0xFC
        and cl, bl
        mov byte ptr ds : [eax+0x6C], cl
        mov eax, dword ptr ds : [esi+0x588]
        mov dl, byte ptr ds : [eax+0x6C]
        and dl, bl
        mov ecx, edi
        mov byte ptr ds : [eax+0x6C], dl
        call public_4dd9e0
        push 0x6F
        push 0
        push 0x3A2
        push 0
        push 0
        push 1
        push 0
        lea edx, ss:[esp+0x2C]
        push edx
        push 0
        lea eax, ss:[esp+0x4C]
        push eax
        push 0
/*FIXUP push offset public_5ced30 @0x4db006*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ced30
        push 0
/*FIXUP push offset public_5d860c @0x4db00d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d860c
/*FIXUP push offset public_5d8600 @0x4db012*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d8600
        mov ecx, esi
        mov dword ptr ss : [esp+0x4C], 0x3C656042
        mov dword ptr ss : [esp+0x50], 0x3C656042
        mov dword ptr ss : [esp+0x54], 0
        mov dword ptr ss : [esp+0x64], 0x3E570A3D
        mov dword ptr ss : [esp+0x68], 0xBEBD70A4
        mov dword ptr ss : [esp+0x6C], 0
        call public_5a0c90
        mov dword ptr ds : [esi+0x5A0], eax
        and byte ptr ds : [eax+0x6C], bl
        mov edx, dword ptr ds : [esi]
        sub esp, 0xC
        mov dword ptr ss : [esp+0x28], 0
        mov ecx, dword ptr ss : [esp+0x28]
        mov eax, esp
        mov dword ptr ds : [eax], ecx
        mov dword ptr ss : [esp+0x2C], 0
        mov ecx, dword ptr ss : [esp+0x2C]
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ss : [esp+0x30], 0xBF800000
        mov ecx, dword ptr ss : [esp+0x30]
        mov dword ptr ds : [eax+8], ecx
        mov ecx, esi
        call dword ptr ds : [edx+0x7C]
        mov edx, dword ptr ds : [esi]
        lea eax, ds:[esi+0x60]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x14]
        mov ecx, dword ptr ss : [esp+0x140]
        push ecx
        mov edx, dword ptr ss : [esp+0x140]
        push edx
        mov ecx, esi
        call public_4b5060
        pop edi
        pop esi
        test al, al
        pop ebp
        setne al
        pop ebx
        add esp, 0x128
        ret 8
        UNREACHABLE_TRAP(0x4da930)
    }
}

#undef public_4dab21
