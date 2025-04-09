#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41d8a0);
CLANG_FORWARD_PROC_SYMBOL(public_422b80);
CLANG_FORWARD_PROC_SYMBOL(public_4347e0);
CLANG_FORWARD_PROC_SYMBOL(public_4877f0);
CLANG_FORWARD_PROC_SYMBOL(public_487cb0);
CLANG_FORWARD_PROC_SYMBOL(public_4a7670);
CLANG_FORWARD_PROC_SYMBOL(public_4b5060);
CLANG_FORWARD_PROC_SYMBOL(public_55bfc0);
CLANG_FORWARD_PROC_SYMBOL(public_5760d0);
CLANG_FORWARD_PROC_SYMBOL(public_57bdb0);
CLANG_FORWARD_PROC_SYMBOL(public_57c750);
CLANG_FORWARD_PROC_SYMBOL(public_5a0c90);
CLANG_FORWARD_PROC_SYMBOL(public_5a0db0);
CLANG_FORWARD_PROC_SYMBOL(public_5a0e30);
CLANG_FORWARD_PROC_SYMBOL(public_5a17e0);
CLANG_FORWARD_PROC_SYMBOL(public_5a1900);

#define public_486595 _public_486595
#define public_48659f _public_48659f
#define public_4865d0 _public_4865d0
#define public_486816 _public_486816
#define public_486828 _public_486828
#define public_486864 _public_486864
#define public_486874 _public_486874
#define public_486962 _public_486962
#define public_4869ad _public_4869ad
#define public_4869bb _public_4869bb
#define public_486a2d _public_486a2d
#define public_486a83 _public_486a83
#define public_486b00 _public_486b00
#define public_486b21 _public_486b21

