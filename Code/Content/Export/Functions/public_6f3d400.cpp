#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f1df30);
CLANG_FORWARD_PROC_SYMBOL(public_6f2d940);
CLANG_FORWARD_PROC_SYMBOL(public_6f3a2d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f3a690);
CLANG_FORWARD_PROC_SYMBOL(public_6f3a940);
CLANG_FORWARD_PROC_SYMBOL(public_6f3ad40);
CLANG_FORWARD_PROC_SYMBOL(public_6f3b030);
CLANG_FORWARD_PROC_SYMBOL(public_6f3b190);
CLANG_FORWARD_PROC_SYMBOL(public_6f3b240);
CLANG_FORWARD_PROC_SYMBOL(public_6f3b370);
CLANG_FORWARD_PROC_SYMBOL(public_6f3b470);
CLANG_FORWARD_PROC_SYMBOL(public_6f3b6c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f3b770);
CLANG_FORWARD_PROC_SYMBOL(public_6f3b900);
CLANG_FORWARD_PROC_SYMBOL(public_6f3bb00);
CLANG_FORWARD_PROC_SYMBOL(public_6f3bbd0);
CLANG_FORWARD_PROC_SYMBOL(public_6f3c190);
CLANG_FORWARD_PROC_SYMBOL(public_6f3cc10);
CLANG_FORWARD_PROC_SYMBOL(public_6f3d400);
CLANG_FORWARD_PROC_SYMBOL(public_6f3e920);
CLANG_FORWARD_PROC_SYMBOL(public_6f3ebe0);
CLANG_FORWARD_PROC_SYMBOL(public_6f3eea0);
CLANG_FORWARD_PROC_SYMBOL(public_6f3f160);
CLANG_FORWARD_PROC_SYMBOL(public_6f3f420);
CLANG_FORWARD_PROC_SYMBOL(public_6f3f6e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f3fa50);
CLANG_FORWARD_PROC_SYMBOL(public_6f3fd10);
CLANG_FORWARD_PROC_SYMBOL(public_6f40080);
CLANG_FORWARD_PROC_SYMBOL(public_6f40340);
CLANG_FORWARD_PROC_SYMBOL(public_6f40600);
CLANG_FORWARD_PROC_SYMBOL(public_6f408c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f45810);
CLANG_FORWARD_PROC_SYMBOL(public_6f45ef0);
CLANG_FORWARD_PROC_SYMBOL(public_6f461b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f464f0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa6e80);

#define public_6f3d427 _public_6f3d427
#define public_6f3d4b4 _public_6f3d4b4
#define public_6f3d53b _public_6f3d53b
#define public_6f3d5c2 _public_6f3d5c2
#define public_6f3d649 _public_6f3d649
#define public_6f3d6d0 _public_6f3d6d0
#define public_6f3d764 _public_6f3d764
#define public_6f3d7eb _public_6f3d7eb
#define public_6f3d872 _public_6f3d872
#define public_6f3d8f9 _public_6f3d8f9
#define public_6f3d98a _public_6f3d98a
#define public_6f3da11 _public_6f3da11
#define public_6f3da98 _public_6f3da98
#define public_6f3db46 _public_6f3db46
#define public_6f3db73 _public_6f3db73
#define public_6f3db9e _public_6f3db9e
#define public_6f3dbb9 _public_6f3dbb9
#define public_6f3dbd2 _public_6f3dbd2
#define public_6f3dbde _public_6f3dbde
#define public_6f3dc30 _public_6f3dc30
#define public_6f3dcb1 _public_6f3dcb1
#define public_6f3dcc1 _public_6f3dcc1
#define public_6f3dcc4 _public_6f3dcc4
#define public_6f3dcc8 _public_6f3dcc8
#define public_6f3dcfe _public_6f3dcfe
#define public_6f3dd55 _public_6f3dd55
#define public_6f3dd5e _public_6f3dd5e
#define public_6f3dda3 _public_6f3dda3
#define public_6f3ddbb _public_6f3ddbb
#define public_6f3de40 _public_6f3de40
#define public_6f3de50 _public_6f3de50
#define public_6f3de53 _public_6f3de53
#define public_6f3de57 _public_6f3de57
#define public_6f3de72 _public_6f3de72
#define public_6f3de73 _public_6f3de73
#define public_6f3de7d _public_6f3de7d
#define public_6f3de83 _public_6f3de83
#define public_6f3de96 _public_6f3de96
#define public_6f3dea0 _public_6f3dea0
#define public_6f3dec0 _public_6f3dec0
#define public_6f3dec9 _public_6f3dec9
#define public_6f3deec _public_6f3deec

