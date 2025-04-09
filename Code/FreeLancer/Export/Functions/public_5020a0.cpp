#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_450870);
CLANG_FORWARD_PROC_SYMBOL(public_5020a0);
CLANG_FORWARD_PROC_SYMBOL(public_502a80);
CLANG_FORWARD_PROC_SYMBOL(public_5048a0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e90);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);
CLANG_FORWARD_JUMP_SYMBOL(public_5bf7e4);

#define public_502118 _public_502118
#define public_502160 _public_502160
#define public_502190 _public_502190
#define public_5021d0 _public_5021d0
#define public_5021fa _public_5021fa
#define public_502210 _public_502210
#define public_50223f _public_50223f
#define public_502259 _public_502259
#define public_502271 _public_502271
#define public_5022a6 _public_5022a6
#define public_5022c0 _public_5022c0
#define public_5022d8 _public_5022d8
#define public_502301 _public_502301
#define public_50231b _public_50231b
#define public_502345 _public_502345
#define public_502368 _public_502368
#define public_50238b _public_50238b
#define public_5023ae _public_5023ae
#define public_5023d1 _public_5023d1
#define public_5023f4 _public_5023f4
#define public_50241a _public_50241a
#define public_502427 _public_502427
#define public_50244f _public_50244f
#define public_502463 _public_502463
#define public_502490 _public_502490
#define public_5024b5 _public_5024b5
#define public_5024ca _public_5024ca
#define public_5024d8 _public_5024d8
#define public_5024e2 _public_5024e2
#define public_502501 _public_502501
#define public_50252d _public_50252d
#define public_50254b _public_50254b
#define public_502581 _public_502581
#define public_5025b7 _public_5025b7
#define public_5025b9 _public_5025b9
#define public_5025e0 _public_5025e0
#define public_502615 _public_502615
#define public_502640 _public_502640
#define public_50266b _public_50266b
#define public_502696 _public_502696
#define public_5026ba _public_5026ba
#define public_5026cf _public_5026cf
#define public_5026e4 _public_5026e4
#define public_502756 _public_502756
#define public_502763 _public_502763
#define public_5027ad _public_5027ad
#define public_5027ea _public_5027ea
#define public_5027fb _public_5027fb
#define public_502813 _public_502813
#define public_50283d _public_50283d
#define public_50285b _public_50285b
#define public_502864 _public_502864
#define public_5028d3 _public_5028d3
#define public_5028e0 _public_5028e0
#define public_50291a _public_50291a
#define public_50291d _public_50291d
#define public_502927 _public_502927
#define public_502957 _public_502957
#define public_50296f _public_50296f
#define public_502978 _public_502978
#define public_50298d _public_50298d
#define public_502998 _public_502998
#define public_50299f _public_50299f
#define public_5029d6 _public_5029d6
#define public_5029e7 _public_5029e7
#define public_5029ff _public_5029ff
#define public_502a2b _public_502a2b
#define public_502a5e _public_502a5e
#define public_502a67 _public_502a67

PROC_DECLARE(0x5020a0, internal_5020a0, public_5020a0);
extern "C" NAKED register_t __cdecl internal_5020a0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5bf7e4 @0x5020a8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bf7e4
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, 0x16E8
        mov dword ptr fs : [0], esp
        call public_5b7e90
        push ebx
        push esi
        lea ecx, ss:[esp+0x84]
        call dword ptr ds : [public_5c605c]
        xor esi, esi
        push esi
        lea eax, ss:[esp+0x15F0]
