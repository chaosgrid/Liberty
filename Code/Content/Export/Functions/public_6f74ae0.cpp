#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea9f40);
CLANG_FORWARD_PROC_SYMBOL(public_6eb7810);
CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef3830);
CLANG_FORWARD_PROC_SYMBOL(public_6ef9dd0);
CLANG_FORWARD_PROC_SYMBOL(public_6efc7a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f1df30);
CLANG_FORWARD_PROC_SYMBOL(public_6f1f4f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f205e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f24280);
CLANG_FORWARD_PROC_SYMBOL(public_6f594c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f74ae0);
CLANG_FORWARD_PROC_SYMBOL(public_6f76380);
CLANG_FORWARD_PROC_SYMBOL(public_6f76b10);
CLANG_FORWARD_PROC_SYMBOL(public_6f792a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f79780);
CLANG_FORWARD_PROC_SYMBOL(public_6f7a7b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f7a920);
CLANG_FORWARD_PROC_SYMBOL(public_6f7ac90);
CLANG_FORWARD_PROC_SYMBOL(public_6f7aee0);
CLANG_FORWARD_PROC_SYMBOL(public_6f7b880);
CLANG_FORWARD_PROC_SYMBOL(public_6f7bcc0);
CLANG_FORWARD_PROC_SYMBOL(public_6f7c260);
CLANG_FORWARD_PROC_SYMBOL(public_6f7c2a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f7c550);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa9000);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fb01bf);

#define public_6f74b59 _public_6f74b59
#define public_6f74bbd _public_6f74bbd
#define public_6f74bbf _public_6f74bbf
#define public_6f74bcd _public_6f74bcd
#define public_6f74be3 _public_6f74be3
#define public_6f74c7f _public_6f74c7f
#define public_6f74c9c _public_6f74c9c
#define public_6f74d0d _public_6f74d0d
#define public_6f74d15 _public_6f74d15
#define public_6f74d66 _public_6f74d66
#define public_6f74dac _public_6f74dac
#define public_6f74e30 _public_6f74e30
#define public_6f74e72 _public_6f74e72
#define public_6f74e91 _public_6f74e91
#define public_6f74eef _public_6f74eef
#define public_6f7503a _public_6f7503a
#define public_6f7506e _public_6f7506e
#define public_6f7508d _public_6f7508d
#define public_6f750b0 _public_6f750b0
#define public_6f750db _public_6f750db
#define public_6f75103 _public_6f75103
#define public_6f7513d _public_6f7513d
#define public_6f75164 _public_6f75164
#define public_6f75174 _public_6f75174
#define public_6f7520a _public_6f7520a
#define public_6f7521e _public_6f7521e
#define public_6f7523a _public_6f7523a
#define public_6f75249 _public_6f75249
#define public_6f7529f _public_6f7529f
#define public_6f752b0 _public_6f752b0
#define public_6f752dd _public_6f752dd
#define public_6f752e9 _public_6f752e9
#define public_6f752fd _public_6f752fd
#define public_6f75392 _public_6f75392
#define public_6f753a2 _public_6f753a2
#define public_6f753bd _public_6f753bd
#define public_6f753d5 _public_6f753d5
#define public_6f753df _public_6f753df
#define public_6f753f3 _public_6f753f3
#define public_6f75424 _public_6f75424
#define public_6f75450 _public_6f75450
#define public_6f7545f _public_6f7545f
#define public_6f75469 _public_6f75469
#define public_6f75480 _public_6f75480
#define public_6f75493 _public_6f75493
#define public_6f7551b _public_6f7551b
#define public_6f75520 _public_6f75520
#define public_6f75548 _public_6f75548
#define public_6f7554c _public_6f7554c
#define public_6f755b8 _public_6f755b8
#define public_6f755c1 _public_6f755c1
#define public_6f75634 _public_6f75634
#define public_6f75645 _public_6f75645
#define public_6f75656 _public_6f75656
#define public_6f75679 _public_6f75679
#define public_6f75696 _public_6f75696

