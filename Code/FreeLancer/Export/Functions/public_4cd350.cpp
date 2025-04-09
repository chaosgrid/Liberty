#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40f8c0);
CLANG_FORWARD_PROC_SYMBOL(public_40fb60);
CLANG_FORWARD_PROC_SYMBOL(public_410ca0);
CLANG_FORWARD_PROC_SYMBOL(public_410ef0);
CLANG_FORWARD_PROC_SYMBOL(public_4110c0);
CLANG_FORWARD_PROC_SYMBOL(public_411300);
CLANG_FORWARD_PROC_SYMBOL(public_4115b0);
CLANG_FORWARD_PROC_SYMBOL(public_417c50);
CLANG_FORWARD_PROC_SYMBOL(public_4255c0);
CLANG_FORWARD_PROC_SYMBOL(public_4b5150);
CLANG_FORWARD_PROC_SYMBOL(public_4c95b0);
CLANG_FORWARD_PROC_SYMBOL(public_4ca690);
CLANG_FORWARD_PROC_SYMBOL(public_4ccbd0);
CLANG_FORWARD_PROC_SYMBOL(public_4cd350);
CLANG_FORWARD_PROC_SYMBOL(public_51b2f0);
CLANG_FORWARD_PROC_SYMBOL(public_55ac30);
CLANG_FORWARD_PROC_SYMBOL(public_59db20);
CLANG_FORWARD_PROC_SYMBOL(public_59dbf0);
CLANG_FORWARD_PROC_SYMBOL(public_59dd00);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5bdb0d);

#define public_4cd3e8 _public_4cd3e8
#define public_4cd4e0 _public_4cd4e0
#define public_4cd532 _public_4cd532
#define public_4cd589 _public_4cd589
#define public_4cd5e0 _public_4cd5e0
#define public_4cd63e _public_4cd63e
#define public_4cd667 _public_4cd667
#define public_4cd68a _public_4cd68a
#define public_4cd69a _public_4cd69a
#define public_4cd6e8 _public_4cd6e8
#define public_4cd6ea _public_4cd6ea
#define public_4cd736 _public_4cd736
#define public_4cd73a _public_4cd73a
#define public_4cd885 _public_4cd885