/*FIXUP push offset public_67a334 @0x5020d8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67a334
        push eax
        mov dword ptr ss : [esp+0x1704], esi
        call dword ptr ds : [public_5c6068]
        add esp, 0xC
        push esi
        lea ecx, ss:[esp+0x15F0]
        push ecx
        lea ecx, ss:[esp+0x8C]
        call dword ptr ds : [public_5c6058]
        mov bl, al
        mov eax, dword ptr ds : [public_674fd0]
        cmp eax, esi
        je public_502118
        push eax
        call public_5b7e1d
        add esp, 4
        public_502118 : nop
        test bl, bl
        push ebp
        push edi
        mov dword ptr ds : [public_674fd0], esi
        mov dword ptr ss : [esp+0x14], esi
        mov dword ptr ss : [esp+0x10], esi
        mov dword ptr ss : [esp+0x1C], esi
        je public_5026e4
        lea ecx, ss:[esp+0x8C]
        call dword ptr ds : [public_5c6054]
        test al, al
        je public_5026e4
        mov ebp, dword ptr ds : [public_5c6698]
        mov edi, dword ptr ds : [public_5c6030]
        mov ebx, dword ptr ds : [public_5c6020]
        nop 
        lea esp, ss:[esp]
/*FIXUP public_502160 : nop
        push offset public_5da944 @0x502160*/
  FIXUP public_502160 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5da944
        lea ecx, ss:[esp+0x90]
        call dword ptr ds : [public_5c6050]
        test al, al
        je public_50254b
        lea ecx, ss:[esp+0x24]
        call dword ptr ds : [public_5c6030]
        lea esi, ss:[esp+0x28]
        mov edi, 5
        lea ecx, ds:[ecx]
        public_502190 : nop
        mov ecx, esi
        call public_502a80
        add esi, 0xC
        dec edi
        jne public_502190
        mov esi, dword ptr ds : [public_5c6030]
        lea ecx, ss:[esp+0x7C]
        call esi
        lea ecx, ss:[esp+0x80]
        call esi
        lea ecx, ss:[esp+0x8C]
        call dword ptr ds : [public_5c669c]
        test al, al
        je public_5024ca
        mov esi, dword ptr ds : [public_5c6cf4]
        lea ecx, ds:[ecx]
/*FIXUP public_5021d0 : nop
        push offset public_5c866c @0x5021d0*/
  FIXUP public_5021d0 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c866c
        lea ecx, ss:[esp+0x90]
        call esi
        test al, al
        lea ecx, ss:[esp+0x8C]
        je public_5021fa
        call ebp
        push eax
        call ebx
        add esp, 4
        mov dword ptr ss : [esp+0x24], eax
        jmp public_5024b5
/*FIXUP public_5021fa : nop
        push offset public_5da930 @0x5021fa*/
  FIXUP public_5021fa : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5da930
        call esi
        test al, al
        je public_502259
        xor esi, esi
        lea edi, ss:[esp+0x28]
        nop 
        lea esp, ss:[esp]
        public_502210 : nop
        push esi
        lea ecx, ss:[esp+0x90]
        call dword ptr ds : [public_5c6cf8]
        test al, al
        jne public_50223f
        lea edx, ds:[esi+1]
        push esi
        lea ecx, ss:[esp+0x90]
        mov dword ptr ss : [esp+0x18], edx
        call dword ptr ds : [public_5c6024]
        push eax
        call ebx
        add esp, 4
        mov dword ptr ds : [edi], eax
        public_50223f : nop
        inc esi
        add edi, 0xC
        cmp esi, 5
        jl public_502210
        mov ebp, dword ptr ds : [public_5c6698]
        mov esi, dword ptr ds : [public_5c6cf4]
        jmp public_5024b5
/*FIXUP public_502259 : nop
        push offset public_5da920 @0x502259*/
  FIXUP public_502259 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5da920
        lea ecx, ss:[esp+0x90]
        call esi
        test al, al
        je public_5022c0
        xor esi, esi
        lea edi, ss:[esp+0x2C]
        public_502271 : nop
        push esi
        lea ecx, ss:[esp+0x90]
        call dword ptr ds : [public_5c6cf8]
        test al, al
        jne public_5022a6
        lea eax, ds:[esi+1]
        push esi
        lea ecx, ss:[esp+0x90]
        mov dword ptr ss : [esp+0x14], eax
        call dword ptr ds : [public_5c6024]
        push 0
        push eax
        call dword ptr ds : [public_5c6028]
        add esp, 8
        mov dword ptr ds : [edi], eax
        public_5022a6 : nop
        inc esi
        add edi, 0xC
        cmp esi, 5
        jl public_502271
        mov ebp, dword ptr ds : [public_5c6698]
        mov esi, dword ptr ds : [public_5c6cf4]
        jmp public_5024b5