PROC_DECLARE(0x6f74ae0, internal_6f74ae0, public_6f74ae0);
extern "C" NAKED register_t __cdecl internal_6f74ae0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        push 0xFFFFFFFF
/*FIXUP push public_6fb01bf @0x6f74ae8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fb01bf
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        mov eax, 0x2D94
        call public_6fa9000
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+0x4C]
        xor esi, esi
        cmp eax, esi
        lea ecx, ds:[eax+1]
        mov dword ptr ss : [esp+0x10], edi
        mov dword ptr ds : [edi+0x4C], ecx
        jne public_6f75696
        lea ecx, ss:[esp+0x2D0]
        call dword ptr ds : [public_6fb300c]
        mov ebx, dword ptr ss : [ebp+8]
        cmp ebx, esi
        mov dword ptr ss : [esp+0x2DAC], esi
        jne public_6f74b59
        lea edx, ds:[edi+0x48]
        push edx
        lea eax, ss:[esp+0x2D4]
        push eax
        lea ebx, ss:[esp+0x2D8]
        call dword ptr ds : [public_6fb359c]
        add esp, 8
        public_6f74b59 : nop
        mov cl, byte ptr ss : [esp+0xD]
        mov dl, byte ptr ss : [esp+0xD]
        mov byte ptr ss : [esp+0x24], cl
        lea ecx, ss:[esp+0x24]
        mov dword ptr ds : [edi+0x84], esi
        mov byte ptr ss : [esp+0x25], dl
        mov byte ptr ss : [esp+0x30], 0
        call public_6f7c2a0
        mov al, byte ptr ss : [ebp+0xC]
        test al, al
        mov byte ptr ss : [esp+0x2DAC], 1
        je public_6f74bcd
        push 0x14
        call public_6fa912a
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x18], esi
        test esi, esi
        mov byte ptr ss : [esp+0x2DAC], 2
        je public_6f74bbd
        lea eax, ss:[esp+0xD]
        push eax
        push 0
        lea ecx, ss:[esp+0x17]
        push ecx
        mov ecx, esi
        call public_6f1f4f0
        jmp public_6f74bbf
        public_6f74bbd : nop
        xor esi, esi
        public_6f74bbf : nop
        mov byte ptr ss : [esp+0x2DAC], 1
        mov dword ptr ds : [edi+0x120], esi
        public_6f74bcd : nop
        mov ecx, ebx
        call dword ptr ds : [public_6fb3024]
        test al, al
        je public_6f752fd
        mov esi, dword ptr ds : [public_6fb3048]
/*FIXUP public_6f74be3 : nop
        push offset public_6fb93a4 @0x6f74be3*/
  FIXUP public_6f74be3 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb93a4
        mov ecx, ebx
        call dword ptr ds : [public_6fb301c]
        test al, al
        jne public_6f7529f