PROC_DECLARE(0x485be0, internal_485be0, public_485be0);
extern "C" NAKED register_t __cdecl internal_485be0()
{
    __asm
    {
        sub esp, 0x26C
        push ebx
        push ebp
        push esi
        mov eax, dword ptr ss : [esp+0x280]
        xor ebp, ebp
        lea edx, ss:[esp+0x34]
        push edx
        push ebp
        push ebp
        push ebp
        mov ebx, 1
        push ebx
        push ebp
        push ebx
        push ebx
        push ebp
        push ebp
        mov esi, ecx
        mov ecx, dword ptr ds : [eax]
        push ebp
        lea eax, ss:[esp+0x6C]
        push eax
        mov dword ptr ds : [esi+0x334], ecx
        push ebp
        lea ecx, ss:[esp+0x40]
        push ecx
/*FIXUP push offset public_5d21b0 @0x485c1b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d21b0
/*FIXUP push offset public_5d219c @0x485c20*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d219c
        mov ecx, esi
        mov dword ptr ss : [esp+0x74], 0
        mov dword ptr ss : [esp+0x78], 0
        mov dword ptr ss : [esp+0x7C], 0
        mov dword ptr ss : [esp+0x80], 0
        mov dword ptr ss : [esp+0x84], 0
        mov dword ptr ss : [esp+0x88], 0
        mov dword ptr ss : [esp+0x4C], 0
        mov dword ptr ss : [esp+0x50], 0
        mov dword ptr ss : [esp+0x54], 0xBF800000
        call public_5a0db0
        push 0xBF866666
        push ebp
        push 0x3E0F5C29
        lea ecx, ss:[esp+0x40]
        mov dword ptr ss : [esp+0x18], ebp
        mov dword ptr ss : [esp+0x1C], ebp
        mov dword ptr ss : [esp+0x20], ebp
        mov dword ptr ss : [esp+0x4C], ebp
        mov dword ptr ss : [esp+0x50], ebp
        mov dword ptr ss : [esp+0x54], ebp
        call public_422b80
        lea edx, ss:[esp+0xC]
        push edx
        push ebp
        push ebp
        push ebp
        push ebx
        push ebp
        push ebx
        push ebx
        push ebp
        push ebp
        push ebp
        lea eax, ss:[esp+0x6C]
        push eax
        push ebp
        lea ecx, ss:[esp+0x68]
        push ecx
/*FIXUP push offset public_5d2174 @0x485cc3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d2174
/*FIXUP push offset public_5d2164 @0x485cc8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d2164
        mov ecx, esi
        call public_5a0db0
        push 0xBF866666
        push 0x3E800000
        push 0x3E147AE1
        lea ecx, ss:[esp+0x18]
        call public_422b80
        push ebp
        push ebp
        push ebx
        push ebp
        push 0x3F800000
        push 0x3CF5C28F
        push 0x3E8A3D71
        push ebp
        lea edx, ss:[esp+0x2C]
        push edx
/*FIXUP push offset public_5ce91c @0x485d05*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ce91c
/*FIXUP push offset public_5d2154 @0x485d0a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d2154
        mov ecx, esi
        call public_5a0e30
        push ebp
        push 0x586
        mov dword ptr ds : [esi+0x5A8], eax
        mov edx, dword ptr ds : [eax]
        push 0x1E
        mov ecx, eax
        call dword ptr ds : [edx+0xA8]
        push 0xBF866666
        push 0x3E8A3D71
        push 0xBEA8F5C2
        lea ecx, ss:[esp+0x24]
        call public_422b80
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x18]
        push eax
        push ecx
        push edx
        lea ecx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x60], 0x3DB645A2
        mov dword ptr ss : [esp+0x64], 0x3CAC0831
        mov dword ptr ss : [esp+0x68], ebp
        call public_422b80
        push ebp
        push ebp
        push 0x58C
        push ebp
        push ebx
        push ebp
        push ebp
        lea eax, ss:[esp+0x70]
        push eax
        push ebp
        lea ecx, ss:[esp+0x30]
        push ecx
        push ebp
        push ebp
        push ebp
/*FIXUP push offset public_5d2130 @0x485d8b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d2130
/*FIXUP push offset public_5d211c @0x485d90*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d211c
        mov ecx, esi
        call public_5a0c90
        mov edx, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [esi+0x5AC], eax
        mov eax, dword ptr ss : [esp+0x1C]
        push edx
        push eax
        push ecx
        lea ecx, ss:[esp+0x18]
        call public_422b80
        push ebp
        push ebp
        push 0x58D
        push ebp
        push ebx
        push ebp
        push ebp
        lea edx, ss:[esp+0x70]
        push edx
        push ebp
        lea eax, ss:[esp+0x30]
        push eax
        push ebp
        push ebp
        push ebp
/*FIXUP push offset public_5d2130 @0x485dd3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d2130
/*FIXUP push offset public_5d2108 @0x485dd8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d2108
        mov ecx, esi
        call public_5a0c90
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [esi+0x5B0], eax
        fld dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x18]
        fsub dword ptr ds : [public_5d2104]
        push ecx
        push ecx
        lea ecx, ss:[esp+0x14]
        fstp dword ptr ss : [esp]
        push edx
        call public_422b80
        push ebp
        push ebp
        push 0x58E
        push ebp
        push ebx
        push ebp
        push ebp
        lea eax, ss:[esp+0x70]
        push eax
        push ebp
        lea ecx, ss:[esp+0x30]
        push ecx
        push ebp
        push ebp
        push ebp
/*FIXUP push offset public_5d2130 @0x485e24*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d2130
/*FIXUP push offset public_5d20f4 @0x485e29*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d20f4
        mov ecx, esi
        call public_5a0c90
        fld dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x20]
        fsub dword ptr ds : [public_5d20f0]
        push edx
        push ecx
        mov dword ptr ds : [esi+0x5B4], eax
        fstp dword ptr ss : [esp]
        mov eax, dword ptr ss : [esp+0x20]
        push eax
        lea ecx, ss:[esp+0x18]
        call public_422b80
        push ebp
        push ebp
        push 0x58F
        push ebp
        push ebx
        push ebp
        push ebp
        lea ecx, ss:[esp+0x70]
        push ecx
        push ebp
        lea edx, ss:[esp+0x30]
        push edx
        push ebp
        push ebp
        push ebp
/*FIXUP push offset public_5d2130 @0x485e75*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d2130
/*FIXUP push offset public_5d20dc @0x485e7a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d20dc
        mov ecx, esi
        call public_5a0c90
        fld dword ptr ss : [esp+0x1C]
        fsub dword ptr ds : [public_5d20d8]
        mov dword ptr ds : [esi+0x5B8], eax
        mov eax, dword ptr ss : [esp+0x20]
        push eax
        push ecx
        mov ecx, dword ptr ss : [esp+0x20]
        fstp dword ptr ss : [esp]
        push ecx
        lea ecx, ss:[esp+0x18]
        call public_422b80
        push ebp
        push ebp
        push 0x590
        push ebp
        push ebx
        push ebp
        push ebp
        lea edx, ss:[esp+0x70]
        push edx
        push ebp
        lea eax, ss:[esp+0x30]
        push eax
        push ebp
        push ebp
        push ebp
/*FIXUP push offset public_5d2130 @0x485ec6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d2130
/*FIXUP push offset public_5d20c4 @0x485ecb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d20c4
        mov ecx, esi
        call public_5a0c90
        mov ecx, dword ptr ds : [esi+0x5AC]
        push ebx
        mov dword ptr ds : [esi+0x5BC], eax
        call public_55bfc0
        mov ecx, dword ptr ds : [esi+0x5B0]
        push ebx
        call public_55bfc0
        mov ecx, dword ptr ds : [esi+0x5B4]
        push ebx
        call public_55bfc0
        mov ecx, dword ptr ds : [esi+0x5B8]
        push ebx
        call public_55bfc0
        mov ecx, dword ptr ds : [esi+0x5BC]
        push ebx
        call public_55bfc0
        fld dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x20]
        fadd dword ptr ds : [public_5d20c0]
        mov edx, dword ptr ss : [esp+0x18]
        push ecx
        push ecx
        fstp dword ptr ss : [esp]
        push edx
        lea ecx, ss:[esp+0x18]
        call public_422b80
        push ebp
        push ebp
        push ebx
        push ebp
        push 0x3F800000
        push 0x3CF5C28F
        push 0x3E8A3D71
        push ebp
        lea eax, ss:[esp+0x2C]
        push eax
/*FIXUP push offset public_5d0410 @0x485f53*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0410
/*FIXUP push offset public_5d20a8 @0x485f58*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d20a8
        mov ecx, esi
        call public_5a0e30
        fld dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x20]
        fadd dword ptr ds : [public_5d20c0]
        mov edx, dword ptr ss : [esp+0x18]
        push ecx
        push ecx
        fstp dword ptr ss : [esp]
        push edx
        lea ecx, ss:[esp+0x18]
        mov dword ptr ds : [esi+0x5C0], eax
        call public_422b80
        push ebp
        push ebp
        push ebx
        push ebp
        push 0x3F800000
        push 0x3CF5C28F
        push 0x3E8A3D71
        push ebp
        lea eax, ss:[esp+0x2C]
        push eax
/*FIXUP push offset public_5d0410 @0x485fa4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0410
/*FIXUP push offset public_5d2090 @0x485fa9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d2090
        mov ecx, esi
        call public_5a0e30
        fld dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x20]
        fsub dword ptr ds : [public_5d208c]
        mov edx, dword ptr ss : [esp+0x18]
        push ecx
        push ecx
        fstp dword ptr ss : [esp]
        mov dword ptr ds : [esi+0x5C4], eax
        push edx
        lea ecx, ss:[esp+0x18]
        call public_422b80
        push ebp
        push ebp
        push ebx
        push ebp
        push 0x3F800000
        push 0x3CF5C28F
        push 0x3E8A3D71
        push ebp
        lea eax, ss:[esp+0x2C]
        push eax
/*FIXUP push offset public_5d0410 @0x485ff5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0410
/*FIXUP push offset public_5d2078 @0x485ffa*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d2078
        mov ecx, esi
        call public_5a0e30
        fld dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x20]
        fsub dword ptr ds : [public_5d2074]
        mov edx, dword ptr ss : [esp+0x18]
        push ecx
        push ecx
        fstp dword ptr ss : [esp]
        push edx
        lea ecx, ss:[esp+0x18]
        mov dword ptr ds : [esi+0x5C8], eax
        call public_422b80
        push ebp
        push ebp
        push ebx
        push ebp
        push 0x3F800000
        push 0x3CF5C28F
        push 0x3E8A3D71
        push ebp
        lea eax, ss:[esp+0x2C]
        push eax
/*FIXUP push offset public_5d0410 @0x486046*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0410
/*FIXUP push offset public_5d205c @0x48604b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d205c
        mov ecx, esi
        call public_5a0e30
        fld dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x20]
        fsub dword ptr ds : [public_5d2058]
        mov edx, dword ptr ss : [esp+0x18]
        push ecx
        push ecx
        fstp dword ptr ss : [esp]
        push edx
        lea ecx, ss:[esp+0x18]
        mov dword ptr ds : [esi+0x5CC], eax
        call public_422b80
        push ebp
        push ebp
        push ebx
        push ebp
        push 0x3F800000
        push 0x3CF5C28F
        push 0x3E8A3D71
        push ebp
        lea eax, ss:[esp+0x2C]
        push eax
/*FIXUP push offset public_5d0410 @0x486097*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0410
/*FIXUP push offset public_5d2040 @0x48609c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d2040
        mov ecx, esi
        call public_5a0e30
        mov ecx, dword ptr ds : [esi+0x5C0]
        push ebp
        push 0x587
        mov dword ptr ds : [esi+0x5D0], eax
        mov edx, dword ptr ds : [ecx]
        push 0x1E
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x5C4]
        mov eax, dword ptr ds : [ecx]
        push ebp
        push 0x588
        push 0x1E
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0x5C8]
        mov edx, dword ptr ds : [ecx]
        push ebp
        push 0x589
        push 0x1E
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x5CC]
        mov eax, dword ptr ds : [ecx]
        push ebp
        push 0x58A
        push 0x1E
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0x5D0]
        mov edx, dword ptr ds : [ecx]
        push ebp
        push 0x58B
        push 0x1E
        call dword ptr ds : [edx+0xA8]
        mov eax, dword ptr ds : [esi+0x5C0]
        mov byte ptr ds : [esi+0x5D4], bl
        mov byte ptr ds : [esi+0x5D5], bl
        mov byte ptr ds : [esi+0x5D6], bl
        mov byte ptr ds : [esi+0x5D7], bl
        mov byte ptr ds : [esi+0x5D8], bl
        mov ecx, dword ptr ds : [public_679bb4]
        mov dword ptr ds : [eax+0x381], ecx
        mov edx, dword ptr ds : [public_679ba4]
        mov dword ptr ds : [eax+0x385], edx
        mov eax, dword ptr ds : [esi+0x5C4]
        mov ecx, dword ptr ds : [public_679bb4]
        mov dword ptr ds : [eax+0x381], ecx
        mov edx, dword ptr ds : [public_679ba4]
        mov dword ptr ds : [eax+0x385], edx
        mov eax, dword ptr ds : [esi+0x5C8]
        mov ecx, dword ptr ds : [public_679bb4]
        mov dword ptr ds : [eax+0x381], ecx
        mov edx, dword ptr ds : [public_679ba4]
        mov dword ptr ds : [eax+0x385], edx
        mov eax, dword ptr ds : [esi+0x5CC]
        mov ecx, dword ptr ds : [public_679bb4]
        mov dword ptr ds : [eax+0x381], ecx
        mov edx, dword ptr ds : [public_679ba4]
        mov dword ptr ds : [eax+0x385], edx
        mov ecx, dword ptr ds : [public_679bb4]
        mov eax, dword ptr ds : [esi+0x5D0]
        push 0xBF866666
        mov dword ptr ds : [eax+0x381], ecx
        mov edx, dword ptr ds : [public_679ba4]
        push 0xBE4CCCCD
        push 0xBEA8F5C2
        lea ecx, ss:[esp+0x78]
        mov dword ptr ds : [eax+0x385], edx
        call public_422b80
        lea eax, ss:[esp+0xC]
        push eax
        push ebp
        push ebp
        push ebp
        push ebx
        push ebp
        push ebx
        push ebx
        push ebp
        push ebp
        push ebp
        lea ecx, ss:[esp+0x6C]
        push ecx
        push ebp
        lea edx, ss:[esp+0xA0]
        push edx
/*FIXUP push offset public_5d2018 @0x486205*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d2018
/*FIXUP push offset public_5d2004 @0x48620a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d2004
        mov ecx, esi
        mov dword ptr ss : [esp+0x4C], ebp
        mov dword ptr ss : [esp+0x50], ebp
        mov dword ptr ss : [esp+0x54], ebp
        mov dword ptr ss : [esp+0x80], ebp
        mov dword ptr ss : [esp+0x84], ebp
        mov dword ptr ss : [esp+0x88], ebp
        call public_5a0db0
        push 0xBF866666
        push 0xBE000000
        push 0xBEA3D70A
        lea ecx, ss:[esp+0x30]
        call public_422b80
        mov eax, dword ptr ss : [esp+0x2C]
        mov ecx, dword ptr ss : [esp+0x28]
        mov edx, dword ptr ss : [esp+0x24]
        push eax
        push ecx
        push edx
        lea ecx, ss:[esp+0x18]
        call public_422b80
        push ebp
        push ebp
        push ebp
        push ebp
        push 0x3F800000
        push 0x3CA3D70A
        push 0x3E800000
        push ebp
        lea eax, ss:[esp+0x2C]
        push eax
/*FIXUP push offset public_5d0608 @0x486280*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0608
/*FIXUP push offset public_5d1fe8 @0x486285*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1fe8
        mov ecx, esi
        call public_5a0e30
        fld dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ss : [esp+0x2C]
        fsub dword ptr ds : [public_5d1fe4]
        mov edx, dword ptr ss : [esp+0x24]
        push ecx
        push ecx
        fstp dword ptr ss : [esp]
        push edx
        lea ecx, ss:[esp+0x18]
        mov dword ptr ds : [esi+0x1768], eax
        call public_422b80
        push ebp
        push ebp
        push ebp
        push ebp
        push 0x3F800000
        push 0x3CA3D70A
        push 0x3E800000
        push ebp
        lea eax, ss:[esp+0x2C]
        push eax
/*FIXUP push offset public_5d0608 @0x4862d1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0608
/*FIXUP push offset public_5d1fc8 @0x4862d6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1fc8
        mov ecx, esi
        call public_5a0e30
        fld dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ss : [esp+0x2C]
        fsub dword ptr ds : [public_5d1fc4]
        mov edx, dword ptr ss : [esp+0x24]
        push ecx
        push ecx
        fstp dword ptr ss : [esp]
        push edx
        lea ecx, ss:[esp+0x18]
        mov dword ptr ds : [esi+0x1778], eax
        call public_422b80
        push ebp
        push ebp
        push ebp
        push ebp
        push 0x3F800000
        push 0x3CA3D70A
        push 0x3E800000
        push ebp
        lea eax, ss:[esp+0x2C]
        push eax
/*FIXUP push offset public_5d0608 @0x486322*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0608
/*FIXUP push offset public_5d1fa8 @0x486327*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1fa8
        mov ecx, esi
        call public_5a0e30
        fld dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ss : [esp+0x2C]
        fsub dword ptr ds : [public_5d1fa4]
        push ecx
        push ecx
        fstp dword ptr ss : [esp]
        mov dword ptr ds : [esi+0x176C], eax
        mov edx, dword ptr ss : [esp+0x2C]
        push edx
        lea ecx, ss:[esp+0x18]
        call public_422b80
        push ebp
        push ebp
        push ebp
        push ebp
        push 0x3F800000
        push 0x3CA3D70A
        push 0x3E800000
        push ebp
        lea eax, ss:[esp+0x2C]
        push eax
/*FIXUP push offset public_5d0608 @0x486373*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0608
/*FIXUP push offset public_5d1f88 @0x486378*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1f88
        mov ecx, esi
        call public_5a0e30
        fld dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ss : [esp+0x2C]
        fsub dword ptr ds : [public_5d1f84]
        mov edx, dword ptr ss : [esp+0x24]
        push ecx
        push ecx
        fstp dword ptr ss : [esp]
        push edx
        lea ecx, ss:[esp+0x18]
        mov dword ptr ds : [esi+0x177C], eax
        call public_422b80
        push ebp
        push ebp
        push ebp
        push ebp
        push 0x3F800000
        push 0x3CA3D70A
        push 0x3E800000
        push ebp
        lea eax, ss:[esp+0x2C]
        push eax
/*FIXUP push offset public_5d0608 @0x4863c4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0608
/*FIXUP push offset public_5d1f6c @0x4863c9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1f6c
        mov ecx, esi
        call public_5a0e30
        fld dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ss : [esp+0x2C]
        fsub dword ptr ds : [public_5d1f68]
        mov edx, dword ptr ss : [esp+0x24]
        push ecx
        push ecx
        fstp dword ptr ss : [esp]
        push edx
        lea ecx, ss:[esp+0x18]
        mov dword ptr ds : [esi+0x1770], eax
        call public_422b80
        push ebp
        push ebp
        push ebp
        push ebp
        push 0x3F800000
        push 0x3CA3D70A
        push 0x3E800000
        push ebp
        lea eax, ss:[esp+0x2C]
        push eax
/*FIXUP push offset public_5d0608 @0x486415*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0608
/*FIXUP push offset public_5d1f50 @0x48641a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1f50
        mov ecx, esi
        call public_5a0e30
        fld dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ss : [esp+0x2C]
        fsub dword ptr ds : [public_5d1f4c]
        mov edx, dword ptr ss : [esp+0x24]
        push ecx
        push ecx
        fstp dword ptr ss : [esp]
        push edx
        lea ecx, ss:[esp+0x18]
        mov dword ptr ds : [esi+0x1780], eax
        call public_422b80
        push ebp
        push ebp
        push ebp
        push ebp
        push 0x3F800000
        push 0x3CA3D70A
        push 0x3E800000
        push ebp
        lea eax, ss:[esp+0x2C]
        push eax
/*FIXUP push offset public_5d0608 @0x486466*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0608
/*FIXUP push offset public_5d1f34 @0x48646b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1f34
        mov ecx, esi
        call public_5a0e30
        fld dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ss : [esp+0x2C]
        fsub dword ptr ds : [public_5d1f30]
        mov edx, dword ptr ss : [esp+0x24]
        push ecx
        push ecx
        fstp dword ptr ss : [esp]
        push edx
        lea ecx, ss:[esp+0x18]
        mov dword ptr ds : [esi+0x1774], eax
        call public_422b80
        push ebp
        push ebp
        push ebp
        push ebp
        push 0x3F800000
        push 0x3CA3D70A
        push 0x3E800000
        push ebp
        lea eax, ss:[esp+0x2C]
        push eax
/*FIXUP push offset public_5d0608 @0x4864b7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0608
/*FIXUP push offset public_5d1f18 @0x4864bc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1f18
        mov ecx, esi
        call public_5a0e30
        mov ecx, dword ptr ds : [esi+0x1768]
        push ebp
        push 0x593
        mov dword ptr ds : [esi+0x1784], eax
        mov edx, dword ptr ds : [ecx]
        push 0x1E
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x176C]
        mov eax, dword ptr ds : [ecx]
        push ebp
        push 0x594
        push 0x1E
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0x1770]
        mov edx, dword ptr ds : [ecx]
        push ebp
        push 0x5EC
        push 0x1E
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x1774]
        mov eax, dword ptr ds : [ecx]
        push ebp
        push 0x591
        push 0x1E
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0x1778]
        mov edx, dword ptr ds : [ecx]
        push ebp
/*FIXUP push offset public_5c8ce0 @0x48652f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8ce0
        push 0x1D
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x177C]
        mov eax, dword ptr ds : [ecx]
        push ebp
/*FIXUP push offset public_5c8ce0 @0x486545*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8ce0
        push 0x1D
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0x1780]
        mov edx, dword ptr ds : [ecx]
        push ebp
/*FIXUP push offset public_5c8ce0 @0x48655b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8ce0
        push 0x1D
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x1784]
        mov eax, dword ptr ds : [ecx]
        push ebp
/*FIXUP push offset public_5c8ce0 @0x486571*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8ce0
        push 0x1D
        call dword ptr ds : [eax+0xA8]
        mov eax, dword ptr ds : [esi+0x334]
        cmp eax, 2
        jne public_486595
        mov dword ptr ds : [esi+0x1754], 0x10
        jmp public_48659f
        public_486595 : nop
        mov dword ptr ds : [esi+0x1754], 0x14
        public_48659f : nop
        cmp eax, 2
        fild dword ptr ds : [esi+0x1754]
        fld qword ptr ds : [public_5d1f10]
        mov dword ptr ss : [esp+0x4C], 0x3DE147AE
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x50]
        fdivr qword ptr ds : [public_5d1f08]
        fstp dword ptr ss : [esp+0x30]
        je public_4865d0
        mov dword ptr ss : [esp+0x4C], 0x3E570A3D
        public_4865d0 : nop
        mov edx, dword ptr ds : [esi+0x5DC]
        push edi
        lea ecx, ds:[esi+0x5DC]
        push ebp
        push esi
        call dword ptr ds : [edx+0x24]
        mov eax, dword ptr ss : [esp+0x54]
        mov ecx, dword ptr ds : [esi+0x1754]
        mov edx, dword ptr ss : [esp+0x34]
        mov dword ptr ds : [esi+0xE78], eax
        mov eax, dword ptr ss : [esp+0x50]
        push 0xBF866666
        mov edi, eax
        push edi
        mov dword ptr ds : [esi+0xE84], ecx
        push 0xBE116873
        lea ecx, ss:[esp+0x1C]
        mov byte ptr ds : [esi+0xE7C], 0
        mov byte ptr ds : [esi+0xE7D], bl
        mov dword ptr ds : [esi+0xE74], 0x3ECCCCCD
        mov dword ptr ds : [esi+0x664], edx
        mov dword ptr ss : [esp+0x5C], eax
        call public_422b80
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x14]
        lea ecx, ds:[esi+0xE8C]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [ecx+4], eax
        mov eax, dword ptr ds : [esi+0xE98]
        mov dword ptr ds : [ecx+8], edx
        lea ecx, ds:[esi+0xE98]
        push ebp
        push esi
        call dword ptr ds : [eax+0x24]
        mov ecx, dword ptr ss : [esp+0x54]
        mov edx, dword ptr ds : [esi+0x1754]
        mov eax, dword ptr ss : [esp+0x34]
        push 0xBF866666
        push edi
        mov dword ptr ds : [esi+0x1734], ecx
        push 0x3E841894
        lea ecx, ss:[esp+0x1C]
        mov byte ptr ds : [esi+0x1738], 0
        mov byte ptr ds : [esi+0x1739], bl
        mov dword ptr ds : [esi+0x1730], 0x3E0F5C2A
        mov dword ptr ds : [esi+0x1740], edx
        mov dword ptr ds : [esi+0xF20], eax
        call public_422b80
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x14]
        lea ecx, ds:[esi+0x1748]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [ecx+4], eax
        mov eax, dword ptr ds : [esi+0x334]
        mov edi, 2
        cmp eax, edi
        mov dword ptr ds : [ecx+8], edx
        jne public_486816
        push 0xBF866666
        push 0x3E21CAC1
        push 0x3E000000
        lea ecx, ss:[esp+0x44]
        call public_422b80
        fld dword ptr ss : [esp+0x3C]
        mov eax, dword ptr ss : [esp+0x40]
        fadd dword ptr ds : [public_5d1f04]
        push eax
        sub esp, 8
        fstp dword ptr ss : [esp+4]
        lea ecx, ss:[esp+0x1C]
        fld dword ptr ss : [esp+0x44]
        fsub dword ptr ds : [public_5d135c]
        fstp dword ptr ss : [esp]
        call public_422b80
/*FIXUP push offset public_5c8ce0 @0x48671e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8ce0
        push 0x3CF5C28F
        push 0x3F051EB8
        lea ecx, ss:[esp+0x1C]
        push ecx
/*FIXUP push offset public_5d1ef4 @0x486732*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1ef4
        mov ecx, esi
        call public_5a1900
        push 0x1E
        mov ecx, eax
        mov dword ptr ds : [esi+0x1764], eax
        call public_57bdb0
        mov ecx, dword ptr ds : [esi+0x1764]
        call public_57c750
        push ebp
        push ebp
        push 0x596
        push ebp
        push ebx
        push ebp
        push ebp
        lea edx, ss:[esp+0x2C]
        push edx
        push ebp
        lea eax, ss:[esp+0x5C]
        push eax
        push ebp
        push ebp
        push ebp
/*FIXUP push offset public_5d1ecc @0x486771*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1ecc
/*FIXUP push offset public_5d1eb4 @0x486776*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1eb4
        mov ecx, esi
        mov dword ptr ss : [esp+0x4C], 0x3E8A3D71
        mov dword ptr ss : [esp+0x50], 0x3CED9168
        mov dword ptr ss : [esp+0x54], 0
        call public_5a0c90
        push ebx
        mov ecx, eax
        mov dword ptr ds : [esi+0x1760], eax
        call public_55bfc0
        mov ecx, dword ptr ds : [esi+0x1760]
        mov edx, dword ptr ds : [ecx]
        push ebp
        push ebx
        push 0x32
        call dword ptr ds : [edx+0xA8]
        push ebp
        push ebp
        push ebp
        push ebp
        push 0x3F800000
        push 0x3CF5C28F
        push 0x3E8A3D71
        push ebp
        lea eax, ss:[esp+0x64]
        push eax
/*FIXUP push offset public_5d1ea8 @0x4867d3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1ea8
/*FIXUP push offset public_5d1e90 @0x4867d8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1e90
        mov ecx, esi
        mov dword ptr ss : [esp+0x70], 0xBC1374BC
        mov dword ptr ss : [esp+0x74], 0x3E50E560
        mov dword ptr ss : [esp+0x78], 0xBF866666
        call public_5a0e30
        mov dword ptr ds : [esi+0x175C], eax
        mov edx, dword ptr ds : [eax]
        push ebp
        push 0x592
        push 0x1E
        mov ecx, eax
        call dword ptr ds : [edx+0xA8]
        jmp public_486828
        public_486816 : nop
        mov dword ptr ds : [esi+0x1764], ebp
        mov dword ptr ds : [esi+0x1760], ebp
        mov dword ptr ds : [esi+0x175C], ebp
        public_486828 : nop
        mov eax, dword ptr ds : [esi+0x334]
        mov dword ptr ss : [esp+0x40], 0xBF866666
        mov edx, dword ptr ss : [esp+0x40]
        mov dword ptr ss : [esp+0x38], 0x3ECFDF3C
        cmp eax, edi
        mov eax, dword ptr ss : [esp+0x38]
        mov dword ptr ss : [esp+0x6C], edx
        mov dword ptr ss : [esp+0x64], eax
        jne public_486864
        mov dword ptr ss : [esp+0x3C], 0x3DDB22D1
        mov dword ptr ss : [esp+0x34], 0x3EBD70A4
        jmp public_486874
        public_486864 : nop
        mov dword ptr ss : [esp+0x3C], 0x3E570A3D
        mov dword ptr ss : [esp+0x34], 0x3EEE147B
        public_486874 : nop
        mov eax, dword ptr ds : [esi+0x1754]
        mov ecx, dword ptr ss : [esp+0x3C]
        push ebp
        push eax
        push 0x64
        push ebp
        mov dword ptr ss : [esp+0x78], ecx
        mov ecx, dword ptr ss : [esp+0x44]
        push ecx
        push 0x3CA3D70A
        lea edx, ss:[esp+0x7C]
        push edx
/*FIXUP push offset public_5d1e80 @0x486896*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1e80
        mov ecx, esi
        call public_5a17e0
        push ebp
        push ebp
        push 0x409
        push ebp
        push ebp
        push ebx
        push ebp
        mov dword ptr ds : [esi+0x1758], eax
        lea eax, ss:[esp+0x2C]
        push eax
        push ebp
        lea ecx, ss:[esp+0x68]
        push ecx
        push ebp
        push ebp
        push ebp
/*FIXUP push offset public_5d01d0 @0x4868c1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d01d0
/*FIXUP push offset public_5d1e70 @0x4868c6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1e70
        mov ecx, esi
        mov dword ptr ss : [esp+0x4C], 0x3CA3D70A
        mov dword ptr ss : [esp+0x50], 0x3CA3D70A
        mov dword ptr ss : [esp+0x54], 0
        mov dword ptr ss : [esp+0x80], 0x3ED47AE2
        mov dword ptr ss : [esp+0x84], 0x3E851EB8
        mov dword ptr ss : [esp+0x88], 0xBF866666
        call public_5a0c90
        push ebx
        mov ecx, eax
        mov dword ptr ds : [esi+0x1788], eax
        call public_55bfc0
        mov eax, dword ptr ds : [public_67eca8]
        push 0x100
        lea edx, ss:[esp+0x80]
        push edx
        push 0x65D
        push eax
        call public_4347e0
        add esp, 0x10
        test eax, eax
        jne public_486962
        mov ecx, dword ptr ds : [public_5c6d18]
        push 0x65D
        push 0x18E
/*FIXUP push offset public_5d1e40 @0x48694d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1e40
        mov eax, 0x100001
/*FIXUP push offset public_5c9414 @0x486957*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c9414
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        public_486962 : nop
        lea edx, ss:[esp+0x7C]
        push edx
        lea edi, ds:[esi+0x350]
        call dword ptr ds : [public_5c71c8]
        add esp, 4
        push ebx
        push eax
        mov ecx, edi
        mov dword ptr ss : [esp+0x3C], eax
        call dword ptr ds : [public_5c6f88]
        test al, al
        je public_4869ad
        mov ebp, dword ptr ss : [esp+0x34]
        mov ecx, dword ptr ds : [edi+4]
        push ebp
        lea eax, ss:[esp+0x80]
        push eax
        push ecx
        call public_41d8a0
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edi+8], ebp
        add esp, 0xC
        mov word ptr ds : [edx+ebp*2], 0
        public_4869ad : nop
        mov edi, dword ptr ds : [edi+4]
        test edi, edi
        mov eax, dword ptr ds : [public_5c700c]
        je public_4869bb
        mov eax, edi
        public_4869bb : nop
        push eax
        call dword ptr ds : [public_5c71c8]
        mov dword ptr ds : [esi+0x360], eax
        mov eax, dword ptr ds : [esi+0x334]
        add esp, 4
        cmp eax, ebx
        mov dword ptr ds : [esi+0x364], ebx
        pop edi
        jne public_486a2d
        mov ecx, dword ptr ds : [esi+0x5A8]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 0x588
        push 0x1E
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0x5AC]
        mov bl, byte ptr ds : [ecx+0x6C]
        mov al, 0xFC
        and bl, al
        mov byte ptr ds : [ecx+0x6C], bl
        mov ecx, dword ptr ds : [esi+0x5B0]
        mov dl, byte ptr ds : [ecx+0x6C]
        mov ebx, 3
        or dl, bl
        mov byte ptr ds : [ecx+0x6C], dl
        mov ecx, dword ptr ds : [esi+0x5C0]
        and byte ptr ds : [ecx+0x6C], al
        mov eax, dword ptr ds : [esi+0x5C4]
        or byte ptr ds : [eax+0x6C], bl
        jmp public_486b21
        public_486a2d : nop
        cmp eax, 2
        jne public_486a83
        mov ecx, dword ptr ds : [esi+0x5A8]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 0x587
        push 0x1E
        call dword ptr ds : [edx+0xA8]
        mov eax, dword ptr ds : [esi+0x5AC]
        mov cl, byte ptr ds : [eax+0x6C]
        mov ebx, 3
        or cl, bl
        mov byte ptr ds : [eax+0x6C], cl
        mov ecx, dword ptr ds : [esi+0x5B0]
        mov dl, byte ptr ds : [ecx+0x6C]
        mov al, 0xFC
        and dl, al
        mov byte ptr ds : [ecx+0x6C], dl
        mov ecx, dword ptr ds : [esi+0x5C0]
        or byte ptr ds : [ecx+0x6C], bl
        mov ecx, dword ptr ds : [esi+0x5C4]
        and byte ptr ds : [ecx+0x6C], al
        jmp public_486b21
        public_486a83 : nop
        mov ebx, 3
        cmp eax, ebx
        jne public_486b00
        mov ecx, dword ptr ds : [esi+0x5A8]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 0x588
        push 0x1E
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0x5AC]
        mov dl, byte ptr ds : [ecx+0x6C]
        mov al, 0xFC
        and dl, al
        mov byte ptr ds : [ecx+0x6C], dl
        mov ecx, dword ptr ds : [esi+0x5B0]
        or byte ptr ds : [ecx+0x6C], bl
        mov ecx, dword ptr ds : [esi+0x5C0]
        and byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ds : [esi+0x5C4]
        or byte ptr ds : [ecx+0x6C], bl
        mov ecx, dword ptr ds : [esi+0x5B4]
        and byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ds : [esi+0x5BC]
        and byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ds : [esi+0x5C8]
        and byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ds : [esi+0x5D0]
        and byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ds : [esi+0x1788]
        and byte ptr ds : [ecx+0x6C], al
        jmp public_486b21
        lea ecx, ds:[ecx]
        public_486b00 : nop
        push eax
        push 0x1BC
/*FIXUP push offset public_5d1e40 @0x486b06*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1e40
        mov ecx, 0x100001
/*FIXUP push offset public_5d1e10 @0x486b10*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1e10
        push ecx
        mov ecx, dword ptr ds : [public_5c6d18]
        call dword ptr ds : [ecx]
        add esp, 0x14
        public_486b21 : nop
        mov dword ptr ds : [esi+0x70], 0x6E
        mov dword ptr ds : [esi+0x78], 6
        call public_4a7670
        push 0xF
        lea ecx, ds:[esi+0x32C]
        mov byte ptr ds : [esi+0x330], al
        call public_5760d0
        mov ecx, esi
        call public_4877f0
        push 0xFFFFFFFF
        mov ecx, esi
        call public_487cb0
        mov edx, dword ptr ss : [esp+0x280]
        mov eax, dword ptr ss : [esp+0x27C]
        push edx
        push eax
        mov ecx, esi
        call public_4b5060
        pop esi
        test al, al
        pop ebp
        setne al
        pop ebx
        add esp, 0x26C
        ret 8
        UNREACHABLE_TRAP(0x485be0)
    }
}

#undef public_486595
#undef public_48659f
#undef public_4865d0
#undef public_486816
#undef public_486828
#undef public_486864
#undef public_486874
#undef public_486962
#undef public_4869ad
#undef public_4869bb
#undef public_486a2d
#undef public_486a83
#undef public_486b00
#undef public_486b21
