#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6262630);
CLANG_FORWARD_PROC_SYMBOL(public_6272a70);
CLANG_FORWARD_PROC_SYMBOL(public_62b7750);
CLANG_FORWARD_PROC_SYMBOL(public_62f0dc0);
CLANG_FORWARD_PROC_SYMBOL(public_62f1460);
CLANG_FORWARD_PROC_SYMBOL(public_62f1670);
CLANG_FORWARD_PROC_SYMBOL(public_62f1c70);
CLANG_FORWARD_PROC_SYMBOL(public_62f1fb0);
CLANG_FORWARD_PROC_SYMBOL(public_62f29d0);
CLANG_FORWARD_PROC_SYMBOL(public_62f9b10);
CLANG_FORWARD_PROC_SYMBOL(public_62fb1e0);
CLANG_FORWARD_PROC_SYMBOL(public_62fb2a0);
CLANG_FORWARD_PROC_SYMBOL(public_62fb910);
CLANG_FORWARD_PROC_SYMBOL(public_62fbeb0);
CLANG_FORWARD_PROC_SYMBOL(public_6301640);
CLANG_FORWARD_PROC_SYMBOL(public_6303220);
CLANG_FORWARD_PROC_SYMBOL(public_630bd60);
CLANG_FORWARD_PROC_SYMBOL(public_630d3f0);
CLANG_FORWARD_PROC_SYMBOL(public_630f660);
CLANG_FORWARD_PROC_SYMBOL(public_630f9b0);
CLANG_FORWARD_PROC_SYMBOL(public_6310070);
CLANG_FORWARD_PROC_SYMBOL(public_6310170);
CLANG_FORWARD_PROC_SYMBOL(public_63103c0);
CLANG_FORWARD_PROC_SYMBOL(public_6310410);
CLANG_FORWARD_PROC_SYMBOL(public_6310b70);
CLANG_FORWARD_PROC_SYMBOL(public_6333e60);
CLANG_FORWARD_PROC_SYMBOL(public_6334550);
CLANG_FORWARD_PROC_SYMBOL(public_6334560);
CLANG_FORWARD_PROC_SYMBOL(public_6334570);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_PROC_SYMBOL(public_6391dc0);
CLANG_FORWARD_JUMP_SYMBOL(public_639571d);

#define public_62f2a50 _public_62f2a50
#define public_62f2a83 _public_62f2a83
#define public_62f2ab0 _public_62f2ab0
#define public_62f2ab2 _public_62f2ab2
#define public_62f2ae0 _public_62f2ae0
#define public_62f2b64 _public_62f2b64
#define public_62f2b93 _public_62f2b93
#define public_62f2bba _public_62f2bba
#define public_62f2ef9 _public_62f2ef9
#define public_62f2f0b _public_62f2f0b
#define public_62f2f24 _public_62f2f24
#define public_62f2f38 _public_62f2f38
#define public_62f2f61 _public_62f2f61
#define public_62f2f65 _public_62f2f65
#define public_62f2f7a _public_62f2f7a
#define public_62f2fdb _public_62f2fdb
#define public_62f303f _public_62f303f
#define public_62f3050 _public_62f3050
#define public_62f3077 _public_62f3077
#define public_62f3084 _public_62f3084
#define public_62f308b _public_62f308b
#define public_62f30d1 _public_62f30d1
#define public_62f30ff _public_62f30ff
#define public_62f3139 _public_62f3139
#define public_62f3173 _public_62f3173
#define public_62f31a9 _public_62f31a9
#define public_62f31b2 _public_62f31b2
#define public_62f31fc _public_62f31fc
#define public_62f3205 _public_62f3205