/*FIXUP push offset public_6fbbf24 @0x6f74bf8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbbf24
        mov ecx, ebx
        call dword ptr ds : [public_6fb301c]
        test al, al
        jne public_6f7529f
        mov al, byte ptr ss : [ebp+0xC]
        test al, al
        je public_6f74dac
/*FIXUP push offset public_6fbbf78 @0x6f74c18*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbbf78
        mov ecx, ebx
        call dword ptr ds : [public_6fb301c]
        test al, al
        je public_6f74dac
        mov edi, dword ptr ds : [public_6fb3018]
        mov ecx, ebx
        call edi
        mov ecx, ebx
        call dword ptr ds : [public_6fb3054]
        push eax
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov ecx, ebx
        mov dword ptr ss : [esp+0x44], eax
        call edi
        xor edi, edi
        mov ecx, ebx
        mov dword ptr ss : [esp+0x1C8], edi
        mov byte ptr ss : [esp+0x1CC], 0
        call dword ptr ds : [public_6fb3054]
        cmp eax, edi
        jne public_6f74c7f
        mov dword ptr ss : [esp+0x1C8], edi
        mov byte ptr ss : [esp+0x1CC], 0
        jmp public_6f74c9c
        public_6f74c7f : nop
        push eax
        lea edx, ss:[esp+0x1D0]
        push 0x104
        push edx
        call public_6ea9f40
        add esp, 0xC
        mov dword ptr ss : [esp+0x1C8], eax
        public_6f74c9c : nop
        lea ecx, ss:[esp+0x1838]
        call dword ptr ds : [public_6fb300c]
        lea eax, ss:[esp+0x1838]
        push eax
        lea ecx, ss:[esp+0x1D0]
        push ecx
        mov byte ptr ss : [esp+0x2DB4], 3
        call public_6f24280
        add esp, 8
        test al, al
        je public_6f74d66
        push 0x4C
        call public_6fa912a
        add esp, 4
        mov dword ptr ss : [esp+0x18], eax
        test eax, eax
        mov byte ptr ss : [esp+0x2DAC], 4
        je public_6f74d0d
        mov edx, dword ptr ss : [esp+0x10]
        add edx, 0x48
        push edx
        lea ecx, ss:[esp+0x48]
        push ecx
        lea edx, ss:[esp+0x1840]
        push edx
        mov ecx, eax
        call public_6ef3830
        mov dword ptr ss : [esp+0x14], eax
        jmp public_6f74d15
        public_6f74d0d : nop
        mov dword ptr ss : [esp+0x14], 0
        public_6f74d15 : nop
        mov eax, dword ptr ss : [esp+0x44]
        mov ecx, dword ptr ss : [esp+0x10]
        mov edi, dword ptr ds : [ecx+0x120]
        lea edx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x1C], eax
        push edx
        lea eax, ss:[esp+0x20]
        push eax
        lea ecx, ss:[esp+0x180]
        mov byte ptr ss : [esp+0x2DB4], 3
        mov dword ptr ss : [esp+0x20], 0
        call public_6f7ac90
        push eax
        lea ecx, ss:[esp+0x174]
        push ecx
        mov ecx, edi
        call public_6f7a7b0
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax+0x10], edx
        public_6f74d66 : nop
        lea ecx, ss:[esp+0x2C60]
        mov byte ptr ss : [esp+0x2DAC], 5
        call dword ptr ds : [public_6fb3268]
        lea ecx, ss:[esp+0x1838]
        mov byte ptr ss : [esp+0x2DAC], 6
        call dword ptr ds : [public_6fb304c]
        push 1
        lea ecx, ss:[esp+0x183C]
        mov byte ptr ss : [esp+0x2DB0], 1
        call dword ptr ds : [public_6fb32f8]
        jmp public_6f752e9
/*FIXUP public_6f74dac : nop
        push offset public_6fbbf3c @0x6f74dac*/
  FIXUP public_6f74dac : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbbf3c
        mov ecx, ebx
        call dword ptr ds : [public_6fb301c]
        test al, al
        je public_6f752e9
        xor edi, edi
        lea ecx, ss:[esp+0x80]
        mov dword ptr ss : [esp+0x70], edi
        call public_6efc7a0
        mov ecx, ebx
        mov dword ptr ss : [esp+0xAC], edi
        mov dword ptr ss : [esp+0xA8], edi
        mov dword ptr ss : [esp+0xA4], edi
        mov dword ptr ss : [esp+0xB0], edi
        mov dword ptr ss : [esp+0xB4], edi
        mov byte ptr ss : [esp+0xF], 0
        mov byte ptr ss : [esp+0xD], 0
        mov byte ptr ss : [esp+0xE], 0
        mov dword ptr ss : [esp+0x20], edi
        mov dword ptr ss : [esp+0x18], edi
        mov dword ptr ss : [esp+0x180], edi
        mov byte ptr ss : [esp+0x184], 0
        call dword ptr ds : [public_6fb3018]
        test al, al
        je public_6f752e9
        lea esp, ss:[esp]
/*FIXUP public_6f74e30 : nop
        push offset public_6fb445c @0x6f74e30*/
  FIXUP public_6f74e30 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb445c
        mov ecx, ebx
        call dword ptr ds : [public_6fb3014]
        test al, al
        mov ecx, ebx
        je public_6f74e91
        push 0
        call esi
        push eax
        call dword ptr ds : [public_6fb3684]
        add esp, 4
        push 0
        mov ecx, ebx
        mov dword ptr ss : [esp+0x74], eax
        call esi
        test eax, eax
        jne public_6f74e72
        mov dword ptr ss : [esp+0x180], eax
        mov byte ptr ss : [esp+0x184], al
        jmp public_6f75164
        public_6f74e72 : nop
        push eax
        lea eax, ss:[esp+0x188]
        push 0x40
        push eax
        call public_6ea9f40
        add esp, 0xC
        mov dword ptr ss : [esp+0x180], eax
        jmp public_6f75164
/*FIXUP public_6f74e91 : nop
        push offset public_6fb7b50 @0x6f74e91*/
  FIXUP public_6f74e91 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb7b50
        call dword ptr ds : [public_6fb3014]
        test al, al
        mov ecx, ebx
        je public_6f74eef
        push 2
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [esp+0x14]
        push 1
        mov ecx, ebx
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [esp+0x1C]
        push 0
        mov ecx, ebx
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [esp+0x64]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x64]
        mov dword ptr ss : [esp+0x68], ecx
        mov dword ptr ss : [esp+0x6C], edx
        mov dword ptr ss : [esp+0x74], eax
        mov dword ptr ss : [esp+0x78], ecx
        mov dword ptr ss : [esp+0x7C], edx
        jmp public_6f75164
