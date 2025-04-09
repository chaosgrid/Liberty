#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_417c50);
CLANG_FORWARD_PROC_SYMBOL(public_5621a0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e90);
CLANG_FORWARD_JUMP_SYMBOL(public_5c1d4f);

#define public_5621c8 _public_5621c8
#define public_5622b0 _public_5622b0
#define public_5622d5 _public_5622d5
#define public_562301 _public_562301
#define public_56231c _public_56231c
#define public_56232f _public_56232f
#define public_562365 _public_562365
#define public_5623a1 _public_5623a1
#define public_5623b5 _public_5623b5
#define public_5623ca _public_5623ca
#define public_5623f0 _public_5623f0
#define public_56241c _public_56241c
#define public_562436 _public_562436
#define public_56245e _public_56245e
#define public_562476 _public_562476
#define public_562479 _public_562479
#define public_56248b _public_56248b
#define public_5624a0 _public_5624a0
#define public_5624c1 _public_5624c1
#define public_5624df _public_5624df
#define public_5624f2 _public_5624f2
#define public_5624f4 _public_5624f4
#define public_56250c _public_56250c
#define public_56251c _public_56251c
#define public_562523 _public_562523
#define public_56252f _public_56252f
#define public_56259f _public_56259f
#define public_5625b0 _public_5625b0
#define public_5625c5 _public_5625c5
#define public_5625ea _public_5625ea
#define public_562647 _public_562647
#define public_562652 _public_562652
#define public_562661 _public_562661
#define public_562678 _public_562678

PROC_DECLARE(0x5621a0, internal_5621a0, public_5621a0);
extern "C" NAKED register_t __cdecl internal_5621a0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5c1d4f @0x5621a8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c1d4f
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, 0x1570
        mov dword ptr fs : [0], esp
        call public_5b7e90
        push ebp
        push esi
        xor ebp, ebp
        push edi
        mov esi, ecx
        xor eax, eax
        public_5621c8 : nop
        mov ecx, dword ptr ds : [eax+public_6143b8]
        mov edx, dword ptr ds : [eax+public_6143c0]
        add eax, 0x10
        cmp eax, 0x470
        mov dword ptr ds : [esi+ecx*4+0x28], edx
        jb public_5621c8
        push ebx
/*FIXUP push offset public_5e204c @0x5621e3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e204c
        lea eax, ds:[esi+0x144]
        push 0x104
        push eax
        call public_417c50
/*FIXUP push offset public_5e2044 @0x5621f9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e2044
        lea ecx, ds:[esi+0x24C]
        push 0x104
        push ecx
        mov dword ptr ds : [esi+0x140], eax
        call public_417c50
        mov dword ptr ds : [esi+0x248], eax
        or eax, 0xFFFFFFFF
        add esp, 0x18
        lea ecx, ss:[esp+0x18]
        mov byte ptr ds : [esi+0x878], 0
        mov byte ptr ds : [esi+0x879], 0
        mov dword ptr ds : [esi+0x10], eax
        mov dword ptr ds : [esi+0x14], eax
        mov dword ptr ds : [esi+0x18], ebp
        mov dword ptr ds : [esi+8], 0x400
        mov dword ptr ds : [esi+0xC], 0x300
        mov dword ptr ds : [esi+0x1C], 1
        mov dword ptr ds : [esi+0x20], 2
        mov byte ptr ds : [esi+0x24], 1
        mov dword ptr ds : [esi+4], 0x3C
        mov dword ptr ds : [esi], eax
        mov byte ptr ds : [esi+0x25], 1
        mov dword ptr ss : [esp+0x14], ebp
        call dword ptr ds : [public_5c605c]
        push ebp
        lea edi, ds:[esi+0x144]
        push edi
        lea ecx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x1590], ebp
        call dword ptr ds : [public_5c6058]
        test al, al
        je public_5624a0
        lea ecx, ss:[esp+0x18]
        call dword ptr ds : [public_5c6054]
        test al, al
        je public_5624c1
        mov ebx, dword ptr ds : [public_5c6698]
        lea esp, ss:[esp]
/*FIXUP public_5622b0 : nop
        push offset public_5e2038 @0x5622b0*/
  FIXUP public_5622b0 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e2038
        lea ecx, ss:[esp+0x1C]
        call dword ptr ds : [public_5c6050]
        test al, al
        lea ecx, ss:[esp+0x18]
        je public_56232f
        call dword ptr ds : [public_5c669c]
        test al, al
        je public_56248b
