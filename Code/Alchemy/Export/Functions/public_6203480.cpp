#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6202260);
CLANG_FORWARD_PROC_SYMBOL(public_6202270);
CLANG_FORWARD_PROC_SYMBOL(public_6203480);
CLANG_FORWARD_PROC_SYMBOL(public_6203be0);
CLANG_FORWARD_PROC_SYMBOL(public_6203c20);
CLANG_FORWARD_PROC_SYMBOL(public_6203e30);
CLANG_FORWARD_PROC_SYMBOL(public_62045c0);
CLANG_FORWARD_PROC_SYMBOL(public_6204640);
CLANG_FORWARD_PROC_SYMBOL(public_620e4c0);
CLANG_FORWARD_PROC_SYMBOL(public_620eed0);
CLANG_FORWARD_PROC_SYMBOL(public_620ef50);
CLANG_FORWARD_PROC_SYMBOL(public_62127c0);
CLANG_FORWARD_PROC_SYMBOL(public_6213db0);
CLANG_FORWARD_PROC_SYMBOL(public_62154c0);
CLANG_FORWARD_PROC_SYMBOL(public_6215540);
CLANG_FORWARD_PROC_SYMBOL(public_62199e0);
CLANG_FORWARD_PROC_SYMBOL(public_621b440);
CLANG_FORWARD_PROC_SYMBOL(public_621cd80);
CLANG_FORWARD_PROC_SYMBOL(public_621e570);
CLANG_FORWARD_PROC_SYMBOL(public_621e5c0);
CLANG_FORWARD_PROC_SYMBOL(public_621e610);
CLANG_FORWARD_PROC_SYMBOL(public_62231a0);
CLANG_FORWARD_PROC_SYMBOL(public_6224660);
CLANG_FORWARD_PROC_SYMBOL(public_62246e0);
CLANG_FORWARD_PROC_SYMBOL(public_6227350);
CLANG_FORWARD_PROC_SYMBOL(public_622b330);
CLANG_FORWARD_PROC_SYMBOL(public_622b3b0);
CLANG_FORWARD_PROC_SYMBOL(public_622ef10);
CLANG_FORWARD_PROC_SYMBOL(public_622ef90);
CLANG_FORWARD_PROC_SYMBOL(public_62322f0);
CLANG_FORWARD_PROC_SYMBOL(public_6232370);
CLANG_FORWARD_PROC_SYMBOL(public_6235f00);
CLANG_FORWARD_PROC_SYMBOL(public_6237790);
CLANG_FORWARD_PROC_SYMBOL(public_6237810);
CLANG_FORWARD_PROC_SYMBOL(public_623b7d0);
CLANG_FORWARD_PROC_SYMBOL(public_623d250);
CLANG_FORWARD_PROC_SYMBOL(public_623f700);
CLANG_FORWARD_PROC_SYMBOL(public_623f750);
CLANG_FORWARD_PROC_SYMBOL(public_6241230);
CLANG_FORWARD_PROC_SYMBOL(public_6241280);
CLANG_FORWARD_PROC_SYMBOL(public_62412d0);
CLANG_FORWARD_PROC_SYMBOL(public_6241a90);
CLANG_FORWARD_PROC_SYMBOL(public_62427c0);
CLANG_FORWARD_PROC_SYMBOL(public_6242e20);
CLANG_FORWARD_PROC_SYMBOL(public_6243470);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);
CLANG_FORWARD_JUMP_SYMBOL(public_62471f6);

#define public_62034e9 _public_62034e9
#define public_6203525 _public_6203525
#define public_6203556 _public_6203556
#define public_62035cc _public_62035cc
#define public_62035f2 _public_62035f2
#define public_6203612 _public_6203612
#define public_620362e _public_620362e
#define public_6203647 _public_6203647
#define public_62036ad _public_62036ad
#define public_62036bc _public_62036bc
#define public_62036c3 _public_62036c3
#define public_62036d0 _public_62036d0
#define public_6203719 _public_6203719
#define public_620378c _public_620378c
#define public_62037ba _public_62037ba
#define public_62037e2 _public_62037e2
#define public_6203807 _public_6203807
#define public_620382c _public_620382c
#define public_6203892 _public_6203892
#define public_62038a1 _public_62038a1
#define public_62038a6 _public_62038a6
#define public_62038b3 _public_62038b3
#define public_62038b7 _public_62038b7
#define public_62039ec _public_62039ec
#define public_62039fd _public_62039fd
#define public_6203a0a _public_6203a0a
#define public_6203a15 _public_6203a15
#define public_6203a22 _public_6203a22
#define public_6203a2d _public_6203a2d
#define public_6203a3e _public_6203a3e
#define public_6203a49 _public_6203a49
#define public_6203a56 _public_6203a56
#define public_6203a62 _public_6203a62