/*FIXUP public_6f74eef : nop
        push offset public_6fbbf70 @0x6f74eef*/
  FIXUP public_6f74eef : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbbf70
        call dword ptr ds : [public_6fb3014]
        test al, al
        mov ecx, ebx
        je public_6f7503a
        push 2
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [esp+0x1C]
        push 1
        mov ecx, ebx
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [esp+0x14]
        push 0
        mov ecx, ebx
        call dword ptr ds : [public_6fb3044]
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ds : [public_6fb6060]
        sub esp, 0xC
        lea ecx, ss:[esp+0x64]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ds : [public_6fb6060]
        fstp dword ptr ss : [esp+4]
        fmul dword ptr ds : [public_6fb6060]
        fstp dword ptr ss : [esp]
        call public_6eb7810
        fld dword ptr ss : [esp+0x58]
        mov ecx, 9
        fsin 
        lea esi, ss:[esp+0xF4]
        lea edi, ss:[esp+0x80]
        fld dword ptr ss : [esp+0x58]
        fcos 
        fld dword ptr ss : [esp+0x5C]
        fsin 
        fld dword ptr ss : [esp+0x5C]
        fcos 
        fstp qword ptr ss : [esp+0x38]
        fld dword ptr ss : [esp+0x60]
        fsin 
        fld dword ptr ss : [esp+0x60]
        fcos 
        fld st(2)
        fmul st, st(5)
        fld st(2)
        fmul st, st(5)
        fstp dword ptr ss : [esp+0x1C]
        fld st(1)
        fmul st, st(5)
        fstp dword ptr ss : [esp+0x14]
        fld st(1)
        fmul qword ptr ss : [esp+0x38]
        fstp dword ptr ss : [esp+0xF4]
        fld st(0)
        fmul st, st(2)
        fsub dword ptr ss : [esp+0x1C]
        fstp dword ptr ss : [esp+0xF8]
        fld dword ptr ss : [esp+0x14]
        fmul st, st(4)
        fld st(3)
        fmul st, st(7)
        faddp 
        fstp dword ptr ss : [esp+0xFC]
        fld st(2)
        fmul qword ptr ss : [esp+0x38]
        fstp dword ptr ss : [esp+0x100]
        fmul st, st(2)
        fadd dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [esp+0x104]
        fld dword ptr ss : [esp+0x1C]
        fmul st, st(3)
        fxch 
        fmul st, st(5)
        fsubp 
        fstp dword ptr ss : [esp+0x108]
        fstp st(0)
        fchs 
        fstp dword ptr ss : [esp+0x10C]
        fld qword ptr ss : [esp+0x38]
        fmul st, st(2)
        fstp dword ptr ss : [esp+0x110]
        fld qword ptr ss : [esp+0x38]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x114]
        fstp st(0)
        fstp st(0)
        rep movsd
        mov esi, dword ptr ds : [public_6fb3048]
        jmp public_6f75164
/*FIXUP public_6f7503a : nop
        push offset public_6fb8be4 @0x6f7503a*/
  FIXUP public_6f7503a : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb8be4
        call dword ptr ds : [public_6fb3014]
        test al, al
        mov ecx, ebx
        je public_6f750b0
        push 0
        call esi
        mov edi, dword ptr ds : [public_6fb3294]
        push eax
/*FIXUP push offset public_6fbbf60 @0x6f75056*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbbf60
        call edi
        add esp, 8
        test eax, eax
        jne public_6f7506e
        mov byte ptr ss : [esp+0xF], 1
        jmp public_6f75164
        public_6f7506e : nop
        push 0
        mov ecx, ebx
        call esi
        push eax
/*FIXUP push offset public_6fbb810 @0x6f75075*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbb810
        call edi
        add esp, 8
        test eax, eax
        jne public_6f7508d
        mov byte ptr ss : [esp+0xD], 1
        jmp public_6f75164
        public_6f7508d : nop
        push 0
        mov ecx, ebx
        call esi
        push eax
/*FIXUP push offset public_6fbb804 @0x6f75094*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbb804
        call edi
        add esp, 8
        test eax, eax
        jne public_6f75174
        mov byte ptr ss : [esp+0xE], 1
        jmp public_6f75164
/*FIXUP public_6f750b0 : nop
        push offset public_6fbbf54 @0x6f750b0*/
  FIXUP public_6f750b0 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbbf54
        call dword ptr ds : [public_6fb3014]
        test al, al
        mov ecx, ebx
        je public_6f750db
        push 0
        call esi
        push eax
        call dword ptr ds : [public_6fb3684]
        add esp, 4
        mov dword ptr ss : [esp+0xB0], eax
        jmp public_6f75164