PROC_DECLARE(0x62f29d0, internal_62f29d0, public_62f29d0);
extern "C" NAKED register_t __cdecl internal_62f29d0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_639571d @0x62f29d8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_639571d
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, 0x16D8
        mov dword ptr fs : [0], esp
        call public_6391dc0
        mov eax, dword ptr ds : [public_63fcad0]
        push ebx
        push esi
        push edi
        lea ecx, ss:[esp+0x17C]
        mov dword ptr ss : [esp+0x24], eax
        call public_630f660
        mov ecx, dword ptr ss : [esp+0x16F4]
        xor edi, edi
        push edi
        push ecx
        lea ecx, ss:[esp+0x184]
        mov dword ptr ss : [esp+0x16F4], edi
        call public_630f9b0
        test al, al
        je public_62f2f7a
        lea ecx, ss:[esp+0x1C]
        xor ebx, ebx
        call public_6334550
        lea ecx, ss:[esp+0x17C]
        call public_6310070
        test al, al
        je public_62f2f7a
        push ebp
        lea ecx, ds:[ecx]
/*FIXUP public_62f2a50 : nop
        push offset public_63997f0 @0x62f2a50*/
  FIXUP public_62f2a50 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63997f0
        lea ecx, ss:[esp+0x184]
        call public_63103c0
        test al, al
        je public_62f308b
        mov ecx, dword ptr ss : [esp+0x1700]
        cmp ecx, edi
        mov dword ptr ss : [esp+0x10], edi
        je public_62f2a83
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0x10]
        push eax
        push 3
        call dword ptr ds : [edx]
        public_62f2a83 : nop
        push 0x148
        call public_6391d9c
        add esp, 4
        mov dword ptr ss : [esp+0x18], eax
        cmp eax, edi
        mov byte ptr ss : [esp+0x16F0], 1
        je public_62f2ab0
        mov ecx, dword ptr ss : [esp+0x10]
        push ecx
        mov ecx, eax
        call public_62f1fb0
        mov ebp, eax
        jmp public_62f2ab2
        public_62f2ab0 : nop
        xor ebp, ebp
        public_62f2ab2 : nop
        lea ecx, ss:[esp+0x20]
        mov byte ptr ss : [esp+0x16F0], 0
        mov dword ptr ss : [esp+0x1C], ebp
        call public_6334570
        lea ecx, ss:[esp+0x180]
        call public_6310170
        test al, al
        je public_62f2f38
        nop 
        lea esp, ss:[esp]
/*FIXUP public_62f2ae0 : nop
        push offset public_63a17dc @0x62f2ae0*/
  FIXUP public_62f2ae0 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a17dc
        lea ecx, ss:[esp+0x184]
        call public_6310410
        test al, al
        je public_62f2f0b
        lea ecx, ss:[esp+0x180]
        call public_6310b70
        push eax
        call public_630d3f0
        add esp, 4
        lea edx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x34], eax
        mov dword ptr ss : [esp+0x14], eax
        push edx
        lea eax, ss:[esp+0x34]
        push eax
        mov ecx, offset public_63fcac0
        call public_6301640
        mov eax, dword ptr ss : [esp+0x30]
        cmp eax, dword ptr ds : [public_63fcac4]
        jne public_62f2b93
        push 1
        push 0x10000
        lea ecx, ss:[esp+0x34]
        call public_62b7750
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [eax]
        mov eax, dword ptr ds : [public_6399028]
        push ecx
        push 0x3C
