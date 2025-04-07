#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed0160);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0440);
CLANG_FORWARD_PROC_SYMBOL(public_6f0ff90);
CLANG_FORWARD_PROC_SYMBOL(public_6f1a8e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f1df30);
CLANG_FORWARD_PROC_SYMBOL(public_6f1e4b0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8370);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fad5b8);

#define public_6f0ffd1 _public_6f0ffd1
#define public_6f0ffd5 _public_6f0ffd5
#define public_6f10010 _public_6f10010
#define public_6f10066 _public_6f10066
#define public_6f10094 _public_6f10094
#define public_6f100ae _public_6f100ae
#define public_6f100b4 _public_6f100b4
#define public_6f10140 _public_6f10140
#define public_6f1015c _public_6f1015c
#define public_6f10176 _public_6f10176
#define public_6f1023b _public_6f1023b
#define public_6f10247 _public_6f10247
#define public_6f10263 _public_6f10263
#define public_6f10280 _public_6f10280
#define public_6f102ce _public_6f102ce
#define public_6f102e4 _public_6f102e4
#define public_6f102e8 _public_6f102e8
#define public_6f1030c _public_6f1030c
#define public_6f10330 _public_6f10330
#define public_6f10340 _public_6f10340
#define public_6f10346 _public_6f10346
#define public_6f10420 _public_6f10420
#define public_6f10435 _public_6f10435
#define public_6f10451 _public_6f10451
#define public_6f10473 _public_6f10473
#define public_6f10490 _public_6f10490
#define public_6f104ac _public_6f104ac
#define public_6f104d3 _public_6f104d3
#define public_6f104f2 _public_6f104f2
#define public_6f10500 _public_6f10500
#define public_6f10521 _public_6f10521
#define public_6f1053a _public_6f1053a
#define public_6f10546 _public_6f10546
#define public_6f10567 _public_6f10567
#define public_6f10580 _public_6f10580
#define public_6f10590 _public_6f10590
#define public_6f105c5 _public_6f105c5
#define public_6f105de _public_6f105de
#define public_6f105f0 _public_6f105f0
#define public_6f1060f _public_6f1060f
#define public_6f10660 _public_6f10660
#define public_6f1066f _public_6f1066f
#define public_6f1067c _public_6f1067c
#define public_6f106ab _public_6f106ab
#define public_6f106af _public_6f106af

PROC_DECLARE(0x6f0ff90, internal_6f0ff90, public_6f0ff90);
extern "C" NAKED register_t __cdecl internal_6f0ff90()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        push 0xFFFFFFFF
/*FIXUP push public_6fad5b8 @0x6f0ff98*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fad5b8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x80
        mov eax, dword ptr ds : [ecx+0x12C]
        push ebx
        mov ebx, dword ptr ss : [ebp+8]
        push esi
        push edi
        mov edi, dword ptr ds : [eax]
        cmp edi, eax
        mov dword ptr ss : [esp+0x10], ecx
        mov dword ptr ss : [esp+0x14], edi
        je public_6f102ce
        jmp public_6f0ffd5
        public_6f0ffd1 : nop
        mov edi, dword ptr ss : [esp+0x14]
        public_6f0ffd5 : nop
        mov al, byte ptr ss : [esp+0xF]
        xor esi, esi
        push esi
        push esi
        lea ecx, ss:[esp+0x2C]
        mov byte ptr ss : [esp+0x2C], al
        call public_6ed0440
        mov dword ptr ss : [esp+0x28], eax
        mov dword ptr ss : [esp+0x2C], esi
        mov eax, dword ptr ds : [edi+0xF8]
        mov dword ptr ss : [esp+0x94], esi
        mov esi, dword ptr ds : [edi+0xF4]
        cmp esi, eax
        je public_6f10176
        lea ecx, ds:[ecx]
        public_6f10010 : nop
        lea eax, ds:[esi+8]
        push eax
        lea ecx, ss:[esp+0x58]
        mov dword ptr ss : [esp+0x58], 0
        mov byte ptr ss : [esp+0x5C], 0
        call public_6ed0160
        mov edx, dword ptr ss : [esp+0x28]
        lea ecx, ss:[esp+0x54]
        push ecx
        push edx
        lea eax, ss:[esp+0x24]
        push eax
        lea ecx, ss:[esp+0x30]
        call public_6f1e4b0
        mov eax, dword ptr ds : [esi+0x68]
        test eax, eax
        je public_6f10066
        mov edi, dword ptr ds : [public_6fb3380]
/*FIXUP push offset public_6fb88c0 @0x6f1004f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb88c0
        push ebx
        call edi
        mov ecx, dword ptr ds : [esi+0x68]
        add ecx, 0x18
        push ecx
        push ebx
        call edi
        add esp, 0x10
        jmp public_6f100b4
        public_6f10066 : nop
        mov eax, dword ptr ds : [esi+0x60]
        test eax, eax
        je public_6f100ae
/*FIXUP push offset public_6fb88b0 @0x6f1006d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb88b0
        push ebx
        call dword ptr ds : [public_6fb3380]
        add esp, 8
        lea edx, ss:[esp+0x18]
        push edx
        lea ecx, ds:[esi+0x58]
        call public_6f1df30
        mov ecx, dword ptr ds : [esi+0x5C]
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, ecx
        je public_6f100ae
        public_6f10094 : nop
        mov eax, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [eax]
        push ebx
        mov ecx, eax
        call dword ptr ds : [edx+0x18]
        mov eax, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [esi+0x5C]
        mov dword ptr ss : [esp+0x18], eax
        jne public_6f10094
        public_6f100ae : nop
        mov edi, dword ptr ds : [public_6fb3380]
/*FIXUP public_6f100b4 : nop
        push offset public_6fb88a0 @0x6f100b4*/
  FIXUP public_6f100b4 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb88a0
        push ebx
        call edi
        lea eax, ds:[esi+8]
        push eax