/*FIXUP public_5622d5 : nop
        push offset public_5e202c @0x5622d5*/
  FIXUP public_5622d5 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e202c
        lea ecx, ss:[esp+0x1C]
        call dword ptr ds : [public_5c6cf4]
        test al, al
        je public_56231c
        lea ecx, ss:[esp+0x18]
        call ebx
        cmp eax, ebp
        jne public_562301
        mov dword ptr ds : [esi+0x248], ebp
        mov byte ptr ds : [esi+0x24C], 0
        jmp public_56231c
        public_562301 : nop
        push eax
        lea edx, ds:[esi+0x24C]
        push 0x104
        push edx
        call public_417c50
        add esp, 0xC
        mov dword ptr ds : [esi+0x248], eax
        public_56231c : nop
        lea ecx, ss:[esp+0x18]
        call dword ptr ds : [public_5c669c]
        test al, al
        jne public_5622d5
        jmp public_56248b
/*FIXUP public_56232f : nop
        push offset public_5e2024 @0x56232f*/
  FIXUP public_56232f : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e2024
        call dword ptr ds : [public_5c6050]
        test al, al
        lea ecx, ss:[esp+0x18]
        je public_5623ca
        call dword ptr ds : [public_5c669c]
        test al, al
        je public_56248b
        mov eax, dword ptr ss : [esp+0x14]
        imul eax, 0x108
        lea ebp, ds:[eax+esi+0x350]
/*FIXUP public_562365 : nop
        push offset public_5e2018 @0x562365*/
  FIXUP public_562365 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e2018
        lea ecx, ss:[esp+0x1C]
        call dword ptr ds : [public_5c6cf4]
        test al, al
        je public_5623b5
        cmp dword ptr ss : [esp+0x14], 3
        jge public_5623b5
        lea ecx, ss:[esp+0x18]
        call ebx
        mov ecx, dword ptr ss : [esp+0x14]
        mov edi, ebp
        inc ecx
        add ebp, 0x108
        test eax, eax
        mov dword ptr ss : [esp+0x14], ecx
        jne public_5623a1
        mov dword ptr ds : [edi], eax
        mov byte ptr ds : [edi+4], al
        jmp public_5623b5
        public_5623a1 : nop
        push eax
        lea ecx, ds:[edi+4]
        push 0x104
        push ecx
        call public_417c50
        add esp, 0xC
        mov dword ptr ds : [edi], eax
        public_5623b5 : nop
        lea ecx, ss:[esp+0x18]
        call dword ptr ds : [public_5c669c]
        test al, al
        jne public_562365
        xor ebp, ebp
        jmp public_56248b
/*FIXUP public_5623ca : nop
        push offset public_5e2010 @0x5623ca*/
  FIXUP public_5623ca : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e2010
        call dword ptr ds : [public_5c6050]
        test al, al
        je public_56248b
        lea ecx, ss:[esp+0x18]
        call dword ptr ds : [public_5c669c]
        test al, al
        je public_56248b
        nop 