/*FIXUP push offset public_63a123c @0x62f2b54*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a123c
/*FIXUP push offset public_63a1538 @0x62f2b59*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a1538
        push edx
        call dword ptr ds : [eax]
        add esp, 0x14
        public_62f2b64 : nop
        lea ecx, ss:[esp+0x34]
        mov esi, 0x100002
        call public_6333e60
        mov edx, dword ptr ds : [public_6399028]
        push eax
        push 0x649
/*FIXUP push offset public_63a123c @0x62f2b7e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a123c
/*FIXUP push offset public_63a17a0 @0x62f2b83*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a17a0
        push esi
        call dword ptr ds : [edx]
        add esp, 0x14
        jmp public_62f2f24
        public_62f2b93 : nop
        mov ebx, dword ptr ds : [eax+0x10]
        cmp ebx, edi
        je public_62f2b64
        mov ecx, dword ptr ss : [ebp+8]
        mov dword ptr ss : [esp+0x18], ecx
        mov ecx, dword ptr ss : [esp+0x10]
        cmp ecx, edi
        je public_62f2bba
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx]
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ebx+4]
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax+0x1C]
        public_62f2bba : nop
        push ebx
        lea ecx, ss:[esp+0x3C]
        call public_62f1460
        mov eax, dword ptr ds : [ebx+0xDC]
        mov edx, dword ptr ds : [ebx+0xE4]
        lea esi, ds:[ebx+0x98]
        mov ecx, 0x11
        lea edi, ss:[esp+0xD0]
        rep movsd
        mov ecx, dword ptr ds : [ebx+0xE0]
        mov dword ptr ss : [esp+0x114], eax
        mov eax, dword ptr ds : [ebx+0xE8]
        mov dword ptr ss : [esp+0x11C], edx
        mov edx, dword ptr ds : [ebx+0xF0]
        mov dword ptr ss : [esp+0x118], ecx
        mov ecx, dword ptr ds : [ebx+0xEC]
        mov dword ptr ss : [esp+0x120], eax
        mov eax, dword ptr ds : [ebx+0xF4]
        mov dword ptr ss : [esp+0x128], edx
        mov edx, dword ptr ds : [ebx+0xFC]
        mov dword ptr ss : [esp+0x124], ecx
        mov ecx, dword ptr ds : [ebx+0xF8]
        mov dword ptr ss : [esp+0x12C], eax
        mov eax, dword ptr ds : [ebx+0x100]
        mov dword ptr ss : [esp+0x134], edx
        mov dword ptr ss : [esp+0x130], ecx
        mov ecx, dword ptr ds : [ebx+0x104]
        mov dword ptr ss : [esp+0x138], eax
        mov dword ptr ss : [esp+0x13C], ecx
        lea edx, ds:[ebx+0x108]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ss : [esp+0x140], eax
        mov dword ptr ss : [esp+0x144], ecx
        lea eax, ds:[ebx+0x114]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x148], edx
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x14C], ecx
        mov ecx, dword ptr ds : [ebx+0x120]
        mov dword ptr ss : [esp+0x150], edx
        mov edx, dword ptr ds : [ebx+0x124]
        mov dword ptr ss : [esp+0x158], ecx
        mov ecx, dword ptr ds : [ebx+0x12C]
        mov dword ptr ss : [esp+0x15C], edx
        mov dword ptr ss : [esp+0x154], eax
        mov eax, dword ptr ds : [ebx+0x128]
        lea edx, ds:[ebx+0x130]
        mov dword ptr ss : [esp+0x164], ecx
        push edx
        lea ecx, ss:[esp+0x16C]
        mov byte ptr ss : [esp+0x16F4], 2
        mov dword ptr ss : [esp+0xD0], offset public_63993e8
        mov dword ptr ss : [esp+0x164], eax
        call public_62fb1e0
        mov eax, dword ptr ds : [ebx+0x140]
        mov ecx, dword ptr ds : [ebx+0x144]
        mov dword ptr ss : [esp+0x178], eax
        mov dword ptr ss : [esp+0x17C], ecx
        mov dword ptr ss : [esp+0x38], offset public_6399838
        mov dword ptr ss : [esp+0xCC], offset public_6399828
        lea edx, ss:[esp+0x38]
        push edx
        mov ecx, ebp
        mov byte ptr ss : [esp+0x16F4], 3
        call public_62f1c70
        lea eax, ss:[esp+0xD4]
        lea ecx, ss:[ebp+0x98]
        push eax
        call public_62fb910
        mov ecx, dword ptr ss : [esp+0x114]
        mov edx, dword ptr ss : [esp+0x118]
        mov eax, dword ptr ss : [esp+0x11C]
        mov dword ptr ss : [ebp+0xDC], ecx
        mov ecx, dword ptr ss : [esp+0x120]
        mov dword ptr ss : [ebp+0xE0], edx
        mov dword ptr ss : [ebp+0xE4], eax
        mov edx, dword ptr ss : [esp+0x124]
        mov eax, dword ptr ss : [esp+0x128]
        mov dword ptr ss : [ebp+0xE8], ecx
        mov ecx, dword ptr ss : [esp+0x12C]
        mov dword ptr ss : [ebp+0xEC], edx
        mov edx, dword ptr ss : [esp+0x130]
        mov dword ptr ss : [ebp+0xF0], eax
        mov eax, dword ptr ss : [esp+0x134]
        mov dword ptr ss : [ebp+0xF4], ecx
        mov ecx, dword ptr ss : [esp+0x138]
        mov dword ptr ss : [ebp+0xF8], edx
        mov edx, dword ptr ss : [esp+0x13C]
        mov dword ptr ss : [ebp+0xFC], eax
        mov dword ptr ss : [ebp+0x100], ecx
        mov ecx, dword ptr ss : [esp+0x140]
        mov dword ptr ss : [ebp+0x104], edx
        mov edx, dword ptr ss : [esp+0x144]
        lea eax, ss:[ebp+0x108]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+0x148]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax+8], ecx
        mov eax, dword ptr ss : [esp+0x14C]
        mov ecx, dword ptr ss : [esp+0x150]
        lea edx, ss:[ebp+0x114]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ss : [esp+0x154]
        mov dword ptr ds : [edx+4], ecx
        mov ecx, dword ptr ss : [esp+0x158]
        mov dword ptr ds : [edx+8], eax
        mov edx, dword ptr ss : [esp+0x15C]
        mov eax, dword ptr ss : [esp+0x160]
        mov dword ptr ss : [ebp+0x120], ecx
        mov ecx, dword ptr ss : [esp+0x164]
        mov dword ptr ss : [ebp+0x124], edx
        lea edx, ss:[esp+0x168]
        mov dword ptr ss : [ebp+0x12C], ecx
        push edx
        lea ecx, ss:[ebp+0x130]
        mov dword ptr ss : [ebp+0x128], eax
        call public_62fb2a0
        mov eax, dword ptr ss : [esp+0x178]
        mov ecx, dword ptr ss : [esp+0x17C]
        mov dword ptr ss : [ebp+0x140], eax
        mov dword ptr ss : [ebp+0x144], ecx
        mov edx, dword ptr ss : [esp+0x170]
        mov eax, dword ptr ss : [esp+0x16C]
        push edx
        push eax
        lea ecx, ss:[esp+0x170]
        mov byte ptr ss : [esp+0x16F8], 4
        call public_6272a70
        mov ecx, dword ptr ss : [esp+0x16C]
        push ecx
        call public_6391d5a
        xor esi, esi
        add esp, 4
        lea ecx, ss:[esp+0x38]
        mov dword ptr ss : [esp+0x16C], esi
        mov dword ptr ss : [esp+0x170], esi
        mov dword ptr ss : [esp+0x174], esi
        mov byte ptr ss : [esp+0x16F0], 0
        call public_62f1670
        mov ecx, dword ptr ss : [ebp+4]
        cmp ecx, esi
        je public_62f2ef9
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+4]
        public_62f2ef9 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [ebp+4], eax
        mov dword ptr ss : [ebp+8], ecx
        xor edi, edi
        jmp public_62f2f24
        public_62f2f0b : nop
        mov eax, dword ptr ss : [ebp]
        lea ecx, ss:[esp+0x180]
        push ecx
        mov ecx, ebp
        call dword ptr ds : [eax+4]
        test al, al
        jne public_62f2f24
        call public_6303220
        public_62f2f24 : nop
        lea ecx, ss:[esp+0x180]
        call public_6310170
        test al, al
        jne public_62f2ae0
/*FIXUP public_62f2f38 : nop
        push offset public_63997f0 @0x62f2f38*/
  FIXUP public_62f2f38 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63997f0
        lea esi, ss:[ebp+8]
        push esi
        push ebp
        mov ecx, offset public_63fcac0
        call public_62fbeb0
        test al, al
        je public_62f2fdb
        mov ecx, dword ptr ss : [ebp+4]
        cmp ecx, edi
        je public_62f2f61
        mov edx, dword ptr ds : [ecx]
        push ebp
        call dword ptr ds : [edx+0x14]
        public_62f2f61 : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_62f2f65 : nop
        lea ecx, ss:[esp+0x180]
        call public_6310070
        test al, al
        jne public_62f2a50
        pop ebp
        public_62f2f7a : nop
        mov esi, dword ptr ds : [public_63fcad0]
        sub esi, dword ptr ss : [esp+0x24]
        lea eax, ss:[esp+0x15A4]
        mov dword ptr ss : [esp+0x16EC], 5
        mov dword ptr ss : [esp+0x28], eax
        lea ecx, ss:[esp+0x15A4]
        mov byte ptr ss : [esp+0x16EC], 6
        call public_6262630
        mov eax, dword ptr ss : [esp+0x15A8]
        cmp eax, edi
        je public_62f31b2
        mov cl, byte ptr ds : [eax-1]
        dec eax
        test cl, cl
        je public_62f31a9
        cmp cl, 0xFF
        je public_62f31a9
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_62f31b2
        public_62f2fdb : nop
        mov al, byte ptr ss : [esp+0x16FC]
        test al, al
        je public_62f3050
        mov eax, dword ptr ds : [esi]
        mov dword ptr ss : [esp+0x14], eax
        lea eax, ss:[esp+0x14]
        push eax
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, offset public_63fcac0
        call public_6301640
        mov eax, dword ptr ss : [esp+0x24]
        cmp eax, dword ptr ds : [public_63fcac4]
        jne public_62f303f
        mov edx, dword ptr ss : [esp+0x14]
        push edx
        mov ecx, esi
        mov ebx, 0x100001
        call public_6333e60
        push eax
        mov eax, dword ptr ds : [public_6399028]
        push 0x49