PROC_DECLARE(0x6203480, internal_6203480, public_6203480);
extern "C" NAKED register_t __cdecl internal_6203480()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_62471f6 @0x6203488*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_62471f6
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x88
        push ebx
        push ebp
        push esi
        push edi
        call dword ptr ds : [public_624b008]
        mov ebp, eax
        xor edi, edi
        cmp ebp, edi
        je public_6203525
        push 0xC
        call public_624612c
        mov esi, eax
        add esp, 4
        cmp esi, edi
        je public_62034e9
        push 0x80000000
        mov dword ptr ds : [esi+4], 1
        mov dword ptr ds : [esi+8], offset public_6255544
        mov dword ptr ds : [esi], offset public_624b3d4
        mov eax, dword ptr ss : [ebp]
/*FIXUP push offset public_6255544 @0x62034d9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6255544
        push esi
        push ebp
        call dword ptr ds : [eax+0x10]
        mov ecx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [ecx+8]
        public_62034e9 : nop
        push 0xC
        call public_624612c
        mov esi, eax
        add esp, 4
        cmp esi, edi
        je public_6203525
        push 0x80000000
        mov dword ptr ds : [esi+4], 1
        mov dword ptr ds : [esi+8], offset public_6255538
        mov dword ptr ds : [esi], offset public_624b3c4
        mov edx, dword ptr ss : [ebp]
/*FIXUP push offset public_6255538 @0x6203515*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6255538
        push esi
        push ebp
        call dword ptr ds : [edx+0x10]
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax+8]
        public_6203525 : nop
        mov dword ptr ss : [esp+0x14], edi
        push edi
        lea ecx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0xA4], edi
        call public_6203be0
        test eax, eax
        jne public_6203556
        mov ecx, dword ptr ss : [ebp]
        lea edx, ss:[esp+0x14]
        push edx
/*FIXUP push offset public_6255524 @0x6203546*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6255524
        push ebp
        call dword ptr ds : [ecx]
        test eax, eax
        jne public_62036d0
        public_6203556 : nop
        mov eax, dword ptr ss : [esp+0x14]
        push 3
/*FIXUP push offset public_6255544 @0x620355c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6255544
        push eax
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x1C], 0x3E8
        call dword ptr ds : [ecx+0x14]
        mov ebx, eax
        cmp ebx, edi
        je public_62036d0
        mov eax, dword ptr ss : [esp+0x14]
        push 0x400
/*FIXUP push offset public_6257f80 @0x6203582*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6257f80
/*FIXUP push offset public_6255508 @0x6203587*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6255508
        mov edx, dword ptr ds : [eax]
        push ebx
        push eax
        call dword ptr ds : [edx+0x20]
        test eax, eax
        je public_62036c3
        mov ecx, 9
        mov esi, offset public_62554e0
        lea edi, ss:[esp+0x48]
        lea eax, ss:[esp+0x48]
        rep movsd
        movsb 
        mov edi, dword ptr ds : [public_624b058]
        push eax
/*FIXUP push offset public_6257f80 @0x62035b7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6257f80
        call edi
        add esp, 8
        test eax, eax
        je public_62035cc
        mov byte ptr ds : [eax+public_6257f80], 0
        public_62035cc : nop
        mov esi, dword ptr ds : [public_624b000]
/*FIXUP push offset public_62554d8 @0x62035d2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_62554d8
/*FIXUP push offset public_6257f80 @0x62035d7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6257f80
        call esi
        add esp, 8
        test eax, eax
        jne public_62035f2
        mov dword ptr ss : [esp+0x10], 1
        jmp public_62036c3
/*FIXUP public_62035f2 : nop
        push offset public_62554d4 @0x62035f2*/
  FIXUP public_62035f2 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_62554d4
/*FIXUP push offset public_6257f80 @0x62035f7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6257f80
        call esi
        add esp, 8
        test eax, eax
        jne public_6203612
        mov dword ptr ss : [esp+0x10], 1
        jmp public_62036c3
/*FIXUP public_6203612 : nop
        push offset public_62554cc @0x6203612*/
  FIXUP public_6203612 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_62554cc
