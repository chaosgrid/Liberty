#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_46d170);
CLANG_FORWARD_PROC_SYMBOL(public_46d660);
CLANG_FORWARD_PROC_SYMBOL(public_4a2f80);
CLANG_FORWARD_PROC_SYMBOL(public_53e430);
CLANG_FORWARD_PROC_SYMBOL(public_592230);
CLANG_FORWARD_PROC_SYMBOL(public_594540);
CLANG_FORWARD_PROC_SYMBOL(public_5947a0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);
CLANG_FORWARD_JUMP_SYMBOL(public_5c4a7c);

#define public_5922b7 _public_5922b7
#define public_592341 _public_592341
#define public_592404 _public_592404
#define public_5924b0 _public_5924b0
#define public_5924c6 _public_5924c6
#define public_592540 _public_592540
#define public_592556 _public_592556
#define public_592620 _public_592620
#define public_592634 _public_592634
#define public_592688 _public_592688
#define public_59271a _public_59271a
#define public_5927c0 _public_5927c0
#define public_5927d6 _public_5927d6
#define public_592850 _public_592850
#define public_592866 _public_592866
#define public_592930 _public_592930
#define public_592944 _public_592944
#define public_5929d0 _public_5929d0
#define public_5929f4 _public_5929f4
#define public_5929f8 _public_5929f8
#define public_5929fd _public_5929fd
#define public_592a36 _public_592a36
#define public_592a4c _public_592a4c
#define public_592a89 _public_592a89
#define public_592a92 _public_592a92
#define public_592a99 _public_592a99
#define public_592ab2 _public_592ab2
#define public_592b1d _public_592b1d
#define public_592bc3 _public_592bc3
#define public_592bd9 _public_592bd9
#define public_592c50 _public_592c50
#define public_592c66 _public_592c66
#define public_592d30 _public_592d30
#define public_592d44 _public_592d44
#define public_592d98 _public_592d98
#define public_592ea0 _public_592ea0
#define public_592eb6 _public_592eb6
#define public_592f30 _public_592f30
#define public_592f46 _public_592f46
#define public_592ff9 _public_592ff9
#define public_593110 _public_593110
#define public_593126 _public_593126
#define public_5931a0 _public_5931a0
#define public_5931b6 _public_5931b6
#define public_593281 _public_593281
#define public_593297 _public_593297
#define public_5932f2 _public_5932f2
#define public_5933f6 _public_5933f6
#define public_59340c _public_59340c
#define public_593481 _public_593481
#define public_593497 _public_593497
#define public_59354a _public_59354a
#define public_593650 _public_593650
#define public_593666 _public_593666
#define public_5936e0 _public_5936e0
#define public_5936f6 _public_5936f6
#define public_5937a9 _public_5937a9
#define public_5938b0 _public_5938b0
#define public_5938c6 _public_5938c6
#define public_593940 _public_593940
#define public_593956 _public_593956
#define public_593a09 _public_593a09
#define public_593b17 _public_593b17
#define public_593b2d _public_593b2d
#define public_593ba2 _public_593ba2
#define public_593bb8 _public_593bb8
#define public_593c83 _public_593c83
#define public_593d91 _public_593d91
#define public_593da7 _public_593da7
#define public_593e20 _public_593e20
#define public_593e36 _public_593e36
#define public_593f01 _public_593f01
#define public_593f81 _public_593f81
#define public_594027 _public_594027
#define public_59403d _public_59403d
#define public_5940b2 _public_5940b2
#define public_5940c8 _public_5940c8
#define public_5941a3 _public_5941a3
#define public_594223 _public_594223
#define public_5942d0 _public_5942d0
#define public_5942e6 _public_5942e6
#define public_594360 _public_594360
#define public_594376 _public_594376
#define public_59442e _public_59442e
#define public_594434 _public_594434
#define public_594459 _public_594459
#define public_59445e _public_59445e
#define public_5944c0 _public_5944c0
#define public_5944d1 _public_5944d1
#define public_5944d7 _public_5944d7
#define public_5944db _public_5944db
#define public_5944e8 _public_5944e8
#define public_59450f _public_59450f
#define public_594518 _public_594518

PROC_DECLARE(0x592230, internal_592230, public_592230);
extern "C" NAKED register_t __cdecl internal_592230()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c4a7c @0x592232*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c4a7c
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x8E8
        push ebx
        push ebp
        push esi
        push edi
