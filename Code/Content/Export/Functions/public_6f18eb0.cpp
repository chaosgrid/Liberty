#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea9f40);
CLANG_FORWARD_PROC_SYMBOL(public_6ead6a0);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0160);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0230);
CLANG_FORWARD_PROC_SYMBOL(public_6ed03d0);
CLANG_FORWARD_PROC_SYMBOL(public_6ed12c0);
CLANG_FORWARD_PROC_SYMBOL(public_6ed2860);
CLANG_FORWARD_PROC_SYMBOL(public_6ed2a00);
CLANG_FORWARD_PROC_SYMBOL(public_6ed34e0);
CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f15350);
CLANG_FORWARD_PROC_SYMBOL(public_6f18eb0);
CLANG_FORWARD_PROC_SYMBOL(public_6f1d4c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f1d740);
CLANG_FORWARD_PROC_SYMBOL(public_6f1da40);
CLANG_FORWARD_PROC_SYMBOL(public_6f1df30);
CLANG_FORWARD_PROC_SYMBOL(public_6f1e390);
CLANG_FORWARD_PROC_SYMBOL(public_6f20230);
CLANG_FORWARD_PROC_SYMBOL(public_6f28e10);
CLANG_FORWARD_PROC_SYMBOL(public_6f55880);
CLANG_FORWARD_PROC_SYMBOL(public_6f75f30);
CLANG_FORWARD_PROC_SYMBOL(public_6f93460);
CLANG_FORWARD_PROC_SYMBOL(public_6f93790);
CLANG_FORWARD_PROC_SYMBOL(public_6f96770);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8370);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fa0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa9130);
CLANG_FORWARD_JUMP_SYMBOL(public_6fadb5e);

#define public_6f19078 _public_6f19078
#define public_6f190dd _public_6f190dd
#define public_6f19106 _public_6f19106
#define public_6f19127 _public_6f19127
#define public_6f1916a _public_6f1916a
#define public_6f191aa _public_6f191aa
#define public_6f191ec _public_6f191ec
#define public_6f19212 _public_6f19212
#define public_6f19275 _public_6f19275
#define public_6f1929c _public_6f1929c
#define public_6f192c0 _public_6f192c0
#define public_6f19309 _public_6f19309
#define public_6f19350 _public_6f19350
#define public_6f1938b _public_6f1938b
#define public_6f1939d _public_6f1939d
#define public_6f193c4 _public_6f193c4
#define public_6f19487 _public_6f19487
#define public_6f194b0 _public_6f194b0
#define public_6f194d0 _public_6f194d0
#define public_6f194e9 _public_6f194e9
#define public_6f19505 _public_6f19505
#define public_6f1951d _public_6f1951d
#define public_6f19544 _public_6f19544
#define public_6f1959c _public_6f1959c
#define public_6f195bb _public_6f195bb
#define public_6f195f0 _public_6f195f0
#define public_6f1960a _public_6f1960a
#define public_6f19633 _public_6f19633
#define public_6f19661 _public_6f19661
#define public_6f1967b _public_6f1967b
#define public_6f19699 _public_6f19699
#define public_6f196a0 _public_6f196a0
#define public_6f196b0 _public_6f196b0
#define public_6f196b7 _public_6f196b7
#define public_6f196d7 _public_6f196d7
#define public_6f196db _public_6f196db
#define public_6f196e0 _public_6f196e0
#define public_6f196e4 _public_6f196e4
#define public_6f196fc _public_6f196fc
#define public_6f19809 _public_6f19809
#define public_6f1989f _public_6f1989f
#define public_6f198e3 _public_6f198e3
#define public_6f199b8 _public_6f199b8
#define public_6f199c8 _public_6f199c8

