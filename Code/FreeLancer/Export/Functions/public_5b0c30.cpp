#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40eac0);
CLANG_FORWARD_PROC_SYMBOL(public_417800);
CLANG_FORWARD_PROC_SYMBOL(public_4197e0);
CLANG_FORWARD_PROC_SYMBOL(public_427a70);
CLANG_FORWARD_PROC_SYMBOL(public_42b030);
CLANG_FORWARD_PROC_SYMBOL(public_430b00);
CLANG_FORWARD_PROC_SYMBOL(public_4b6c50);
CLANG_FORWARD_PROC_SYMBOL(public_4c7370);
CLANG_FORWARD_PROC_SYMBOL(public_4f7230);
CLANG_FORWARD_PROC_SYMBOL(public_530d20);
CLANG_FORWARD_PROC_SYMBOL(public_575440);
CLANG_FORWARD_PROC_SYMBOL(public_57d800);
CLANG_FORWARD_PROC_SYMBOL(public_57e310);
CLANG_FORWARD_PROC_SYMBOL(public_5b0c30);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e90);
CLANG_FORWARD_JUMP_SYMBOL(public_5c593f);

#define public_5b0cb0 _public_5b0cb0
#define public_5b0ce3 _public_5b0ce3
#define public_5b0d1b _public_5b0d1b
#define public_5b0d46 _public_5b0d46
#define public_5b0d7c _public_5b0d7c
#define public_5b0dad _public_5b0dad
#define public_5b0de3 _public_5b0de3
#define public_5b0e14 _public_5b0e14
#define public_5b0e4a _public_5b0e4a
#define public_5b0e85 _public_5b0e85
#define public_5b0eba _public_5b0eba
#define public_5b0ee6 _public_5b0ee6
#define public_5b0ee9 _public_5b0ee9
#define public_5b0eff _public_5b0eff
#define public_5b0f20 _public_5b0f20
#define public_5b0f7e _public_5b0f7e
#define public_5b0f87 _public_5b0f87
#define public_5b0f98 _public_5b0f98
#define public_5b0fad _public_5b0fad
#define public_5b0fcc _public_5b0fcc
#define public_5b103c _public_5b103c
#define public_5b1049 _public_5b1049
#define public_5b108c _public_5b108c
#define public_5b1095 _public_5b1095
#define public_5b1097 _public_5b1097
#define public_5b10d4 _public_5b10d4
#define public_5b10e5 _public_5b10e5
#define public_5b10fd _public_5b10fd
#define public_5b1127 _public_5b1127
#define public_5b1145 _public_5b1145
#define public_5b114e _public_5b114e
#define public_5b11c1 _public_5b11c1
#define public_5b11ce _public_5b11ce
#define public_5b120e _public_5b120e
#define public_5b1217 _public_5b1217
#define public_5b124e _public_5b124e
#define public_5b125f _public_5b125f
#define public_5b1277 _public_5b1277
#define public_5b12a1 _public_5b12a1
#define public_5b12d9 _public_5b12d9
#define public_5b12e2 _public_5b12e2