/*FIXUP push offset public_5e5534 @0x59224f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e5534
        push 4
        mov dword ptr ss : [esp+0x38], ecx
        call dword ptr ds : [public_5c7160]
        add esp, 8
        mov esi, eax
        mov al, byte ptr ss : [esp+0x1B]
        push 0
        lea ecx, ss:[esp+0x74]
        mov byte ptr ss : [esp+0x74], al
        call dword ptr ds : [public_5c7084]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov ebp, ecx
        push 1
        push ebp
        lea ecx, ss:[esp+0x78]
        call dword ptr ds : [public_5c708c]
        test al, al
        je public_5922b7
        mov edi, dword ptr ss : [esp+0x74]
        mov ecx, ebp
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        push ebp
        lea ecx, ss:[esp+0x74]
        call dword ptr ds : [public_5c706c]
        public_5922b7 : nop
        mov edi, dword ptr ss : [esp+0x30]
        lea ebp, ds:[edi+0x14]
        mov ecx, ebp
        mov dword ptr ss : [esp+0x900], 0
        xor bl, bl
        call public_594540
        mov esi, dword ptr ds : [edi+4]
        lea eax, ss:[esp+0x34]
        push eax
        mov ecx, edi
        call public_53e430
        mov ecx, dword ptr ds : [eax]
        push esi
        push ecx
        lea edx, ss:[esp+0x44]
        push edx
        mov ecx, edi
        call public_4a2f80
        mov edx, dword ptr ss : [esp+0x908]
        lea eax, ds:[edi+0xC]
        xor ecx, ecx
        mov dword ptr ds : [eax], ecx
/*FIXUP push offset public_5e5530 @0x5922ff*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e5530
        push edx
        mov dword ptr ds : [eax+4], ecx
        call dword ptr ds : [public_5c7150]
        add esp, 8
        test eax, eax
        mov dword ptr ss : [esp+0x38], eax
        je public_5944db
        push eax
        lea eax, ss:[esp+0x6FC]
        push 0x100
        push eax
        mov byte ptr ss : [esp+0x27], 1
        call dword ptr ds : [public_5c715c]
        add esp, 0xC
        test eax, eax
        je public_59445e
        public_592341 : nop
        mov al, byte ptr ss : [esp+0x6F8]
        cmp al, 0x23
        je public_594434
        movsx ecx, al
        push ecx
        call dword ptr ds : [public_5c7158]
        add esp, 4
        test eax, eax
        jne public_594434
        lea edx, ss:[esp+0x220]
        push edx
        lea eax, ss:[esp+0x6FC]
/*FIXUP push offset public_5e552c @0x592374*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e552c
        push eax
        call dword ptr ds : [public_5c7148]
        add esp, 0xC
        cmp eax, 1
        jne public_594434
        xor ebx, ebx
        mov edi, offset public_5e551c
        lea esi, ss:[esp+0x220]
        mov ecx, 0xD
        xor edx, edx
        repe cmpsb
        mov dword ptr ss : [esp+0x10], ebx
        mov byte ptr ss : [esp+0x5F8], bl
        jne public_592688
        lea eax, ss:[esp+0x5F8]
        push eax
        lea ecx, ss:[esp+0x24]
        push ecx
        lea edx, ss:[esp+0x24]
        push edx
        lea eax, ss:[esp+0x30]
        push eax
        lea ecx, ss:[esp+0x38]
        push ecx
        lea edx, ss:[esp+0x334]
        push edx
        lea eax, ss:[esp+0x238]
        push eax
        lea ecx, ss:[esp+0x714]
/*FIXUP push offset public_5e5500 @0x5923e7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e5500
        push ecx
        call dword ptr ds : [public_5c7148]
        add esp, 0x24
        cmp eax, 6
        je public_592404
        cmp eax, 7
        jne public_594459
        public_592404 : nop
        push 0x20
        call public_5b7e84
        add esp, 4
        lea edx, ss:[esp+0x2C]
        mov dword ptr ss : [esp+0x10], eax
        mov dword ptr ss : [esp+0x2C], eax
        push edx
        lea eax, ss:[esp+0xA4]
        push eax
        mov ecx, ebp
        call public_46d170
        lea ecx, ss:[esp+0xA4]
        push ecx
        lea edx, ss:[esp+0xA4]
        push edx
        lea ecx, ss:[esp+0x5F8]
        call public_46d660
        fld dword ptr ss : [esp+0x20]
        mov eax, dword ptr ss : [esp+0x10]
        fstp dword ptr ds : [eax+0x18]
        mov ecx, dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x1C]
        lea edi, ss:[esp+0x220]
        fstp dword ptr ds : [ecx+0x14]
        mov edx, dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x28]
        fstp dword ptr ds : [edx+0xC]
        mov eax, dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x24]
        fstp dword ptr ds : [eax+0x10]
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx+0x1C], ebx
        or ecx, 0xFFFFFFFF
        xor eax, eax
        repne scasb
        not ecx
        push ecx
        call public_5b7e84
        mov dl, byte ptr ss : [esp+0x224]
        add esp, 4
        xor ecx, ecx
        test dl, dl
        je public_5924c6
        mov esi, eax
        lea edi, ss:[esp+0x220]
        sub esi, edi
        lea ebx, ds:[ebx]
        public_5924b0 : nop
        lea edi, ds:[ecx+esi]
        inc ecx
        mov byte ptr ss : [esp+edi+0x220], dl
        mov dl, byte ptr ss : [esp+ecx+0x220]
        test dl, dl
        jne public_5924b0
        public_5924c6 : nop
        mov byte ptr ds : [eax+ecx], 0
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x2C]
        push edx
        lea eax, ss:[esp+0x164]
        mov dword ptr ss : [esp+0x30], ecx
        push eax
        mov ecx, ebp
        call public_46d170
        lea ecx, ss:[esp+0x164]
        push ecx
        lea edx, ss:[esp+0x164]
        push edx
        lea ecx, ss:[esp+0x5B0]
        call public_46d660
        or ecx, 0xFFFFFFFF
        xor eax, eax
        lea edi, ss:[esp+0x320]
        repne scasb
        not ecx
        push ecx
        call public_5b7e84
        mov dl, byte ptr ss : [esp+0x324]
        add esp, 4
        xor ecx, ecx
        test dl, dl
        je public_592556
        mov esi, eax
        lea edi, ss:[esp+0x320]
        sub esi, edi
        nop 
        lea esp, ss:[esp]
        public_592540 : nop
        lea edi, ds:[ecx+esi]
        inc ecx
        mov byte ptr ss : [esp+edi+0x320], dl
        mov dl, byte ptr ss : [esp+ecx+0x320]
        test dl, dl
        jne public_592540
        public_592556 : nop
        mov byte ptr ds : [eax+ecx], 0
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx+8], eax
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [edx+8]
        lea ecx, ss:[esp+0x2C]
        push ecx
        lea edx, ss:[esp+0xB4]
        push edx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x34], eax
        call public_46d170
        lea eax, ss:[esp+0xB4]
        push eax
        lea ecx, ss:[esp+0xB4]
        push ecx
        lea ecx, ss:[esp+0x5C0]
        call public_46d660
        push 0xC
        call public_5b7e84
        add esp, 4
        mov esi, eax
        lea edx, ss:[esp+0x2C]
        push edx
        lea eax, ss:[esp+0x16C]
        push eax
        mov ecx, ebp
        mov dword ptr ss : [esp+0x34], esi
        call public_46d170
        lea ecx, ss:[esp+0x16C]
        push ecx
        lea edx, ss:[esp+0x16C]
        push edx
        lea ecx, ss:[esp+0x5D0]
        call public_46d660
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax+4], esi
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], ecx
        mov edx, dword ptr ss : [esp+0x20]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov dword ptr ds : [esi+4], edx
        lea edi, ss:[esp+0x5F8]
        repne scasb
        not ecx
        dec ecx
        lea eax, ds:[ecx+ecx+2]
        push eax
        call public_5b7e84
        mov dl, byte ptr ss : [esp+0x5FC]
        add esp, 4
        xor ecx, ecx
        test dl, dl
        je public_592634
        nop 
        lea esp, ss:[esp]
        public_592620 : nop
        movsx dx, dl
        mov word ptr ds : [eax+ecx*2], dx
        mov dl, byte ptr ss : [esp+ecx+0x5F9]
        inc ecx
        test dl, dl
        jne public_592620
        public_592634 : nop
        mov word ptr ds : [eax+ecx*2], bx
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ss : [esp+0x2C], eax
        lea eax, ss:[esp+0x2C]
        push eax
        lea ecx, ss:[esp+0xC4]
        push ecx
        mov ecx, ebp
        call public_46d170
        lea edx, ss:[esp+0xC4]
        push edx
        lea eax, ss:[esp+0xC4]
        push eax
        lea ecx, ss:[esp+0x5E0]
        call public_46d660
        mov ecx, dword ptr ss : [esp+0x30]
        mov eax, dword ptr ds : [ecx+4]
        lea edx, ss:[esp+0x10]
        push edx
        push eax
        lea eax, ss:[esp+0x458]
        jmp public_59442e
        public_592688 : nop
        mov edi, offset public_5e54f0
        lea esi, ss:[esp+0x220]
        mov ecx, 0x10
        xor edx, edx
        repe cmpsb
        jne public_592ab2
        lea eax, ss:[esp+0x2C]
        push eax
        mov byte ptr ss : [esp+0x7FC], dl
        lea ecx, ss:[esp+0x7FC]
        push ecx
        lea edx, ss:[esp+0x68]
        push edx
        lea eax, ss:[esp+0x604]
        push eax
        lea ecx, ss:[esp+0x30]
        push ecx
        lea edx, ss:[esp+0x30]
        push edx
        lea eax, ss:[esp+0x3C]
        push eax
        lea ecx, ss:[esp+0x44]
        push ecx
        lea edx, ss:[esp+0x340]
        push edx
        lea eax, ss:[esp+0x244]
        push eax
        lea ecx, ss:[esp+0x720]
/*FIXUP push offset public_5e54c8 @0x5926ef*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e54c8
        push ecx
        mov dword ptr ss : [esp+0x5C], ebx
        call dword ptr ds : [public_5c7148]
        add esp, 0x30
        cmp eax, 7
        je public_59271a
        cmp eax, 8
        je public_59271a
        cmp eax, 9
        je public_59271a
        cmp eax, 0xA
        jne public_594459
        public_59271a : nop
        push 0x20
        call public_5b7e84
        add esp, 4
        lea edx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x10], eax
        mov dword ptr ss : [esp+0x14], eax
        push edx
        lea eax, ss:[esp+0x1F4]
        push eax
        mov ecx, ebp
        call public_46d170
        lea ecx, ss:[esp+0x1F4]
        push ecx
        lea edx, ss:[esp+0x1F4]
        push edx
        lea ecx, ss:[esp+0x5A8]
        call public_46d660
        fld dword ptr ss : [esp+0x20]
        mov eax, dword ptr ss : [esp+0x10]
        fstp dword ptr ds : [eax+0x18]
        mov ecx, dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x1C]
        lea edi, ss:[esp+0x220]
        fstp dword ptr ds : [ecx+0x14]
        mov edx, dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x28]
        fstp dword ptr ds : [edx+0xC]
        mov eax, dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x24]
        fstp dword ptr ds : [eax+0x10]
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx+0x1C], ebx
        or ecx, 0xFFFFFFFF
        xor eax, eax
        repne scasb
        not ecx
        push ecx
        call public_5b7e84
        mov dl, byte ptr ss : [esp+0x224]
        add esp, 4
        xor ecx, ecx
        test dl, dl
        je public_5927d6
        mov esi, eax
        lea edi, ss:[esp+0x220]
        sub esi, edi
        public_5927c0 : nop
        lea edi, ds:[ecx+esi]
        inc ecx
        mov byte ptr ss : [esp+edi+0x220], dl
        mov dl, byte ptr ss : [esp+ecx+0x220]
        test dl, dl
        jne public_5927c0
        public_5927d6 : nop
        mov byte ptr ds : [eax+ecx], 0
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x14]
        push edx
        lea eax, ss:[esp+0xD4]
        mov dword ptr ss : [esp+0x18], ecx
        push eax
        mov ecx, ebp
        call public_46d170
        lea ecx, ss:[esp+0xD4]
        push ecx
        lea edx, ss:[esp+0xD4]
        push edx
        lea ecx, ss:[esp+0x478]
        call public_46d660
        or ecx, 0xFFFFFFFF
        xor eax, eax
        lea edi, ss:[esp+0x320]
        repne scasb
        not ecx
        push ecx
        call public_5b7e84
        mov dl, byte ptr ss : [esp+0x324]
        add esp, 4
        xor ecx, ecx
        test dl, dl
        je public_592866
        mov esi, eax
        lea edi, ss:[esp+0x320]
        sub esi, edi
        nop 
        lea esp, ss:[esp]
        public_592850 : nop
        lea edi, ds:[ecx+esi]
        inc ecx
        mov byte ptr ss : [esp+edi+0x320], dl
        mov dl, byte ptr ss : [esp+ecx+0x320]
        test dl, dl
        jne public_592850
        public_592866 : nop
        mov byte ptr ds : [eax+ecx], 0
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx+8], eax
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [edx+8]
        lea ecx, ss:[esp+0x14]
        push ecx
        lea edx, ss:[esp+0x184]
        push edx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x1C], eax
        call public_46d170
        lea eax, ss:[esp+0x184]
        push eax
        lea ecx, ss:[esp+0x184]
        push ecx
        lea ecx, ss:[esp+0x548]
        call public_46d660
        push 0x18
        call public_5b7e84
        add esp, 4
        mov ebx, eax
        lea edx, ss:[esp+0x14]
        push edx
        lea eax, ss:[esp+0xE4]
        push eax
        mov ecx, ebp
        mov dword ptr ss : [esp+0x1C], ebx
        call public_46d170
        lea ecx, ss:[esp+0xE4]
        push ecx
        lea edx, ss:[esp+0xE4]
        push edx
        lea ecx, ss:[esp+0x488]
        call public_46d660
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax+4], ebx
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [ebx], ecx
        mov edx, dword ptr ss : [esp+0x20]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov dword ptr ds : [ebx+4], edx
        lea edi, ss:[esp+0x5F8]
        repne scasb
        not ecx
        dec ecx
        lea eax, ds:[ecx+ecx+2]
        push eax
        call public_5b7e84
        mov esi, eax
        mov al, byte ptr ss : [esp+0x5FC]
        add esp, 4
        xor ecx, ecx
        test al, al
        je public_592944
        lea ecx, ds:[ecx]
        public_592930 : nop
        movsx dx, al
        mov word ptr ds : [esi+ecx*2], dx
        mov al, byte ptr ss : [esp+ecx+0x5F9]
        inc ecx
        test al, al
        jne public_592930
        public_592944 : nop
        mov word ptr ds : [esi+ecx*2], 0
        lea eax, ss:[esp+0x14]
        push eax
        lea ecx, ss:[esp+0x1D4]
        push ecx
        mov ecx, ebp
        mov dword ptr ds : [ebx+8], esi
        mov dword ptr ss : [esp+0x1C], esi
        call public_46d170
        lea edx, ss:[esp+0x1D4]
        push edx
        lea eax, ss:[esp+0x1D4]
        push eax
        lea ecx, ss:[esp+0x5F0]
        call public_46d660
        fld dword ptr ss : [esp+0x60]
        call public_5b7ec0
        mov dword ptr ds : [ebx+0xC], eax
        mov ecx, dword ptr ss : [esp+0x2C]
        mov dword ptr ds : [ebx+0x10], ecx
        mov edi, offset public_5e54c0
        lea esi, ss:[esp+0x7F8]
        mov ecx, 7
        xor edx, edx
        repe cmpsb
        je public_592a92
        mov al, byte ptr ss : [esp+0x7F8]
        test al, al
        je public_592a89
        mov edi, offset public_6155f0
        lea esi, ss:[esp+0x7F8]
        lea ebx, ds:[ebx]
        public_5929d0 : nop
        mov cl, byte ptr ds : [esi]
        mov dl, byte ptr ds : [edi]
        mov al, cl
        cmp cl, dl
        jne public_5929f8
        test al, al
        je public_5929f4
        mov dl, byte ptr ds : [esi+1]
        mov cl, byte ptr ds : [edi+1]
        mov al, dl
        cmp dl, cl
        jne public_5929f8
        add esi, 2
        add edi, 2
        test al, al
        jne public_5929d0
        public_5929f4 : nop
        xor eax, eax
        jmp public_5929fd
        public_5929f8 : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_5929fd : nop
        test eax, eax
        je public_592a89
        or ecx, 0xFFFFFFFF
        xor eax, eax
        lea edi, ss:[esp+0x7F8]
        repne scasb
        not ecx
        push ecx
        call public_5b7e84
        mov dl, byte ptr ss : [esp+0x7FC]
        add esp, 4
        xor ecx, ecx
        test dl, dl
        mov esi, eax
        je public_592a4c
        lea edi, ss:[esp+0x7F8]
        sub eax, edi
        public_592a36 : nop
        lea edi, ds:[ecx+eax]
        inc ecx
        mov byte ptr ss : [esp+edi+0x7F8], dl
        mov dl, byte ptr ss : [esp+ecx+0x7F8]
        test dl, dl
        jne public_592a36
        public_592a4c : nop
        mov byte ptr ds : [esi+ecx], 0
        lea eax, ss:[esp+0x14]
        push eax
        lea ecx, ss:[esp+0xF4]
        push ecx
        mov ecx, ebp
        mov dword ptr ds : [ebx+0x14], esi
        mov dword ptr ss : [esp+0x1C], esi
        call public_46d170
        lea edx, ss:[esp+0xF4]
        push edx
        lea eax, ss:[esp+0xF4]
        push eax
        lea ecx, ss:[esp+0x498]
        call public_46d660
        jmp public_592a99
        public_592a89 : nop
        mov dword ptr ds : [ebx+0x14], offset public_6155f0
        jmp public_592a99
        public_592a92 : nop
        mov dword ptr ds : [ebx+0x14], 0
        public_592a99 : nop
        mov ecx, dword ptr ss : [esp+0x30]
        mov eax, dword ptr ds : [ecx+4]
        lea edx, ss:[esp+0x10]
        push edx
        push eax
        lea eax, ss:[esp+0x454]
        jmp public_59442e
        public_592ab2 : nop
        mov edi, offset public_5e54b4
        lea esi, ss:[esp+0x220]
        mov ecx, 0xB
        xor edx, edx
        repe cmpsb
        jne public_592d98
        lea eax, ss:[esp+0x5F8]
        push eax
        lea ecx, ss:[esp+0x24]
        push ecx
        lea edx, ss:[esp+0x24]
        push edx
        lea eax, ss:[esp+0x30]
        push eax
        lea ecx, ss:[esp+0x38]
        push ecx
        lea edx, ss:[esp+0x334]
        push edx
        lea eax, ss:[esp+0x238]
        push eax
        lea ecx, ss:[esp+0x714]
/*FIXUP push offset public_5e5500 @0x592b00*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e5500
        push ecx
        call dword ptr ds : [public_5c7148]
        add esp, 0x24
        cmp eax, 6
        je public_592b1d
        cmp eax, 7
        jne public_594459
        public_592b1d : nop
        push 0x20
        call public_5b7e84
        add esp, 4
        lea edx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x10], eax
        mov dword ptr ss : [esp+0x14], eax
        push edx
        lea eax, ss:[esp+0x194]
        push eax
        mov ecx, ebp
        call public_46d170
        lea ecx, ss:[esp+0x194]
        push ecx
        lea edx, ss:[esp+0x194]
        push edx
        lea ecx, ss:[esp+0x558]
        call public_46d660
        fld dword ptr ss : [esp+0x20]
        mov eax, dword ptr ss : [esp+0x10]
        fstp dword ptr ds : [eax+0x18]
        mov ecx, dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x1C]
        lea edi, ss:[esp+0x220]
        fstp dword ptr ds : [ecx+0x14]
        mov edx, dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x28]
        fstp dword ptr ds : [edx+0xC]
        mov eax, dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x24]
        fstp dword ptr ds : [eax+0x10]
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx+0x1C], ebx
        or ecx, 0xFFFFFFFF
        xor eax, eax
        repne scasb
        not ecx
        push ecx
        call public_5b7e84
        mov dl, byte ptr ss : [esp+0x224]
        add esp, 4
        xor ecx, ecx
        test dl, dl
        je public_592bd9
        mov esi, eax
        lea edi, ss:[esp+0x220]
        sub esi, edi
        public_592bc3 : nop
        lea edi, ds:[ecx+esi]
        inc ecx
        mov byte ptr ss : [esp+edi+0x220], dl
        mov dl, byte ptr ss : [esp+ecx+0x220]
        test dl, dl
        jne public_592bc3
        public_592bd9 : nop
        mov byte ptr ds : [eax+ecx], 0
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x14]
        push edx
        lea eax, ss:[esp+0x104]
        mov dword ptr ss : [esp+0x18], ecx
        push eax
        mov ecx, ebp
        call public_46d170
        lea ecx, ss:[esp+0x104]
        push ecx
        lea edx, ss:[esp+0x104]
        push edx
        lea ecx, ss:[esp+0x4A8]
        call public_46d660
        or ecx, 0xFFFFFFFF
        xor eax, eax
        lea edi, ss:[esp+0x320]
        repne scasb
        not ecx
        push ecx
        call public_5b7e84
        mov dl, byte ptr ss : [esp+0x324]
        add esp, 4
        xor ecx, ecx
        test dl, dl
        je public_592c66
        mov esi, eax
        lea edi, ss:[esp+0x320]
        sub esi, edi
        mov edi, edi
        public_592c50 : nop
        lea edi, ds:[ecx+esi]
        inc ecx
        mov byte ptr ss : [esp+edi+0x320], dl
        mov dl, byte ptr ss : [esp+ecx+0x320]
        test dl, dl
        jne public_592c50
        public_592c66 : nop
        mov byte ptr ds : [eax+ecx], 0
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx+8], eax
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [edx+8]
        lea ecx, ss:[esp+0x14]
        push ecx
        lea edx, ss:[esp+0x214]
        push edx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x1C], eax
        call public_46d170
        lea eax, ss:[esp+0x214]
        push eax
        lea ecx, ss:[esp+0x214]
        push ecx
        lea ecx, ss:[esp+0x5B8]
        call public_46d660
        push 0xC
        call public_5b7e84
        add esp, 4
        mov esi, eax
        lea edx, ss:[esp+0x14]
        push edx
        lea eax, ss:[esp+0x114]
        push eax
        mov ecx, ebp
        mov dword ptr ss : [esp+0x1C], esi
        call public_46d170
        lea ecx, ss:[esp+0x114]
        push ecx
        lea edx, ss:[esp+0x114]
        push edx
        lea ecx, ss:[esp+0x4B8]
        call public_46d660
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax+4], esi
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], ecx
        mov edx, dword ptr ss : [esp+0x20]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov dword ptr ds : [esi+4], edx
        lea edi, ss:[esp+0x5F8]
        repne scasb
        not ecx
        dec ecx
        lea eax, ds:[ecx+ecx+2]
        push eax
        call public_5b7e84
        mov dl, byte ptr ss : [esp+0x5FC]
        add esp, 4
        xor ecx, ecx
        test dl, dl
        je public_592d44
        nop 
        lea esp, ss:[esp]
        public_592d30 : nop
        movsx dx, dl
        mov word ptr ds : [eax+ecx*2], dx
        mov dl, byte ptr ss : [esp+ecx+0x5F9]
        inc ecx
        test dl, dl
        jne public_592d30
        public_592d44 : nop
        mov word ptr ds : [eax+ecx*2], bx
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ss : [esp+0x14], eax
        lea eax, ss:[esp+0x14]
        push eax
        lea ecx, ss:[esp+0x1A4]
        push ecx
        mov ecx, ebp
        call public_46d170
        lea edx, ss:[esp+0x1A4]
        push edx
        lea eax, ss:[esp+0x1A4]
        push eax
        lea ecx, ss:[esp+0x568]
        call public_46d660
        mov ecx, dword ptr ss : [esp+0x30]
        mov eax, dword ptr ds : [ecx+4]
        lea edx, ss:[esp+0x10]
        push edx
        push eax
        lea eax, ss:[esp+0x428]
        jmp public_59442e
        public_592d98 : nop
        mov edi, offset public_5e54a8
        lea esi, ss:[esp+0x220]
        mov ecx, 0xA
        xor edx, edx
        repe cmpsb
        jne public_592ff9
        lea eax, ss:[esp+0x20]
        push eax
        lea ecx, ss:[esp+0x20]
        push ecx
        lea edx, ss:[esp+0x2C]
        push edx
        lea eax, ss:[esp+0x34]
        push eax
        lea ecx, ss:[esp+0x330]
        push ecx
        lea edx, ss:[esp+0x234]
        push edx
        lea eax, ss:[esp+0x710]
/*FIXUP push offset public_5e5494 @0x592dde*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e5494
        push eax
        call dword ptr ds : [public_5c7148]
        add esp, 0x20
        cmp eax, 6
        jne public_594459
        push 0x20
        call public_5b7e84
        add esp, 4
        lea ecx, ss:[esp+0x14]
        push ecx
        lea edx, ss:[esp+0x124]
        push edx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ss : [esp+0x1C], eax
        call public_46d170
        lea eax, ss:[esp+0x124]
        push eax
        lea ecx, ss:[esp+0x124]
        push ecx
        lea ecx, ss:[esp+0x4C8]
        call public_46d660
        fld dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x10]
        fstp dword ptr ds : [edx+0x18]
        mov eax, dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x1C]
        lea edi, ss:[esp+0x220]
        fstp dword ptr ds : [eax+0x14]
        mov ecx, dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x28]
        fstp dword ptr ds : [ecx+0xC]
        mov edx, dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x24]
        or ecx, 0xFFFFFFFF
        fstp dword ptr ds : [edx+0x10]
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax+0x1C], ebx
        xor eax, eax
        repne scasb
        not ecx
        push ecx
        call public_5b7e84
        mov dl, byte ptr ss : [esp+0x224]
        add esp, 4
        xor ecx, ecx
        test dl, dl
        je public_592eb6
        mov esi, eax
        lea edi, ss:[esp+0x220]
        sub esi, edi
        lea esp, ss:[esp]
        public_592ea0 : nop
        lea edi, ds:[ecx+esi]
        inc ecx
        mov byte ptr ss : [esp+edi+0x220], dl
        mov dl, byte ptr ss : [esp+ecx+0x220]
        test dl, dl
        jne public_592ea0
        public_592eb6 : nop
        mov byte ptr ds : [eax+ecx], 0
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx], eax
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [edx]
        lea ecx, ss:[esp+0x14]
        push ecx
        lea edx, ss:[esp+0x1E4]
        push edx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x1C], eax
        call public_46d170
        lea eax, ss:[esp+0x1E4]
        push eax
        lea ecx, ss:[esp+0x1E4]
        push ecx
        lea ecx, ss:[esp+0x5E8]
        call public_46d660
        or ecx, 0xFFFFFFFF
        xor eax, eax
        lea edi, ss:[esp+0x320]
        repne scasb
        not ecx
        push ecx
        call public_5b7e84
        mov dl, byte ptr ss : [esp+0x324]
        add esp, 4
        xor ecx, ecx
        test dl, dl
        je public_592f46
        mov esi, eax
        lea edi, ss:[esp+0x320]
        sub esi, edi
        nop 
        lea esp, ss:[esp]
        public_592f30 : nop
        lea edi, ds:[ecx+esi]
        inc ecx
        mov byte ptr ss : [esp+edi+0x320], dl
        mov dl, byte ptr ss : [esp+ecx+0x320]
        test dl, dl
        jne public_592f30
        public_592f46 : nop
        mov byte ptr ds : [eax+ecx], 0
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edx+8], eax
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax+8]
        lea edx, ss:[esp+0x14]
        push edx
        lea eax, ss:[esp+0x134]
        mov dword ptr ss : [esp+0x18], ecx
        push eax
        mov ecx, ebp
        call public_46d170
        lea ecx, ss:[esp+0x134]
        push ecx
        lea edx, ss:[esp+0x134]
        push edx
        lea ecx, ss:[esp+0x4D8]
        call public_46d660
        push 8
        call public_5b7e84
        mov esi, eax
        add esp, 4
        lea eax, ss:[esp+0x14]
        push eax
        lea ecx, ss:[esp+0x1B4]
        push ecx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x1C], esi
        call public_46d170
        lea edx, ss:[esp+0x1B4]
        push edx
        lea eax, ss:[esp+0x1B4]
        push eax
        lea ecx, ss:[esp+0x578]
        call public_46d660
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx+4], esi
        mov edx, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x30]
        mov dword ptr ds : [esi], edx
        mov eax, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [esi+4], eax
        mov eax, dword ptr ds : [ecx+4]
        lea edx, ss:[esp+0x10]
        push edx
        push eax
        lea eax, ss:[esp+0x430]
        jmp public_59442e
        public_592ff9 : nop
        mov edi, offset public_5e5488
        lea esi, ss:[esp+0x220]
        mov ecx, 0xC
        xor edx, edx
        repe cmpsb
        jne public_5932f2
        lea eax, ss:[esp+0x5F8]
        push eax
        lea ecx, ss:[esp+0x6C]
        push ecx
        lea edx, ss:[esp+0x28]
        push edx
        lea eax, ss:[esp+0x28]
        push eax
        lea ecx, ss:[esp+0x34]
        push ecx
        lea edx, ss:[esp+0x3C]
        push edx
        lea eax, ss:[esp+0x338]
        push eax
        lea ecx, ss:[esp+0x23C]
        push ecx
        lea edx, ss:[esp+0x718]
/*FIXUP push offset public_5e5470 @0x59304c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e5470
        push edx
        call dword ptr ds : [public_5c7148]
        add esp, 0x28
        cmp eax, 8
        jne public_594459
        push 0x20
        call public_5b7e84
        add esp, 4
        mov dword ptr ss : [esp+0x10], eax
        mov dword ptr ss : [esp+0x14], eax
        lea eax, ss:[esp+0x14]
        push eax
        lea ecx, ss:[esp+0x144]
        push ecx
        mov ecx, ebp
        call public_46d170
        lea edx, ss:[esp+0x144]
        push edx
        lea eax, ss:[esp+0x144]
        push eax
        lea ecx, ss:[esp+0x4E8]
        call public_46d660
        fld dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x10]
        fstp dword ptr ds : [ecx+0x18]
        mov edx, dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x1C]
        lea edi, ss:[esp+0x220]
        fstp dword ptr ds : [edx+0x14]
        mov eax, dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x28]
        fstp dword ptr ds : [eax+0xC]
        mov ecx, dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x24]
        xor eax, eax
        fstp dword ptr ds : [ecx+0x10]
        mov edx, dword ptr ss : [esp+0x10]
        or ecx, 0xFFFFFFFF
        mov dword ptr ds : [edx+0x1C], ebx
        repne scasb
        not ecx
        push ecx
        call public_5b7e84
        mov dl, byte ptr ss : [esp+0x224]
        add esp, 4
        xor ecx, ecx
        test dl, dl
        je public_593126
        mov esi, eax
        lea edi, ss:[esp+0x220]
        sub esi, edi
        lea ebx, ds:[ebx]
        public_593110 : nop
        lea edi, ds:[ecx+esi]
        inc ecx
        mov byte ptr ss : [esp+edi+0x220], dl
        mov dl, byte ptr ss : [esp+ecx+0x220]
        test dl, dl
        jne public_593110
        public_593126 : nop
        mov byte ptr ds : [eax+ecx], 0
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx], eax
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [edx]
        lea ecx, ss:[esp+0x14]
        push ecx
        lea edx, ss:[esp+0x204]
        push edx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x1C], eax
        call public_46d170
        lea eax, ss:[esp+0x204]
        push eax
        lea ecx, ss:[esp+0x204]
        push ecx
        lea ecx, ss:[esp+0x5C8]
        call public_46d660
        or ecx, 0xFFFFFFFF
        xor eax, eax
        lea edi, ss:[esp+0x320]
        repne scasb
        not ecx
        push ecx
        call public_5b7e84
        mov dl, byte ptr ss : [esp+0x324]
        add esp, 4
        xor ecx, ecx
        test dl, dl
        je public_5931b6
        mov esi, eax
        lea edi, ss:[esp+0x320]
        sub esi, edi
        nop 
        lea esp, ss:[esp]
        public_5931a0 : nop
        lea edi, ds:[ecx+esi]
        inc ecx
        mov byte ptr ss : [esp+edi+0x320], dl
        mov dl, byte ptr ss : [esp+ecx+0x320]
        test dl, dl
        jne public_5931a0
        public_5931b6 : nop
        mov byte ptr ds : [eax+ecx], 0
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edx+8], eax
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax+8]
        lea edx, ss:[esp+0x14]
        push edx
        lea eax, ss:[esp+0x154]
        mov dword ptr ss : [esp+0x18], ecx
        push eax
        mov ecx, ebp
        call public_46d170
        lea ecx, ss:[esp+0x154]
        push ecx
        lea edx, ss:[esp+0x154]
        push edx
        lea ecx, ss:[esp+0x4F8]
        call public_46d660
        push 0x10
        call public_5b7e84
        mov esi, eax
        add esp, 4
        lea eax, ss:[esp+0x14]
        push eax
        lea ecx, ss:[esp+0x1C4]
        push ecx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x1C], esi
        call public_46d170
        lea edx, ss:[esp+0x1C4]
        push edx
        lea eax, ss:[esp+0x1C4]
        push eax
        lea ecx, ss:[esp+0x588]
        call public_46d660
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx+4], esi
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], edx
        mov eax, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [esi+4], eax
        or ecx, 0xFFFFFFFF
        xor eax, eax
        lea edi, ss:[esp+0x5F8]
        repne scasb
        not ecx
        push ecx
        call public_5b7e84
        mov dl, byte ptr ss : [esp+0x5FC]
        add esp, 4
        xor ecx, ecx
        test dl, dl
        je public_593297
        mov edi, eax
        lea ebx, ss:[esp+0x5F8]
        sub edi, ebx
        public_593281 : nop
        lea ebx, ds:[ecx+edi]
        inc ecx
        mov byte ptr ss : [esp+ebx+0x5F8], dl
        mov dl, byte ptr ss : [esp+ecx+0x5F8]
        test dl, dl
        jne public_593281
        public_593297 : nop
        mov byte ptr ds : [eax+ecx], 0
        lea ecx, ss:[esp+0x14]
        push ecx
        lea edx, ss:[esp+0x94]
        push edx
        mov ecx, ebp
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ss : [esp+0x1C], eax
        call public_46d170
        lea eax, ss:[esp+0x94]
        push eax
        lea ecx, ss:[esp+0x94]
        push ecx
        lea ecx, ss:[esp+0x508]
        call public_46d660
        mov edx, dword ptr ss : [esp+0x68]
        mov ecx, dword ptr ss : [esp+0x30]
        mov dword ptr ds : [esi+0xC], edx
        mov eax, dword ptr ds : [ecx+4]
        lea edx, ss:[esp+0x10]
        push edx
        push eax
        lea eax, ss:[esp+0x438]
        jmp public_59442e
        public_5932f2 : nop
        mov edi, offset public_5e5464
        lea esi, ss:[esp+0x220]
        mov ecx, 0xC
        xor edx, edx
        repe cmpsb
        jne public_59354a
        lea eax, ss:[esp+0x20]
        push eax
        lea ecx, ss:[esp+0x20]
        push ecx
        lea edx, ss:[esp+0x2C]
        push edx
        lea eax, ss:[esp+0x34]
        push eax
        lea ecx, ss:[esp+0x330]
        push ecx
        lea edx, ss:[esp+0x234]
        push edx
        lea eax, ss:[esp+0x710]
/*FIXUP push offset public_5e5494 @0x593338*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e5494
        push eax
        call dword ptr ds : [public_5c7148]
        add esp, 0x20
        cmp eax, 6
        jne public_594459
        push 0x20
        call public_5b7e84
        add esp, 4
        lea ecx, ss:[esp+0x14]
        push ecx
        lea edx, ss:[esp+0x9C]
        push edx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ss : [esp+0x1C], eax
        call public_46d170
        lea eax, ss:[esp+0x9C]
        push eax
        lea ecx, ss:[esp+0x9C]
        push ecx
        lea ecx, ss:[esp+0x460]
        call public_46d660
        fld dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x10]
        fstp dword ptr ds : [edx+0x18]
        mov eax, dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x1C]
        lea edi, ss:[esp+0x220]
        fstp dword ptr ds : [eax+0x14]
        mov ecx, dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x28]
        fstp dword ptr ds : [ecx+0xC]
        mov edx, dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x24]
        or ecx, 0xFFFFFFFF
        fstp dword ptr ds : [edx+0x10]
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax+0x1C], ebx
        xor eax, eax
        repne scasb
        not ecx
        push ecx
        call public_5b7e84
        mov dl, byte ptr ss : [esp+0x224]
        add esp, 4
        xor ecx, ecx
        test dl, dl
        je public_59340c
        mov esi, eax
        lea edi, ss:[esp+0x220]
        sub esi, edi
        public_5933f6 : nop
        lea edi, ds:[ecx+esi]
        inc ecx
        mov byte ptr ss : [esp+edi+0x220], dl
        mov dl, byte ptr ss : [esp+ecx+0x220]
        test dl, dl
        jne public_5933f6
        public_59340c : nop
        mov byte ptr ds : [eax+ecx], 0
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx], eax
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [edx]
        lea ecx, ss:[esp+0x14]
        push ecx
        lea edx, ss:[esp+0xAC]
        push edx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x1C], eax
        call public_46d170
        lea eax, ss:[esp+0xAC]
        push eax
        lea ecx, ss:[esp+0xAC]
        push ecx
        lea ecx, ss:[esp+0x518]
        call public_46d660
        or ecx, 0xFFFFFFFF
        xor eax, eax
        lea edi, ss:[esp+0x320]
        repne scasb
        not ecx
        push ecx
        call public_5b7e84
        mov dl, byte ptr ss : [esp+0x324]
        add esp, 4
        xor ecx, ecx
        test dl, dl
        je public_593497
        mov esi, eax
        lea edi, ss:[esp+0x320]
        sub esi, edi
        public_593481 : nop
        lea edi, ds:[ecx+esi]
        inc ecx
        mov byte ptr ss : [esp+edi+0x320], dl
        mov dl, byte ptr ss : [esp+ecx+0x320]
        test dl, dl
        jne public_593481
        public_593497 : nop
        mov byte ptr ds : [eax+ecx], 0
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edx+8], eax
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax+8]
        lea edx, ss:[esp+0x14]
        push edx
        lea eax, ss:[esp+0xBC]
        mov dword ptr ss : [esp+0x18], ecx
        push eax
        mov ecx, ebp
        call public_46d170
        lea ecx, ss:[esp+0xBC]
        push ecx
        lea edx, ss:[esp+0xBC]
        push edx
        lea ecx, ss:[esp+0x598]
        call public_46d660
        push 8
        call public_5b7e84
        mov esi, eax
        add esp, 4
        lea eax, ss:[esp+0x14]
        push eax
        lea ecx, ss:[esp+0xCC]
        push ecx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x1C], esi
        call public_46d170
        lea edx, ss:[esp+0xCC]
        push edx
        lea eax, ss:[esp+0xCC]
        push eax
        lea ecx, ss:[esp+0x528]
        call public_46d660
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx+4], esi
        mov edx, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x30]
        mov dword ptr ds : [esi], edx
        mov eax, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [esi+4], eax
        mov eax, dword ptr ds : [ecx+4]
        lea edx, ss:[esp+0x10]
        push edx
        push eax
        lea eax, ss:[esp+0x45C]
        jmp public_59442e
        public_59354a : nop
        mov edi, offset public_5e5454
        lea esi, ss:[esp+0x220]
        mov ecx, 0xE
        xor edx, edx
        repe cmpsb
        jne public_5937a9
        lea eax, ss:[esp+0x20]
        push eax
        lea ecx, ss:[esp+0x20]
        push ecx
        lea edx, ss:[esp+0x2C]
        push edx
        lea eax, ss:[esp+0x34]
        push eax
        lea ecx, ss:[esp+0x330]
        push ecx
        lea edx, ss:[esp+0x234]
        push edx
        lea eax, ss:[esp+0x710]
/*FIXUP push offset public_5e5494 @0x593590*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e5494
        push eax
        call dword ptr ds : [public_5c7148]
        add esp, 0x20
        cmp eax, 6
        jne public_594459
        push 0x20
        call public_5b7e84
        add esp, 4
        lea ecx, ss:[esp+0x14]
        push ecx
        lea edx, ss:[esp+0xDC]
        push edx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ss : [esp+0x1C], eax
        call public_46d170
        lea eax, ss:[esp+0xDC]
        push eax
        lea ecx, ss:[esp+0xDC]
        push ecx
        lea ecx, ss:[esp+0x5D8]
        call public_46d660
        fld dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x10]
        fstp dword ptr ds : [edx+0x18]
        mov eax, dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x1C]
        lea edi, ss:[esp+0x220]
        fstp dword ptr ds : [eax+0x14]
        mov ecx, dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x28]
        fstp dword ptr ds : [ecx+0xC]
        mov edx, dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x24]
        or ecx, 0xFFFFFFFF
        fstp dword ptr ds : [edx+0x10]
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax+0x1C], ebx
        xor eax, eax
        repne scasb
        not ecx
        push ecx
        call public_5b7e84
        mov dl, byte ptr ss : [esp+0x224]
        add esp, 4
        xor ecx, ecx
        test dl, dl
        je public_593666
        mov esi, eax
        lea edi, ss:[esp+0x220]
        sub esi, edi
        mov edi, edi
        public_593650 : nop
        lea edi, ds:[ecx+esi]
        inc ecx
        mov byte ptr ss : [esp+edi+0x220], dl
        mov dl, byte ptr ss : [esp+ecx+0x220]
        test dl, dl
        jne public_593650
        public_593666 : nop
        mov byte ptr ds : [eax+ecx], 0
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx], eax
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [edx]
        lea ecx, ss:[esp+0x14]
        push ecx
        lea edx, ss:[esp+0xEC]
        push edx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x1C], eax
        call public_46d170
        lea eax, ss:[esp+0xEC]
        push eax
        lea ecx, ss:[esp+0xEC]
        push ecx
        lea ecx, ss:[esp+0x538]
        call public_46d660
        or ecx, 0xFFFFFFFF
        xor eax, eax
        lea edi, ss:[esp+0x320]
        repne scasb
        not ecx
        push ecx
        call public_5b7e84
        mov dl, byte ptr ss : [esp+0x324]
        add esp, 4
        xor ecx, ecx
        test dl, dl
        je public_5936f6
        mov esi, eax
        lea edi, ss:[esp+0x320]
        sub esi, edi
        nop 
        lea esp, ss:[esp]
        public_5936e0 : nop
        lea edi, ds:[ecx+esi]
        inc ecx
        mov byte ptr ss : [esp+edi+0x320], dl
        mov dl, byte ptr ss : [esp+ecx+0x320]
        test dl, dl
        jne public_5936e0
        public_5936f6 : nop
        mov byte ptr ds : [eax+ecx], 0
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edx+8], eax
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax+8]
        lea edx, ss:[esp+0x14]
        push edx
        lea eax, ss:[esp+0xFC]
        mov dword ptr ss : [esp+0x18], ecx
        push eax
        mov ecx, ebp
        call public_46d170
        lea ecx, ss:[esp+0xFC]
        push ecx
        lea edx, ss:[esp+0xFC]
        push edx
        lea ecx, ss:[esp+0x468]
        call public_46d660
        push 8
        call public_5b7e84
        mov esi, eax
        add esp, 4
        lea eax, ss:[esp+0x14]
        push eax
        lea ecx, ss:[esp+0x10C]
        push ecx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x1C], esi
        call public_46d170
        lea edx, ss:[esp+0x10C]
        push edx
        lea eax, ss:[esp+0x10C]
        push eax
        lea ecx, ss:[esp+0x470]
        call public_46d660
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx+4], esi
        mov edx, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x30]
        mov dword ptr ds : [esi], edx
        mov eax, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [esi+4], eax
        mov eax, dword ptr ds : [ecx+4]
        lea edx, ss:[esp+0x10]
        push edx
        push eax
        lea eax, ss:[esp+0x444]
        jmp public_59442e
        public_5937a9 : nop
        mov edi, offset public_5e5440
        lea esi, ss:[esp+0x220]
        mov ecx, 0x12
        xor edx, edx
        repe cmpsb
        jne public_593a09
        lea eax, ss:[esp+0x20]
        push eax
        lea ecx, ss:[esp+0x20]
        push ecx
        lea edx, ss:[esp+0x2C]
        push edx
        lea eax, ss:[esp+0x34]
        push eax
        lea ecx, ss:[esp+0x330]
        push ecx
        lea edx, ss:[esp+0x234]
        push edx
        lea eax, ss:[esp+0x710]
/*FIXUP push offset public_5e5494 @0x5937ef*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e5494
        push eax
        call dword ptr ds : [public_5c7148]
        add esp, 0x20
        cmp eax, 6
        jne public_594459
        push 0x20
        call public_5b7e84
        add esp, 4
        lea ecx, ss:[esp+0x14]
        push ecx
        lea edx, ss:[esp+0x11C]
        push edx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ss : [esp+0x1C], eax
        call public_46d170
        lea eax, ss:[esp+0x11C]
        push eax
        lea ecx, ss:[esp+0x11C]
        push ecx
        lea ecx, ss:[esp+0x480]
        call public_46d660
        fld dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x10]
        fstp dword ptr ds : [edx+0x18]
        mov eax, dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x1C]
        lea edi, ss:[esp+0x220]
        fstp dword ptr ds : [eax+0x14]
        mov ecx, dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x28]
        fstp dword ptr ds : [ecx+0xC]
        mov edx, dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x24]
        or ecx, 0xFFFFFFFF
        fstp dword ptr ds : [edx+0x10]
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax+0x1C], ebx
        xor eax, eax
        repne scasb
        not ecx
        push ecx
        call public_5b7e84
        mov dl, byte ptr ss : [esp+0x224]
        add esp, 4
        xor ecx, ecx
        test dl, dl
        je public_5938c6
        mov esi, eax
        lea edi, ss:[esp+0x220]
        sub esi, edi
        lea ecx, ds:[ecx]
        public_5938b0 : nop
        lea edi, ds:[ecx+esi]
        inc ecx
        mov byte ptr ss : [esp+edi+0x220], dl
        mov dl, byte ptr ss : [esp+ecx+0x220]
        test dl, dl
        jne public_5938b0
        public_5938c6 : nop
        mov byte ptr ds : [eax+ecx], 0
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx], eax
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [edx]
        lea ecx, ss:[esp+0x14]
        push ecx
        lea edx, ss:[esp+0x12C]
        push edx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x1C], eax
        call public_46d170
        lea eax, ss:[esp+0x12C]
        push eax
        lea ecx, ss:[esp+0x12C]
        push ecx
        lea ecx, ss:[esp+0x490]
        call public_46d660
        or ecx, 0xFFFFFFFF
        xor eax, eax
        lea edi, ss:[esp+0x320]
        repne scasb
        not ecx
        push ecx
        call public_5b7e84
        mov dl, byte ptr ss : [esp+0x324]
        add esp, 4
        xor ecx, ecx
        test dl, dl
        je public_593956
        mov esi, eax
        lea edi, ss:[esp+0x320]
        sub esi, edi
        nop 
        lea esp, ss:[esp]
        public_593940 : nop
        lea edi, ds:[ecx+esi]
        inc ecx
        mov byte ptr ss : [esp+edi+0x320], dl
        mov dl, byte ptr ss : [esp+ecx+0x320]
        test dl, dl
        jne public_593940
        public_593956 : nop
        mov byte ptr ds : [eax+ecx], 0
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edx+8], eax
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax+8]
        lea edx, ss:[esp+0x14]
        push edx
        lea eax, ss:[esp+0x13C]
        mov dword ptr ss : [esp+0x18], ecx
        push eax
        mov ecx, ebp
        call public_46d170
        lea ecx, ss:[esp+0x13C]
        push ecx
        lea edx, ss:[esp+0x13C]
        push edx
        lea ecx, ss:[esp+0x4A0]
        call public_46d660
        push 8
        call public_5b7e84
        mov esi, eax
        add esp, 4
        lea eax, ss:[esp+0x14]
        push eax
        lea ecx, ss:[esp+0x14C]
        push ecx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x1C], esi
        call public_46d170
        lea edx, ss:[esp+0x14C]
        push edx
        lea eax, ss:[esp+0x14C]
        push eax
        lea ecx, ss:[esp+0x4B0]
        call public_46d660
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx+4], esi
        mov edx, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x30]
        mov dword ptr ds : [esi], edx
        mov eax, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [esi+4], eax
        mov eax, dword ptr ds : [ecx+4]
        lea edx, ss:[esp+0x10]
        push edx
        push eax
        lea eax, ss:[esp+0x440]
        jmp public_59442e
        public_593a09 : nop
        mov edi, offset public_5e5438
        lea esi, ss:[esp+0x220]
        mov ecx, 8
        xor edx, edx
        repe cmpsb
        jne public_593c83
        lea eax, ss:[esp+0x40]
        push eax
        lea ecx, ss:[esp+0x60]
        push ecx
        lea edx, ss:[esp+0x28]
        push edx
        lea eax, ss:[esp+0x28]
        push eax
        lea ecx, ss:[esp+0x34]
        push ecx
        lea edx, ss:[esp+0x3C]
        push edx
        lea eax, ss:[esp+0x338]
        push eax
        lea ecx, ss:[esp+0x23C]
        push ecx
        lea edx, ss:[esp+0x718]
/*FIXUP push offset public_5e5420 @0x593a59*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e5420
        push edx
        call dword ptr ds : [public_5c7148]
        add esp, 0x28
        cmp eax, 8
        jne public_594459
        push 0x20
        call public_5b7e84
        add esp, 4
        mov dword ptr ss : [esp+0x10], eax
        mov dword ptr ss : [esp+0x14], eax
        lea eax, ss:[esp+0x14]
        push eax
        lea ecx, ss:[esp+0x84]
        push ecx
        mov ecx, ebp
        call public_46d170
        lea edx, ss:[esp+0x84]
        push edx
        lea eax, ss:[esp+0x84]
        push eax
        lea ecx, ss:[esp+0x4C0]
        call public_46d660
        fld dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x10]
        fstp dword ptr ds : [ecx+0x18]
        mov edx, dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x1C]
        lea edi, ss:[esp+0x220]
        fstp dword ptr ds : [edx+0x14]
        mov eax, dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x28]
        fstp dword ptr ds : [eax+0xC]
        mov ecx, dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x24]
        xor eax, eax
        fstp dword ptr ds : [ecx+0x10]
        mov edx, dword ptr ss : [esp+0x10]
        or ecx, 0xFFFFFFFF
        mov dword ptr ds : [edx+0x1C], ebx
        repne scasb
        not ecx
        push ecx
        call public_5b7e84
        mov dl, byte ptr ss : [esp+0x224]
        add esp, 4
        xor ecx, ecx
        test dl, dl
        je public_593b2d
        mov esi, eax
        lea edi, ss:[esp+0x220]
        sub esi, edi
        public_593b17 : nop
        lea edi, ds:[ecx+esi]
        inc ecx
        mov byte ptr ss : [esp+edi+0x220], dl
        mov dl, byte ptr ss : [esp+ecx+0x220]
        test dl, dl
        jne public_593b17
        public_593b2d : nop
        mov byte ptr ds : [eax+ecx], 0
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx], eax
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [edx]
        lea ecx, ss:[esp+0x14]
        push ecx
        lea edx, ss:[esp+0x15C]
        push edx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x1C], eax
        call public_46d170
        lea eax, ss:[esp+0x15C]
        push eax
        lea ecx, ss:[esp+0x15C]
        push ecx
        lea ecx, ss:[esp+0x4D0]
        call public_46d660
        or ecx, 0xFFFFFFFF
        xor eax, eax
        lea edi, ss:[esp+0x320]
        repne scasb
        not ecx
        push ecx
        call public_5b7e84
        mov dl, byte ptr ss : [esp+0x324]
        add esp, 4
        xor ecx, ecx
        test dl, dl
        je public_593bb8
        mov esi, eax
        lea edi, ss:[esp+0x320]
        sub esi, edi
        public_593ba2 : nop
        lea edi, ds:[ecx+esi]
        inc ecx
        mov byte ptr ss : [esp+edi+0x320], dl
        mov dl, byte ptr ss : [esp+ecx+0x320]
        test dl, dl
        jne public_593ba2
        public_593bb8 : nop
        mov byte ptr ds : [eax+ecx], 0
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edx+8], eax
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax+8]
        lea edx, ss:[esp+0x14]
        push edx
        lea eax, ss:[esp+0x17C]
        mov dword ptr ss : [esp+0x18], ecx
        push eax
        mov ecx, ebp
        call public_46d170
        lea ecx, ss:[esp+0x17C]
        push ecx
        lea edx, ss:[esp+0x17C]
        push edx
        lea ecx, ss:[esp+0x4E0]
        call public_46d660
        push 0x10
        call public_5b7e84
        mov esi, eax
        add esp, 4
        lea eax, ss:[esp+0x14]
        push eax
        lea ecx, ss:[esp+0x18C]
        push ecx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x1C], esi
        call public_46d170
        lea edx, ss:[esp+0x18C]
        push edx
        lea eax, ss:[esp+0x18C]
        push eax
        lea ecx, ss:[esp+0x4F0]
        call public_46d660
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx+4], esi
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], edx
        mov eax, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [esi+4], eax
        fld dword ptr ss : [esp+0x40]
        call public_5b7ec0
        mov dword ptr ds : [esi+0xC], eax
        fld dword ptr ss : [esp+0x5C]
        call public_5b7ec0
        mov ecx, dword ptr ss : [esp+0x30]
        mov dword ptr ds : [esi+8], eax
        mov eax, dword ptr ds : [ecx+4]
        lea edx, ss:[esp+0x10]
        push edx
        push eax
        lea eax, ss:[esp+0x434]
        jmp public_59442e
        public_593c83 : nop
        mov edi, offset public_5e5308
        lea esi, ss:[esp+0x220]
        mov ecx, 0xC
        xor edx, edx
        repe cmpsb
        jne public_593f01
        lea eax, ss:[esp+0x4C]
        push eax
        lea ecx, ss:[esp+0x70]
        push ecx
        lea edx, ss:[esp+0x28]
        push edx
        lea eax, ss:[esp+0x28]
        push eax
        lea ecx, ss:[esp+0x34]
        push ecx
        lea edx, ss:[esp+0x3C]
        push edx
        lea eax, ss:[esp+0x338]
        push eax
        lea ecx, ss:[esp+0x23C]
        push ecx
        lea edx, ss:[esp+0x718]
/*FIXUP push offset public_5e5420 @0x593cd3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e5420
        push edx
        call dword ptr ds : [public_5c7148]
        add esp, 0x28
        cmp eax, 8
        jne public_594459
        push 0x20
        call public_5b7e84
        add esp, 4
        mov dword ptr ss : [esp+0x10], eax
        mov dword ptr ss : [esp+0x14], eax
        lea eax, ss:[esp+0x14]
        push eax
        lea ecx, ss:[esp+0x19C]
        push ecx
        mov ecx, ebp
        call public_46d170
        lea edx, ss:[esp+0x19C]
        push edx
        lea eax, ss:[esp+0x19C]
        push eax
        lea ecx, ss:[esp+0x500]
        call public_46d660
        fld dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x10]
        fstp dword ptr ds : [ecx+0x18]
        mov edx, dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x1C]
        lea edi, ss:[esp+0x220]
        fstp dword ptr ds : [edx+0x14]
        mov eax, dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x28]
        fstp dword ptr ds : [eax+0xC]
        mov ecx, dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x24]
        xor eax, eax
        fstp dword ptr ds : [ecx+0x10]
        mov edx, dword ptr ss : [esp+0x10]
        or ecx, 0xFFFFFFFF
        mov dword ptr ds : [edx+0x1C], ebx
        repne scasb
        not ecx
        push ecx
        call public_5b7e84
        mov dl, byte ptr ss : [esp+0x224]
        add esp, 4
        xor ecx, ecx
        test dl, dl
        je public_593da7
        mov esi, eax
        lea edi, ss:[esp+0x220]
        sub esi, edi
        public_593d91 : nop
        lea edi, ds:[ecx+esi]
        inc ecx
        mov byte ptr ss : [esp+edi+0x220], dl
        mov dl, byte ptr ss : [esp+ecx+0x220]
        test dl, dl
        jne public_593d91
        public_593da7 : nop
        mov byte ptr ds : [eax+ecx], 0
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx], eax
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [edx]
        lea ecx, ss:[esp+0x14]
        push ecx
        lea edx, ss:[esp+0x1AC]
        push edx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x1C], eax
        call public_46d170
        lea eax, ss:[esp+0x1AC]
        push eax
        lea ecx, ss:[esp+0x1AC]
        push ecx
        lea ecx, ss:[esp+0x510]
        call public_46d660
        or ecx, 0xFFFFFFFF
        xor eax, eax
        lea edi, ss:[esp+0x320]
        repne scasb
        not ecx
        push ecx
        call public_5b7e84
        mov dl, byte ptr ss : [esp+0x324]
        add esp, 4
        xor ecx, ecx
        test dl, dl
        je public_593e36
        mov esi, eax
        lea edi, ss:[esp+0x320]
        sub esi, edi
        lea esp, ss:[esp]
        public_593e20 : nop
        lea edi, ds:[ecx+esi]
        inc ecx
        mov byte ptr ss : [esp+edi+0x320], dl
        mov dl, byte ptr ss : [esp+ecx+0x320]
        test dl, dl
        jne public_593e20
        public_593e36 : nop
        mov byte ptr ds : [eax+ecx], 0
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edx+8], eax
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax+8]
        lea edx, ss:[esp+0x14]
        push edx
        lea eax, ss:[esp+0x1BC]
        mov dword ptr ss : [esp+0x18], ecx
        push eax
        mov ecx, ebp
        call public_46d170
        lea ecx, ss:[esp+0x1BC]
        push ecx
        lea edx, ss:[esp+0x1BC]
        push edx
        lea ecx, ss:[esp+0x520]
        call public_46d660
        push 0x10
        call public_5b7e84
        mov esi, eax
        add esp, 4
        lea eax, ss:[esp+0x14]
        push eax
        lea ecx, ss:[esp+0x1CC]
        push ecx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x1C], esi
        call public_46d170
        lea edx, ss:[esp+0x1CC]
        push edx
        lea eax, ss:[esp+0x1CC]
        push eax
        lea ecx, ss:[esp+0x530]
        call public_46d660
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx+4], esi
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], edx
        mov eax, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [esi+4], eax
        fld dword ptr ss : [esp+0x4C]
        call public_5b7ec0
        mov dword ptr ds : [esi+0xC], eax
        fld dword ptr ss : [esp+0x6C]
        call public_5b7ec0
        mov ecx, dword ptr ss : [esp+0x30]
        mov dword ptr ds : [esi+8], eax
        mov eax, dword ptr ds : [ecx+4]
        lea edx, ss:[esp+0x10]
        push edx
        push eax
        lea eax, ss:[esp+0x43C]
        jmp public_59442e
        public_593f01 : nop
        mov edi, offset public_5e4668
        lea esi, ss:[esp+0x220]
        mov ecx, 9
        xor edx, edx
        repe cmpsb
        jne public_5941a3
        lea eax, ss:[esp+0x2C]
        push eax
        lea ecx, ss:[esp+0x4C]
        push ecx
        lea edx, ss:[esp+0x4C]
        push edx
        lea eax, ss:[esp+0x70]
        push eax
        lea ecx, ss:[esp+0x64]
        push ecx
        lea edx, ss:[esp+0x34]
        push edx
        lea eax, ss:[esp+0x34]
        push eax
        lea ecx, ss:[esp+0x40]
        push ecx
        lea edx, ss:[esp+0x48]
        push edx
        lea eax, ss:[esp+0x344]
        push eax
        lea ecx, ss:[esp+0x248]
        push ecx
        lea edx, ss:[esp+0x724]
/*FIXUP push offset public_5e53fc @0x593f60*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e53fc
        push edx
        mov dword ptr ss : [esp+0x60], ebx
        call dword ptr ds : [public_5c7148]
        add esp, 0x34
        cmp eax, 0xA
        je public_593f81
        cmp eax, 0xB
        jne public_594459
        public_593f81 : nop
        push 0x20
        call public_5b7e84
        add esp, 4
        mov dword ptr ss : [esp+0x10], eax
        mov dword ptr ss : [esp+0x14], eax
        lea eax, ss:[esp+0x14]
        push eax
        lea ecx, ss:[esp+0x1DC]
        push ecx
        mov ecx, ebp
        call public_46d170
        lea edx, ss:[esp+0x1DC]
        push edx
        lea eax, ss:[esp+0x1DC]
        push eax
        lea ecx, ss:[esp+0x540]
        call public_46d660
        fld dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x10]
        fstp dword ptr ds : [ecx+0x18]
        mov edx, dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x1C]
        lea edi, ss:[esp+0x220]
        fstp dword ptr ds : [edx+0x14]
        mov eax, dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x28]
        fstp dword ptr ds : [eax+0xC]
        mov ecx, dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x24]
        xor eax, eax
        fstp dword ptr ds : [ecx+0x10]
        mov edx, dword ptr ss : [esp+0x10]
        or ecx, 0xFFFFFFFF
        mov dword ptr ds : [edx+0x1C], ebx
        repne scasb
        not ecx
        push ecx
        call public_5b7e84
        mov dl, byte ptr ss : [esp+0x224]
        add esp, 4
        xor ecx, ecx
        test dl, dl
        je public_59403d
        mov esi, eax
        lea edi, ss:[esp+0x220]
        sub esi, edi
        public_594027 : nop
        lea edi, ds:[ecx+esi]
        inc ecx
        mov byte ptr ss : [esp+edi+0x220], dl
        mov dl, byte ptr ss : [esp+ecx+0x220]
        test dl, dl
        jne public_594027
        public_59403d : nop
        mov byte ptr ds : [eax+ecx], 0
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx], eax
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [edx]
        lea ecx, ss:[esp+0x14]
        push ecx
        lea edx, ss:[esp+0x1EC]
        push edx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x1C], eax
        call public_46d170
        lea eax, ss:[esp+0x1EC]
        push eax
        lea ecx, ss:[esp+0x1EC]
        push ecx
        lea ecx, ss:[esp+0x550]
        call public_46d660
        or ecx, 0xFFFFFFFF
        xor eax, eax
        lea edi, ss:[esp+0x320]
        repne scasb
        not ecx
        push ecx
        call public_5b7e84
        mov dl, byte ptr ss : [esp+0x324]
        add esp, 4
        xor ecx, ecx
        test dl, dl
        je public_5940c8
        mov esi, eax
        lea edi, ss:[esp+0x320]
        sub esi, edi
        public_5940b2 : nop
        lea edi, ds:[ecx+esi]
        inc ecx
        mov byte ptr ss : [esp+edi+0x320], dl
        mov dl, byte ptr ss : [esp+ecx+0x320]
        test dl, dl
        jne public_5940b2
        public_5940c8 : nop
        mov byte ptr ds : [eax+ecx], 0
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edx+8], eax
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax+8]
        lea edx, ss:[esp+0x14]
        push edx
        lea eax, ss:[esp+0x1FC]
        mov dword ptr ss : [esp+0x18], ecx
        push eax
        mov ecx, ebp
        call public_46d170
        lea ecx, ss:[esp+0x1FC]
        push ecx
        lea edx, ss:[esp+0x1FC]
        push edx
        lea ecx, ss:[esp+0x560]
        call public_46d660
        push 0x1C
        call public_5b7e84
        mov esi, eax
        add esp, 4
        lea eax, ss:[esp+0x14]
        push eax
        lea ecx, ss:[esp+0x20C]
        push ecx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x1C], esi
        call public_46d170
        lea edx, ss:[esp+0x20C]
        push edx
        lea eax, ss:[esp+0x20C]
        push eax
        lea ecx, ss:[esp+0x570]
        call public_46d660
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx+4], esi
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], edx
        mov eax, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ss : [esp+0x54]
        mov dword ptr ds : [esi+8], ecx
        mov edx, dword ptr ss : [esp+0x64]
        mov dword ptr ds : [esi+0xC], edx
        mov eax, dword ptr ss : [esp+0x44]
        mov dword ptr ds : [esi+0x10], eax
        mov ecx, dword ptr ss : [esp+0x48]
        mov dword ptr ds : [esi+0x14], ecx
        mov eax, dword ptr ss : [esp+0x2C]
        mov ecx, dword ptr ss : [esp+0x30]
        cmp eax, ebx
        setne dl
        mov byte ptr ds : [esi+0x18], dl
        mov eax, dword ptr ds : [ecx+4]
        lea edx, ss:[esp+0x10]
        push edx
        push eax
        lea eax, ss:[esp+0x450]
        jmp public_59442e
        public_5941a3 : nop
        mov edi, offset public_5e53f4
        lea esi, ss:[esp+0x220]
        mov ecx, 8
        xor edx, edx
        repe cmpsb
        jne public_594459
        lea eax, ss:[esp+0x2C]
        push eax
        lea ecx, ss:[esp+0x38]
        push ecx
        lea edx, ss:[esp+0x44]
        push edx
        lea eax, ss:[esp+0x64]
        push eax
        lea ecx, ss:[esp+0x60]
        push ecx
        lea edx, ss:[esp+0x34]
        push edx
        lea eax, ss:[esp+0x34]
        push eax
        lea ecx, ss:[esp+0x40]
        push ecx
        lea edx, ss:[esp+0x48]
        push edx
        lea eax, ss:[esp+0x344]
        push eax
        lea ecx, ss:[esp+0x248]
        push ecx
        lea edx, ss:[esp+0x724]
/*FIXUP push offset public_5e53fc @0x594202*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e53fc
        push edx
        mov dword ptr ss : [esp+0x60], ebx
        call dword ptr ds : [public_5c7148]
        add esp, 0x34
        cmp eax, 0xA
        je public_594223
        cmp eax, 0xB
        jne public_594459
        public_594223 : nop
        push 0x20
        call public_5b7e84
        add esp, 4
        mov dword ptr ss : [esp+0x10], eax
        mov dword ptr ss : [esp+0x14], eax
        lea eax, ss:[esp+0x14]
        push eax
        lea ecx, ss:[esp+0x21C]
        push ecx
        mov ecx, ebp
        call public_46d170
        lea edx, ss:[esp+0x21C]
        push edx
        lea eax, ss:[esp+0x21C]
        push eax
        lea ecx, ss:[esp+0x580]
        call public_46d660
        fld dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x10]
        fstp dword ptr ds : [ecx+0x18]
        mov edx, dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x1C]
        lea edi, ss:[esp+0x220]
        fstp dword ptr ds : [edx+0x14]
        mov eax, dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x28]
        fstp dword ptr ds : [eax+0xC]
        mov ecx, dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x24]
        xor eax, eax
        fstp dword ptr ds : [ecx+0x10]
        mov edx, dword ptr ss : [esp+0x10]
        or ecx, 0xFFFFFFFF
        mov dword ptr ds : [edx+0x1C], ebx
        repne scasb
        not ecx
        push ecx
        call public_5b7e84
        mov dl, byte ptr ss : [esp+0x224]
        add esp, 4
        xor ecx, ecx
        test dl, dl
        je public_5942e6
        mov esi, eax
        lea edi, ss:[esp+0x220]
        sub esi, edi
        lea esp, ss:[esp]
        public_5942d0 : nop
        lea edi, ds:[ecx+esi]
        inc ecx
        mov byte ptr ss : [esp+edi+0x220], dl
        mov dl, byte ptr ss : [esp+ecx+0x220]
        test dl, dl
        jne public_5942d0
        public_5942e6 : nop
        mov byte ptr ds : [eax+ecx], 0
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx], eax
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [edx]
        lea ecx, ss:[esp+0x14]
        push ecx
        lea edx, ss:[esp+0x8C]
        push edx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x1C], eax
        call public_46d170
        lea eax, ss:[esp+0x8C]
        push eax
        lea ecx, ss:[esp+0x8C]
        push ecx
        lea ecx, ss:[esp+0x590]
        call public_46d660
        or ecx, 0xFFFFFFFF
        xor eax, eax
        lea edi, ss:[esp+0x320]
        repne scasb
        not ecx
        push ecx
        call public_5b7e84
        mov dl, byte ptr ss : [esp+0x324]
        add esp, 4
        xor ecx, ecx
        test dl, dl
        je public_594376
        mov esi, eax
        lea edi, ss:[esp+0x320]
        sub esi, edi
        nop 
        lea esp, ss:[esp]
        public_594360 : nop
        lea edi, ds:[ecx+esi]
        inc ecx
        mov byte ptr ss : [esp+edi+0x320], dl
        mov dl, byte ptr ss : [esp+ecx+0x320]
        test dl, dl
        jne public_594360
        public_594376 : nop
        mov byte ptr ds : [eax+ecx], 0
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edx+8], eax
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax+8]
        lea edx, ss:[esp+0x14]
        push edx
        lea eax, ss:[esp+0x174]
        mov dword ptr ss : [esp+0x18], ecx
        push eax
        mov ecx, ebp
        call public_46d170
        lea ecx, ss:[esp+0x174]
        push ecx
        lea edx, ss:[esp+0x174]
        push edx
        lea ecx, ss:[esp+0x5A0]
        call public_46d660
        push 0x1C
        call public_5b7e84
        mov esi, eax
        add esp, 4
        lea eax, ss:[esp+0x14]
        push eax
        lea ecx, ss:[esp+0x444]
        push ecx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x1C], esi
        call public_46d170
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edx+4], esi
        mov eax, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], eax
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [esi+4], ecx
        mov edx, dword ptr ss : [esp+0x50]
        mov dword ptr ds : [esi+8], edx
        mov eax, dword ptr ss : [esp+0x58]
        mov dword ptr ds : [esi+0xC], eax
        mov ecx, dword ptr ss : [esp+0x3C]
        mov dword ptr ds : [esi+0x10], ecx
        mov edx, dword ptr ss : [esp+0x34]
        mov ecx, dword ptr ss : [esp+0x30]
        mov dword ptr ds : [esi+0x14], edx
        cmp dword ptr ss : [esp+0x2C], ebx
        setne al
        mov byte ptr ds : [esi+0x18], al
        mov eax, dword ptr ds : [ecx+4]
        lea edx, ss:[esp+0x10]
        push edx
        push eax
        lea eax, ss:[esp+0x42C]
        public_59442e : nop
        push eax
        call public_5947a0
        public_594434 : nop
        mov ecx, dword ptr ss : [esp+0x38]
        push ecx
        lea edx, ss:[esp+0x6FC]
        push 0x100
        push edx
        call dword ptr ds : [public_5c715c]
        add esp, 0xC
        test eax, eax
        jne public_592341
        jmp public_59445e
        public_594459 : nop
        mov byte ptr ss : [esp+0x1B], 0
        public_59445e : nop
        mov eax, dword ptr ss : [esp+0x38]
        push eax
        call dword ptr ds : [public_5c714c]
        mov al, byte ptr ss : [esp+0x1F]
        add esp, 4
        test al, al
        je public_5944d7
        mov esi, dword ptr ss : [esp+0x30]
        mov eax, dword ptr ds : [esi+8]
        lea ecx, ds:[eax*4+4]
        push ecx
        mov dword ptr ds : [esi+0xC], 0x3FAAA993
        call public_5b7e84
        add esp, 4
        lea edx, ss:[esp+0x34]
        mov dword ptr ds : [esi+0x10], eax
        mov dword ptr ss : [esp+0x34], eax
        push edx
        lea eax, ss:[esp+0x444]
        push eax
        mov ecx, ebp
        call public_46d170
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx]
        cmp eax, edx
        mov ecx, dword ptr ds : [esi+0x10]
        je public_5944d1
        lea esp, ss:[esp]
        public_5944c0 : nop
        mov edx, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx], edx
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [esi+4]
        add ecx, 4
        cmp eax, edx
        jne public_5944c0
        public_5944d1 : nop
        mov dword ptr ds : [ecx], 0
        public_5944d7 : nop
        mov bl, byte ptr ss : [esp+0x1B]
        public_5944db : nop
        mov eax, dword ptr ss : [esp+0x74]
        test eax, eax
        jne public_5944e8
        mov eax, dword ptr ds : [public_5c7078]
        public_5944e8 : nop
        push eax
        push 4
        call dword ptr ds : [public_5c7160]
        mov eax, dword ptr ss : [esp+0x7C]
        add esp, 8
        test eax, eax
        je public_594518
        mov cl, byte ptr ds : [eax-1]
        dec eax
        test cl, cl
        je public_59450f
        cmp cl, 0xFF
        je public_59450f
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_594518
        public_59450f : nop
        push eax
        call public_5b7e1d
        add esp, 4
        public_594518 : nop
        mov ecx, dword ptr ss : [esp+0x8F8]
        pop edi
        pop esi
        pop ebp
        mov al, bl
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x8F4
        ret 4
        UNREACHABLE_TRAP(0x592230)
    }
}

#undef public_5922b7
#undef public_592341
#undef public_592404
#undef public_5924b0
#undef public_5924c6
#undef public_592540
#undef public_592556
#undef public_592620
#undef public_592634
#undef public_592688
#undef public_59271a
#undef public_5927c0
#undef public_5927d6
#undef public_592850
#undef public_592866
#undef public_592930
#undef public_592944
#undef public_5929d0
#undef public_5929f4
#undef public_5929f8
#undef public_5929fd
#undef public_592a36
#undef public_592a4c
#undef public_592a89
#undef public_592a92
#undef public_592a99
#undef public_592ab2
#undef public_592b1d
#undef public_592bc3
#undef public_592bd9
#undef public_592c50
#undef public_592c66
#undef public_592d30
#undef public_592d44
#undef public_592d98
#undef public_592ea0
#undef public_592eb6
#undef public_592f30
#undef public_592f46
#undef public_592ff9
#undef public_593110
#undef public_593126
#undef public_5931a0
#undef public_5931b6
#undef public_593281
#undef public_593297
#undef public_5932f2
#undef public_5933f6
#undef public_59340c
#undef public_593481
#undef public_593497
#undef public_59354a
#undef public_593650
#undef public_593666
#undef public_5936e0
#undef public_5936f6
#undef public_5937a9
#undef public_5938b0
#undef public_5938c6
#undef public_593940
#undef public_593956
#undef public_593a09
#undef public_593b17
#undef public_593b2d
#undef public_593ba2
#undef public_593bb8
#undef public_593c83
#undef public_593d91
#undef public_593da7
#undef public_593e20
#undef public_593e36
#undef public_593f01
#undef public_593f81
#undef public_594027
#undef public_59403d
#undef public_5940b2
#undef public_5940c8
#undef public_5941a3
#undef public_594223
#undef public_5942d0
#undef public_5942e6
#undef public_594360
#undef public_594376
#undef public_59442e
#undef public_594434
#undef public_594459
#undef public_59445e
#undef public_5944c0
#undef public_5944d1
#undef public_5944d7
#undef public_5944db
#undef public_5944e8
#undef public_59450f
#undef public_594518