PROC_DECLARE(0x6f18eb0, internal_6f18eb0, public_6f18eb0);
extern "C" NAKED register_t __cdecl internal_6f18eb0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fadb5e @0x6f18eb2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fadb5e
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x1C4
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ds : [public_6fb3030]
        push edi
        xor edi, edi
        lea ecx, ss:[esp+0x12C]
        mov dword ptr ss : [esp+0xF8], edi
        mov byte ptr ss : [esp+0xFC], 0
        call esi
        lea eax, ss:[esp+0x2B]
        push eax
        lea ecx, ss:[esp+0x134]
        call public_6f93460
        lea ecx, ss:[esp+0x148]
        mov dword ptr ss : [esp+0x1DC], edi
        mov byte ptr ss : [esp+0x13C], 0
        mov byte ptr ss : [esp+0x13D], 0
        mov dword ptr ss : [esp+0x140], edi
        mov byte ptr ss : [esp+0x144], 0
        call esi
        lea ecx, ss:[esp+0x14C]
        call public_6f1d4c0
        lea ecx, ss:[esp+0x158]
        mov byte ptr ss : [esp+0x1DC], 1
        call esi
        push edi
        lea ecx, ss:[esp+0x160]
        call public_6f1d740
        lea ecx, ss:[esp+0x17]
        push ecx
        lea ecx, ss:[esp+0x164]
        mov byte ptr ss : [esp+0x1E0], 2
        call public_6ead6a0
        or esi, 0xFFFFFFFF
        mov edi, offset public_6fb60a8
        mov dword ptr ss : [esp+0x170], esi
        mov dword ptr ss : [esp+0x174], esi
        mov dword ptr ss : [esp+0x178], 0x40E00000
        mov dword ptr ss : [esp+0xF4], edi
        mov ebp, dword ptr ss : [esp+0x1E8]
        mov eax, dword ptr ss : [ebp+0xF0]
        lea ecx, ss:[ebp+0xE8]
        lea edx, ss:[esp+0xF4]
        push edx
        push eax
        mov dword ptr ss : [esp+0x1E4], 3
        call public_6f1da40
        mov dword ptr ss : [esp+0xF4], edi
        lea ecx, ss:[esp+0x15C]
        mov dword ptr ss : [esp+0x1DC], 7
        call public_6f28e10
        lea ecx, ss:[esp+0x160]
        mov byte ptr ss : [esp+0x1DC], 6
        call public_6eec8d0
        lea ecx, ss:[esp+0x15C]
        mov byte ptr ss : [esp+0x1DC], 5
        call public_6f28e10
        lea eax, ss:[esp+0x14C]
        mov dword ptr ss : [esp+0x20], eax
        lea ecx, ss:[esp+0x14C]
        mov byte ptr ss : [esp+0x1DC], 8
        call public_6ed2a00
        lea ecx, ss:[esp+0x14C]
        mov byte ptr ss : [esp+0x1DC], 4
        call public_6f15350
        lea ecx, ss:[esp+0x130]
        mov dword ptr ss : [esp+0x1DC], esi
        call public_6f15350
        mov eax, dword ptr ss : [ebp+0xF0]
        add eax, 0xFFFFFF78
        mov dword ptr ss : [esp+0x10], eax
        mov ebx, dword ptr ss : [esp+0x1E4]
        mov ecx, ebx
        call dword ptr ds : [public_6fb3018]
        test al, al
        je public_6f199c8
        public_6f19078 : nop
        mov esi, dword ptr ds : [public_6fb3014]
/*FIXUP push offset public_6fb445c @0x6f1907e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb445c
        mov ecx, ebx
        call esi
        test al, al
        mov ecx, ebx
        je public_6f190dd
        mov esi, dword ptr ds : [public_6fb3054]
        call esi
        push eax
        mov ecx, ebp
        call public_6ed0160
        mov edi, dword ptr ss : [esp+0x10]
        lea ecx, ss:[ebp+4]
        push ecx
        lea ecx, ds:[edi+4]
        call public_6ed0160
        mov ecx, ebx
        call esi
        push eax
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ss : [esp+0x40], eax
        mov eax, dword ptr ds : [edi+0x40]
        lea ecx, ds:[edi+0x3C]
        lea edx, ss:[esp+0x40]
        push edx
        push eax
        lea eax, ss:[esp+0xE4]
        push eax
        call public_6f1e390
        jmp public_6f199b8
/*FIXUP public_6f190dd : nop
        push offset public_6fb44d0 @0x6f190dd*/
  FIXUP public_6f190dd : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb44d0
        call esi
        test al, al
        mov ecx, ebx
        je public_6f19106
        call dword ptr ds : [public_6fb3054]
        push eax
        call dword ptr ds : [public_6fb3000]
        mov ecx, dword ptr ss : [esp+0x14]
        add esp, 4
        mov dword ptr ds : [ecx+0x38], eax
        jmp public_6f199b8