/*FIXUP push offset public_6257f80 @0x6203617*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6257f80
        call esi
        add esp, 8
        test eax, eax
        jne public_620362e
        mov dword ptr ss : [esp+0x10], eax
        jmp public_62036c3
/*FIXUP public_620362e : nop
        push offset public_62554c8 @0x620362e*/
  FIXUP public_620362e : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_62554c8
/*FIXUP push offset public_6257f80 @0x6203633*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6257f80
        call esi
        add esp, 8
        test eax, eax
        jne public_6203647
        mov dword ptr ss : [esp+0x10], eax
        jmp public_62036c3
        public_6203647 : nop
        mov esi, dword ptr ds : [public_624b054]
        push 0x78
/*FIXUP push offset public_6257f80 @0x620364f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6257f80
        call esi
        add esp, 8
        test eax, eax
        jne public_62036ad
        push 0x58
/*FIXUP push offset public_6257f80 @0x620365f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6257f80
        call esi
        add esp, 8
        test eax, eax
        jne public_62036ad
        mov edx, dword ptr ds : [public_62554bc]
        mov ecx, dword ptr ds : [public_62554b8]
        mov eax, dword ptr ds : [public_62554c0]
        mov dword ptr ss : [esp+0x2C], edx
        lea edx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x28], ecx
        mov cl, byte ptr ds : [public_62554c4]
        push edx
/*FIXUP push offset public_6257f80 @0x6203691*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6257f80
        mov dword ptr ss : [esp+0x38], eax
        mov byte ptr ss : [esp+0x3C], cl
        call edi
/*FIXUP push offset public_6257f80 @0x62036a0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6257f80
        call dword ptr ds : [public_624b050]
        jmp public_62036bc
        public_62036ad : nop
        push 0x10
        push 0
/*FIXUP push offset public_6257f80 @0x62036b1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6257f80
        call dword ptr ds : [public_624b04c]
        public_62036bc : nop
        add esp, 0xC
        mov dword ptr ss : [esp+0x10], eax
        public_62036c3 : nop
        mov eax, dword ptr ss : [esp+0x14]
        push ebx
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0x18]
        xor edi, edi
        public_62036d0 : nop
        lea ecx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0xA0], 0xFFFFFFFF
        call public_6203e30
        mov dword ptr ss : [esp+0x18], edi
        push edi
        lea ecx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0xA4], 1
        call public_6203be0
        test eax, eax
        jne public_6203719
        mov edx, dword ptr ss : [ebp]
        lea eax, ss:[esp+0x18]
        push eax
/*FIXUP push offset public_6255524 @0x6203709*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6255524
        push ebp
        call dword ptr ds : [edx]
        test eax, eax
        jne public_62038b3
        public_6203719 : nop
        mov eax, dword ptr ss : [esp+0x18]
        push 3
/*FIXUP push offset public_6255544 @0x620371f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6255544
        push eax
        mov ecx, dword ptr ds : [eax]
        mov edi, 0x3E8
        call dword ptr ds : [ecx+0x14]
        mov ebx, eax
        test ebx, ebx
        je public_62038b7
        mov eax, dword ptr ss : [esp+0x18]
        push 0x400
/*FIXUP push offset public_6257f80 @0x6203742*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6257f80
/*FIXUP push offset public_6255498 @0x6203747*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6255498
        mov edx, dword ptr ds : [eax]
        push ebx
        push eax
        call dword ptr ds : [edx+0x20]
        test eax, eax
        je public_62038a6
        mov ecx, 9
        mov esi, offset public_62554e0
        lea edi, ss:[esp+0x70]
        lea eax, ss:[esp+0x70]
        rep movsd
        movsb 
        mov edi, dword ptr ds : [public_624b058]
        push eax
/*FIXUP push offset public_6257f80 @0x6203777*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6257f80
        call edi
        add esp, 8
        test eax, eax
        je public_620378c
        mov byte ptr ds : [eax+public_6257f80], 0
        public_620378c : nop
        mov esi, dword ptr ds : [public_624b000]
/*FIXUP push offset public_62554d8 @0x6203792*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_62554d8
/*FIXUP push offset public_6257f80 @0x6203797*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6257f80
        call esi
        add esp, 8
        test eax, eax
        jne public_62037ba
        mov eax, dword ptr ss : [esp+0x18]
        push ebx
        push eax
        mov edi, 1
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0x18]
        jmp public_62038b7
/*FIXUP public_62037ba : nop
        push offset public_62554d4 @0x62037ba*/
  FIXUP public_62037ba : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_62554d4