PROC_DECLARE(0x4cd350, internal_4cd350, public_4cd350);
extern "C" NAKED register_t __cdecl internal_4cd350()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bdb0d @0x4cd352*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bdb0d
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x54
        push ebp
        mov ebp, ecx
        push esi
        push edi
        xor edi, edi
        mov dword ptr ss : [ebp+0xC], edi
        mov dword ptr ss : [ebp+8], edi
        mov dword ptr ss : [ebp+4], edi
        lea ecx, ss:[ebp+0x3C]
        mov dword ptr ss : [esp+0x10], ebp
        mov dword ptr ss : [ebp+0x14], edi
        mov byte ptr ss : [ebp+0x18], 0
        call public_4b5150
        mov al, byte ptr ss : [ebp+0x6C]
        and al, 0xF8
        or al, 8
        mov dword ptr ss : [ebp], offset public_5d5544
        mov dword ptr ss : [ebp+0x10], edi
        mov dword ptr ss : [ebp+0x70], edi
        mov dword ptr ss : [ebp+0x38], edi
        mov dword ptr ss : [ebp+0x74], edi
        mov dword ptr ss : [ebp+0x78], edi
        mov byte ptr ss : [ebp+0x6C], al
        inc dword ptr ds : [public_67dcd4]
        lea esi, ss:[ebp+0x7C]
        lea ecx, ds:[esi+0x28]
        push edi
        mov dword ptr ss : [esp+0x6C], edi
        mov dword ptr ss : [esp+0x18], esi
        mov dword ptr ds : [esi+4], edi
        mov byte ptr ds : [esi+8], 0
        call public_4c95b0
        lea ecx, ds:[esi+0x28]
        mov dword ptr ds : [esi], offset public_5d6eac
        mov dword ptr ds : [esi+0x34], edi
        cmp dword ptr ds : [ecx], edi
        mov byte ptr ss : [esp+0x68], 1
        je public_4cd3e8
        push edi
        call dword ptr ds : [public_5c62a8]
        public_4cd3e8 : nop
        push ebx
        mov dword ptr ds : [esi+0x30], edi
        lea ecx, ss:[ebp+0xB4]
        mov byte ptr ss : [esp+0x6C], 2
        call public_4ca690
        lea ecx, ss:[ebp+0x284]
        mov byte ptr ss : [esp+0x6C], 3
        call public_4ca690
        mov dword ptr ss : [ebp+0x454], edi
        mov dword ptr ss : [ebp+0x458], edi
        mov dword ptr ss : [ebp+0x45C], edi
        mov byte ptr ss : [ebp+0x460], 0
        mov byte ptr ss : [ebp+0x461], 0
        mov dword ptr ss : [ebp+0x464], edi
        mov dword ptr ss : [ebp+0x468], edi
        mov dword ptr ss : [ebp+0x46C], edi
        mov byte ptr ss : [ebp+0x470], 0
        mov byte ptr ss : [ebp+0x471], 0
        mov dword ptr ss : [ebp+0x478], 0xFFFFFFFF
        mov dword ptr ss : [ebp+0x474], edi
        lea ebx, ss:[ebp+0x4B8]
        mov ecx, ebx
        mov byte ptr ss : [esp+0x6C], 7
        call public_51b2f0
        push edi
        push ebp
        mov byte ptr ss : [esp+0x74], 8
        mov dword ptr ss : [ebp], offset public_5d764c
        mov dword ptr ds : [esi], offset public_5d761c
        call public_59dd00
        push ebp
        call public_59dbf0
        mov cl, byte ptr ss : [ebp+0x6C]
/*FIXUP push offset public_5d7608 @0x4cd490*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d7608
        and cl, 0xFB
        lea edx, ss:[ebp+0x84]
        or cl, 3
        push 0x20
        push edx
        mov byte ptr ss : [ebp+0x6C], cl
        call public_417c50
        add esp, 0x18
        push 0x42480000
        mov dword ptr ss : [ebp+0x80], eax
        push 0x3FB33333
        mov ecx, ebx
        mov dword ptr ss : [ebp+0x5B0], edi
        call public_40fb60
        mov ebx, dword ptr ss : [esp+0x74]
        mov ecx, ebx
        call dword ptr ds : [public_5c669c]
        test al, al
        je public_4cd69a
        public_4cd4e0 : nop
        push ebx
        lea ecx, ss:[ebp+0xEC]
        call public_4ccbd0
        test al, al
        jne public_4cd68a
/*FIXUP push offset public_5d75f8 @0x4cd4f4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d75f8
        mov ecx, ebx
        call dword ptr ds : [public_5c6cf4]
        test al, al
        mov ecx, ebx
        je public_4cd532
        mov esi, 0x100002
        call dword ptr ds : [public_5c64b4]
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        push 0x7E7
/*FIXUP push offset public_5d7220 @0x4cd51d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d7220
/*FIXUP push offset public_5d7578 @0x4cd522*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d7578
        push esi
        call dword ptr ds : [eax]
        add esp, 0x14
        jmp public_4cd68a
/*FIXUP public_4cd532 : nop
        push offset public_5d7560 @0x4cd532*/
  FIXUP public_4cd532 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d7560
        call dword ptr ds : [public_5c6cf4]
        test al, al
        mov ecx, ebx
        je public_4cd589
        push edi
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ss : [esp+0x1C]
        push 1
        mov ecx, ebx
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ss : [esp+0x20]
        push 2
        mov ecx, ebx
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0x20]
        lea ecx, ss:[ebp+0x4A0]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [ecx+4], eax
        mov dword ptr ds : [ecx+8], edx
        jmp public_4cd68a