/*FIXUP public_5022c0 : nop
        push offset public_5da90c @0x5022c0*/
  FIXUP public_5022c0 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5da90c
        lea ecx, ss:[esp+0x90]
        call esi
        test al, al
        je public_50231b
        xor esi, esi
        lea edi, ss:[esp+0x30]
        public_5022d8 : nop
        push esi
        lea ecx, ss:[esp+0x90]
        call dword ptr ds : [public_5c6cf8]
        test al, al
        jne public_502301
        lea ecx, ds:[esi+1]
        mov dword ptr ss : [esp+0x1C], ecx
        push esi
        lea ecx, ss:[esp+0x90]
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ds : [edi]
        public_502301 : nop
        inc esi
        add edi, 0xC
        cmp esi, 5
        jl public_5022d8
        mov ebp, dword ptr ds : [public_5c6698]
        mov esi, dword ptr ds : [public_5c6cf4]
        jmp public_5024b5
/*FIXUP public_50231b : nop
        push offset public_5da8fc @0x50231b*/
  FIXUP public_50231b : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5da8fc
        lea ecx, ss:[esp+0x90]
        call esi
        test al, al
        lea ecx, ss:[esp+0x8C]
        je public_502345
        push 0
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ss : [esp+0x68]
        jmp public_5024b5
/*FIXUP public_502345 : nop
        push offset public_5da8e4 @0x502345*/
  FIXUP public_502345 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5da8e4
        call esi
        test al, al
        lea ecx, ss:[esp+0x8C]
        je public_502368
        push 0
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ss : [esp+0x6C]
        jmp public_5024b5
/*FIXUP public_502368 : nop
        push offset public_5da8d0 @0x502368*/
  FIXUP public_502368 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5da8d0
        call esi
        test al, al
        lea ecx, ss:[esp+0x8C]
        je public_50238b
        push 0
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ss : [esp+0x70]
        jmp public_5024b5
/*FIXUP public_50238b : nop
        push offset public_5da8c0 @0x50238b*/
  FIXUP public_50238b : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5da8c0
        call esi
        test al, al
        lea ecx, ss:[esp+0x8C]
        je public_5023ae
        push 0
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ss : [esp+0x74]
        jmp public_5024b5
/*FIXUP public_5023ae : nop
        push offset public_5da8a8 @0x5023ae*/
  FIXUP public_5023ae : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5da8a8
        call esi
        test al, al
        lea ecx, ss:[esp+0x8C]
        je public_5023d1
        push 0
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ss : [esp+0x78]
        jmp public_5024b5
/*FIXUP public_5023d1 : nop
        push offset public_5da894 @0x5023d1*/
  FIXUP public_5023d1 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5da894
        call esi
        test al, al
        lea ecx, ss:[esp+0x8C]
        je public_5023f4
        call ebp
        push eax
        call ebx
        add esp, 4
        mov dword ptr ss : [esp+0x7C], eax
        jmp public_5024b5
/*FIXUP public_5023f4 : nop
        push offset public_5da888 @0x5023f4*/
  FIXUP public_5023f4 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5da888
        call esi
        test al, al
        lea ecx, ss:[esp+0x8C]
        je public_50241a
        call ebp
        push eax
        call ebx
        add esp, 4
        mov dword ptr ss : [esp+0x80], eax
        jmp public_5024b5
/*FIXUP public_50241a : nop
        push offset public_5da878 @0x50241a*/
  FIXUP public_50241a : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5da878
        call esi
        test al, al
        je public_50244f
        xor esi, esi
        public_502427 : nop
        push esi
        lea ecx, ss:[esp+0x90]
        call dword ptr ds : [public_5c6cfc]
        call public_5b7ec0
        mov byte ptr ss : [esp+esi+0x84], al
        inc esi
        cmp esi, 3
        jl public_502427
        mov esi, dword ptr ds : [public_5c6cf4]
        jmp public_5024b5
/*FIXUP public_50244f : nop
        push offset public_5da860 @0x50244f*/
  FIXUP public_50244f : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5da860
        lea ecx, ss:[esp+0x90]
        call esi
        test al, al
        je public_502490
        xor esi, esi
        public_502463 : nop
        push esi
        lea ecx, ss:[esp+0x90]
        call dword ptr ds : [public_5c6cfc]
        call public_5b7ec0
        mov byte ptr ss : [esp+esi+0x87], al
        inc esi
        cmp esi, 3
        jl public_502463
        mov esi, dword ptr ds : [public_5c6cf4]
        jmp public_5024b5
        nop 
        lea esp, ss:[esp]
        public_502490 : nop
        mov edx, dword ptr ds : [public_5c6d18]