/*FIXUP push offset public_6fb8890 @0x6f100c0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb8890
        push ebx
        call edi
        mov ecx, dword ptr ds : [esi+0x38]
        push ecx
/*FIXUP push offset public_6fb8884 @0x6f100cc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb8884
        push ebx
        call edi
        mov cl, byte ptr ds : [esi+0x50]
        xor edx, edx
        test cl, cl
        setne dl
        push edx
/*FIXUP push offset public_6fb8870 @0x6f100df*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb8870
        push ebx
        call edi
        mov eax, dword ptr ds : [esi+0x4C]
        push eax
/*FIXUP push offset public_6fb885c @0x6f100eb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb885c
        push ebx
        call edi
        movzx ecx, byte ptr ds : [esi+0x48]
        push ecx
/*FIXUP push offset public_6fb884c @0x6f100f8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb884c
        push ebx
        call edi
        movzx edx, byte ptr ds : [esi+0x49]
        add esp, 0x44
        push edx
/*FIXUP push offset public_6fb8830 @0x6f10108*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb8830
        push ebx
        call edi
        mov eax, dword ptr ds : [esi+0x7C]
        push eax
/*FIXUP push offset public_6fb8820 @0x6f10114*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb8820
        push ebx
        call edi
        fld dword ptr ds : [esi+0x84]
        add esp, 0x10
        fstp qword ptr ss : [esp]
/*FIXUP push offset public_6fb8810 @0x6f10128*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb8810
        push ebx
        call edi
        mov eax, dword ptr ds : [esi+0x40]
        mov edi, dword ptr ds : [eax]
        add esp, 0x10
        cmp edi, eax
        je public_6f1015c
        lea esp, ss:[esp]
        public_6f10140 : nop
        mov ecx, dword ptr ds : [edi+8]
        push ecx
/*FIXUP push offset public_6fb8804 @0x6f10144*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb8804
        push ebx
        call dword ptr ds : [public_6fb3380]
        mov edi, dword ptr ds : [edi]
        mov eax, dword ptr ds : [esi+0x40]
        add esp, 0xC
        cmp edi, eax
        jne public_6f10140
        public_6f1015c : nop
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [edx+0xF8]
        add esi, 0x88
        cmp esi, eax
        jne public_6f10010
        mov edi, edx
        public_6f10176 : nop
        mov esi, dword ptr ds : [public_6fb3380]
/*FIXUP push offset public_6fb87f4 @0x6f1017c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb87f4
        push ebx
        call esi
        lea eax, ds:[edi+0xC]
        push eax
/*FIXUP push offset public_6fb8890 @0x6f10188*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb8890
        push ebx
        call esi
        mov eax, dword ptr ds : [edi+0xE4]
        add esp, 0x14
        test eax, 0x3FFFFFFF
        jne public_6f1023b
        fld dword ptr ds : [edi+0x6C]
        sub esp, 0x18
        fstp qword ptr ss : [esp+0x10]
        fld dword ptr ds : [edi+0x68]
        fstp qword ptr ss : [esp+8]
        fld dword ptr ds : [edi+0x64]
        fstp qword ptr ss : [esp]
/*FIXUP push offset public_6fb87dc @0x6f101bb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb87dc
        push ebx
        call esi
        lea esi, ds:[edi+0x40]
        mov ecx, 9
        lea edi, ss:[esp+0x50]
        rep movsd
        fld dword ptr ss : [esp+0x70]
        fstp qword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x6C]
        fstp qword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x68]
        fstp qword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x64]
        fstp qword ptr ss : [esp]
        fld dword ptr ss : [esp+0x60]
        sub esp, 0x28
        fstp qword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x84]
        fstp qword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x80]
        fstp qword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x7C]
        fstp qword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x78]
        fstp qword ptr ss : [esp]
/*FIXUP push offset public_6fb87b0 @0x6f10220*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb87b0
        push ebx
        call dword ptr ds : [public_6fb3380]
        mov edi, dword ptr ss : [esp+0x64]
        mov esi, dword ptr ds : [public_6fb3380]
        add esp, 0x50
        jmp public_6f10247
        public_6f1023b : nop
        push eax
/*FIXUP push offset public_6fb879c @0x6f1023c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb879c
        push ebx
        call esi
        add esp, 0xC
        public_6f10247 : nop
        mov ecx, dword ptr ds : [edi+0xEC]
        push ecx
/*FIXUP push offset public_6fb878c @0x6f1024e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb878c
        push ebx
        call esi
        mov eax, dword ptr ss : [esp+0x34]
        mov esi, dword ptr ds : [eax]
        add esp, 0xC
        cmp esi, eax
        je public_6f10280
        public_6f10263 : nop
        lea edx, ds:[esi+0xC]
        push edx
/*FIXUP push offset public_6fb8780 @0x6f10267*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb8780
        push ebx
        call dword ptr ds : [public_6fb3380]
        mov esi, dword ptr ds : [esi]
        mov eax, dword ptr ss : [esp+0x34]
        add esp, 0xC
        cmp esi, eax
        jne public_6f10263
        public_6f10280 : nop
        mov ecx, dword ptr ds : [eax]
        push eax
        push ecx
        lea eax, ss:[esp+0x28]
        push eax
        lea ecx, ss:[esp+0x30]
        mov dword ptr ss : [esp+0xA0], 0xFFFFFFFF
        call public_6fa8370
        mov ecx, dword ptr ss : [esp+0x28]
        push ecx
        call public_6fa8fe0
        mov edx, dword ptr ss : [esp+0x14]
        mov edi, dword ptr ds : [edi]
        xor eax, eax
        mov dword ptr ss : [esp+0x2C], eax
        mov dword ptr ss : [esp+0x30], eax
        mov eax, dword ptr ds : [edx+0x12C]
        add esp, 4
        cmp edi, eax
        mov dword ptr ss : [esp+0x14], edi
        jne public_6f0ffd1
        mov ecx, edx
        public_6f102ce : nop
        mov eax, dword ptr ds : [ecx+0x90]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        mov dword ptr ss : [esp+0x14], esi
        je public_6f104d3
        jmp public_6f102e8
        public_6f102e4 : nop
        mov esi, dword ptr ss : [esp+0x14]
        public_6f102e8 : nop
        mov eax, dword ptr ds : [esi+0x68]
        test eax, eax
        je public_6f1030c
        mov edi, dword ptr ds : [public_6fb3380]
/*FIXUP push offset public_6fb88c0 @0x6f102f5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb88c0
        push ebx
        call edi
        mov eax, dword ptr ds : [esi+0x68]
        add eax, 0x18
        push eax
        push ebx
        call edi
        add esp, 0x10
        jmp public_6f10346
        public_6f1030c : nop
        mov eax, dword ptr ds : [esi+0x64]
        test eax, eax
        je public_6f10340
/*FIXUP push offset public_6fb88b0 @0x6f10313*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb88b0
        push ebx
        call dword ptr ds : [public_6fb3380]
        mov eax, dword ptr ds : [esi+0x60]
        mov edi, dword ptr ds : [eax]
        add esp, 8
        cmp edi, eax
        je public_6f10340
        nop 
        lea esp, ss:[esp]
        public_6f10330 : nop
        mov ecx, dword ptr ds : [edi+8]
        mov edx, dword ptr ds : [ecx]
        push ebx
        call dword ptr ds : [edx+0x18]
        mov edi, dword ptr ds : [edi]
        cmp edi, dword ptr ds : [esi+0x60]
        jne public_6f10330
        public_6f10340 : nop
        mov edi, dword ptr ds : [public_6fb3380]
/*FIXUP public_6f10346 : nop
        push offset public_6fb876c @0x6f10346*/
  FIXUP public_6f10346 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb876c
        push ebx
        call edi
        mov eax, dword ptr ds : [esi+8]
        push eax