/*FIXUP push offset public_63a123c @0x62f3025*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a123c
/*FIXUP push offset public_63a14a4 @0x62f302a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a14a4
        push ebx
        call dword ptr ds : [eax]
        add esp, 0x18
        xor ecx, ecx
        mov edx, dword ptr ds : [ecx]
        push ebp
        call dword ptr ds : [edx+8]
        jmp public_62f3077
        public_62f303f : nop
        mov ecx, dword ptr ds : [eax+0x10]
        mov edx, dword ptr ds : [ecx]
        push ebp
        call dword ptr ds : [edx+8]
        jmp public_62f3077
        lea ebx, ds:[ebx]
        public_62f3050 : nop
        mov ecx, esi
        mov ebx, 0x100002
        call public_6333e60
        push eax
        mov eax, dword ptr ds : [public_6399028]
        push 0x66B
/*FIXUP push offset public_63a123c @0x62f3067*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a123c
/*FIXUP push offset public_63a1748 @0x62f306c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a1748
        push ebx
        call dword ptr ds : [eax]
        add esp, 0x14
        public_62f3077 : nop
        cmp ebp, edi
        je public_62f3084
        mov edx, dword ptr ss : [ebp]
        push 1
        mov ecx, ebp
        call dword ptr ds : [edx]
        public_62f3084 : nop
        xor ebx, ebx
        jmp public_62f2f65
/*FIXUP public_62f308b : nop
        push offset public_63a1734 @0x62f308b*/
  FIXUP public_62f308b : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a1734
        lea ecx, ss:[esp+0x184]
        call public_63103c0
        test al, al
        je public_62f30ff
        cmp ebx, edi
        je public_62f2f65
        lea ecx, ss:[esp+0x20]
        call public_6334560
        cmp ax, word ptr ds : [public_63a4aa4]
        je public_62f30d1
        push eax
        lea eax, ss:[esp+0x184]
        push ebx
        push eax
        call public_62f9b10
        add esp, 0xC
        jmp public_62f2f65
        public_62f30d1 : nop
        lea ecx, ds:[ebx+8]
        mov esi, 0x100002
        call public_6333e60
        mov ecx, dword ptr ds : [public_6399028]
        push eax
        push 0x67D