/*FIXUP public_6f19106 : nop
        push offset public_6fb89f8 @0x6f19106*/
  FIXUP public_6f19106 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb89f8
        call esi
        test al, al
        mov ecx, ebx
        je public_6f19127
        push 0
        call dword ptr ds : [public_6fb3040]
        mov edx, dword ptr ss : [esp+0x10]
        mov byte ptr ds : [edx+0x50], al
        jmp public_6f199b8
/*FIXUP public_6f19127 : nop
        push offset public_6fb89d4 @0x6f19127*/
  FIXUP public_6f19127 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb89d4
        call esi
        test al, al
        mov ecx, ebx
        je public_6f1916a
        call dword ptr ds : [public_6fb3054]
        push eax
        call dword ptr ds : [public_6fb3000]
        mov dword ptr ss : [esp+0x40], eax
        mov eax, dword ptr ss : [esp+0x14]
        add esp, 4
        lea ecx, ds:[eax+0x3C]
        mov eax, dword ptr ds : [ecx+4]
        lea edx, ss:[esp+0x3C]
        push edx
        push eax
        lea eax, ss:[esp+0xEC]
        push eax
        call public_6f1e390
        jmp public_6f199b8
/*FIXUP public_6f1916a : nop
        push offset public_6fb8c30 @0x6f1916a*/
  FIXUP public_6f1916a : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb8c30
        call esi
        test al, al
        je public_6f191aa
        mov ecx, dword ptr ss : [esp+0x10]
        add ecx, 0x64
        call dword ptr ds : [public_6fb3050]
        test al, al
        je public_6f199b8
        push 0
        mov ecx, ebx
        call dword ptr ds : [public_6fb3048]
        push eax
        call dword ptr ds : [public_6fb3000]
        mov edx, dword ptr ss : [esp+0x14]
        add esp, 4
        mov dword ptr ds : [edx+0x54], eax
        jmp public_6f199b8
/*FIXUP public_6f191aa : nop
        push offset public_6fb8c1c @0x6f191aa*/
  FIXUP public_6f191aa : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb8c1c
        mov ecx, ebx
        call esi
        test al, al
        je public_6f191ec
        mov eax, dword ptr ss : [esp+0x10]
        lea ecx, ds:[eax+0x54]
        call dword ptr ds : [public_6fb3050]
        test al, al
        je public_6f199b8
        push 0
        mov ecx, ebx
        call dword ptr ds : [public_6fb3048]
        push eax
        call dword ptr ds : [public_6fb3000]
        mov ecx, dword ptr ss : [esp+0x14]
        add esp, 4
        mov dword ptr ds : [ecx+0x64], eax
        jmp public_6f199b8
/*FIXUP public_6f191ec : nop
        push offset public_6fb89f0 @0x6f191ec*/
  FIXUP public_6f191ec : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb89f0
        mov ecx, ebx
        call esi
        test al, al
        mov ecx, ebx
        je public_6f19212
        push 0
        call dword ptr ds : [public_6fb3040]
        mov ecx, dword ptr ss : [esp+0x10]
        mov byte ptr ds : [ecx+0x48], al
        mov byte ptr ds : [ecx+0x49], al
        jmp public_6f199b8
/*FIXUP public_6f19212 : nop
        push offset public_6fb8c14 @0x6f19212*/
  FIXUP public_6f19212 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb8c14
        call esi
        test al, al
        mov ecx, ebx
        je public_6f19275
        push 0
        call dword ptr ds : [public_6fb3048]
        push eax
        lea edx, ss:[esp+0x4C]
        push edx
        call dword ptr ds : [public_6fb3694]
        add esp, 8
        test eax, eax
        jne public_6f199b8
        push 1
        mov ecx, ebx
        call dword ptr ds : [public_6fb3044]
        call public_6fa9130
        mov ecx, dword ptr ss : [esp+0x48]
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x50], eax
        lea eax, ss:[esp+0x4C]
        mov dword ptr ss : [esp+0x4C], ecx
        lea ecx, ds:[edx+0x6C]
        mov edx, dword ptr ds : [ecx+8]
        push eax
        push 1
        push edx
        call public_6f96770
        jmp public_6f199b8