/*FIXUP push offset public_6fb8754 @0x6f10352*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb8754
        push ebx
        call edi
        fld dword ptr ds : [esi+0x3C]
        push ecx
        fstp qword ptr ss : [esp+0x10]
        fld dword ptr ds : [esi+0x38]
        fstp qword ptr ss : [esp+8]
        fld dword ptr ds : [esi+0x34]
        fstp qword ptr ss : [esp]
/*FIXUP push offset public_6fb87dc @0x6f1036f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb87dc
        push ebx
        call edi
        add esi, 0x10
        mov ecx, 9
        lea edi, ss:[esp+0x50]
        rep movsd
        fld dword ptr ss : [esp+0x70]
        fstp qword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x6C]
        fstp qword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x68]
        fstp qword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x64]
        fstp qword ptr ss : [esp]
        fld dword ptr ss : [esp+0x60]
        mov edi, dword ptr ds : [public_6fb3380]
        sub esp, 0x28
        fstp qword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x84]
        fstp qword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x80]
        fstp qword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x7C]
        fstp qword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x78]
        fstp qword ptr ss : [esp]
/*FIXUP push offset public_6fb87b0 @0x6f103da*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb87b0
        push ebx
        call edi
        mov esi, dword ptr ss : [esp+0x64]
        mov ecx, dword ptr ds : [esi+0x40]
        push ecx
/*FIXUP push offset public_6fb8744 @0x6f103ea*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb8744
        push ebx
        call edi
        mov edx, dword ptr ds : [esi+0x6C]
        add esp, 0x5C
        push edx
/*FIXUP push offset public_6fb885c @0x6f103f9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb885c
        push ebx
        call edi
        mov eax, dword ptr ds : [esi+0x70]
        push eax
/*FIXUP push offset public_6fb8820 @0x6f10405*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb8820
        push ebx
        call edi
        mov eax, dword ptr ds : [esi+0x48]
        mov esi, dword ptr ds : [eax]
        add esp, 0x18
        cmp esi, eax
        je public_6f10473
        lea esp, ss:[esp]
/*FIXUP public_6f10420 : nop
        push offset public_6fb8734 @0x6f10420*/
  FIXUP public_6f10420 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb8734
        push ebx
        call edi
        mov edi, dword ptr ds : [esi+0xC]
        mov eax, dword ptr ds : [esi+0x10]
        add esp, 8
        cmp edi, eax
        je public_6f10451
        public_6f10435 : nop
        mov ecx, dword ptr ds : [edi]
        push ecx