PROC_DECLARE(0x6f3d400, internal_6f3d400, public_6f3d400);
extern "C" NAKED register_t __cdecl internal_6f3d400()
{
    __asm
    {
        sub esp, 0x8D0
        push ebp
        mov ebp, dword ptr ss : [esp+0x8D8]
        mov ecx, ebp
        call dword ptr ds : [public_6fb3024]
        test al, al
        je public_6f3de96
        push ebx
        mov ebx, dword ptr ds : [public_6fb3030]
        push esi
        push edi
        public_6f3d427 : nop
        mov esi, dword ptr ds : [public_6fb301c]
/*FIXUP push offset public_6fbafac @0x6f3d42d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbafac
        mov ecx, ebp
        call esi
        test al, al
        je public_6f3d4b4
        lea ecx, ss:[esp+0x49C]
        call dword ptr ds : [public_6fb31fc]
        lea ecx, ss:[esp+0x48]
        call ebx
        lea eax, ss:[esp+0x48]
        push eax
        lea ecx, ss:[esp+0x4A0]
        push ecx
        push ebp
        call public_6f3a2d0
        add esp, 0xC
        lea ecx, ss:[esp+0x48]
        call dword ptr ds : [public_6fb3050]
        test al, al
        jne public_6f3de83
        mov edx, dword ptr ss : [esp+0x48]
        mov dword ptr ss : [esp+0x54C], edx
        mov ecx, 0x16
        lea esi, ss:[esp+0x49C]
        lea edi, ss:[esp+0x550]
        rep movsd
        lea eax, ss:[esp+0x54C]
        push eax
        lea ecx, ss:[esp+0x150]
        push ecx
        mov ecx, offset public_6fd0a8c
        call public_6f3e920
        jmp public_6f3de83
/*FIXUP public_6f3d4b4 : nop
        push offset public_6fbaf9c @0x6f3d4b4*/
  FIXUP public_6f3d4b4 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbaf9c
        mov ecx, ebp
        call esi
        test al, al
        je public_6f3d53b
        lea ecx, ss:[esp+0x310]
        call dword ptr ds : [public_6fb31f8]
        lea ecx, ss:[esp+0x54]
        call ebx
        lea edx, ss:[esp+0x54]
        push edx
        lea eax, ss:[esp+0x314]
        push eax
        push ebp
        call public_6f3a690
        add esp, 0xC
        lea ecx, ss:[esp+0x54]
        call dword ptr ds : [public_6fb3050]
        test al, al
        jne public_6f3de83
        mov ecx, dword ptr ss : [esp+0x54]
        mov dword ptr ss : [esp+0x38C], ecx
        lea edx, ss:[esp+0x38C]
        mov ecx, 0xF
        lea esi, ss:[esp+0x310]
        lea edi, ss:[esp+0x390]
        push edx
        lea eax, ss:[esp+0x178]
        rep movsd
        push eax
        mov ecx, offset public_6fd0a78
        call public_6f3ebe0
        jmp public_6f3de83
/*FIXUP public_6f3d53b : nop
        push offset public_6fbaf88 @0x6f3d53b*/
  FIXUP public_6f3d53b : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbaf88
        mov ecx, ebp
        call esi
        test al, al
        je public_6f3d5c2
        lea ecx, ss:[esp+0x5A8]
        call dword ptr ds : [public_6fb31f4]
        lea ecx, ss:[esp+0x20]
        call ebx
        lea ecx, ss:[esp+0x20]
        push ecx
        lea edx, ss:[esp+0x5AC]
        push edx
        push ebp
        call public_6f3a940
        add esp, 0xC
        lea ecx, ss:[esp+0x20]
        call dword ptr ds : [public_6fb3050]
        test al, al
        jne public_6f3de83
        mov eax, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x608], eax
        mov ecx, 0x18
        lea esi, ss:[esp+0x5A8]
        lea edi, ss:[esp+0x60C]
        rep movsd
        lea ecx, ss:[esp+0x608]
        push ecx
        lea edx, ss:[esp+0x148]
        push edx
        mov ecx, offset public_6fd0a64
        call public_6f3eea0
        jmp public_6f3de83
/*FIXUP public_6f3d5c2 : nop
        push offset public_6fbaf78 @0x6f3d5c2*/
  FIXUP public_6f3d5c2 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbaf78
        mov ecx, ebp
        call esi
        test al, al
        je public_6f3d649
        lea ecx, ss:[esp+0x2A4]
        call dword ptr ds : [public_6fb31f0]
        lea ecx, ss:[esp+0x28]
        call ebx
        lea eax, ss:[esp+0x28]
        push eax
        lea ecx, ss:[esp+0x2A8]
        push ecx
        push ebp
        call public_6f3ad40
        add esp, 0xC
        lea ecx, ss:[esp+0x28]
        call dword ptr ds : [public_6fb3050]
        test al, al
        jne public_6f3de83
        mov edx, dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0x2D8], edx
        mov ecx, 0xD
        lea esi, ss:[esp+0x2A4]
        lea edi, ss:[esp+0x2DC]
        rep movsd
        lea eax, ss:[esp+0x2D8]
        push eax
        lea ecx, ss:[esp+0x1A0]
        push ecx
        mov ecx, offset public_6fd0a50
        call public_6f3f160
        jmp public_6f3de83