/*FIXUP public_6f19275 : nop
        push offset public_6fb8c08 @0x6f19275*/
  FIXUP public_6f19275 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb8c08
        call esi
        test al, al
        mov ecx, ebx
        je public_6f1929c
        push 0
        call dword ptr ds : [public_6fb3020]
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx+0x7C], eax
        mov dword ptr ds : [ecx+0x80], eax
        jmp public_6f199b8
/*FIXUP public_6f1929c : nop
        push offset public_6fb89b8 @0x6f1929c*/
  FIXUP public_6f1929c : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb89b8
        call esi
        test al, al
        mov ecx, ebx
        je public_6f192c0
        push 0
        call dword ptr ds : [public_6fb3044]
        mov eax, dword ptr ss : [esp+0x10]
        fstp dword ptr ds : [eax+0x84]
        jmp public_6f199b8
/*FIXUP public_6f192c0 : nop
        push offset public_6fb45ac @0x6f192c0*/
  FIXUP public_6f192c0 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb45ac
        call esi
        test al, al
        mov ecx, ebx
        je public_6f19309
        push 0
        call dword ptr ds : [public_6fb3048]
        push eax
        lea ecx, ss:[esp+0x48]
        push ecx
        call dword ptr ds : [public_6fb3628]
        add esp, 8
        test eax, eax
        jne public_6f199b8
        lea edx, ss:[esp+0x44]
        push edx
        call public_6f75f30
        add esp, 4
        test eax, eax
        je public_6f199b8
        mov dword ptr ss : [ebp+0x34], eax
        jmp public_6f199b8
/*FIXUP public_6f19309 : nop
        push offset public_6fb898c @0x6f19309*/
  FIXUP public_6f19309 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb898c
        call esi
        test al, al
        mov ecx, ebx
        je public_6f19350
        push 1
        call dword ptr ds : [public_6fb3044]
        fstp qword ptr ss : [esp+0x18]
        push 0
        mov ecx, ebx
        call dword ptr ds : [public_6fb3044]
        fstp qword ptr ss : [esp+0x20]
        push 2
        mov ecx, ebx
        call dword ptr ds : [public_6fb3044]
        fld qword ptr ss : [esp+0x20]
        fstp dword ptr ss : [ebp+0x5C]
        fld qword ptr ss : [esp+0x18]
        fstp dword ptr ss : [ebp+0x60]
        fstp dword ptr ss : [ebp+0x64]
        jmp public_6f199b8
/*FIXUP public_6f19350 : nop
        push offset public_6fb8c00 @0x6f19350*/
  FIXUP public_6f19350 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb8c00
        call esi
        test al, al
        mov ecx, ebx
        je public_6f193c4
        push 0
        mov byte ptr ss : [ebp+0xA4], 1
        call dword ptr ds : [public_6fb3044]
        fmul dword ptr ds : [public_6fb6060]
        push 1
        mov ecx, ebx
        fstp dword ptr ss : [ebp+0x68]
        call dword ptr ds : [public_6fb3048]
        test eax, eax
        jne public_6f1938b
        mov dword ptr ss : [ebp+0x6C], eax
        mov byte ptr ss : [ebp+0x70], al
        jmp public_6f1939d
        public_6f1938b : nop
        push eax
        lea eax, ss:[ebp+0x70]
        push 0x30
        push eax
        call public_6ea9f40
        add esp, 0xC
        mov dword ptr ss : [ebp+0x6C], eax
        public_6f1939d : nop
        push 2
        mov ecx, ebx
        call dword ptr ds : [public_6fb306c]
        test al, al
        jne public_6f199b8
        push 2
        mov ecx, ebx
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [ebp+0xA0]
        jmp public_6f199b8