/*FIXUP push offset public_6fb872c @0x6f10438*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb872c
        push ebx
        call dword ptr ds : [public_6fb3380]
        mov eax, dword ptr ds : [esi+0x10]
        add edi, 4
        add esp, 0xC
        cmp edi, eax
        jne public_6f10435
/*FIXUP public_6f10451 : nop
        push offset public_6fb8724 @0x6f10451*/
  FIXUP public_6f10451 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb8724
        push ebx
        call dword ptr ds : [public_6fb3380]
        mov edx, dword ptr ss : [esp+0x1C]
        mov esi, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edx+0x48]
        mov edi, dword ptr ds : [public_6fb3380]
        add esp, 8
        cmp esi, eax
        jne public_6f10420
/*FIXUP public_6f10473 : nop
        push offset public_6fb8718 @0x6f10473*/
  FIXUP public_6f10473 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb8718
        push ebx
        call edi
        mov eax, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [eax+0x54]
        mov esi, dword ptr ds : [eax]
        add esp, 8
        cmp esi, eax
        je public_6f104ac
        nop 
        lea esp, ss:[esp]
        public_6f10490 : nop
        lea ecx, ds:[esi+0xC]
        push ecx
/*FIXUP push offset public_6fb8710 @0x6f10494*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb8710
        push ebx
        call edi
        mov edx, dword ptr ss : [esp+0x20]
        mov esi, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edx+0x54]
        add esp, 0xC
        cmp esi, eax
        jne public_6f10490
/*FIXUP public_6f104ac : nop
        push offset public_6fb8724 @0x6f104ac*/
  FIXUP public_6f104ac : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb8724
        push ebx
        call edi
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+0x90]
        add esp, 8
        cmp eax, edx
        mov dword ptr ss : [esp+0x14], eax
        jne public_6f102e4
        public_6f104d3 : nop
        mov eax, dword ptr ds : [ecx+0x13C]
        test eax, eax
        mov edi, dword ptr ds : [public_6fb3380]
        je public_6f104f2