/*FIXUP public_6f750db : nop
        push offset public_6fbbf48 @0x6f750db*/
  FIXUP public_6f750db : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbbf48
        call dword ptr ds : [public_6fb3014]
        test al, al
        mov ecx, ebx
        je public_6f75103
        push 0
        call esi
        push eax
        call dword ptr ds : [public_6fb3684]
        add esp, 4
        mov dword ptr ss : [esp+0xB4], eax
        jmp public_6f75164
/*FIXUP public_6f75103 : nop
        push offset public_6fb91f0 @0x6f75103*/
  FIXUP public_6f75103 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb91f0
        call dword ptr ds : [public_6fb3014]
        test al, al
        mov ecx, ebx
        je public_6f7513d
        push 0
        call esi
        push eax
        lea eax, ss:[esp+0x24]
        push eax
        call dword ptr ds : [public_6fb3628]
        add esp, 8
        push 1
        mov ecx, ebx
        call esi
        push eax
        call dword ptr ds : [public_6fb3684]
        add esp, 4
        mov dword ptr ss : [esp+0x18], eax
        jmp public_6f75164
/*FIXUP public_6f7513d : nop
        push offset public_6fb6194 @0x6f7513d*/
  FIXUP public_6f7513d : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6194
        call dword ptr ds : [public_6fb3014]
        test al, al
        je public_6f75164
        push 0
        mov ecx, ebx
        call esi
        push eax
        lea ecx, ss:[esp+0xBC]
        push ecx
        call dword ptr ds : [public_6fb361c]
        add esp, 8
        public_6f75164 : nop
        mov ecx, ebx
        call dword ptr ds : [public_6fb3018]
        test al, al
        jne public_6f74e30
        public_6f75174 : nop
        mov al, byte ptr ss : [esp+0xF]
        test al, al
        je public_6f7520a
        mov eax, dword ptr ss : [esp+0x70]
        mov edx, dword ptr ss : [esp+0x74]
        mov ecx, dword ptr ss : [esp+0x7C]
        mov dword ptr ss : [esp+0x128], edx
        mov dword ptr ss : [esp+0x120], eax
        mov dword ptr ss : [esp+0x124], eax
        mov eax, dword ptr ss : [esp+0x78]
        lea edx, ss:[esp+0x80]
        mov dword ptr ss : [esp+0x130], ecx
        push edx
        lea ecx, ss:[esp+0x138]
        mov dword ptr ss : [esp+0x130], eax
        call public_6f594c0
        mov eax, dword ptr ss : [esp+0xB0]
        mov ecx, dword ptr ss : [esp+0xB4]
        mov edx, dword ptr ss : [esp+0xB8]
        mov dword ptr ss : [esp+0x164], eax
        mov dword ptr ss : [esp+0x168], ecx
        lea eax, ss:[esp+0x120]
        push eax
        lea ecx, ss:[esp+0x11C]
        push ecx
        lea ecx, ss:[esp+0x2C]
        mov dword ptr ss : [esp+0x174], edx
        call public_6f7aee0
        public_6f7520a : nop
        mov cl, byte ptr ss : [esp+0xD]
        test cl, cl
        mov al, byte ptr ss : [esp+0xE]
        jne public_6f7521e
        test al, al
        je public_6f752e9
        public_6f7521e : nop
        test cl, cl
        mov edx, dword ptr ss : [esp+0x70]
        mov dword ptr ss : [esp+0xC4], edx
        je public_6f7523a
        mov dword ptr ss : [esp+0xC8], 1
        jmp public_6f75249
        public_6f7523a : nop
        neg al
        sbb eax, eax
        and eax, 3
        dec eax
        mov dword ptr ss : [esp+0xC8], eax
        public_6f75249 : nop
        mov ecx, dword ptr ss : [esp+0x78]
        mov edx, dword ptr ss : [esp+0x7C]
        mov eax, dword ptr ss : [esp+0x74]
        mov dword ptr ss : [esp+0xD0], ecx
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0xD4], edx
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0xDC], ecx
        lea ecx, ds:[edx+0x10C]
        mov dword ptr ss : [esp+0xCC], eax
        mov eax, dword ptr ss : [esp+0x20]
        lea edx, ss:[esp+0xC4]
        push edx
        mov dword ptr ss : [esp+0xDC], eax
        mov eax, dword ptr ds : [ecx+8]
        push 1
        push eax
        call public_6f7bcc0
        jmp public_6f752e9
        public_6f7529f : nop
        mov ecx, ebx
        call dword ptr ds : [public_6fb3018]
        test al, al
        je public_6f752e9
        nop 
        lea esp, ss:[esp]