/*FIXUP push offset public_5da840 @0x502496*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5da840
        push 0x84
/*FIXUP push offset public_5da80c @0x5024a0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5da80c
        mov eax, 0x100002
/*FIXUP push offset public_5c8bd4 @0x5024aa*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8bd4
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        public_5024b5 : nop
        lea ecx, ss:[esp+0x8C]
        call dword ptr ds : [public_5c669c]
        test al, al
        jne public_5021d0
        public_5024ca : nop
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x10]
        cmp eax, ecx
        jl public_5024d8
        mov eax, ecx
        public_5024d8 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, eax
        jge public_5024e2
        mov eax, ecx
        public_5024e2 : nop
        mov esi, dword ptr ds : [public_674fd8]
        mov dword ptr ss : [esp+0x64], eax
        mov edi, dword ptr ds : [esi+4]
        push 0x70
        call public_5b7e84
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_502501
        mov edi, eax
        public_502501 : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        lea ecx, ds:[eax+8]
        mov dword ptr ss : [esp+0x20], ecx
        mov dword ptr ss : [esp+0x18], ecx
        test ecx, ecx
        mov byte ptr ss : [esp+0x1700], 1
        je public_50252d
        lea eax, ss:[esp+0x24]
        push eax
        call public_5048a0
        public_50252d : nop
        mov eax, dword ptr ds : [public_674fdc]
        mov edi, dword ptr ds : [public_5c6030]
        inc eax
        mov byte ptr ss : [esp+0x1700], 0
        mov dword ptr ds : [public_674fdc], eax
        jmp public_5026cf
/*FIXUP public_50254b : nop
        push offset public_5da7fc @0x50254b*/
  FIXUP public_50254b : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5da7fc
        lea ecx, ss:[esp+0x90]
        call dword ptr ds : [public_5c6050]
        test al, al
        je public_5026cf
        mov eax, dword ptr ds : [public_674fd0]
        test eax, eax
        je public_502581
        push eax
        call public_5b7e1d
        add esp, 4
        mov dword ptr ds : [public_674fd0], 0
        public_502581 : nop
        push 0x14
        call public_5b7e84
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x18], esi
        test esi, esi
        mov byte ptr ss : [esp+0x1700], 2
        je public_5025b7
        mov ecx, esi
        call edi
        lea ecx, ds:[esi+4]
        call edi
        lea ecx, ds:[esi+8]
        call edi
        lea ecx, ds:[esi+0xC]
        call edi
        lea ecx, ds:[esi+0x10]
        call edi
        jmp public_5025b9
        public_5025b7 : nop
        xor esi, esi
        public_5025b9 : nop
        lea ecx, ss:[esp+0x8C]
        mov byte ptr ss : [esp+0x1700], 0
        mov dword ptr ds : [public_674fd0], esi
        call dword ptr ds : [public_5c669c]
        test al, al
        je public_5026cf
        lea esp, ss:[esp]
/*FIXUP public_5025e0 : nop
        push offset public_5da7ec @0x5025e0*/
  FIXUP public_5025e0 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5da7ec
        lea ecx, ss:[esp+0x90]
        call dword ptr ds : [public_5c6cf4]
        test al, al
        lea ecx, ss:[esp+0x8C]
        je public_502615
        call ebp
        mov ecx, dword ptr ds : [public_674fd0]
        push eax
        lea esi, ds:[ecx+4]
        call ebx
        add esp, 4
        mov dword ptr ds : [esi], eax
        jmp public_5026ba
/*FIXUP public_502615 : nop
        push offset public_5da7dc @0x502615*/
  FIXUP public_502615 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5da7dc
        call dword ptr ds : [public_5c6cf4]
        test al, al
        lea ecx, ss:[esp+0x8C]
        je public_502640
        call ebp
        mov edx, dword ptr ds : [public_674fd0]
        push eax
        lea esi, ds:[edx+8]
        call ebx
        add esp, 4
        mov dword ptr ds : [esi], eax
        jmp public_5026ba