/*FIXUP public_5623f0 : nop
        push offset public_5e2000 @0x5623f0*/
  FIXUP public_5623f0 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e2000
        lea ecx, ss:[esp+0x1C]
        call dword ptr ds : [public_5c6cf4]
        test al, al
        lea ecx, ss:[esp+0x18]
        je public_562436
        call ebx
        cmp eax, ebp
        jne public_56241c
        mov dword ptr ds : [esi+0x668], ebp
        mov byte ptr ds : [esi+0x66C], 0
        jmp public_562479
        public_56241c : nop
        push eax
        lea edx, ds:[esi+0x66C]
        push 0x104
        push edx
        call public_417c50
        mov dword ptr ds : [esi+0x668], eax
        jmp public_562476
/*FIXUP public_562436 : nop
        push offset public_5e04f0 @0x562436*/
  FIXUP public_562436 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e04f0
        call dword ptr ds : [public_5c6cf4]
        test al, al
        je public_562479
        lea ecx, ss:[esp+0x18]
        call ebx
        cmp eax, ebp
        jne public_56245e
        mov dword ptr ds : [esi+0x770], ebp
        mov byte ptr ds : [esi+0x774], 0
        jmp public_562479
        public_56245e : nop
        push eax
        lea eax, ds:[esi+0x774]
        push 0x104
        push eax
        call public_417c50
        mov dword ptr ds : [esi+0x770], eax
        public_562476 : nop
        add esp, 0xC
        public_562479 : nop
        lea ecx, ss:[esp+0x18]
        call dword ptr ds : [public_5c669c]
        test al, al
        jne public_5623f0
        public_56248b : nop
        lea ecx, ss:[esp+0x18]
        call dword ptr ds : [public_5c6054]
        test al, al
        jne public_5622b0
        jmp public_5624c1
        nop 
        public_5624a0 : nop
        mov ecx, dword ptr ds : [public_5c6d18]
        push edi
        push 0x17F