/*FIXUP public_6f3d649 : nop
        push offset public_6fbaf6c @0x6f3d649*/
  FIXUP public_6f3d649 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbaf6c
        mov ecx, ebp
        call esi
        test al, al
        je public_6f3d6d0
        lea ecx, ss:[esp+0x1A4]
        call dword ptr ds : [public_6fb31ec]
        lea ecx, ss:[esp+0x2C]
        call ebx
        lea edx, ss:[esp+0x2C]
        push edx
        lea eax, ss:[esp+0x1A8]
        push eax
        push ebp
        call public_6f3b030
        add esp, 0xC
        lea ecx, ss:[esp+0x2C]
        call dword ptr ds : [public_6fb3050]
        test al, al
        jne public_6f3de83
        mov ecx, dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0x1DC], ecx
        lea edx, ss:[esp+0x1DC]
        mov ecx, 7
        lea esi, ss:[esp+0x1A4]
        lea edi, ss:[esp+0x1E0]
        push edx
        lea eax, ss:[esp+0x110]
        rep movsd
        push eax
        mov ecx, offset public_6fd0a3c
        call public_6f3f420
        jmp public_6f3de83
/*FIXUP public_6f3d6d0 : nop
        push offset public_6fbaf60 @0x6f3d6d0*/
  FIXUP public_6f3d6d0 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbaf60
        mov ecx, ebp
        call esi
        test al, al
        je public_6f3d764
        lea ecx, ss:[esp+0x78]
        call dword ptr ds : [public_6fb31e8]
        lea ecx, ss:[esp+0x3C]
        call ebx
        lea ecx, ss:[esp+0x3C]
        push ecx
        lea edx, ss:[esp+0x7C]
        push edx
        push ebp
        call public_6f3b190
        add esp, 0xC
        lea ecx, ss:[esp+0x3C]
        call dword ptr ds : [public_6fb3050]
        test al, al
        jne public_6f3de83
        mov ecx, dword ptr ss : [esp+0x78]
        mov edx, dword ptr ss : [esp+0x7C]
        mov eax, dword ptr ss : [esp+0x3C]
        mov dword ptr ss : [esp+0xB4], ecx
        lea ecx, ss:[esp+0xB0]
        mov dword ptr ss : [esp+0xB8], edx
        push ecx
        mov dword ptr ss : [esp+0xB4], eax
        mov eax, dword ptr ss : [esp+0x84]
        lea edx, ss:[esp+0x120]
        push edx
        mov ecx, offset public_6fd0a28
        mov dword ptr ss : [esp+0xC4], eax
        call public_6f3f6e0
        jmp public_6f3de83