/*FIXUP push offset public_6257f80 @0x62037bf*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6257f80
        call esi
        add esp, 8
        test eax, eax
        jne public_62037e2
        mov eax, dword ptr ss : [esp+0x18]
        push ebx
        push eax
        mov edi, 1
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0x18]
        jmp public_62038b7
/*FIXUP public_62037e2 : nop
        push offset public_62554cc @0x62037e2*/
  FIXUP public_62037e2 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_62554cc
/*FIXUP push offset public_6257f80 @0x62037e7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6257f80
        call esi
        add esp, 8
        test eax, eax
        jne public_6203807
        mov eax, dword ptr ss : [esp+0x18]
        push ebx
        push eax
        xor edi, edi
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0x18]
        jmp public_62038b7
/*FIXUP public_6203807 : nop
        push offset public_62554c8 @0x6203807*/
  FIXUP public_6203807 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_62554c8
/*FIXUP push offset public_6257f80 @0x620380c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6257f80
        call esi
        add esp, 8
        test eax, eax
        jne public_620382c
        mov eax, dword ptr ss : [esp+0x18]
        push ebx
        push eax
        xor edi, edi
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0x18]
        jmp public_62038b7
        public_620382c : nop
        mov esi, dword ptr ds : [public_624b054]
        push 0x78
/*FIXUP push offset public_6257f80 @0x6203834*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6257f80
        call esi
        add esp, 8
        test eax, eax
        jne public_6203892
        push 0x58
/*FIXUP push offset public_6257f80 @0x6203844*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6257f80
        call esi
        add esp, 8
        test eax, eax
        jne public_6203892
        mov edx, dword ptr ds : [public_62554bc]
        mov ecx, dword ptr ds : [public_62554b8]
        mov eax, dword ptr ds : [public_62554c0]
        mov dword ptr ss : [esp+0x3C], edx
        lea edx, ss:[esp+0x38]
        mov dword ptr ss : [esp+0x38], ecx
        mov cl, byte ptr ds : [public_62554c4]
        push edx
/*FIXUP push offset public_6257f80 @0x6203876*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6257f80
        mov dword ptr ss : [esp+0x48], eax
        mov byte ptr ss : [esp+0x4C], cl
        call edi
/*FIXUP push offset public_6257f80 @0x6203885*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6257f80
        call dword ptr ds : [public_624b050]
        jmp public_62038a1
        public_6203892 : nop
        push 0x10
        push 0
/*FIXUP push offset public_6257f80 @0x6203896*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6257f80
        call dword ptr ds : [public_624b04c]
        public_62038a1 : nop
        add esp, 0xC
        mov edi, eax
        public_62038a6 : nop
        mov eax, dword ptr ss : [esp+0x18]
        push ebx
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0x18]
        jmp public_62038b7
        public_62038b3 : nop
        mov edi, dword ptr ss : [esp+0x24]
        public_62038b7 : nop
        lea ecx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0xA0], 0xFFFFFFFF
        call public_6203e30
        push 0
        push 0x3E8
/*FIXUP push offset public_625547c @0x62038d2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_625547c
/*FIXUP push offset public_6255544 @0x62038d7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6255544
        push 0
        push ebp
        call public_6203c20
        push 0
        push 0x3E8
/*FIXUP push offset public_6255460 @0x62038eb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6255460
/*FIXUP push offset public_6255544 @0x62038f0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6255544
        push 0
        push ebp
        mov esi, eax
        call public_6203c20
        push 0
        push 0x3E8
/*FIXUP push offset public_6255444 @0x6203906*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6255444
/*FIXUP push offset public_6255544 @0x620390b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6255544
        push 0
        push ebp
        mov ebx, eax
        call public_6203c20
        add esp, 0x48
        mov dword ptr ss : [esp+0x20], eax
        push 0
        push 0x3E8
/*FIXUP push offset public_6255424 @0x6203928*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6255424
/*FIXUP push offset public_6255544 @0x620392d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6255544
        push 0
        push ebp
        call public_6203c20
        push 0
        push 0x3E8
/*FIXUP push offset public_6255408 @0x6203941*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6255408
/*FIXUP push offset public_6255544 @0x6203946*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6255544
        push 0
        push ebp
        mov dword ptr ss : [esp+0x54], eax
        call public_6203c20
        push 0
        push 0x3E8
/*FIXUP push offset public_62553ec @0x620395e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_62553ec
/*FIXUP push offset public_6255544 @0x6203963*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6255544
        push 0
        push ebp
        mov dword ptr ss : [esp+0x5C], eax
        call public_6203c20
        add esp, 0x48
        mov dword ptr ss : [esp+0x1C], eax
        push 0
        push 1
/*FIXUP push offset public_62553d0 @0x620397f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_62553d0
/*FIXUP push offset public_6255544 @0x6203984*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6255544
        push 0
        push ebp
        call public_6203c20
        mov ebp, dword ptr ss : [esp+0x28]
        push ebp
        call public_6215540
        push edi
        call public_622ef90
        push esi
        call public_6237810
        push ebx
        call public_6232370
        mov edx, dword ptr ss : [esp+0x48]
        push edx
        call public_62246e0
        mov edi, dword ptr ss : [esp+0x50]
        push edi
        call public_622b3b0
        mov eax, dword ptr ss : [esp+0x44]
        push eax
        call public_620ef50
        mov ecx, dword ptr ss : [esp+0x50]
        push ecx
        call public_6204640
        lea eax, ds:[esi*4]
        lea ecx, ds:[ebp*4]
        add esp, 0x38
        cmp ecx, eax
        jle public_62039ec
        mov eax, ecx
        public_62039ec : nop
        lea esi, ds:[esi+esi*2]
        lea edx, ss:[ebp+ebp*2]
        add esi, esi
        add edx, edx
        cmp edx, esi
        jle public_62039fd
        mov esi, edx
        public_62039fd : nop
        lea ecx, ds:[ebx*4]
        cmp eax, ecx
        jg public_6203a0a
        mov eax, ecx
        public_6203a0a : nop
        lea ebx, ds:[ebx+ebx*2]
        add ebx, ebx
        cmp esi, ebx
        jg public_6203a15
        mov esi, ebx
        public_6203a15 : nop
        lea ecx, ds:[edi*4]
        cmp eax, ecx
        jg public_6203a22
        mov eax, ecx
        public_6203a22 : nop
        lea edx, ds:[edi+edi*2]
        add edx, edx
        cmp esi, edx
        jg public_6203a2d
        mov esi, edx
        public_6203a2d : nop
        mov edx, dword ptr ss : [esp+0x14]
        lea ecx, ds:[edx*4]
        cmp eax, ecx
        jg public_6203a3e
        mov eax, ecx
        public_6203a3e : nop
        lea edx, ds:[edx+edx*2]
        add edx, edx
        cmp esi, edx
        jg public_6203a49
        mov esi, edx
        public_6203a49 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        lea edx, ds:[ecx+ecx*4]
        cmp eax, edx
        jg public_6203a56
        mov eax, edx
        public_6203a56 : nop
        lea edx, ds:[ecx+ecx*2]
        shl edx, 3
        cmp esi, edx
        jg public_6203a62
        mov esi, edx
        public_6203a62 : nop
        push eax
        call public_6202260
        push esi
        call public_6202270
        add esp, 8
        call public_6227350
        call public_6243470
        call public_6242e20
        call public_62427c0
        call public_6241a90
        call public_62412d0
        call public_6241230
        call public_6241280
        call public_621e570
        call public_621e5c0
        call public_621e610
        call public_623f750
        call public_623f700
        call public_623b7d0
        call public_621b440
        call public_621cd80
        call public_6213db0
        call public_62231a0
        call public_62199e0
        call public_6235f00
        call public_623d250
        call public_62127c0
        call public_620e4c0
        call public_62154c0
        call public_622ef10
        call public_6237790
        call public_62322f0
        call public_6224660
        call public_622b330
        call public_620eed0
        call public_62045c0
        mov ecx, dword ptr ss : [esp+0x98]
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x94
        ret 
        UNREACHABLE_TRAP(0x6203480)
    }
}

#undef public_62034e9
#undef public_6203525
#undef public_6203556
#undef public_62035cc
#undef public_62035f2
#undef public_6203612
#undef public_620362e
#undef public_6203647
#undef public_62036ad
#undef public_62036bc
#undef public_62036c3
#undef public_62036d0
#undef public_6203719
#undef public_620378c
#undef public_62037ba
#undef public_62037e2
#undef public_6203807
#undef public_620382c
#undef public_6203892
#undef public_62038a1
#undef public_62038a6
#undef public_62038b3
#undef public_62038b7
#undef public_62039ec
#undef public_62039fd
#undef public_6203a0a
#undef public_6203a15
#undef public_6203a22
#undef public_6203a2d
#undef public_6203a3e
#undef public_6203a49
#undef public_6203a56
#undef public_6203a62
