#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_626c1e0);
CLANG_FORWARD_PROC_SYMBOL(public_6270620);
CLANG_FORWARD_PROC_SYMBOL(public_62f1250);
CLANG_FORWARD_PROC_SYMBOL(public_62f93f0);
CLANG_FORWARD_PROC_SYMBOL(public_6301640);
CLANG_FORWARD_PROC_SYMBOL(public_6309ae0);
CLANG_FORWARD_PROC_SYMBOL(public_6309b30);
CLANG_FORWARD_PROC_SYMBOL(public_6309b40);
CLANG_FORWARD_PROC_SYMBOL(public_6309b50);
CLANG_FORWARD_PROC_SYMBOL(public_6309b80);
CLANG_FORWARD_PROC_SYMBOL(public_630d3f0);
CLANG_FORWARD_PROC_SYMBOL(public_6310170);
CLANG_FORWARD_PROC_SYMBOL(public_6310410);
CLANG_FORWARD_PROC_SYMBOL(public_6310560);
CLANG_FORWARD_PROC_SYMBOL(public_63105b0);
CLANG_FORWARD_PROC_SYMBOL(public_63107c0);
CLANG_FORWARD_PROC_SYMBOL(public_63108f0);
CLANG_FORWARD_PROC_SYMBOL(public_6310a30);
CLANG_FORWARD_PROC_SYMBOL(public_6310b70);
CLANG_FORWARD_PROC_SYMBOL(public_6332f50);
CLANG_FORWARD_PROC_SYMBOL(public_6333ca0);
CLANG_FORWARD_PROC_SYMBOL(public_6333e30);
CLANG_FORWARD_PROC_SYMBOL(public_633bad0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_6270655 _public_6270655
#define public_6270660 _public_6270660
#define public_62706ac _public_62706ac
#define public_62706b4 _public_62706b4
#define public_62706e9 _public_62706e9
#define public_6270731 _public_6270731
#define public_62707a1 _public_62707a1
#define public_62707ba _public_62707ba
#define public_62707f1 _public_62707f1
#define public_62707fc _public_62707fc
#define public_6270830 _public_6270830
#define public_6270871 _public_6270871
#define public_627088c _public_627088c
#define public_62708a7 _public_62708a7
#define public_62708c9 _public_62708c9
#define public_62708eb _public_62708eb
#define public_627090d _public_627090d
#define public_627092f _public_627092f
#define public_6270951 _public_6270951
#define public_6270970 _public_6270970
#define public_62709a7 _public_62709a7
#define public_62709de _public_62709de
#define public_6270a15 _public_6270a15
#define public_6270a40 _public_6270a40
#define public_6270a7a _public_6270a7a
#define public_6270ac1 _public_6270ac1
#define public_6270acf _public_6270acf
#define public_6270b28 _public_6270b28
#define public_6270b5b _public_6270b5b
#define public_6270b73 _public_6270b73
#define public_6270b90 _public_6270b90
#define public_6270be2 _public_6270be2
#define public_6270c19 _public_6270c19
#define public_6270c57 _public_6270c57
#define public_6270c88 _public_6270c88
#define public_6270cb3 _public_6270cb3
#define public_6270ce2 _public_6270ce2
#define public_6270ce5 _public_6270ce5
#define public_6270d35 _public_6270d35
#define public_6270d43 _public_6270d43
#define public_6270d5f _public_6270d5f
#define public_6270d6a _public_6270d6a
#define public_6270d7b _public_6270d7b
#define public_6270d8c _public_6270d8c
#define public_6270d8e _public_6270d8e
#define public_6270da1 _public_6270da1
#define public_6270db6 _public_6270db6
#define public_6270dd7 _public_6270dd7
#define public_6270dea _public_6270dea
#define public_6270e0e _public_6270e0e
#define public_6270e2a _public_6270e2a
#define public_6270e40 _public_6270e40

PROC_DECLARE(0x6270620, internal_6270620, public_6270620);
extern "C" NAKED register_t __cdecl internal_6270620()
{
    __asm
    {
        sub esp, 0xE4
        push ebx
        mov ebx, dword ptr ss : [esp+0xEC]
        push ebp
        push esi
        push edi
        mov edi, ecx
        xor esi, esi
        mov ecx, ebx
        mov dword ptr ss : [esp+0x38], edi
        mov dword ptr ss : [esp+0x1C], esi
        call public_6310170
        test al, al
        mov ebp, dword ptr ss : [esp+0xFC]
        je public_6270da1
        jmp public_6270660
        public_6270655 : nop
        mov edi, dword ptr ss : [esp+0x38]
        lea esp, ss:[esp]
/*FIXUP public_6270660 : nop
        push offset public_63994e8 @0x6270660*/
  FIXUP public_6270660 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63994e8
        mov ecx, ebx
        call public_6310410
        test al, al
        mov ecx, ebx
        je public_62706b4
        call public_6310b70
        push eax
        call public_630d3f0
        mov esi, eax
        add esp, 4
        lea eax, ss:[esp+0x10]
        push eax
        lea ecx, ss:[esp+0x38]
        push ecx
        lea ecx, ds:[edi+0xC]
        mov dword ptr ss : [esp+0x18], esi
        call public_6301640
        mov eax, dword ptr ss : [esp+0x34]
        cmp eax, dword ptr ds : [edi+0x10]
        je public_62706ac
        mov ecx, dword ptr ds : [eax+0x10]
        test ecx, ecx
        jne public_6270e40
        public_62706ac : nop
        mov dword ptr ss : [ebp+0x48], esi
        jmp public_6270d8e
/*FIXUP public_62706b4 : nop
        push offset public_6399f30 @0x62706b4*/
  FIXUP public_62706b4 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6399f30
        call public_6310410
        test al, al
        mov ecx, ebx
        je public_62706e9
        call public_6310b70
        push eax
        call public_630d3f0
        lea edx, ss:[esp+0x2C]
        push edx
        mov dword ptr ss : [esp+0x30], eax
        call public_62f1250
        add esp, 8
        mov dword ptr ss : [esp+0x1C], eax
        jmp public_6270d8e
/*FIXUP public_62706e9 : nop
        push offset public_6399f24 @0x62706e9*/
  FIXUP public_62706e9 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6399f24
        call public_6310410
        test al, al
        mov ecx, ebx
        je public_6270731
        push 0
        call public_6310a30
        push eax
        call public_630d3f0
        mov dword ptr ss : [esp+0x4C], eax
        lea eax, ss:[esp+0x4C]
        push eax
        call public_62f1250
        add esp, 8
        push 1
        mov ecx, ebx
        mov dword ptr ss : [ebp+0xB8], eax
        call public_63107c0
        mov dword ptr ss : [ebp+0xBC], eax
        jmp public_6270d8e
/*FIXUP public_6270731 : nop
        push offset public_6399f18 @0x6270731*/
  FIXUP public_6270731 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6399f18
        call public_6310410
        test al, al
        jne public_6270d7b
/*FIXUP push offset public_6399f10 @0x6270743*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6399f10
        mov ecx, ebx
        call public_6310410
        test al, al
        jne public_6270d7b
/*FIXUP push offset public_6399f04 @0x6270757*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6399f04
        mov ecx, ebx
        call public_6310410
        test al, al
        jne public_6270d6a
/*FIXUP push offset public_6399ef8 @0x627076b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6399ef8
        mov ecx, ebx
        call public_6310410
        test al, al
        jne public_6270d6a
/*FIXUP push offset public_6399eec @0x627077f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6399eec
        mov ecx, ebx
        call public_6310410
        test al, al
        mov ecx, ebx
        je public_62707fc
        call public_6310b70
        mov dword ptr ss : [esp+0x10], eax
        mov esi, offset public_63ea6c0
        xor edi, edi
        public_62707a1 : nop
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_62707ba
        mov ecx, dword ptr ss : [esp+0x10]
        push eax
        push ecx
        call dword ptr ds : [public_639902c]
        add esp, 8
        test eax, eax
        je public_62707f1
        public_62707ba : nop
        add edi, 8
        add esi, 8
        cmp edi, 0x20
        jb public_62707a1
        mov ecx, ebx
        mov esi, 0x100001
        call public_6310b70
        push eax
        mov eax, dword ptr ds : [public_6399028]
        push 0xAB
/*FIXUP push offset public_6399ec0 @0x62707dc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6399ec0
/*FIXUP push offset public_6399e8c @0x62707e1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6399e8c
        push esi
        call dword ptr ds : [eax]
        add esp, 0x14
        jmp public_6270d8e
        public_62707f1 : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ss : [ebp+0x4C], edx
        jmp public_6270d8e
/*FIXUP public_62707fc : nop
        push offset public_6399e84 @0x62707fc*/
  FIXUP public_62707fc : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6399e84
        call public_6310410
        test al, al
        mov ecx, ebx
        je public_6270830
        call public_6310b70
        push eax
        call public_630d3f0
        lea ecx, ss:[esp+0x34]
        push ecx
        mov dword ptr ss : [esp+0x38], eax
        call public_62f1250
        add esp, 8
        mov dword ptr ss : [ebp+0x54], eax
        jmp public_6270d8e
/*FIXUP public_6270830 : nop
        push offset public_6399e7c @0x6270830*/
  FIXUP public_6270830 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6399e7c
        call public_6310410
        test al, al
        mov ecx, ebx
        je public_62708c9
        push 0
        call public_63107c0
        mov dword ptr ss : [esp+0x10], eax
        fild dword ptr ss : [esp+0x10]
        fst dword ptr ss : [ebp+0x58]
        fld dword ptr ss : [ebp+0x5C]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x44
        jp public_6270871
        fld dword ptr ds : [public_6399e78]
        fmul st, st(1)
        fstp dword ptr ss : [ebp+0x5C]
        public_6270871 : nop
        fld dword ptr ss : [ebp+0x60]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x44
        jp public_627088c
        fld dword ptr ds : [public_6399e74]
        fmul st, st(1)
        fstp dword ptr ss : [ebp+0x60]
        public_627088c : nop
        fld dword ptr ss : [ebp+0x64]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x44
        jp public_62708a7
        fld dword ptr ds : [public_6399e74]
        fmul st, st(1)
        fstp dword ptr ss : [ebp+0x64]
        public_62708a7 : nop
        fld dword ptr ss : [ebp+0x68]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x44
        jp public_6270d8c
        fmul dword ptr ds : [public_6399e78]
        fstp dword ptr ss : [ebp+0x68]
        jmp public_6270d8e
/*FIXUP public_62708c9 : nop
        push offset public_6399e64 @0x62708c9*/
  FIXUP public_62708c9 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6399e64
        call public_6310410
        test al, al
        mov ecx, ebx
        je public_62708eb
        push 0
        call public_63108f0
        fmul dword ptr ss : [ebp+0x58]
        fstp dword ptr ss : [ebp+0x5C]
        jmp public_6270d8e
/*FIXUP public_62708eb : nop
        push offset public_6399e54 @0x62708eb*/
  FIXUP public_62708eb : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6399e54
        call public_6310410
        test al, al
        mov ecx, ebx
        je public_627090d
        push 0
        call public_63108f0
        fmul dword ptr ss : [ebp+0x58]
        fstp dword ptr ss : [ebp+0x60]
        jmp public_6270d8e
/*FIXUP public_627090d : nop
        push offset public_6399e44 @0x627090d*/
  FIXUP public_627090d : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6399e44
        call public_6310410
        test al, al
        mov ecx, ebx
        je public_627092f
        push 0
        call public_63108f0
        fmul dword ptr ss : [ebp+0x58]
        fstp dword ptr ss : [ebp+0x64]
        jmp public_6270d8e
/*FIXUP public_627092f : nop
        push offset public_6399e34 @0x627092f*/
  FIXUP public_627092f : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6399e34
        call public_6310410
        test al, al
        mov ecx, ebx
        je public_6270951
        push 0
        call public_63108f0
        fmul dword ptr ss : [ebp+0x58]
        fstp dword ptr ss : [ebp+0x68]
        jmp public_6270d8e
/*FIXUP public_6270951 : nop
        push offset public_6399e28 @0x6270951*/
  FIXUP public_6270951 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6399e28
        call public_6310410
        test al, al
        mov ecx, ebx
        je public_6270970
        push 0
        call public_63107c0
        mov dword ptr ss : [ebp+0x6C], eax
        jmp public_6270d8e
/*FIXUP public_6270970 : nop
        push offset public_6399e18 @0x6270970*/
  FIXUP public_6270970 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6399e18
        call public_6310410
        test al, al
        mov ecx, ebx
        je public_62709a7
        call public_6310b70
        lea ecx, ss:[esp+0x4C]
        mov esi, eax
        call public_6333e30
        push 1
        push esi
        call public_6333ca0
        add esp, 8
        mov dword ptr ss : [esp+0x4C], eax
        mov dword ptr ss : [ebp+0x74], eax
        jmp public_6270d8e
/*FIXUP public_62709a7 : nop
        push offset public_6399e04 @0x62709a7*/
  FIXUP public_62709a7 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6399e04
        call public_6310410
        test al, al
        mov ecx, ebx
        je public_62709de
        call public_6310b70
        lea ecx, ss:[esp+0x20]
        mov esi, eax
        call public_6333e30
        push 1
        push esi
        call public_6333ca0
        add esp, 8
        mov dword ptr ss : [esp+0x20], eax
        mov dword ptr ss : [ebp+0x7C], eax
        jmp public_6270d8e
/*FIXUP public_62709de : nop
        push offset public_6399df8 @0x62709de*/
  FIXUP public_62709de : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6399df8
        call public_6310410
        test al, al
        mov ecx, ebx
        je public_6270a15
        call public_6310b70
        lea ecx, ss:[esp+0x44]
        mov esi, eax
        call public_6333e30
        push 1
        push esi
        call public_6333ca0
        add esp, 8
        mov dword ptr ss : [esp+0x44], eax
        mov dword ptr ss : [ebp+0x78], eax
        jmp public_6270d8e
/*FIXUP public_6270a15 : nop
        push offset public_6399dec @0x6270a15*/
  FIXUP public_6270a15 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6399dec
        call public_6310410
        test al, al
        mov ecx, ebx
        je public_6270a40
        call public_6310b70
        push 0
        push eax
        call public_6333ca0
        add esp, 8
        mov dword ptr ss : [ebp+0x80], eax
        jmp public_6270d8e
/*FIXUP public_6270a40 : nop
        push offset public_6399dd4 @0x6270a40*/
  FIXUP public_6270a40 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6399dd4
        call public_6310410
        test al, al
        mov ecx, ebx
        je public_6270a7a
        call public_6310b70
        lea ecx, ss:[esp+0x40]
        mov esi, eax
        call public_6333e30
        push 1
        push esi
        call public_6333ca0
        add esp, 8
        mov dword ptr ss : [esp+0x40], eax
        mov dword ptr ss : [ebp+0x84], eax
        jmp public_6270d8e
/*FIXUP public_6270a7a : nop
        push offset public_6399dcc @0x6270a7a*/
  FIXUP public_6270a7a : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6399dcc
        call public_6310410
        test al, al
        mov ecx, ebx
        je public_6270acf
        call public_6310b70
        push eax
        call public_630d3f0
        add esp, 4
        lea edx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x10], eax
        push edx
        lea eax, ss:[esp+0x28]
        push eax
        mov ecx, offset public_63fbb80
        xor esi, esi
        call public_6301640
        mov eax, dword ptr ss : [esp+0x24]
        cmp eax, dword ptr ds : [public_63fbb84]
        je public_6270ac1
        mov esi, dword ptr ds : [eax+0x10]
        public_6270ac1 : nop
        mov ecx, dword ptr ds : [esi+0x48]
        mov dword ptr ss : [ebp+0x90], ecx
        jmp public_6270d8e
/*FIXUP public_6270acf : nop
        push offset public_6399dc4 @0x6270acf*/
  FIXUP public_6270acf : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6399dc4
        call public_6310410
        test al, al
        mov ecx, ebx
        je public_6270d43
        push 0
        call public_6310a30
        push eax
        call public_630d3f0
        add esp, 4
        push 1
        mov ecx, ebx
        mov dword ptr ss : [esp+0x30], eax
        call public_6310a30
        push 0
        push eax
        call public_6333ca0
        add esp, 8
        push 2
        mov ecx, ebx
        mov dword ptr ss : [esp+0x1C], eax
        call public_63107c0
        test eax, eax
        mov dword ptr ss : [esp+0x10], eax
        jg public_6270b28
        mov dword ptr ss : [esp+0x10], 1
        public_6270b28 : nop
        push 3
        mov ecx, ebx
        mov dword ptr ss : [esp+0x54], 0
        mov byte ptr ss : [esp+0x58], 0
        call public_6310560
        test al, al
        jne public_6270b90
        push 3
        mov ecx, ebx
        call public_6310a30
        mov esi, eax
        test esi, esi
        jne public_6270b5b
        mov dword ptr ss : [esp+0x50], eax
        mov byte ptr ss : [esp+0x54], al
        jmp public_6270b90
        public_6270b5b : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x40
        jb public_6270b73
        mov eax, 0x3F
        public_6270b73 : nop
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        lea edi, ss:[esp+0x54]
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov byte ptr ss : [esp+eax+0x54], 0
        mov dword ptr ss : [esp+0x50], eax
        public_6270b90 : nop
        lea eax, ss:[esp+0x2C]
        push eax
        call public_62f1250
        mov esi, dword ptr ds : [public_639902c]
        lea ecx, ss:[esp+0x58]
/*FIXUP push offset public_6399dc0 @0x6270ba4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6399dc0
        push ecx
        mov dword ptr ss : [esp+0x48], eax
        call esi
        add esp, 0xC
        test eax, eax
        jne public_6270c19
        lea ecx, ss:[esp+0x94]
        call public_6309ae0
        mov esi, dword ptr ss : [ebp+0xA4]
        mov edi, dword ptr ds : [esi+4]
        push 0x28
        mov dword ptr ss : [esp+0x18], eax
        call public_6391d9c
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_6270be2
        mov edi, eax
        public_6270be2 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx], eax
        push ecx
        add eax, 8
        push eax
        call public_626c1e0
        mov ecx, dword ptr ss : [ebp+0xA8]
        add esp, 8
        inc ecx
        mov dword ptr ss : [ebp+0xA8], ecx
        mov edx, dword ptr ss : [ebp+0xA4]
        mov esi, dword ptr ds : [edx+4]
        jmp public_6270ce5
        public_6270c19 : nop
        lea eax, ss:[esp+0x54]
/*FIXUP push offset public_6399db8 @0x6270c1d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6399db8
        push eax
        call esi
        add esp, 8
        test eax, eax
        jne public_6270c88
        lea ecx, ss:[esp+0xD4]
        call public_6309ae0
        mov esi, dword ptr ss : [ebp+0xB0]
        mov edi, dword ptr ds : [esi+4]
        push 0x28
        mov dword ptr ss : [esp+0x18], eax
        call public_6391d9c
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_6270c57
        mov edi, eax
        public_6270c57 : nop
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        push edx
        add eax, 8
        push eax
        call public_626c1e0
        mov ecx, dword ptr ss : [ebp+0xB4]
        add esp, 8
        inc ecx
        mov dword ptr ss : [ebp+0xB4], ecx
        mov eax, dword ptr ss : [ebp+0xB0]
        jmp public_6270ce2
        public_6270c88 : nop
        lea ecx, ss:[esp+0xB4]
        call public_6309ae0
        mov esi, dword ptr ss : [ebp+0x98]
        mov edi, dword ptr ds : [esi+4]
        push 0x28
        mov dword ptr ss : [esp+0x18], eax
        call public_6391d9c
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_6270cb3
        mov edi, eax
        public_6270cb3 : nop
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        push edx
        add eax, 8
        push eax
        call public_626c1e0
        mov ecx, dword ptr ss : [ebp+0x9C]
        add esp, 8
        inc ecx
        mov dword ptr ss : [ebp+0x9C], ecx
        mov eax, dword ptr ss : [ebp+0x98]
        public_6270ce2 : nop
        mov esi, dword ptr ds : [eax+4]
        public_6270ce5 : nop
        mov ecx, dword ptr ss : [esp+0x3C]
        add esi, 8
        push ecx
        mov ecx, esi
        call public_6309b30
        mov edx, dword ptr ss : [esp+0x10]
        push edx
        mov ecx, esi
        call public_633bad0
        push 0x3F800000
        mov ecx, esi
        call public_6332f50
        push 1
        mov ecx, esi
        call public_6309b50
        mov eax, dword ptr ss : [esp+0x18]
/*FIXUP push offset public_6399dac @0x6270d19*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6399dac
        push eax
        call dword ptr ds : [public_639902c]
        add esp, 8
        test eax, eax
        jne public_6270d35
        mov ecx, esi
        call public_6309b80
        jmp public_6270d8e
        public_6270d35 : nop
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, esi
        call public_6309b40
        jmp public_6270d8e
/*FIXUP public_6270d43 : nop
        push offset public_6399da0 @0x6270d43*/
  FIXUP public_6270d43 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6399da0
        call public_6310410
        test al, al
        je public_6270d5f
        push 0
        mov ecx, ebx
        call public_63105b0
        mov byte ptr ss : [ebp+0x70], al
        jmp public_6270d8e
        public_6270d5f : nop
        mov edx, dword ptr ss : [ebp]
        push ebx
        mov ecx, ebp
        call dword ptr ds : [edx+8]
        jmp public_6270d8e
        public_6270d6a : nop
        push 0
        mov ecx, ebx
        call public_63107c0
        mov dword ptr ss : [ebp+0x8C], eax
        jmp public_6270d8e
        public_6270d7b : nop
        push 0
        mov ecx, ebx
        call public_63107c0
        mov dword ptr ss : [ebp+0x88], eax
        jmp public_6270d8e
        public_6270d8c : nop
        fstp st(0)
        public_6270d8e : nop
        mov ecx, ebx
        call public_6310170
        test al, al
        jne public_6270655
        mov esi, dword ptr ss : [esp+0x1C]
        public_6270da1 : nop
        mov eax, dword ptr ss : [ebp+0x4C]
        test eax, eax
        je public_6270db6
        cmp eax, 1
        je public_6270db6
        mov dword ptr ss : [ebp+0x50], 0
        jmp public_6270e2a
        public_6270db6 : nop
        push esi
        mov dword ptr ss : [ebp+0x50], esi
        call public_62f93f0
        mov esi, eax
        mov eax, dword ptr ss : [ebp+0x88]
        add esp, 4
        test eax, eax
        jne public_6270dd7
        mov eax, dword ptr ds : [esi+0x14]
        mov dword ptr ss : [ebp+0x88], eax
        public_6270dd7 : nop
        mov eax, dword ptr ss : [ebp+0x8C]
        test eax, eax
        jne public_6270dea
        mov ecx, dword ptr ds : [esi+0x18]
        mov dword ptr ss : [ebp+0x8C], ecx
        public_6270dea : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x24]
        test al, al
        je public_6270e2a
        mov eax, dword ptr ss : [ebp+0x84]
        cmp byte ptr ds : [eax], 0
        jne public_6270e0e
        mov eax, dword ptr ds : [esi+0xC]
        cmp byte ptr ds : [eax], 0
        je public_6270e0e
        mov dword ptr ss : [ebp+0x84], eax
        public_6270e0e : nop
        mov ecx, dword ptr ss : [ebp+0x80]
        cmp byte ptr ds : [ecx], 0
        jne public_6270e2a
        mov esi, dword ptr ds : [esi+0x80]
        cmp byte ptr ds : [esi], 0
        je public_6270e2a
        mov dword ptr ss : [ebp+0x80], esi
        public_6270e2a : nop
        mov edx, dword ptr ss : [ebp+0x74]
        cmp byte ptr ds : [edx], 0
        jne public_6270e40
        mov eax, dword ptr ss : [ebp+0x84]
        cmp byte ptr ds : [eax], 0
        je public_6270e40
        mov dword ptr ss : [ebp+0x74], eax
        public_6270e40 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xE4
        ret 8
        UNREACHABLE_TRAP(0x6270620)
    }
}