/*FIXUP push offset public_5e1fd8 @0x5624ac*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e1fd8
        mov eax, 0x100001
/*FIXUP push offset public_5e1f98 @0x5624b6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e1f98
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        public_5624c1 : nop
        mov edx, dword ptr ss : [esp+0x1590]
        mov ecx, dword ptr ds : [edx]
        xor edi, edi
        cmp ecx, ebp
        jbe public_56252f
        cmp edi, ecx
        mov bl, byte ptr ss : [esp+0x13]
        mov al, byte ptr ss : [esp+0x13]
        lea ebp, ds:[edx+4]
        jae public_56250c
        public_5624df : nop
        mov ecx, dword ptr ss : [ebp]
        mov al, byte ptr ds : [ecx]
        cmp al, 0x2B
        je public_5624f2
        cmp al, 0x2D
        je public_5624f4
        xor bl, bl
        xor al, al
        jmp public_562523
        public_5624f2 : nop
        cmp al, 0x2D
        public_5624f4 : nop
        movsx edx, byte ptr ds : [ecx+1]
        push edx
        setne bl
        call dword ptr ds : [public_5c70c8]
        mov edx, dword ptr ss : [esp+0x1594]
        add esp, 4
        public_56250c : nop
        cmp al, 0x51
        je public_56251c
        cmp al, 0x58
        jne public_562523
        mov byte ptr ds : [public_67ecbc], bl
        jmp public_562523
        public_56251c : nop
        mov byte ptr ds : [esi+0x879], 1
        public_562523 : nop
        mov ecx, dword ptr ds : [edx]
        inc edi
        add ebp, 4
        cmp edi, ecx
        jb public_5624df
        xor ebp, ebp
        public_56252f : nop
        lea eax, ss:[esp+0x1440]
        mov dword ptr ss : [esp+0x1588], 1
        mov dword ptr ss : [esp+0x14], eax
        mov ecx, dword ptr ds : [public_5c7080]
        mov edx, dword ptr ds : [ecx]
        push edx
        push ebp
        lea ecx, ss:[esp+0x1448]
        mov byte ptr ss : [esp+0x1590], 2
        call dword ptr ds : [public_5c707c]
        cmp dword ptr ss : [esp+0x1450], 0xFFFFFFFF
        mov ebx, dword ptr ds : [public_5c6efc]
        mov esi, dword ptr ds : [public_5c6ef8]
        je public_5625c5
        cmp dword ptr ss : [esp+0x1454], ebp
        je public_5625b0
        mov eax, dword ptr ss : [esp+0x1458]
        cmp eax, ebp
        je public_56259f
        push eax
        call ebx
        mov dword ptr ss : [esp+0x1458], ebp
        mov dword ptr ss : [esp+0x145C], ebp
        public_56259f : nop
        mov eax, dword ptr ss : [esp+0x1454]
        push eax
        call esi
        mov dword ptr ss : [esp+0x1454], ebp
        public_5625b0 : nop
        mov ecx, dword ptr ss : [esp+0x1450]
        push ecx
        call esi
        mov dword ptr ss : [esp+0x1450], 0xFFFFFFFF
        public_5625c5 : nop
        mov eax, dword ptr ss : [esp+0x1458]
        cmp eax, ebp
        mov edi, dword ptr ds : [public_5c71d8]
        je public_5625ea
        push eax
        call edi
        add esp, 4
        mov dword ptr ss : [esp+0x1458], ebp
        mov dword ptr ss : [esp+0x145C], ebp
        public_5625ea : nop
        push 1
        lea ecx, ss:[esp+0x1444]
        mov dword ptr ss : [esp+0x1464], ebp
        mov byte ptr ss : [esp+0x158C], 1
        call dword ptr ds : [public_5c7084]
        mov edx, dword ptr ds : [public_5c7080]
        mov eax, dword ptr ds : [edx]
        push eax
        push ebp
        lea ecx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x1590], 3
        call dword ptr ds : [public_5c707c]
        cmp dword ptr ss : [esp+0x28], 0xFFFFFFFF
        je public_562661
        cmp dword ptr ss : [esp+0x2C], ebp
        je public_562652
        mov eax, dword ptr ss : [esp+0x30]
        cmp eax, ebp
        je public_562647
        push eax
        call ebx
        mov dword ptr ss : [esp+0x30], ebp
        mov dword ptr ss : [esp+0x34], ebp
        public_562647 : nop
        mov ecx, dword ptr ss : [esp+0x2C]
        push ecx
        call esi
        mov dword ptr ss : [esp+0x2C], ebp
        public_562652 : nop
        mov edx, dword ptr ss : [esp+0x28]
        push edx
        call esi
        mov dword ptr ss : [esp+0x28], 0xFFFFFFFF
        public_562661 : nop
        mov eax, dword ptr ss : [esp+0x30]
        cmp eax, ebp
        pop ebx
        je public_562678
        push eax
        call edi
        add esp, 4
        mov dword ptr ss : [esp+0x2C], ebp
        mov dword ptr ss : [esp+0x30], ebp
        public_562678 : nop
        push 1
        lea ecx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x38], ebp
        mov dword ptr ss : [esp+0x1588], 0xFFFFFFFF
        call dword ptr ds : [public_5c7084]
        mov ecx, dword ptr ss : [esp+0x157C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x157C
        ret 4
        UNREACHABLE_TRAP(0x5621a0)
    }
}

#undef public_5621c8
#undef public_5622b0
#undef public_5622d5
#undef public_562301
#undef public_56231c
#undef public_56232f
#undef public_562365
#undef public_5623a1
#undef public_5623b5
#undef public_5623ca
#undef public_5623f0
#undef public_56241c
#undef public_562436
#undef public_56245e
#undef public_562476
#undef public_562479
#undef public_56248b
#undef public_5624a0
#undef public_5624c1
#undef public_5624df
#undef public_5624f2
#undef public_5624f4
#undef public_56250c
#undef public_56251c
#undef public_562523
#undef public_56252f
#undef public_56259f
#undef public_5625b0
#undef public_5625c5
#undef public_5625ea
#undef public_562647
#undef public_562652
#undef public_562661
#undef public_562678