/*FIXUP push offset public_63a123c @0x62f30ea*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a123c
/*FIXUP push offset public_63a16e8 @0x62f30ef*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a16e8
        push esi
        call dword ptr ds : [ecx]
        add esp, 0x14
        jmp public_62f2f65
/*FIXUP public_62f30ff : nop
        push offset public_63a16e0 @0x62f30ff*/
  FIXUP public_62f30ff : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a16e0
        lea ecx, ss:[esp+0x184]
        call public_63103c0
        test al, al
        je public_62f3139
        cmp ebx, edi
        je public_62f2f65
        mov ecx, dword ptr ds : [ebx+4]
        cmp ecx, edi
        je public_62f2f65
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0x180]
        push eax
        call dword ptr ds : [edx+0xC]
        jmp public_62f2f65
/*FIXUP public_62f3139 : nop
        push offset public_63a1524 @0x62f3139*/
  FIXUP public_62f3139 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a1524
        lea ecx, ss:[esp+0x184]
        call public_63103c0
        test al, al
        je public_62f3173
        mov ecx, dword ptr ss : [esp+0x1700]
        mov edx, dword ptr ss : [esp+0x16FC]
        push ecx
        push edx
        lea eax, ss:[esp+0x188]
        push eax
        call public_62f0dc0
        add esp, 0xC
        jmp public_62f2f65