/*FIXUP public_6f193c4 : nop
        push offset public_6fb8980 @0x6f193c4*/
  FIXUP public_6f193c4 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb8980
        call esi
        test al, al
        mov ecx, ebx
        je public_6f194b0
        push 2
        call dword ptr ds : [public_6fb3044]
        fstp qword ptr ss : [esp+0xE8]
        push 1
        mov ecx, ebx
        call dword ptr ds : [public_6fb3044]
        fstp qword ptr ss : [esp+0x18]
        push 0
        mov ecx, ebx
        call dword ptr ds : [public_6fb3044]
        fstp qword ptr ss : [esp+0x20]
        push 3
        mov ecx, ebx
        call dword ptr ds : [public_6fb3044]
        fld qword ptr ss : [esp+0x20]
        fld qword ptr ss : [esp+0x18]
        mov byte ptr ss : [ebp+0xA5], 1
        fld qword ptr ss : [esp+0xE8]
        mov eax, dword ptr ds : [public_6fd070c]
        test eax, eax
        fstp dword ptr ss : [esp+0x34]
        fld st(1)
        fmul st, st(2)
        fld st(3)
        fmul st, st(4)
        faddp 
        fld dword ptr ss : [esp+0x34]
        fmul dword ptr ss : [esp+0x34]
        faddp 
        fld st(1)
        fmul st, st(2)
        faddp 
        fsqrt 
        fdivr dword ptr ds : [public_6fb5810]
        fstp dword ptr ss : [esp+0x18]
        fxch 
        fmul dword ptr ss : [esp+0x18]
        fstp dword ptr ss : [esp+0x2C]
        fmul dword ptr ss : [esp+0x18]
        fstp dword ptr ss : [esp+0x30]
        fld dword ptr ss : [esp+0x34]
        fmul dword ptr ss : [esp+0x18]
        fstp dword ptr ss : [esp+0x34]
        fld dword ptr ss : [esp+0x18]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x38]
        fstp st(0)
        jne public_6f19487
        call public_6fa8fa0
        mov dword ptr ds : [public_6fd070c], eax
        public_6f19487 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x2C]
        push edx
        lea edx, ss:[esp+0x1B4]
        push edx
        push eax
        call dword ptr ds : [ecx+0x54]
        lea edi, ss:[ebp+0x38]
        mov ecx, 9
        lea esi, ss:[esp+0x1B0]
        rep movsd
        jmp public_6f199b8
/*FIXUP public_6f194b0 : nop
        push offset public_6fb8944 @0x6f194b0*/
  FIXUP public_6f194b0 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb8944
        call esi
        test al, al
        je public_6f19544
        mov eax, dword ptr ss : [ebp+0xEC]
        cmp eax, dword ptr ss : [ebp+0xF0]
        je public_6f194e9
        lea ecx, ds:[ecx]
        public_6f194d0 : nop
        mov dword ptr ds : [eax+0x84], 0
        mov ecx, dword ptr ss : [ebp+0xF0]
        add eax, 0x88
        cmp eax, ecx
        jne public_6f194d0
        public_6f194e9 : nop
        push 0
        mov ecx, ebx
        call dword ptr ds : [public_6fb3048]
        test eax, eax
        jne public_6f19505
        mov dword ptr ss : [ebp+0xA8], eax
        mov byte ptr ss : [ebp+0xAC], al
        jmp public_6f1951d
        public_6f19505 : nop
        push eax
        lea eax, ss:[ebp+0xAC]
        push 0x30
        push eax
        call public_6ea9f40
        add esp, 0xC
        mov dword ptr ss : [ebp+0xA8], eax
        public_6f1951d : nop
        push 1
        mov ecx, ebx
        call dword ptr ds : [public_6fb306c]
        test al, al
        jne public_6f199b8
        push 1
        mov ecx, ebx
        call dword ptr ds : [public_6fb3020]
        mov dword ptr ss : [ebp+0xE0], eax
        jmp public_6f199b8