/*FIXUP public_4cd589 : nop
        push offset public_5d7548 @0x4cd589*/
  FIXUP public_4cd589 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d7548
        call dword ptr ds : [public_5c6cf4]
        test al, al
        mov ecx, ebx
        je public_4cd5e0
        push edi
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ss : [esp+0x28]
        push 1
        mov ecx, ebx
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ss : [esp+0x2C]
        push 2
        mov ecx, ebx
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ss : [esp+0x30]
        mov ecx, dword ptr ss : [esp+0x28]
        mov edx, dword ptr ss : [esp+0x2C]
        lea eax, ss:[ebp+0x4AC]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+0x30]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax+8], ecx
        jmp public_4cd68a
/*FIXUP public_4cd5e0 : nop
        push offset public_5d7538 @0x4cd5e0*/
  FIXUP public_4cd5e0 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d7538
        call dword ptr ds : [public_5c6cf4]
        test al, al
        mov ecx, ebx
        je public_4cd63e
        push edi
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ss : [esp+0x34]
        push 1
        mov ecx, ebx
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ss : [esp+0x38]
        push 2
        mov ecx, ebx
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ss : [esp+0x3C]
        lea edx, ss:[esp+0x34]
        push edx
        lea eax, ss:[esp+0x44]
        push eax
        call dword ptr ds : [public_5c64b0]
        lea edi, ss:[ebp+0x47C]
        mov ecx, 9
        mov esi, eax
        add esp, 8
        rep movsd
        xor edi, edi
        jmp public_4cd68a
/*FIXUP public_4cd63e : nop
        push offset public_5d752c @0x4cd63e*/
  FIXUP public_4cd63e : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d752c
        call dword ptr ds : [public_5c6cf4]
        test al, al
        mov ecx, ebx
        je public_4cd667
        push edi
        call dword ptr ds : [public_5c6cfc]
        push ecx
        lea ecx, ss:[ebp+0x4B8]
        fstp dword ptr ss : [esp]
        call public_40f8c0
        jmp public_4cd68a
/*FIXUP public_4cd667 : nop
        push offset public_5d7520 @0x4cd667*/
  FIXUP public_4cd667 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d7520
        call dword ptr ds : [public_5c6cf4]
        test al, al
        je public_4cd68a
        mov ecx, ebx
        call dword ptr ds : [public_5c6698]
        push eax
        lea ecx, ss:[ebp+0x474]
        call public_4255c0
        public_4cd68a : nop
        mov ecx, ebx
        call dword ptr ds : [public_5c669c]
        test al, al
        jne public_4cd4e0
        public_4cd69a : nop
        mov al, 0x80
        push 0xC8
        mov byte ptr ss : [esp+0x14], al
        mov byte ptr ss : [esp+0x15], al
        mov byte ptr ss : [esp+0x16], al
        mov dword ptr ss : [esp+0x38], 0x3E6B851F
        mov dword ptr ss : [esp+0x3C], 0x3E9EB852
        mov dword ptr ss : [esp+0x40], 0xBF6B851F
        call public_5b7e84
        add esp, 4
        mov dword ptr ss : [esp+0x74], eax
        cmp eax, edi
        mov byte ptr ss : [esp+0x6C], 9
        pop ebx
        je public_4cd6e8
        push 0xFFFFFFFF
        mov ecx, eax
        call public_410ca0
        mov esi, eax
        jmp public_4cd6ea
        public_4cd6e8 : nop
        xor esi, esi
        public_4cd6ea : nop
        push edi
        push 1
        mov ecx, esi
        mov byte ptr ss : [esp+0x70], 8
        mov dword ptr ss : [esp+0x78], esi
        call public_4110c0
        lea ecx, ss:[esp+0x30]
        push ecx
        mov ecx, esi
        call public_410ef0
        lea edx, ss:[esp+0xC]
        push edx
        mov ecx, esi
        call public_4115b0
        push 0x4E6E6B28
        mov ecx, esi
        call public_411300
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+4]
        test al, al
        jne public_4cd736
        mov edx, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        call dword ptr ds : [edx]
        jmp public_4cd73a
        public_4cd736 : nop
        mov edi, dword ptr ss : [esp+0x70]
        public_4cd73a : nop
        mov dword ptr ss : [ebp+0x5B0], edi
        lea eax, ss:[ebp+0xB4]
        lea esi, ss:[ebp+0x47C]
        lea edi, ss:[ebp+0x22C]
        mov ecx, 9
        rep movsd
        lea ecx, ss:[ebp+0x4A0]
        mov esi, dword ptr ds : [ecx]
        lea edx, ds:[eax+0x19C]
        mov dword ptr ds : [edx], esi
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+8], ecx
        lea edx, ss:[ebp+0x4AC]
        mov esi, dword ptr ds : [edx]
        lea ecx, ds:[eax+0x1A8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+4]
        mov dword ptr ds : [ecx+4], esi
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx+8], edx
        lea ecx, ds:[eax+0x5C]
        mov dword ptr ss : [esp+0x24], 0xBF88B439
        mov edx, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [ecx], edx
        mov dword ptr ss : [esp+0x28], 0x3F266666
        mov edx, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [ecx+4], edx
        xor esi, esi
        mov dword ptr ss : [esp+0x2C], 0xC0191687
        mov edx, dword ptr ss : [esp+0x2C]
        mov dword ptr ds : [ecx+8], edx
        mov dword ptr ss : [ebp+0x458], eax
        mov dword ptr ss : [ebp+0x454], offset public_673f48
        push esi
        mov dword ptr ss : [ebp+0x464], offset public_6735c0
        push ebp
        lea eax, ss:[ebp+0x284]
        mov dword ptr ss : [ebp+0x468], eax