/*FIXUP public_502640 : nop
        push offset public_5da7c4 @0x502640*/
  FIXUP public_502640 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5da7c4
        call dword ptr ds : [public_5c6cf4]
        test al, al
        lea ecx, ss:[esp+0x8C]
        je public_50266b
        call ebp
        mov ecx, dword ptr ds : [public_674fd0]
        push eax
        lea esi, ds:[ecx+0xC]
        call ebx
        add esp, 4
        mov dword ptr ds : [esi], eax
        jmp public_5026ba
/*FIXUP public_50266b : nop
        push offset public_5da7a8 @0x50266b*/
  FIXUP public_50266b : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5da7a8
        call dword ptr ds : [public_5c6cf4]
        test al, al
        je public_502696
        lea ecx, ss:[esp+0x8C]
        call ebp
        mov edx, dword ptr ds : [public_674fd0]
        push eax
        lea esi, ds:[edx+0x10]
        call ebx
        add esp, 4
        mov dword ptr ds : [esi], eax
        jmp public_5026ba
/*FIXUP public_502696 : nop
        push offset public_5da784 @0x502696*/
  FIXUP public_502696 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5da784
        push 0xB1
/*FIXUP push offset public_5da80c @0x5026a0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5da80c
        mov eax, 0x100002
/*FIXUP push offset public_5c8bd4 @0x5026aa*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8bd4
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        call dword ptr ds : [eax]
        add esp, 0x14
        public_5026ba : nop
        lea ecx, ss:[esp+0x8C]
        call dword ptr ds : [public_5c669c]
        test al, al
        jne public_5025e0
        public_5026cf : nop
        lea ecx, ss:[esp+0x8C]
        call dword ptr ds : [public_5c6054]
        test al, al
        jne public_502160
        public_5026e4 : nop
        lea ecx, ss:[esp+0x14B4]
        mov dword ptr ss : [esp+0x1700], 3
        mov dword ptr ss : [esp+0x18], ecx
        mov eax, dword ptr ss : [esp+0x14B8]
        mov edx, dword ptr ds : [public_5c7080]
        mov ebp, dword ptr ds : [edx]
        xor ebx, ebx
        cmp eax, ebx
        mov byte ptr ss : [esp+0x1700], 4
        je public_502756
        mov cl, byte ptr ds : [eax-1]
        test cl, cl
        je public_502756
        cmp cl, 0xFF
        je public_502756
        push 1
        lea ecx, ss:[esp+0x14B8]
        mov esi, eax
        call dword ptr ds : [public_5c7084]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        push ecx
        push esi
        lea ecx, ss:[esp+0x14BC]
        call dword ptr ds : [public_5c7088]
        mov eax, dword ptr ss : [esp+0x14B8]
        public_502756 : nop
        mov ecx, dword ptr ss : [esp+0x14BC]
        cmp ecx, ebp
        jae public_502763
        mov ebp, ecx
        public_502763 : nop
        cmp ebp, ebx
        jbe public_5027ad
        sub ecx, ebp
        push ecx
        lea edx, ds:[eax+ebp]
        push edx
        push eax
        call dword ptr ds : [public_5c709c]
        mov esi, dword ptr ss : [esp+0x14C8]
        add esp, 0xC
        push ebx
        sub esi, ebp
        push esi
        lea ecx, ss:[esp+0x14BC]
        call dword ptr ds : [public_5c708c]
        test al, al
        mov eax, dword ptr ss : [esp+0x14B8]
        je public_5027ad
        mov dword ptr ss : [esp+0x14BC], esi
        mov byte ptr ds : [eax+esi], 0
        mov eax, dword ptr ss : [esp+0x14B8]
        public_5027ad : nop
        mov ecx, dword ptr ss : [esp+0x14C4]
        mov ebp, dword ptr ds : [public_5c6ef8]
        or esi, 0xFFFFFFFF
        cmp ecx, esi
        je public_502813
        cmp dword ptr ss : [esp+0x14C8], ebx
        je public_5027fb
        mov eax, dword ptr ss : [esp+0x14CC]
        cmp eax, ebx
        je public_5027ea
        push eax
        call dword ptr ds : [public_5c6efc]
        mov dword ptr ss : [esp+0x14CC], ebx
        mov dword ptr ss : [esp+0x14D0], ebx
        public_5027ea : nop
        mov ecx, dword ptr ss : [esp+0x14C8]
        push ecx
        call ebp
        mov dword ptr ss : [esp+0x14C8], ebx
        public_5027fb : nop
        mov edx, dword ptr ss : [esp+0x14C4]
        push edx
        call ebp
        mov eax, dword ptr ss : [esp+0x14B8]
        mov dword ptr ss : [esp+0x14C4], esi
        public_502813 : nop
        mov ecx, dword ptr ss : [esp+0x14CC]
        cmp ecx, ebx
        je public_50283d
        push ecx
        call dword ptr ds : [public_5c71d8]
        mov eax, dword ptr ss : [esp+0x14BC]
        add esp, 4
        mov dword ptr ss : [esp+0x14CC], ebx
        mov dword ptr ss : [esp+0x14D0], ebx
        public_50283d : nop
        cmp eax, ebx
        mov dword ptr ss : [esp+0x14D4], ebx
        je public_502864
        mov cl, byte ptr ds : [eax-1]
        dec eax
        test cl, cl
        je public_50285b
        cmp cl, 0xFF
        je public_50285b
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_502864
        public_50285b : nop
        push eax
        call public_5b7e1d
        add esp, 4
        public_502864 : nop
        mov dword ptr ss : [esp+0x14B8], ebx
        mov dword ptr ss : [esp+0x14BC], ebx
        mov dword ptr ss : [esp+0x14C0], ebx
        mov eax, dword ptr ds : [public_5c7080]
        mov edi, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x90]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x1700], 5
        je public_5028d3
        mov cl, byte ptr ds : [eax-1]
        test cl, cl
        je public_5028d3
        cmp cl, 0xFF
        je public_5028d3
        push 1
        lea ecx, ss:[esp+0x90]
        mov esi, eax
        call dword ptr ds : [public_5c7084]
        push esi
        call dword ptr ds : [public_5c6f94]
        add esp, 4
        push eax
        push esi
        lea ecx, ss:[esp+0x94]
        call dword ptr ds : [public_5c7088]
        mov eax, dword ptr ss : [esp+0x90]
        public_5028d3 : nop
        mov ecx, dword ptr ss : [esp+0x94]
        cmp ecx, edi
        jae public_5028e0
        mov edi, ecx
        public_5028e0 : nop
        cmp edi, ebx
        jbe public_50299f
        sub ecx, edi
        push ecx
        lea ecx, ds:[eax+edi]
        push ecx
        push eax
        call dword ptr ds : [public_5c709c]
        mov esi, dword ptr ss : [esp+0xA0]
        add esp, 0xC
        lea ecx, ss:[esp+0x8C]
        sub esi, edi
        call public_450870
        cmp eax, 2
        ja public_50291a
        mov eax, 1
        jmp public_50291d
        public_50291a : nop
        add eax, 0xFFFFFFFE
        public_50291d : nop
        cmp eax, esi
        jae public_502927
        call dword ptr ds : [public_5c7070]
        public_502927 : nop
        mov eax, dword ptr ss : [esp+0x90]
        cmp eax, ebx
        je public_502957
        mov cl, byte ptr ds : [eax-1]
        test cl, cl
        je public_502957
        cmp cl, 0xFF
        je public_502957
        cmp esi, ebx
        jne public_502978
        dec cl
        mov byte ptr ds : [eax-1], cl
        push ebx
        lea ecx, ss:[esp+0x90]
        call dword ptr ds : [public_5c7084]
        jmp public_502998
        public_502957 : nop
        cmp esi, ebx
        jne public_50296f
        cmp eax, ebx
        je public_50299f
        push ebx
        lea ecx, ss:[esp+0x90]
        call dword ptr ds : [public_5c706c]
        jmp public_502998
        public_50296f : nop
        cmp dword ptr ss : [esp+0x98], esi
        jae public_50298d
        public_502978 : nop
        lea ecx, ss:[esp+0x8C]
        push esi
        call dword ptr ds : [public_5c7074]
        mov eax, dword ptr ss : [esp+0x90]
        public_50298d : nop
        mov dword ptr ss : [esp+0x94], esi
        mov byte ptr ds : [eax+esi], 0
        public_502998 : nop
        mov eax, dword ptr ss : [esp+0x90]
        public_50299f : nop
        mov ecx, dword ptr ss : [esp+0x9C]
        or esi, 0xFFFFFFFF
        cmp ecx, esi
        je public_5029ff
        cmp dword ptr ss : [esp+0xA0], ebx
        je public_5029e7
        mov eax, dword ptr ss : [esp+0xA4]
        cmp eax, ebx
        je public_5029d6
        push eax
        call dword ptr ds : [public_5c6efc]
        mov dword ptr ss : [esp+0xA4], ebx
        mov dword ptr ss : [esp+0xA8], ebx
        public_5029d6 : nop
        mov edx, dword ptr ss : [esp+0xA0]
        push edx
        call ebp
        mov dword ptr ss : [esp+0xA0], ebx
        public_5029e7 : nop
        mov eax, dword ptr ss : [esp+0x9C]
        push eax
        call ebp
        mov eax, dword ptr ss : [esp+0x90]
        mov dword ptr ss : [esp+0x9C], esi
        public_5029ff : nop
        mov ecx, dword ptr ss : [esp+0xA4]
        cmp ecx, ebx
        pop edi
        pop ebp
        je public_502a2b
        push ecx
        call dword ptr ds : [public_5c71d8]
        mov eax, dword ptr ss : [esp+0x8C]
        add esp, 4
        mov dword ptr ss : [esp+0x9C], ebx
        mov dword ptr ss : [esp+0xA0], ebx
        public_502a2b : nop
        pop esi
        mov dword ptr ss : [esp+0xA0], ebx
        cmp eax, ebx
        pop ebx
        je public_502a67
        mov cl, byte ptr ds : [eax-1]
        dec eax
        test cl, cl
        je public_502a5e
        cmp cl, 0xFF
        je public_502a5e
        dec cl
        mov byte ptr ds : [eax], cl
        mov ecx, dword ptr ss : [esp+0x16E8]
        mov dword ptr fs : [0], ecx
        add esp, 0x16F4
        ret 
        public_502a5e : nop
        push eax
        call public_5b7e1d
        add esp, 4
        public_502a67 : nop
        mov ecx, dword ptr ss : [esp+0x16E8]
        mov dword ptr fs : [0], ecx
        add esp, 0x16F4
        ret 
        UNREACHABLE_TRAP(0x5020a0)
    }
}

#undef public_502118
#undef public_502160
#undef public_502190
#undef public_5021d0
#undef public_5021fa
#undef public_502210
#undef public_50223f
#undef public_502259
#undef public_502271
#undef public_5022a6
#undef public_5022c0
#undef public_5022d8
#undef public_502301
#undef public_50231b
#undef public_502345
#undef public_502368
#undef public_50238b
#undef public_5023ae
#undef public_5023d1
#undef public_5023f4
#undef public_50241a
#undef public_502427
#undef public_50244f
#undef public_502463
#undef public_502490
#undef public_5024b5
#undef public_5024ca
#undef public_5024d8
#undef public_5024e2
#undef public_502501
#undef public_50252d
#undef public_50254b
#undef public_502581
#undef public_5025b7
#undef public_5025b9
#undef public_5025e0
#undef public_502615
#undef public_502640
#undef public_50266b
#undef public_502696
#undef public_5026ba
#undef public_5026cf
#undef public_5026e4
#undef public_502756
#undef public_502763
#undef public_5027ad
#undef public_5027ea
#undef public_5027fb
#undef public_502813
#undef public_50283d
#undef public_50285b
#undef public_502864
#undef public_5028d3
#undef public_5028e0
#undef public_50291a
#undef public_50291d
#undef public_502927
#undef public_502957
#undef public_50296f
#undef public_502978
#undef public_50298d
#undef public_502998
#undef public_50299f
#undef public_5029d6
#undef public_5029e7
#undef public_5029ff
#undef public_502a2b
#undef public_502a5e
#undef public_502a67