/*FIXUP public_6f3d764 : nop
        push offset public_6fbaf50 @0x6f3d764*/
  FIXUP public_6f3d764 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbaf50
        mov ecx, ebp
        call esi
        test al, al
        je public_6f3d7eb
        lea ecx, ss:[esp+0xF0]
        call dword ptr ds : [public_6fb31e4]
        lea ecx, ss:[esp+0x34]
        call ebx
        lea eax, ss:[esp+0x34]
        push eax
        lea ecx, ss:[esp+0xF4]
        push ecx
        push ebp
        call public_6f3b240
        add esp, 0xC
        lea ecx, ss:[esp+0x34]
        call dword ptr ds : [public_6fb3050]
        test al, al
        jne public_6f3de83
        mov edx, dword ptr ss : [esp+0x34]
        mov dword ptr ss : [esp+0x15C], edx
        mov ecx, 5
        lea esi, ss:[esp+0xF0]
        lea edi, ss:[esp+0x160]
        rep movsd
        lea eax, ss:[esp+0x15C]
        push eax
        lea ecx, ss:[esp+0x130]
        push ecx
        mov ecx, offset public_6fd0a14
        call public_6f2d940
        jmp public_6f3de83
/*FIXUP public_6f3d7eb : nop
        push offset public_6fbaf44 @0x6f3d7eb*/
  FIXUP public_6f3d7eb : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbaf44
        mov ecx, ebp
        call esi
        test al, al
        je public_6f3d872
        lea ecx, ss:[esp+0x17C]
        call dword ptr ds : [public_6fb31e0]
        lea ecx, ss:[esp+0x44]
        call ebx
        lea edx, ss:[esp+0x44]
        push edx
        lea eax, ss:[esp+0x180]
        push eax
        push ebp
        call public_6f3b370
        add esp, 0xC
        lea ecx, ss:[esp+0x44]
        call dword ptr ds : [public_6fb3050]
        test al, al
        jne public_6f3de83
        mov ecx, dword ptr ss : [esp+0x44]
        mov dword ptr ss : [esp+0x1C0], ecx
        lea edx, ss:[esp+0x1C0]
        mov ecx, 6
        lea esi, ss:[esp+0x17C]
        lea edi, ss:[esp+0x1C4]
        push edx
        lea eax, ss:[esp+0x140]
        rep movsd
        push eax
        mov ecx, offset public_6fd0a00
        call public_6f3fa50
        jmp public_6f3de83
/*FIXUP public_6f3d872 : nop
        push offset public_6fbaf38 @0x6f3d872*/
  FIXUP public_6f3d872 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbaf38
        mov ecx, ebp
        call esi
        test al, al
        je public_6f3d8f9
        lea ecx, ss:[esp+0x34C]
        call dword ptr ds : [public_6fb31dc]
        lea ecx, ss:[esp+0x4C]
        call ebx
        lea ecx, ss:[esp+0x4C]
        push ecx
        lea edx, ss:[esp+0x350]
        push edx
        push ebp
        call public_6f3b470
        add esp, 0xC
        lea ecx, ss:[esp+0x4C]
        call dword ptr ds : [public_6fb3050]
        test al, al
        jne public_6f3de83
        mov eax, dword ptr ss : [esp+0x4C]
        mov dword ptr ss : [esp+0x410], eax
        mov ecx, 0x10
        lea esi, ss:[esp+0x34C]
        lea edi, ss:[esp+0x414]
        rep movsd
        lea ecx, ss:[esp+0x410]
        push ecx
        lea edx, ss:[esp+0x108]
        push edx
        mov ecx, offset public_6fd09ec
        call public_6f3fd10
        jmp public_6f3de83