/*FIXUP push offset public_6fb86fc @0x6f104e3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb86fc
        push ebx
        call edi
        mov ecx, dword ptr ss : [esp+0x18]
        add esp, 8
        public_6f104f2 : nop
        mov eax, dword ptr ds : [ecx+0x138]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_6f10521
        mov edi, edi
        public_6f10500 : nop
        lea edx, ds:[esi+0xC]
        push edx
/*FIXUP push offset public_6fb86e8 @0x6f10504*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb86e8
        push ebx
        call edi
        mov eax, dword ptr ss : [esp+0x1C]
        mov esi, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [eax+0x138]
        add esp, 0xC
        cmp esi, ecx
        jne public_6f10500
        mov ecx, eax
        public_6f10521 : nop
        mov eax, dword ptr ds : [ecx+0x148]
        test eax, eax
        je public_6f1053a
/*FIXUP push offset public_6fb86dc @0x6f1052b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb86dc
        push ebx
        call edi
        mov ecx, dword ptr ss : [esp+0x18]
        add esp, 8
        public_6f1053a : nop
        mov eax, dword ptr ds : [ecx+0x144]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_6f10567
        public_6f10546 : nop
        lea ecx, ds:[esi+0xC]
        push ecx
/*FIXUP push offset public_6fb86d0 @0x6f1054a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb86d0
        push ebx
        call edi
        mov edx, dword ptr ss : [esp+0x1C]
        mov esi, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edx+0x144]
        add esp, 0xC
        cmp esi, eax
        jne public_6f10546
        mov ecx, edx
        public_6f10567 : nop
        mov eax, dword ptr ds : [ecx+0x154]
        test eax, eax
        je public_6f10580
/*FIXUP push offset public_6fb86bc @0x6f10571*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb86bc
        push ebx
        call edi
        mov ecx, dword ptr ss : [esp+0x18]
        add esp, 8
        public_6f10580 : nop
        mov eax, dword ptr ds : [ecx+0x150]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_6f105c5
        lea esp, ss:[esp]
        public_6f10590 : nop
        mov dl, byte ptr ds : [esi+0x40]
        fld dword ptr ds : [esi+0x3C]
        xor eax, eax
        test dl, dl
        setne al
        lea ecx, ds:[esi+0xC]
        push eax
        sub esp, 8
        fstp qword ptr ss : [esp]
        push ecx
/*FIXUP push offset public_6fb86a0 @0x6f105a8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb86a0
        push ebx
        call edi
        mov edx, dword ptr ss : [esp+0x28]
        mov esi, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edx+0x150]
        add esp, 0x18
        cmp esi, eax
        jne public_6f10590
        mov ecx, edx
        public_6f105c5 : nop
        mov eax, dword ptr ds : [ecx+0x160]
        test eax, eax
        je public_6f105de
/*FIXUP push offset public_6fb8690 @0x6f105cf*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb8690
        push ebx
        call edi
        mov ecx, dword ptr ss : [esp+0x18]
        add esp, 8
        public_6f105de : nop
        mov eax, dword ptr ds : [ecx+0x15C]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_6f1060f
        lea ebx, ds:[ebx]
        public_6f105f0 : nop
        lea eax, ds:[esi+0xC]
        push eax
/*FIXUP push offset public_6fb8680 @0x6f105f4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb8680
        push ebx
        call edi
        mov ecx, dword ptr ss : [esp+0x1C]
        mov esi, dword ptr ds : [esi]
        mov eax, dword ptr ds : [ecx+0x15C]
        add esp, 0xC
        cmp esi, eax
        jne public_6f105f0
        public_6f1060f : nop
        mov eax, dword ptr ds : [ecx+0x168]
        test eax, eax
        je public_6f106af
        mov esi, dword ptr ds : [ecx+0x16C]
        sub esi, eax
        mov eax, 0x8D3DCB09
        imul esi
        add edx, esi
        sar edx, 6
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov dword ptr ss : [esp+0x1C], edx
        je public_6f106af
/*FIXUP push offset public_6fb8670 @0x6f1063e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb8670
        push ebx
        call edi
        mov eax, dword ptr ss : [esp+0x18]
        mov esi, dword ptr ds : [eax+0x168]
        mov ecx, dword ptr ds : [eax+0x16C]
        add esp, 8
        cmp esi, ecx
        je public_6f106ab
        lea ecx, ds:[ecx]
        public_6f10660 : nop
        mov eax, dword ptr ds : [esi+0x34]
        test eax, eax
        mov ecx, offset public_6fb8668
        je public_6f1066f
        lea ecx, ds:[esi+0x38]
        public_6f1066f : nop
        cmp dword ptr ds : [esi], 0
        mov eax, offset public_6fb8668
        je public_6f1067c
        lea eax, ds:[esi+4]
        public_6f1067c : nop
        fld dword ptr ds : [esi+0x70]
        mov edx, dword ptr ds : [esi+0x6C]
        sub esp, 8
        fstp qword ptr ss : [esp]
        push edx
        mov edx, dword ptr ds : [esi+0x68]
        push edx
        push ecx
        push eax
/*FIXUP push offset public_6fb864c @0x6f1068f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb864c
        push ebx
        call edi
        mov eax, dword ptr ss : [esp+0x30]
        mov ecx, dword ptr ds : [eax+0x16C]
        add esi, 0x74
        add esp, 0x20
        cmp esi, ecx
        jne public_6f10660
        public_6f106ab : nop
        mov ecx, dword ptr ss : [esp+0x10]
        public_6f106af : nop
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x18]
        add eax, 8
        push eax
        push ebx
        call public_6f1a8e0
        mov ecx, dword ptr ss : [esp+0x94]
        add esp, 8
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret 4
        UNREACHABLE_TRAP(0x6f0ff90)
    }
}

#undef public_6f0ffd1
#undef public_6f0ffd5
#undef public_6f10010
#undef public_6f10066
#undef public_6f10094
#undef public_6f100ae
#undef public_6f100b4
#undef public_6f10140
#undef public_6f1015c
#undef public_6f10176
#undef public_6f1023b
#undef public_6f10247
#undef public_6f10263
#undef public_6f10280
#undef public_6f102ce
#undef public_6f102e4
#undef public_6f102e8
#undef public_6f1030c
#undef public_6f10330
#undef public_6f10340
#undef public_6f10346
#undef public_6f10420
#undef public_6f10435
#undef public_6f10451
#undef public_6f10473
#undef public_6f10490
#undef public_6f104ac
#undef public_6f104d3
#undef public_6f104f2
#undef public_6f10500
#undef public_6f10521
#undef public_6f1053a
#undef public_6f10546
#undef public_6f10567
#undef public_6f10580
#undef public_6f10590
#undef public_6f105c5
#undef public_6f105de
#undef public_6f105f0
#undef public_6f1060f
#undef public_6f10660
#undef public_6f1066f
#undef public_6f1067c
#undef public_6f106ab
#undef public_6f106af