/*FIXUP push offset public_5d7510 @0x4cd7ea*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d7510
        mov dword ptr ds : [public_6735a4], 0
        mov dword ptr ds : [public_6735a8], 0
        mov dword ptr ds : [public_6735ac], 0xBF800000
        mov dword ptr ds : [public_6735b0], esi
        mov dword ptr ds : [public_6748f8], ebp
/*FIXUP push offset public_5d74fc @0x4cd819*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d74fc
        mov dword ptr ss : [ebp+0x5B4], esi
        call public_59db20
        add esp, 0x10
        cmp eax, esi
        mov dword ptr ss : [ebp+0x5B4], eax
        je public_4cd885
        push esi
        push esi
        push esi
        push esi
        push esi
        push esi
        push esi
        lea ecx, ss:[esp+0x4C]
        push ecx
        push esi
        lea edx, ss:[esp+0x48]
        push edx
        push esi
        push esi
        push esi
/*FIXUP push offset public_5d74d8 @0x4cd84b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d74d8
        mov ecx, eax
        mov dword ptr ss : [esp+0x68], esi
        mov dword ptr ss : [esp+0x6C], esi
        mov dword ptr ss : [esp+0x70], esi
        mov dword ptr ss : [esp+0x5C], 0xBE2594AF
        mov dword ptr ss : [esp+0x60], 0x3DC9EECC
        mov dword ptr ss : [esp+0x64], 0xBEB95810
        call public_55ac30
        mov eax, dword ptr ss : [ebp+0x5B4]
        and byte ptr ds : [eax+0x6C], 0xFC
        public_4cd885 : nop
        mov ecx, dword ptr ss : [esp+0x60]
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x60
        ret 4
        UNREACHABLE_TRAP(0x4cd350)
    }
}

#undef public_4cd3e8
#undef public_4cd4e0
#undef public_4cd532
#undef public_4cd589
#undef public_4cd5e0
#undef public_4cd63e
#undef public_4cd667
#undef public_4cd68a
#undef public_4cd69a
#undef public_4cd6e8
#undef public_4cd6ea
#undef public_4cd736
#undef public_4cd73a
#undef public_4cd885