/*FIXUP public_6f752b0 : nop
        push offset public_6fb4518 @0x6f752b0*/
  FIXUP public_6f752b0 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb4518
        mov ecx, ebx
        call dword ptr ds : [public_6fb3014]
        test al, al
        je public_6f752dd
        mov ecx, ebx
        call dword ptr ds : [public_6fb3054]
        push eax
        mov eax, dword ptr ss : [esp+0x14]
        add eax, 0x84
        push eax
        call dword ptr ds : [public_6fb361c]
        add esp, 8
        public_6f752dd : nop
        mov ecx, ebx
        call dword ptr ds : [public_6fb3018]
        test al, al
        jne public_6f752b0
        public_6f752e9 : nop
        mov ecx, ebx
        call dword ptr ds : [public_6fb3024]
        test al, al
        jne public_6f74be3
        mov edi, dword ptr ss : [esp+0x10]
        public_6f752fd : nop
        mov bl, byte ptr ss : [ebp+0xC]
        mov cl, byte ptr ss : [esp+0xD]
        xor eax, eax
        mov byte ptr ss : [esp+0xE8], bl
        mov dword ptr ss : [esp+0xE0], offset public_6fbbf44
        mov byte ptr ss : [esp+0x48], cl
        mov dword ptr ss : [esp+0x4C], eax
        mov dword ptr ss : [esp+0x50], eax
        mov dword ptr ss : [esp+0x54], eax
        lea edx, ss:[esp+0x48]
        lea ecx, ss:[esp+0xE0]
        mov dword ptr ss : [esp+0xF0], edx
        push ecx
        lea edx, ds:[edi+0x48]
        lea eax, ds:[edi+0x60]
        push edx
        mov byte ptr ss : [esp+0x2DB4], 7
        mov dword ptr ss : [esp+0xF4], eax
        mov dword ptr ss : [esp+0xEC], edi
        call dword ptr ds : [public_6fb3478]
        add esp, 8
        test bl, bl
        je public_6f753df
        mov esi, dword ptr ds : [edi+0x120]
        test esi, esi
        mov dword ptr ss : [esp+0x18], esi
        je public_6f753d5
        lea eax, ss:[esp+0x10]
        push eax
        mov ecx, esi
        mov byte ptr ss : [esp+0x2DB0], 8
        call public_6f1df30
        mov ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, ecx
        je public_6f753bd
        public_6f75392 : nop
        mov eax, dword ptr ds : [eax+0x10]
        test eax, eax
        je public_6f753a2
        push 1
        mov ecx, eax
        call public_6f792a0
        public_6f753a2 : nop
        push 0
        lea ecx, ss:[esp+0x24]
        push ecx
        lea ecx, ss:[esp+0x18]
        call public_6f7b880
        mov ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, ecx
        jne public_6f75392
        public_6f753bd : nop
        mov ecx, esi
        mov byte ptr ss : [esp+0x2DAC], 7
        call public_6f79780
        push esi
        call public_6fa8fe0
        add esp, 4
        public_6f753d5 : nop
        mov dword ptr ds : [edi+0x120], 0
        public_6f753df : nop
        lea ebx, ds:[edi+0x70]
        mov ecx, ebx
        call public_6f7a920
        mov esi, dword ptr ds : [edi+0x64]
        mov eax, dword ptr ds : [edi+0x68]
        cmp esi, eax
        je public_6f75424
        public_6f753f3 : nop
        mov edx, dword ptr ds : [esi]
        lea eax, ss:[esp+0x38]
        push eax
        lea ecx, ss:[esp+0x11C]
        push ecx
        mov ecx, ebx
        mov dword ptr ss : [esp+0x40], edx
        mov dword ptr ss : [esp+0x44], 0
        call public_6f7a7b0
        mov eax, dword ptr ds : [eax]
        mov dword ptr ds : [eax+0x10], esi
        mov eax, dword ptr ds : [edi+0x68]
        add esi, 0x5C
        cmp esi, eax
        jne public_6f753f3
        public_6f75424 : nop
        lea edx, ss:[esp+0x48]
        push edx
        mov ecx, edi
        call public_6f76380
        lea eax, ss:[esp+0x24]
        push eax
        mov ecx, edi
        call public_6f76b10
        mov al, byte ptr ss : [ebp+0xC]
        test al, al
        je public_6f75469
        mov esi, dword ptr ds : [edi+0x64]
        cmp esi, dword ptr ds : [edi+0x68]
        je public_6f75469
        nop 
        lea esp, ss:[esp]
        public_6f75450 : nop
        mov al, byte ptr ds : [esi+0x21]
        test al, al
        je public_6f7545f
        lea ecx, ds:[esi+0x18]
        call public_6ef9dd0
        public_6f7545f : nop
        mov eax, dword ptr ds : [edi+0x68]
        add esi, 0x5C
        cmp esi, eax
        jne public_6f75450
        public_6f75469 : nop
        mov edi, dword ptr ss : [esp+0x50]
        mov esi, dword ptr ss : [esp+0x4C]
        cmp esi, edi
        mov byte ptr ss : [esp+0x2DAC], 1
        je public_6f75493
        lea ecx, ds:[ecx]
        public_6f75480 : nop
        lea ecx, ds:[esi+8]
        call public_6eec8d0
        add esi, 0x38
        cmp esi, edi
        jne public_6f75480
        mov esi, dword ptr ss : [esp+0x4C]
        public_6f75493 : nop
        push esi
        call public_6fa8fe0
        mov edi, dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ss : [esp+0x38]
        xor esi, esi
        mov dword ptr ss : [esp+0x50], esi
        mov dword ptr ss : [esp+0x54], esi
        mov dword ptr ss : [esp+0x58], esi
        mov ecx, dword ptr ds : [edi]
        add esp, 4
        cmp eax, esi
        mov byte ptr ss : [esp+0x2DAC], 0
        mov dword ptr ss : [esp+0x10], ecx
        je public_6f7551b
        lea ecx, ss:[esp+0x20]
        push ecx
        lea ecx, ss:[esp+0x28]
        call public_6f1df30
        mov ecx, dword ptr ss : [esp+0x10]
        cmp ecx, dword ptr ds : [eax]
        jne public_6f7551b
        mov eax, dword ptr ss : [esp+0x28]
        cmp edi, eax
        jne public_6f7551b
        mov edx, dword ptr ds : [eax+4]
        push edx
        lea ecx, ss:[esp+0x28]
        call public_6f7c260
        mov eax, dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ss : [esp+0x2C]
        mov dword ptr ds : [eax+4], ecx
        mov eax, dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0x34], esi
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ss : [esp+0x28]
        lea edx, ss:[esp+0x18]
        push edx
        lea ecx, ss:[esp+0x28]
        mov dword ptr ds : [eax+8], eax
        call public_6f1df30
        jmp public_6f7554c
        public_6f7551b : nop
        cmp ecx, edi
        je public_6f75548
        nop 
        public_6f75520 : nop
        push esi
        lea eax, ss:[esp+0x24]
        push eax
        lea ecx, ss:[esp+0x18]
        call public_6f7c550
        mov ecx, dword ptr ds : [eax]
        push ecx
        lea edx, ss:[esp+0x20]
        push edx
        lea ecx, ss:[esp+0x2C]
        call public_6f205e0
        mov ecx, dword ptr ss : [esp+0x10]
        cmp ecx, edi
        jne public_6f75520
        public_6f75548 : nop
        mov dword ptr ss : [esp+0x18], ecx
        public_6f7554c : nop
        mov eax, dword ptr ss : [esp+0x28]
        push eax
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0x30]
        push ecx
        mov dword ptr ss : [esp+0x30], esi
        mov dword ptr ss : [esp+0x3C], esi
        call public_6fa8fe0
        add esp, 8
        mov dword ptr ss : [esp+0x2C], esi
        lea edx, ss:[esp+0x16F8]
        mov dword ptr ss : [esp+0x2DAC], 9
        mov dword ptr ss : [esp+0x14], edx
        lea ecx, ss:[esp+0x16F8]
        mov byte ptr ss : [esp+0x2DAC], 0xA
        call dword ptr ds : [public_6fb304c]
        mov eax, dword ptr ss : [esp+0x16FC]
        cmp eax, esi
        je public_6f755c1
        mov cl, byte ptr ds : [eax-1]
        dec eax
        test cl, cl
        je public_6f755b8
        cmp cl, 0xFF
        je public_6f755b8
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_6f755c1
        public_6f755b8 : nop
        push eax
        call public_6fa8fe0
        add esp, 4
        public_6f755c1 : nop
        mov dword ptr ss : [esp+0x16FC], esi
        mov dword ptr ss : [esp+0x1700], esi
        mov dword ptr ss : [esp+0x1704], esi
        mov eax, dword ptr ds : [public_6fb3304]
        mov ecx, dword ptr ds : [eax]
        push ecx
        push esi
        lea ecx, ss:[esp+0x2D8]
        mov dword ptr ss : [esp+0x2DB4], 0xB
        call dword ptr ds : [public_6fb3308]
        mov eax, dword ptr ss : [esp+0x2E0]
        or ebx, 0xFFFFFFFF
        cmp eax, ebx
        je public_6f75656
        cmp dword ptr ss : [esp+0x2E4], esi
        mov edi, dword ptr ds : [public_6fb32a8]
        je public_6f75645
        mov eax, dword ptr ss : [esp+0x2E8]
        cmp eax, esi
        je public_6f75634
        push eax
        call dword ptr ds : [public_6fb32ac]
        mov dword ptr ss : [esp+0x2E8], esi
        mov dword ptr ss : [esp+0x2EC], esi
        public_6f75634 : nop
        mov edx, dword ptr ss : [esp+0x2E4]
        push edx
        call edi
        mov dword ptr ss : [esp+0x2E4], esi
        public_6f75645 : nop
        mov eax, dword ptr ss : [esp+0x2E0]
        push eax
        call edi
        mov dword ptr ss : [esp+0x2E0], ebx
        public_6f75656 : nop
        mov eax, dword ptr ss : [esp+0x2E8]
        cmp eax, esi
        je public_6f75679
        push eax
        call dword ptr ds : [public_6fb3390]
        add esp, 4
        mov dword ptr ss : [esp+0x2E8], esi
        mov dword ptr ss : [esp+0x2EC], esi
        public_6f75679 : nop
        push 1
        lea ecx, ss:[esp+0x2D4]
        mov dword ptr ss : [esp+0x2F4], esi
        mov dword ptr ss : [esp+0x2DB0], ebx
        call dword ptr ds : [public_6fb32f8]
        public_6f75696 : nop
        mov ecx, dword ptr ss : [esp+0x2DA4]
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret 8
        UNREACHABLE_TRAP(0x6f74ae0)
    }
}