/*FIXUP public_6f3d8f9 : nop
        push offset public_6fbaf2c @0x6f3d8f9*/
  FIXUP public_6f3d8f9 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbaf2c
        mov ecx, ebp
        call esi
        test al, al
        je public_6f3d98a
        lea ecx, ss:[esp+0x6C]
        call dword ptr ds : [public_6fb31d8]
        lea ecx, ss:[esp+0x40]
        call ebx
        lea eax, ss:[esp+0x40]
        push eax
        lea ecx, ss:[esp+0x70]
        push ecx
        push ebp
        call public_6f3b6c0
        add esp, 0xC
        lea ecx, ss:[esp+0x40]
        call dword ptr ds : [public_6fb3050]
        test al, al
        jne public_6f3de83
        mov eax, dword ptr ss : [esp+0x6C]
        mov ecx, dword ptr ss : [esp+0x70]
        mov edx, dword ptr ss : [esp+0x40]
        mov dword ptr ss : [esp+0xA4], eax
        mov dword ptr ss : [esp+0xA8], ecx
        lea eax, ss:[esp+0xA0]
        push eax
        lea ecx, ss:[esp+0x118]
        mov dword ptr ss : [esp+0xA4], edx
        mov edx, dword ptr ss : [esp+0x78]
        push ecx
        mov ecx, offset public_6fd09d8
        mov dword ptr ss : [esp+0xB4], edx
        call public_6f3f6e0
        jmp public_6f3de83
/*FIXUP public_6f3d98a : nop
        push offset public_6fbaf1c @0x6f3d98a*/
  FIXUP public_6f3d98a : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbaf1c
        mov ecx, ebp
        call esi
        test al, al
        je public_6f3da11
        lea ecx, ss:[esp+0x1FC]
        call dword ptr ds : [public_6fb31d4]
        lea ecx, ss:[esp+0x50]
        call ebx
        lea edx, ss:[esp+0x50]
        push edx
        lea eax, ss:[esp+0x200]
        push eax
        push ebp
        call public_6f3b770
        add esp, 0xC
        lea ecx, ss:[esp+0x50]
        call dword ptr ds : [public_6fb3050]
        test al, al
        jne public_6f3de83
        mov ecx, dword ptr ss : [esp+0x50]
        mov dword ptr ss : [esp+0x220], ecx
        lea edx, ss:[esp+0x220]
        mov ecx, 9
        lea esi, ss:[esp+0x1FC]
        lea edi, ss:[esp+0x224]
        push edx
        lea eax, ss:[esp+0x158]
        rep movsd
        push eax
        mov ecx, offset public_6fd09c4
        call public_6f40080
        jmp public_6f3de83
/*FIXUP public_6f3da11 : nop
        push offset public_6fbaf08 @0x6f3da11*/
  FIXUP public_6f3da11 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbaf08
        mov ecx, ebp
        call esi
        test al, al
        je public_6f3da98
        lea ecx, ss:[esp+0x3CC]
        call dword ptr ds : [public_6fb31d0]
        lea ecx, ss:[esp+0x38]
        call ebx
        lea ecx, ss:[esp+0x38]
        push ecx
        lea edx, ss:[esp+0x3D0]
        push edx
        push ebp
        call public_6f3b900
        add esp, 0xC
        lea ecx, ss:[esp+0x38]
        call dword ptr ds : [public_6fb3050]
        test al, al
        jne public_6f3de83
        mov eax, dword ptr ss : [esp+0x38]
        mov dword ptr ss : [esp+0x454], eax
        mov ecx, 0x11
        lea esi, ss:[esp+0x3CC]
        lea edi, ss:[esp+0x458]
        rep movsd
        lea ecx, ss:[esp+0x454]
        push ecx
        lea edx, ss:[esp+0x128]
        push edx
        mov ecx, offset public_6fd09b0
        call public_6f40340
        jmp public_6f3de83