/*FIXUP public_6f19544 : nop
        push offset public_6fb79a8 @0x6f19544*/
  FIXUP public_6f19544 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb79a8
        mov ecx, ebx
        call esi
        test al, al
        je public_6f195bb
        mov eax, dword ptr ss : [esp+0x10]
        test eax, eax
        je public_6f1959c
        mov eax, dword ptr ss : [ebp+0xF0]
        lea esi, ss:[ebp+0xE8]
        lea ecx, ds:[eax-0x88]
        push ecx
        push eax
        add ecx, 0x88
        push ecx
        call public_6ed2860
        mov eax, dword ptr ds : [esi+8]
        add esp, 0xC
        push eax
        add eax, 0xFFFFFF78
        push eax
        mov ecx, esi
        call public_6ed03d0
        add dword ptr ds : [esi+8], 0xFFFFFF78
        mov dword ptr ss : [esp+0x10], 0
        public_6f1959c : nop
        push 0
        mov ecx, ebx
        call dword ptr ds : [public_6fb3048]
        push eax
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ss : [ebp+0xE4], eax
        jmp public_6f199b8
/*FIXUP public_6f195bb : nop
        push offset public_6fb8bf8 @0x6f195bb*/
  FIXUP public_6f195bb : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb8bf8
        mov ecx, ebx
        call esi
        test al, al
        je public_6f199b8
        mov eax, dword ptr ss : [esp+0x10]
        test eax, eax
        je public_6f19633
        mov edi, dword ptr ss : [ebp+0xF0]
        lea eax, ds:[edi-0x88]
        lea esi, ds:[eax+0x88]
        cmp esi, edi
        je public_6f1960a
        mov ebp, eax
        sub ebp, esi
        mov edi, edi
        public_6f195f0 : nop
        push esi
        lea ecx, ds:[esi+ebp]
        call public_6ed34e0
        add esi, 0x88
        cmp esi, edi
        jne public_6f195f0
        mov ebp, dword ptr ss : [esp+0x1E8]
        public_6f1960a : nop
        mov eax, dword ptr ss : [ebp+0xF0]
        lea esi, ss:[ebp+0xE8]
        push eax
        add eax, 0xFFFFFF78
        push eax
        mov ecx, esi
        call public_6ed03d0
        add dword ptr ds : [esi+8], 0xFFFFFF78
        mov dword ptr ss : [esp+0x10], 0
        public_6f19633 : nop
        push 0
        mov ecx, ebx
        call dword ptr ds : [public_6fb3048]
        xor ecx, ecx
        cmp eax, ecx
        mov dword ptr ss : [esp+0x17C], ecx
        mov byte ptr ss : [esp+0x180], cl
        jne public_6f19661
        mov dword ptr ss : [esp+0x17C], ecx
        mov byte ptr ss : [esp+0x180], cl
        jmp public_6f1967b
        public_6f19661 : nop
        push eax
        lea ecx, ss:[esp+0x184]
        push 0x30
        push ecx
        call public_6ea9f40
        add esp, 0xC
        mov dword ptr ss : [esp+0x17C], eax
        public_6f1967b : nop
        mov edx, dword ptr ss : [esp+0x1EC]
        mov eax, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [eax]
        cmp edx, eax
        mov dword ptr ss : [esp+0x20], eax
        mov dword ptr ss : [esp+0x18], edx
        je public_6f199b8
        jmp public_6f196a0
        public_6f19699 : nop
        mov edx, dword ptr ss : [esp+0x18]
        lea ecx, ds:[ecx]
        public_6f196a0 : nop
        lea edi, ds:[edx+0xC]
        test edi, edi
        jne public_6f196b0
        mov ecx, dword ptr ss : [esp+0x17C]
        jmp public_6f196e4
        public_6f196b0 : nop
        lea esi, ss:[esp+0x180]
        public_6f196b7 : nop
        mov al, byte ptr ds : [esi]
        mov cl, al
        cmp al, byte ptr ds : [edi]
        jne public_6f196db
        test cl, cl
        je public_6f196d7
        mov al, byte ptr ds : [esi+1]
        mov cl, al
        cmp al, byte ptr ds : [edi+1]
        jne public_6f196db
        add esi, 2
        add edi, 2
        test cl, cl
        jne public_6f196b7
        public_6f196d7 : nop
        xor ecx, ecx
        jmp public_6f196e0
        public_6f196db : nop
        sbb ecx, ecx
        sbb ecx, 0xFFFFFFFF
        public_6f196e0 : nop
        mov eax, dword ptr ss : [esp+0x20]
        public_6f196e4 : nop
        test ecx, ecx
        sete cl
        test cl, cl
        jne public_6f196fc
        mov ecx, dword ptr ds : [edx]
        cmp ecx, eax
        mov dword ptr ss : [esp+0x18], ecx
        jne public_6f19699
        jmp public_6f199b8
        public_6f196fc : nop
        mov ebp, dword ptr ds : [edx+0xF4]
        mov dl, byte ptr ss : [ebp+0x3C]
        lea esi, ss:[ebp+4]
        mov ecx, 0xD
        lea edi, ss:[esp+0x58]
        rep movsd
        mov ecx, dword ptr ss : [ebp+0x38]
        xor edi, edi
        push edi
        mov dword ptr ss : [esp+0x90], ecx
        push edi
        lea ecx, ss:[esp+0x98]
        mov byte ptr ss : [esp+0x98], dl
        call public_6f93790
        mov esi, dword ptr ss : [ebp+0x40]
        lea ecx, ss:[esp+0xE0]
        mov dword ptr ss : [esp+0x94], eax
        mov dword ptr ss : [esp+0x98], edi
        mov eax, dword ptr ds : [esi]
        push ecx
        lea ecx, ss:[esp+0x94]
        mov dword ptr ss : [esp+0x24], eax
        call public_6f1df30
        mov edx, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [eax]
        push esi
        push edx
        push eax
        lea ecx, ss:[esp+0x9C]
        call public_6ed0230
        mov cl, byte ptr ss : [ebp+0x48]
        mov dl, byte ptr ss : [ebp+0x49]
        mov eax, dword ptr ss : [ebp+0x4C]
        mov byte ptr ss : [esp+0x9C], cl
        mov cl, byte ptr ss : [ebp+0x50]
        mov byte ptr ss : [esp+0xA4], cl
        lea ecx, ss:[esp+0x17]
        mov byte ptr ss : [esp+0x9D], dl
        mov edx, dword ptr ss : [ebp+0x54]
        mov dword ptr ss : [esp+0xA0], eax
        lea eax, ss:[esp+0xAC]
        push ecx
        lea ecx, ss:[esp+0xB0]
        mov dword ptr ss : [esp+0x1E0], 9
        mov dword ptr ss : [esp+0xAC], edx
        mov dword ptr ss : [esp+0x24], eax
        call public_6f93460
        lea edx, ss:[ebp+0x58]
        push edx
        lea ecx, ss:[esp+0xB0]
        mov byte ptr ss : [esp+0x1E0], 0xA
        call public_6f20230
        mov ecx, dword ptr ss : [ebp+0x68]
        cmp ecx, edi
        mov eax, dword ptr ss : [ebp+0x64]
        mov byte ptr ss : [esp+0x1DC], 0xB
        mov dword ptr ss : [esp+0xB8], eax
        mov dword ptr ss : [esp+0xBC], ecx
        je public_6f19809
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx]
        public_6f19809 : nop
        lea eax, ss:[ebp+0x6C]
        push eax
        lea ecx, ss:[esp+0xC4]
        mov byte ptr ss : [esp+0x1E0], 0xC
        call public_6f55880
        mov ecx, dword ptr ss : [ebp+0x7C]
        mov edx, dword ptr ss : [ebp+0x80]
        mov eax, dword ptr ss : [ebp+0x84]
        mov esi, offset public_6fb60a8
        mov dword ptr ss : [esp+0xD0], ecx
        mov dword ptr ss : [esp+0xD4], edx
        mov dword ptr ss : [esp+0xD8], eax
        mov dword ptr ss : [esp+0x54], esi
        mov ecx, dword ptr ss : [esp+0x1E8]
        mov eax, dword ptr ds : [ecx+0xF0]
        lea edx, ss:[esp+0x54]
        push edx
        add ecx, 0xE8
        push 1
        push eax
        mov dword ptr ss : [esp+0x1E8], 0xD
        call public_6ed12c0
        mov dword ptr ss : [esp+0x54], esi
        mov ecx, dword ptr ss : [esp+0xBC]
        cmp ecx, edi
        mov dword ptr ss : [esp+0x1DC], 0x11
        je public_6f1989f
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0xBC], edi
        public_6f1989f : nop
        mov ecx, dword ptr ss : [esp+0xC4]
        push ecx
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0xC0]
        add esp, 4
        cmp ecx, edi
        mov dword ptr ss : [esp+0xC4], edi
        mov dword ptr ss : [esp+0xC8], edi
        mov dword ptr ss : [esp+0xCC], edi
        mov byte ptr ss : [esp+0x1DC], 0xF
        je public_6f198e3
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+4]
        mov dword ptr ss : [esp+0xBC], edi
        public_6f198e3 : nop
        lea eax, ss:[esp+0xAC]
        mov dword ptr ss : [esp+0x20], eax
        lea ecx, ss:[esp+0xAC]
        mov byte ptr ss : [esp+0x1DC], 0x12
        call public_6ed2a00
        lea ecx, ss:[esp+0xAC]
        mov byte ptr ss : [esp+0x1DC], 0xE
        call public_6f15350
        mov eax, dword ptr ss : [esp+0x94]
        mov ecx, dword ptr ds : [eax]
        push eax
        push ecx
        lea ecx, ss:[esp+0xF8]
        push ecx
        lea ecx, ss:[esp+0x9C]
        mov dword ptr ss : [esp+0x1E8], 0xFFFFFFFF
        call public_6fa8370
        mov edx, dword ptr ss : [esp+0x94]
        push edx
        call public_6fa8fe0
        mov ebp, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [ebp+4]
        mov ecx, dword ptr ss : [ebp]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ss : [ebp]
        mov eax, dword ptr ss : [ebp+4]
        lea esi, ss:[ebp+0xF0]
        mov dword ptr ds : [edx+4], eax
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [esi+4]
        add esp, 4
        push ecx
        push edx
        mov ecx, esi
        mov dword ptr ss : [esp+0x9C], edi
        mov dword ptr ss : [esp+0xA0], edi
        call public_6ed03d0
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6fa8fe0
        push ebp
        mov dword ptr ds : [esi+4], edi
        mov dword ptr ds : [esi+8], edi
        mov dword ptr ds : [esi+0xC], edi
        call public_6fa8fe0
        mov eax, dword ptr ss : [esp+0x1F4]
        mov ecx, dword ptr ds : [eax+8]
        mov ebp, dword ptr ss : [esp+0x1F0]
        add esp, 8
        dec ecx
        mov dword ptr ds : [eax+8], ecx
        public_6f199b8 : nop
        mov ecx, ebx
        call dword ptr ds : [public_6fb3018]
        test al, al
        jne public_6f19078
        public_6f199c8 : nop
        mov ecx, dword ptr ss : [esp+0x1D4]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1D0
        ret 0xC
        UNREACHABLE_TRAP(0x6f18eb0)
    }
}

#undef public_6f19078
#undef public_6f190dd
#undef public_6f19106
#undef public_6f19127
#undef public_6f1916a
#undef public_6f191aa
#undef public_6f191ec
#undef public_6f19212
#undef public_6f19275
#undef public_6f1929c
#undef public_6f192c0
#undef public_6f19309
#undef public_6f19350
#undef public_6f1938b
#undef public_6f1939d
#undef public_6f193c4
#undef public_6f19487
#undef public_6f194b0
#undef public_6f194d0
#undef public_6f194e9
#undef public_6f19505
#undef public_6f1951d
#undef public_6f19544
#undef public_6f1959c
#undef public_6f195bb
#undef public_6f195f0
#undef public_6f1960a
#undef public_6f19633
#undef public_6f19661
#undef public_6f1967b
#undef public_6f19699
#undef public_6f196a0
#undef public_6f196b0
#undef public_6f196b7
#undef public_6f196d7
#undef public_6f196db
#undef public_6f196e0
#undef public_6f196e4
#undef public_6f196fc
#undef public_6f19809
#undef public_6f1989f
#undef public_6f198e3
#undef public_6f199b8
#undef public_6f199c8