#undef public_6270655
#undef public_6270660
#undef public_62706ac
#undef public_62706b4
#undef public_62706e9
#undef public_6270731
#undef public_62707a1
#undef public_62707ba
#undef public_62707f1
#undef public_62707fc
#undef public_6270830
#undef public_6270871
#undef public_627088c
#undef public_62708a7
#undef public_62708c9
#undef public_62708eb
#undef public_627090d
#undef public_627092f
#undef public_6270951
#undef public_6270970
#undef public_62709a7
#undef public_62709de
#undef public_6270a15
#undef public_6270a40
#undef public_6270a7a
#undef public_6270ac1
#undef public_6270acf
#undef public_6270b28
#undef public_6270b5b
#undef public_6270b73
#undef public_6270b90
#undef public_6270be2
#undef public_6270c19
#undef public_6270c57
#undef public_6270c88
#undef public_6270cb3
#undef public_6270ce2
#undef public_6270ce5
#undef public_6270d35
#undef public_6270d43
#undef public_6270d5f
#undef public_6270d6a
#undef public_6270d7b
#undef public_6270d8c
#undef public_6270d8e
#undef public_6270da1
#undef public_6270db6
#undef public_6270dd7
#undef public_6270dea
#undef public_6270e0e
#undef public_6270e2a
#undef public_6270e40