/*FIXUP public_6f3da98 : nop
        push offset public_6fbaef0 @0x6f3da98*/
  FIXUP public_6f3da98 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbaef0
        mov ecx, ebp
        call esi
        test al, al
        je public_6f3db46
        lea ecx, ss:[esp+0x84]
        call dword ptr ds : [public_6fb31cc]
        lea ecx, ss:[esp+0x24]
        call ebx
        lea eax, ss:[esp+0x24]
        push eax
        lea ecx, ss:[esp+0x88]
        push ecx
        push ebp
        call public_6f3bb00
        add esp, 0xC
        lea ecx, ss:[esp+0x24]
        call dword ptr ds : [public_6fb3050]
        test al, al
        jne public_6f3de83
        mov edx, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [esp+0x88]
        mov eax, dword ptr ss : [esp+0x84]
        mov dword ptr ss : [esp+0xC0], edx
        mov edx, dword ptr ss : [esp+0x8C]
        mov dword ptr ss : [esp+0xC8], ecx
        lea ecx, ss:[esp+0xC0]
        mov dword ptr ss : [esp+0xCC], edx
        push ecx
        mov dword ptr ss : [esp+0xC8], eax
        mov eax, dword ptr ss : [esp+0x94]
        lea edx, ss:[esp+0x198]
        push edx
        mov ecx, offset public_6fd099c
        mov dword ptr ss : [esp+0xD8], eax
        call public_6f40600
        jmp public_6f3de83
/*FIXUP public_6f3db46 : nop
        push offset public_6fbaedc @0x6f3db46*/
  FIXUP public_6f3db46 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbaedc
        mov ecx, ebp
        call esi
        test al, al
        je public_6f3dc30
        lea ecx, ss:[esp+0x64]
        call dword ptr ds : [public_6fb31c8]
        lea ecx, ss:[esp+0x1C]
        call ebx
        mov ecx, ebp
        call dword ptr ds : [public_6fb3018]
        test al, al
        je public_6f3dbde
        public_6f3db73 : nop
        mov esi, dword ptr ds : [public_6fb3014]
/*FIXUP push offset public_6fb445c @0x6f3db79*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb445c
        mov ecx, ebp
        call esi
        test al, al
        mov ecx, ebp
        je public_6f3db9e
        call dword ptr ds : [public_6fb3054]
        push eax
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ss : [esp+0x1C], eax
        jmp public_6f3dbd2
/*FIXUP public_6f3db9e : nop
        push offset public_6fba724 @0x6f3db9e*/
  FIXUP public_6f3db9e : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fba724
        call esi
        test al, al
        mov ecx, ebp
        je public_6f3dbb9
        push 0
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [esp+0x64]
        jmp public_6f3dbd2
/*FIXUP public_6f3dbb9 : nop
        push offset public_6fba704 @0x6f3dbb9*/
  FIXUP public_6f3dbb9 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fba704
        call esi
        test al, al
        je public_6f3dbd2
        push 0
        mov ecx, ebp
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [esp+0x68]
        public_6f3dbd2 : nop
        mov ecx, ebp
        call dword ptr ds : [public_6fb3018]
        test al, al
        jne public_6f3db73
        public_6f3dbde : nop
        lea ecx, ss:[esp+0x1C]
        call dword ptr ds : [public_6fb3050]
        test al, al
        jne public_6f3de83
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x64]
        mov edx, dword ptr ss : [esp+0x68]
        mov dword ptr ss : [esp+0x94], eax
        mov dword ptr ss : [esp+0x98], ecx
        lea eax, ss:[esp+0x94]
        push eax
        lea ecx, ss:[esp+0x138]
        push ecx
        mov ecx, offset public_6fd0988
        mov dword ptr ss : [esp+0xA4], edx
        call public_6f408c0
        jmp public_6f3de83