/*FIXUP public_62f3173 : nop
        push offset public_63a152c @0x62f3173*/
  FIXUP public_62f3173 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a152c
        lea ecx, ss:[esp+0x184]
        call public_63103c0
        test al, al
        je public_62f2f65
        mov ecx, dword ptr ss : [esp+0x16FC]
        push ecx
        lea edx, ss:[esp+0x184]
        push edx
        call public_630bd60
        add esp, 8
        jmp public_62f2f65
        public_62f31a9 : nop
        push eax
        call public_6391d5a
        add esp, 4
        public_62f31b2 : nop
        mov dword ptr ss : [esp+0x15A8], edi
        mov dword ptr ss : [esp+0x15AC], edi
        mov dword ptr ss : [esp+0x15B0], edi
        lea ecx, ss:[esp+0x17C]
        mov dword ptr ss : [esp+0x16EC], 7
        call public_6262630
        mov eax, dword ptr ss : [esp+0x180]
        cmp eax, edi
        je public_62f3205
        mov cl, byte ptr ds : [eax-1]
        dec eax
        test cl, cl
        je public_62f31fc
        cmp cl, 0xFF
        je public_62f31fc
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_62f3205
        public_62f31fc : nop
        push eax
        call public_6391d5a
        add esp, 4
        public_62f3205 : nop
        mov ecx, dword ptr ss : [esp+0x16E4]
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x16E4
        ret 
        UNREACHABLE_TRAP(0x62f29d0)
    }
}

#undef public_62f2a50
#undef public_62f2a83
#undef public_62f2ab0
#undef public_62f2ab2
#undef public_62f2ae0
#undef public_62f2b64
#undef public_62f2b93
#undef public_62f2bba
#undef public_62f2ef9
#undef public_62f2f0b
#undef public_62f2f24
#undef public_62f2f38
#undef public_62f2f61
#undef public_62f2f65
#undef public_62f2f7a
#undef public_62f2fdb
#undef public_62f303f
#undef public_62f3050
#undef public_62f3077
#undef public_62f3084
#undef public_62f308b
#undef public_62f30d1
#undef public_62f30ff
#undef public_62f3139
#undef public_62f3173
#undef public_62f31a9
#undef public_62f31b2
#undef public_62f31fc
#undef public_62f3205