#undef public_6f74b59
#undef public_6f74bbd
#undef public_6f74bbf
#undef public_6f74bcd
#undef public_6f74be3
#undef public_6f74c7f
#undef public_6f74c9c
#undef public_6f74d0d
#undef public_6f74d15
#undef public_6f74d66
#undef public_6f74dac
#undef public_6f74e30
#undef public_6f74e72
#undef public_6f74e91
#undef public_6f74eef
#undef public_6f7503a
#undef public_6f7506e
#undef public_6f7508d
#undef public_6f750b0
#undef public_6f750db
#undef public_6f75103
#undef public_6f7513d
#undef public_6f75164
#undef public_6f75174
#undef public_6f7520a
#undef public_6f7521e
#undef public_6f7523a
#undef public_6f75249
#undef public_6f7529f
#undef public_6f752b0
#undef public_6f752dd
#undef public_6f752e9
#undef public_6f752fd
#undef public_6f75392
#undef public_6f753a2
#undef public_6f753bd
#undef public_6f753d5
#undef public_6f753df
#undef public_6f753f3
#undef public_6f75424
#undef public_6f75450
#undef public_6f7545f
#undef public_6f75469
#undef public_6f75480
#undef public_6f75493
#undef public_6f7551b
#undef public_6f75520
#undef public_6f75548
#undef public_6f7554c
#undef public_6f755b8
#undef public_6f755c1
#undef public_6f75634
#undef public_6f75645
#undef public_6f75656
#undef public_6f75679
#undef public_6f75696