/*FIXUP public_6f3dc30 : nop
        push offset public_6fbaecc @0x6f3dc30*/
  FIXUP public_6f3dc30 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbaecc
        mov ecx, ebp
        call esi
        test al, al
        je public_6f3ddbb
        lea ecx, ss:[esp+0x4F4]
        call dword ptr ds : [public_6fb31c4]
        lea ecx, ss:[esp+0x30]
        call ebx
        lea edx, ss:[esp+0x30]
        push edx
        lea eax, ss:[esp+0x4F8]
        push eax
        push ebp
        call public_6f3bbd0
        add esp, 0xC
        lea ecx, ss:[esp+0x30]
        call dword ptr ds : [public_6fb3050]
        test al, al
        jne public_6f3de83
        mov edx, dword ptr ss : [esp+0x30]
        mov dword ptr ss : [esp+0x248], edx
        mov ecx, 0x16
        lea esi, ss:[esp+0x4F4]
        lea edi, ss:[esp+0x24C]
        rep movsd
        mov edi, dword ptr ds : [public_6fd0978]
        mov esi, dword ptr ds : [edi+4]
        mov ecx, dword ptr ds : [public_6fd097c]
        cmp esi, ecx
        mov al, 1
        je public_6f3dcc8
        public_6f3dcb1 : nop
        cmp edx, dword ptr ds : [esi+0xC]
        setb al
        test al, al
        mov edi, esi
        je public_6f3dcc1
        mov esi, dword ptr ds : [esi]
        jmp public_6f3dcc4
        public_6f3dcc1 : nop
        mov esi, dword ptr ds : [esi+8]
        public_6f3dcc4 : nop
        cmp esi, ecx
        jne public_6f3dcb1
        public_6f3dcc8 : nop
        mov cl, byte ptr ds : [public_6fd0980]
        test cl, cl
        je public_6f3dcfe
        lea ecx, ss:[esp+0x248]
        push ecx
        push edi
        push esi
        lea edx, ss:[esp+0xE0]
        push edx
        mov ecx, offset public_6fd0974
        call public_6f45810
        mov eax, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x5C], eax
        mov byte ptr ss : [esp+0x60], 1
        jmp public_6f3de83
        public_6f3dcfe : nop
        test al, al
        mov dword ptr ss : [esp+0x14], edi
        je public_6f3dd5e
        lea ecx, ss:[esp+0xEC]
        push ecx
        mov ecx, offset public_6fd0974
        call public_6f1df30
        mov edx, dword ptr ss : [esp+0x14]
        cmp edx, dword ptr ds : [eax]
        jne public_6f3dd55
        lea eax, ss:[esp+0x13]
        push eax
        lea ecx, ss:[esp+0x24C]
        push ecx
        push edi
        push esi
        lea edx, ss:[esp+0xF8]
        push edx
        mov ecx, offset public_6fd0974
        mov byte ptr ss : [esp+0x27], 1
        call public_6f45810
        push eax
        lea ecx, ss:[esp+0x64]
        call public_6fa6e80
        jmp public_6f3de83
        public_6f3dd55 : nop
        lea ecx, ss:[esp+0x14]
        call public_6f461b0
        public_6f3dd5e : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [eax+0xC]
        cmp ecx, dword ptr ss : [esp+0x248]
        lea edx, ss:[esp+0x13]
        push edx
        jae public_6f3dda3
        lea eax, ss:[esp+0x24C]
        push eax
        push edi
        push esi
        lea ecx, ss:[esp+0xEC]
        push ecx
        mov ecx, offset public_6fd0974
        mov byte ptr ss : [esp+0x27], 1
        call public_6f45810
        push eax
        lea ecx, ss:[esp+0x64]
        call public_6fa6e80
        jmp public_6f3de83
        public_6f3dda3 : nop
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[esp+0x64]
        mov byte ptr ss : [esp+0x1B], 0
        call public_6fa6e80
        jmp public_6f3de83