PROC_DECLARE(0x5b0c30, internal_5b0c30, public_5b0c30);
extern "C" NAKED register_t __cdecl internal_5b0c30()
{
    __asm
    {
        push 0xFFFFFFFF
        mov eax, dword ptr fs : [0]
/*FIXUP push public_5c593f @0x5b0c38*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c593f
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, 0x1774
        mov dword ptr fs : [0], esp
        call public_5b7e90
        push ebx
        push ebp
        push esi
        push edi
        lea ecx, ss:[esp+0x118]
        call dword ptr ds : [public_5c605c]
        mov dword ptr ss : [esp+0x178C], 0
        call public_4b6c50
        mov eax, dword ptr ss : [esp+0x1794]
        push 0
        push eax
        lea ecx, ss:[esp+0x120]
        call dword ptr ds : [public_5c6058]
        test al, al
        je public_5b0fcc
        lea ecx, ss:[esp+0x118]
        call dword ptr ds : [public_5c6054]
        test al, al
        je public_5b0fad
        mov esi, dword ptr ds : [public_5c6698]
        lea ebx, ds:[ebx]
        public_5b0cb0 : nop
        mov edi, dword ptr ds : [public_5c6050]
/*FIXUP push offset public_5e2010 @0x5b0cb6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e2010
        lea ecx, ss:[esp+0x11C]
        call edi
        test al, al
        lea ecx, ss:[esp+0x118]
        je public_5b0eff
        mov ebx, dword ptr ds : [public_5c669c]
        call ebx
        test al, al
        je public_5b0f98
        public_5b0ce3 : nop
        mov edi, dword ptr ds : [public_5c6cf4]
/*FIXUP push offset public_5e6a84 @0x5b0ce9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e6a84
        lea ecx, ss:[esp+0x11C]
        call edi
        test al, al
        lea ecx, ss:[esp+0x118]
        je public_5b0d1b
        call esi
        mov ecx, dword ptr ds : [public_5c6dd8]
        mov edx, dword ptr ds : [ecx]
        push edx
        push eax
        call public_417800
        add esp, 8
        jmp public_5b0ee9
/*FIXUP public_5b0d1b : nop
        push offset public_5e6a78 @0x5b0d1b*/
  FIXUP public_5b0d1b : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e6a78
        call edi
        test al, al
        lea ecx, ss:[esp+0x118]
        je public_5b0d46
        call esi
        mov ecx, dword ptr ds : [public_5c6dd8]
        mov edx, dword ptr ds : [ecx]
        push edx
        push eax
        call public_57e310
        add esp, 8
        jmp public_5b0ee9
/*FIXUP public_5b0d46 : nop
        push offset public_5e6a70 @0x5b0d46*/
  FIXUP public_5b0d46 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e6a70
        call edi
        test al, al
        lea ecx, ss:[esp+0x118]
        je public_5b0d7c
        push 0
        call esi
        push eax
        lea eax, ss:[esp+0x1C]
        push eax
        call dword ptr ds : [public_5c6068]
        lea ecx, ss:[esp+0x20]
        push 0
        push ecx
        call public_42b030
        add esp, 0x14
        jmp public_5b0ee9
/*FIXUP public_5b0d7c : nop
        push offset public_5e6a68 @0x5b0d7c*/
  FIXUP public_5b0d7c : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e6a68
        call edi
        test al, al
        lea ecx, ss:[esp+0x118]
        je public_5b0dad
        push 0
        call esi
        push eax
        lea edx, ss:[esp+0x1C]
        push edx
        call dword ptr ds : [public_5c6068]
        lea eax, ss:[esp+0x20]
        push eax
        call public_430b00
        jmp public_5b0ee6
/*FIXUP public_5b0dad : nop
        push offset public_5d9aa0 @0x5b0dad*/
  FIXUP public_5b0dad : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d9aa0
        call edi
        test al, al
        lea ecx, ss:[esp+0x118]
        je public_5b0de3
        push 0
        call esi
        push eax
        lea ecx, ss:[esp+0x1C]
        push ecx
        call dword ptr ds : [public_5c6068]
        lea edx, ss:[esp+0x20]
        push 0
        push edx
        call public_40eac0
        add esp, 0x14
        jmp public_5b0ee9
/*FIXUP public_5b0de3 : nop
        push offset public_5e6a58 @0x5b0de3*/
  FIXUP public_5b0de3 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e6a58
        call edi
        test al, al
        lea ecx, ss:[esp+0x118]
        je public_5b0e14
        push 0
        call esi
        push eax
        lea eax, ss:[esp+0x1C]
        push eax
        call dword ptr ds : [public_5c6068]
        lea ecx, ss:[esp+0x20]
        push ecx
        call public_4f7230
        jmp public_5b0ee6
/*FIXUP public_5b0e14 : nop
        push offset public_5e6a50 @0x5b0e14*/
  FIXUP public_5b0e14 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e6a50
        call edi
        test al, al
        lea ecx, ss:[esp+0x118]
        je public_5b0e4a
        push 0
        call esi
        push eax
        lea edx, ss:[esp+0x1C]
        push edx
        call dword ptr ds : [public_5c6068]
        lea eax, ss:[esp+0x20]
        push 0
        push eax
        call public_530d20
        add esp, 0x14
        jmp public_5b0ee9
/*FIXUP public_5b0e4a : nop
        push offset public_5e6a48 @0x5b0e4a*/
  FIXUP public_5b0e4a : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e6a48
        call edi
        test al, al
        je public_5b0e85
        mov ecx, dword ptr ds : [public_5c6dd8]
        mov edx, dword ptr ds : [ecx]
        push edx
        lea ecx, ss:[esp+0x11C]
        call esi
        push eax
        lea eax, ss:[esp+0x1688]
        push eax
        call dword ptr ds : [public_5c6068]
        lea ecx, ss:[esp+0x168C]
        push ecx
        call public_575440
        jmp public_5b0ee6
/*FIXUP public_5b0e85 : nop
        push offset public_5d6e1c @0x5b0e85*/
  FIXUP public_5b0e85 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d6e1c
        lea ecx, ss:[esp+0x11C]
        call edi
        test al, al
        lea ecx, ss:[esp+0x118]
        je public_5b0eba
        push 0
        call esi
        push eax
        lea edx, ss:[esp+0x1C]
        push edx
        call dword ptr ds : [public_5c6068]
        lea eax, ss:[esp+0x20]
        push eax
        call public_4c7370
        jmp public_5b0ee6
/*FIXUP public_5b0eba : nop
        push offset public_5e6a40 @0x5b0eba*/
  FIXUP public_5b0eba : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e6a40
        call edi
        test al, al
        je public_5b0ee9
        push 0
        lea ecx, ss:[esp+0x11C]
        call esi
        push eax
        lea ecx, ss:[esp+0x1C]
        push ecx
        call dword ptr ds : [public_5c6068]
        lea edx, ss:[esp+0x20]
        push edx
        call public_4197e0
        public_5b0ee6 : nop
        add esp, 0x10
        public_5b0ee9 : nop
        lea ecx, ss:[esp+0x118]
        call ebx
        test al, al
        jne public_5b0ce3
        jmp public_5b0f98
/*FIXUP public_5b0eff : nop
        push offset public_5e6a34 @0x5b0eff*/
  FIXUP public_5b0eff : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e6a34
        call edi
        test al, al
        je public_5b0f98
        lea ecx, ss:[esp+0x118]
        call dword ptr ds : [public_5c669c]
        test al, al
        je public_5b0f98
        nop 
/*FIXUP public_5b0f20 : nop
        push offset public_5e6a30 @0x5b0f20*/
  FIXUP public_5b0f20 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e6a30
        lea ecx, ss:[esp+0x11C]
        call dword ptr ds : [public_5c6cf4]
        test al, al
        je public_5b0f87
        lea ecx, ss:[esp+0x118]
        call esi
        push eax
        call dword ptr ds : [public_5c6f00]
        mov ebx, eax
        test ebx, ebx
        jne public_5b0f7e
        lea ecx, ss:[esp+0x118]
        call esi
        mov edi, eax
        mov ebp, 0x100001
        call dword ptr ds : [public_5c6f04]
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        push edi
        push 0x22C
/*FIXUP push offset public_5e6a08 @0x5b0f6e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e6a08
/*FIXUP push offset public_5e69d0 @0x5b0f73*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e69d0
        push ebp
        call dword ptr ds : [eax]
        add esp, 0x18
        public_5b0f7e : nop
        push ebx
        call public_57d800
        add esp, 4
        public_5b0f87 : nop
        lea ecx, ss:[esp+0x118]
        call dword ptr ds : [public_5c669c]
        test al, al
        jne public_5b0f20
        public_5b0f98 : nop
        lea ecx, ss:[esp+0x118]
        call dword ptr ds : [public_5c6054]
        test al, al
        jne public_5b0cb0
        public_5b0fad : nop
        push 0
        lea ecx, ss:[esp+0x18]
/*FIXUP push offset public_5e69bc @0x5b0fb3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e69bc
        push ecx
        call dword ptr ds : [public_5c6068]
        lea edx, ss:[esp+0x20]
        push edx
        call public_427a70
        add esp, 0x10
        public_5b0fcc : nop
        lea eax, ss:[esp+0x1540]
        mov dword ptr ss : [esp+0x178C], 1
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ss : [esp+0x1544]
        test eax, eax
        mov ecx, dword ptr ds : [public_5c7080]
        mov ebp, dword ptr ds : [ecx]
        mov byte ptr ss : [esp+0x178C], 2
        je public_5b103c
        mov cl, byte ptr ds : [eax-1]
        test cl, cl
        je public_5b103c
        cmp cl, 0xFF
        je public_5b103c
        push 1
        lea ecx, ss:[esp+0x1544]
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
        lea ecx, ss:[esp+0x1548]
        call dword ptr ds : [public_5c7088]
        mov eax, dword ptr ss : [esp+0x1544]
        public_5b103c : nop
        mov ecx, dword ptr ss : [esp+0x1548]
        cmp ecx, ebp
        jae public_5b1049
        mov ebp, ecx
        public_5b1049 : nop
        test ebp, ebp
        mov ebx, dword ptr ds : [public_5c709c]
        jbe public_5b1095
        sub ecx, ebp
        push ecx
        lea edx, ds:[eax+ebp]
        push edx
        push eax
        call ebx
        mov esi, dword ptr ss : [esp+0x1554]
        add esp, 0xC
        xor edi, edi
        push edi
        sub esi, ebp
        push esi
        lea ecx, ss:[esp+0x1548]
        call dword ptr ds : [public_5c708c]
        test al, al
        je public_5b108c
        push esi
        lea ecx, ss:[esp+0x1544]
        call dword ptr ds : [public_5c706c]
        public_5b108c : nop
        mov eax, dword ptr ss : [esp+0x1544]
        jmp public_5b1097
        public_5b1095 : nop
        xor edi, edi
        public_5b1097 : nop
        mov ecx, dword ptr ss : [esp+0x1550]
        mov ebp, dword ptr ds : [public_5c6ef8]
        or esi, 0xFFFFFFFF
        cmp ecx, esi
        je public_5b10fd
        cmp dword ptr ss : [esp+0x1554], edi
        je public_5b10e5
        mov eax, dword ptr ss : [esp+0x1558]
        cmp eax, edi
        je public_5b10d4
        push eax
        call dword ptr ds : [public_5c6efc]
        mov dword ptr ss : [esp+0x1558], edi
        mov dword ptr ss : [esp+0x155C], edi
        public_5b10d4 : nop
        mov edx, dword ptr ss : [esp+0x1554]
        push edx
        call ebp
        mov dword ptr ss : [esp+0x1554], edi
        public_5b10e5 : nop
        mov eax, dword ptr ss : [esp+0x1550]
        push eax
        call ebp
        mov eax, dword ptr ss : [esp+0x1544]
        mov dword ptr ss : [esp+0x1550], esi
        public_5b10fd : nop
        mov ecx, dword ptr ss : [esp+0x1558]
        cmp ecx, edi
        je public_5b1127
        push ecx
        call dword ptr ds : [public_5c71d8]
        mov eax, dword ptr ss : [esp+0x1548]
        add esp, 4
        mov dword ptr ss : [esp+0x1558], edi
        mov dword ptr ss : [esp+0x155C], edi
        public_5b1127 : nop
        cmp eax, edi
        mov dword ptr ss : [esp+0x1560], edi
        je public_5b114e
        mov cl, byte ptr ds : [eax-1]
        dec eax
        test cl, cl
        je public_5b1145
        cmp cl, 0xFF
        je public_5b1145
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_5b114e
        public_5b1145 : nop
        push eax
        call public_5b7e1d
        add esp, 4
        public_5b114e : nop
        mov dword ptr ss : [esp+0x1544], edi
        mov dword ptr ss : [esp+0x1548], edi
        mov dword ptr ss : [esp+0x154C], edi
        mov ecx, dword ptr ds : [public_5c7080]
        mov edi, dword ptr ds : [ecx]
        mov ecx, dword ptr ss : [esp+0x11C]
        xor esi, esi
        cmp ecx, esi
        mov dword ptr ss : [esp+0x178C], 3
        je public_5b11c1
        mov al, byte ptr ds : [ecx-1]
        test al, al
        je public_5b11c1
        cmp al, 0xFF
        je public_5b11c1
        mov esi, ecx
        push 1
        lea ecx, ss:[esp+0x11C]
        call dword ptr ds : [public_5c7084]
        push esi
        call dword ptr ds : [public_5c6f94]
        add esp, 4
        push eax
        push esi
        lea ecx, ss:[esp+0x120]
        call dword ptr ds : [public_5c7088]
        mov ecx, dword ptr ss : [esp+0x11C]
        xor esi, esi
        public_5b11c1 : nop
        mov eax, dword ptr ss : [esp+0x120]
        cmp eax, edi
        jae public_5b11ce
        mov edi, eax
        public_5b11ce : nop
        cmp edi, esi
        jbe public_5b1217
        sub eax, edi
        push eax
        lea edx, ds:[ecx+edi]
        push edx
        push ecx
        call ebx
        mov esi, dword ptr ss : [esp+0x12C]
        add esp, 0xC
        push 0
        sub esi, edi
        push esi
        lea ecx, ss:[esp+0x120]
        call dword ptr ds : [public_5c708c]
        test al, al
        je public_5b120e
        mov eax, dword ptr ss : [esp+0x11C]
        mov dword ptr ss : [esp+0x120], esi
        mov byte ptr ds : [eax+esi], 0
        public_5b120e : nop
        mov ecx, dword ptr ss : [esp+0x11C]
        xor esi, esi
        public_5b1217 : nop
        mov eax, dword ptr ss : [esp+0x128]
        or edi, 0xFFFFFFFF
        cmp eax, edi
        je public_5b1277
        cmp dword ptr ss : [esp+0x12C], esi
        je public_5b125f
        mov eax, dword ptr ss : [esp+0x130]
        cmp eax, esi
        je public_5b124e
        push eax
        call dword ptr ds : [public_5c6efc]
        mov dword ptr ss : [esp+0x130], esi
        mov dword ptr ss : [esp+0x134], esi
        public_5b124e : nop
        mov ecx, dword ptr ss : [esp+0x12C]
        push ecx
        call ebp
        mov dword ptr ss : [esp+0x12C], esi
        public_5b125f : nop
        mov edx, dword ptr ss : [esp+0x128]
        push edx
        call ebp
        mov ecx, dword ptr ss : [esp+0x11C]
        mov dword ptr ss : [esp+0x128], edi
        public_5b1277 : nop
        mov eax, dword ptr ss : [esp+0x130]
        cmp eax, esi
        je public_5b12a1
        push eax
        call dword ptr ds : [public_5c71d8]
        mov ecx, dword ptr ss : [esp+0x120]
        add esp, 4
        mov dword ptr ss : [esp+0x130], esi
        mov dword ptr ss : [esp+0x134], esi
        public_5b12a1 : nop
        pop edi
        mov dword ptr ss : [esp+0x134], esi
        cmp ecx, esi
        pop esi
        pop ebp
        pop ebx
        je public_5b12e2
        lea eax, ds:[ecx-1]
        mov cl, byte ptr ds : [eax]
        test cl, cl
        je public_5b12d9
        cmp cl, 0xFF
        je public_5b12d9
        dec cl
        mov byte ptr ds : [eax], cl
        mov al, 1
        mov ecx, dword ptr ss : [esp+0x1774]
        mov dword ptr fs : [0], ecx
        add esp, 0x1780
        ret 
        public_5b12d9 : nop
        push eax
        call public_5b7e1d
        add esp, 4
        public_5b12e2 : nop
        mov ecx, dword ptr ss : [esp+0x1774]
        mov al, 1
        mov dword ptr fs : [0], ecx
        add esp, 0x1780
        ret 
        UNREACHABLE_TRAP(0x5b0c30)
    }
}

#undef public_5b0cb0
#undef public_5b0ce3
#undef public_5b0d1b
#undef public_5b0d46
#undef public_5b0d7c
#undef public_5b0dad
#undef public_5b0de3
#undef public_5b0e14
#undef public_5b0e4a
#undef public_5b0e85
#undef public_5b0eba
#undef public_5b0ee6
#undef public_5b0ee9
#undef public_5b0eff
#undef public_5b0f20
#undef public_5b0f7e
#undef public_5b0f87
#undef public_5b0f98
#undef public_5b0fad
#undef public_5b0fcc
#undef public_5b103c
#undef public_5b1049
#undef public_5b108c
#undef public_5b1095
#undef public_5b1097
#undef public_5b10d4
#undef public_5b10e5
#undef public_5b10fd
#undef public_5b1127
#undef public_5b1145
#undef public_5b114e
#undef public_5b11c1
#undef public_5b11ce
#undef public_5b120e
#undef public_5b1217
#undef public_5b124e
#undef public_5b125f
#undef public_5b1277
#undef public_5b12a1
#undef public_5b12d9
#undef public_5b12e2