/*FIXUP public_6f3ddbb : nop
        push offset public_6fbaec0 @0x6f3ddbb*/
  FIXUP public_6f3ddbb : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbaec0
        mov ecx, ebp
        call esi
        test al, al
        je public_6f3deec
        lea ecx, ss:[esp+0x7A8]
        call dword ptr ds : [public_6fb31c0]
        lea ecx, ss:[esp+0x18]
        call ebx
        lea ecx, ss:[esp+0x18]
        push ecx
        lea edx, ss:[esp+0x7AC]
        push edx
        push ebp
        call public_6f3c190
        add esp, 0xC
        lea ecx, ss:[esp+0x18]
        call dword ptr ds : [public_6fb3050]
        test al, al
        jne public_6f3de83
        mov edx, dword ptr ss : [esp+0x18]
        mov ebx, dword ptr ds : [public_6fd0968]
        mov dword ptr ss : [esp+0x66C], edx
        mov ecx, 0x4E
        lea esi, ss:[esp+0x7A8]
        lea edi, ss:[esp+0x670]
        rep movsd
        mov ecx, dword ptr ds : [public_6fd0964]
        mov esi, dword ptr ds : [ecx+4]
        cmp esi, ebx
        mov edi, ecx
        mov al, 1
        je public_6f3de57
        mov edi, edi
        public_6f3de40 : nop
        cmp edx, dword ptr ds : [esi+0xC]
        setb al
        test al, al
        mov edi, esi
        je public_6f3de50
        mov esi, dword ptr ds : [esi]
        jmp public_6f3de53
        public_6f3de50 : nop
        mov esi, dword ptr ds : [esi+8]
        public_6f3de53 : nop
        cmp esi, ebx
        jne public_6f3de40
        public_6f3de57 : nop
        mov dl, byte ptr ds : [public_6fd096c]
        test dl, dl
        je public_6f3dea0
        lea eax, ss:[esp+0x66C]
        push eax
        push edi
        push esi
        lea ecx, ss:[esp+0xEC]
        public_6f3de72 : nop
        push ecx
        public_6f3de73 : nop
        mov ecx, offset public_6fd0960
        call public_6f45ef0
        public_6f3de7d : nop
        mov ebx, dword ptr ds : [public_6fb3030]
        public_6f3de83 : nop
        mov ecx, ebp
        call dword ptr ds : [public_6fb3024]
        test al, al
        jne public_6f3d427
        pop edi
        pop esi
        pop ebx
        public_6f3de96 : nop
        mov al, 1
        pop ebp
        add esp, 0x8D0
        ret 
        public_6f3dea0 : nop
        test al, al
        mov dword ptr ss : [esp+0x58], edi
        je public_6f3dec9
        cmp edi, dword ptr ds : [ecx]
        jne public_6f3dec0
        lea edx, ss:[esp+0x66C]
        push edx
        push edi
        push esi
        lea eax, ss:[esp+0xF0]
        push eax
        jmp public_6f3de73
        public_6f3dec0 : nop
        lea ecx, ss:[esp+0x58]
        call public_6f464f0
        public_6f3dec9 : nop
        mov ecx, dword ptr ss : [esp+0x58]
        mov edx, dword ptr ds : [ecx+0xC]
        cmp edx, dword ptr ss : [esp+0x66C]
        jae public_6f3de7d
        lea eax, ss:[esp+0x66C]
        push eax
        push edi
        push esi
        lea ecx, ss:[esp+0xE4]
        jmp public_6f3de72
/*FIXUP public_6f3deec : nop
        push offset public_6fbaeb8 @0x6f3deec*/
  FIXUP public_6f3deec : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbaeb8
        mov ecx, ebp
        call esi
        test al, al
        je public_6f3de83
        push ebp
        call public_6f3cc10
        add esp, 4
        jmp public_6f3de83
        UNREACHABLE_TRAP(0x6f3d400)
    }
}

#undef public_6f3d427
#undef public_6f3d4b4
#undef public_6f3d53b
#undef public_6f3d5c2
#undef public_6f3d649
#undef public_6f3d6d0
#undef public_6f3d764
#undef public_6f3d7eb
#undef public_6f3d872
#undef public_6f3d8f9
#undef public_6f3d98a
#undef public_6f3da11
#undef public_6f3da98
#undef public_6f3db46
#undef public_6f3db73
#undef public_6f3db9e
#undef public_6f3dbb9
#undef public_6f3dbd2
#undef public_6f3dbde
#undef public_6f3dc30
#undef public_6f3dcb1
#undef public_6f3dcc1
#undef public_6f3dcc4
#undef public_6f3dcc8
#undef public_6f3dcfe
#undef public_6f3dd55
#undef public_6f3dd5e
#undef public_6f3dda3
#undef public_6f3ddbb
#undef public_6f3de40
#undef public_6f3de50
#undef public_6f3de53
#undef public_6f3de57
#undef public_6f3de72
#undef public_6f3de73
#undef public_6f3de7d
#undef public_6f3de83
#undef public_6f3de96
#undef public_6f3dea0
#undef public_6f3dec0
#undef public_6f3dec9
#undef public_6f3deec
