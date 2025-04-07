#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea9f40);
CLANG_FORWARD_PROC_SYMBOL(public_6eb6740);
CLANG_FORWARD_PROC_SYMBOL(public_6ecfc30);
CLANG_FORWARD_PROC_SYMBOL(public_6f0dfa0);
CLANG_FORWARD_PROC_SYMBOL(public_6f1e390);
CLANG_FORWARD_PROC_SYMBOL(public_6f24870);
CLANG_FORWARD_PROC_SYMBOL(public_6f25260);
CLANG_FORWARD_PROC_SYMBOL(public_6f28e10);
CLANG_FORWARD_PROC_SYMBOL(public_6f93790);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fae418);

#define public_6f252a8 _public_6f252a8
#define public_6f252d8 _public_6f252d8
#define public_6f25366 _public_6f25366
#define public_6f253ec _public_6f253ec
#define public_6f25472 _public_6f25472
#define public_6f254f8 _public_6f254f8
#define public_6f2557e _public_6f2557e
#define public_6f25604 _public_6f25604
#define public_6f2568a _public_6f2568a
#define public_6f25710 _public_6f25710
#define public_6f257a3 _public_6f257a3
#define public_6f25836 _public_6f25836
#define public_6f258d1 _public_6f258d1
#define public_6f2591e _public_6f2591e
#define public_6f25933 _public_6f25933
#define public_6f2594f _public_6f2594f
#define public_6f2599e _public_6f2599e
#define public_6f259f0 _public_6f259f0
#define public_6f25a16 _public_6f25a16
#define public_6f25a68 _public_6f25a68
#define public_6f25a8e _public_6f25a8e
#define public_6f25ae0 _public_6f25ae0
#define public_6f25b06 _public_6f25b06
#define public_6f25b58 _public_6f25b58
#define public_6f25b7e _public_6f25b7e
#define public_6f25bd0 _public_6f25bd0
#define public_6f25bf6 _public_6f25bf6
#define public_6f25c48 _public_6f25c48
#define public_6f25c6e _public_6f25c6e
#define public_6f25cc0 _public_6f25cc0
#define public_6f25ce6 _public_6f25ce6
#define public_6f25d38 _public_6f25d38
#define public_6f25d5e _public_6f25d5e
#define public_6f25da7 _public_6f25da7
#define public_6f25dc8 _public_6f25dc8
#define public_6f25de8 _public_6f25de8
#define public_6f25e28 _public_6f25e28
#define public_6f25e72 _public_6f25e72
#define public_6f25e93 _public_6f25e93
#define public_6f25eb3 _public_6f25eb3
#define public_6f25edb _public_6f25edb
#define public_6f25eef _public_6f25eef
#define public_6f25f07 _public_6f25f07
#define public_6f25f1a _public_6f25f1a

PROC_DECLARE(0x6f25260, internal_6f25260, public_6f25260);
extern "C" NAKED register_t __cdecl internal_6f25260()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6fae418 @0x6f25268*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fae418
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x34
        push ebp
/*FIXUP push offset public_6fb572c @0x6f25279*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb572c
        call dword ptr ds : [public_6fb3000]
        mov ecx, dword ptr ss : [esp+0x54]
        mov ebp, dword ptr ss : [esp+0x4C]
        mov dword ptr ds : [ecx], eax
        add esp, 4
        mov ecx, ebp
        call dword ptr ds : [public_6fb3018]
        test al, al
        je public_6f25f1a
        push ebx
        mov ebx, dword ptr ss : [esp+0x50]
        push esi
        push edi
        public_6f252a8 : nop
        mov esi, dword ptr ds : [public_6fb3014]
/*FIXUP push offset public_6fb445c @0x6f252ae*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb445c
        mov ecx, ebp
        call esi
        test al, al
        mov ecx, ebp
        je public_6f252d8
        call dword ptr ds : [public_6fb3054]
        push eax
        call dword ptr ds : [public_6fb3000]
        mov edx, dword ptr ss : [esp+0x60]
        add esp, 4
        mov dword ptr ds : [edx], eax
        jmp public_6f25f07
/*FIXUP public_6f252d8 : nop
        push offset public_6fb45ac @0x6f252d8*/
  FIXUP public_6f252d8 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb45ac
        call esi
        test al, al
        jne public_6f25f07
/*FIXUP push offset public_6fb91c4 @0x6f252e7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb91c4
        mov ecx, ebp
        call esi
        test al, al
        je public_6f25366
        xor esi, esi
        mov dword ptr ss : [esp+0x54], esi
        lea ecx, ss:[esp+0x54]
        mov dword ptr ss : [esp+0x4C], esi
        call public_6f28e10
        lea eax, ss:[esp+0x54]
        push eax
        push esi
        call public_6f24870
        mov esi, dword ptr ss : [esp+0x5C]
        add esp, 8
        mov ecx, ebp
        call dword ptr ds : [public_6fb3154]
        lea ecx, ds:[esi+8]
        push eax
        call public_6f0dfa0
        mov ecx, dword ptr ss : [esp+0x54]
        mov edx, dword ptr ds : [ecx]
        push ebp
        call dword ptr ds : [edx+0x10]
        mov eax, dword ptr ss : [esp+0x54]
        lea ecx, ss:[esp+0x58]
        push ecx
        mov ecx, ebx
        mov dword ptr ss : [esp+0x5C], eax
        call public_6ecfc30
        mov ecx, dword ptr ss : [esp+0x58]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx]
        lea ecx, ss:[esp+0x54]
        mov dword ptr ss : [esp+0x4C], 0xFFFFFFFF
        call public_6f28e10
        jmp public_6f25f07
/*FIXUP public_6f25366 : nop
        push offset public_6fb91b4 @0x6f25366*/
  FIXUP public_6f25366 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb91b4
        mov ecx, ebp
        call esi
        test al, al
        je public_6f253ec
        mov dword ptr ss : [esp+0x54], 0
        lea ecx, ss:[esp+0x54]
        mov dword ptr ss : [esp+0x4C], 1
        call public_6f28e10
        lea eax, ss:[esp+0x54]
        push eax
        push 0x11
        call public_6f24870
        mov esi, dword ptr ss : [esp+0x5C]
        add esp, 8
        mov ecx, ebp
        call dword ptr ds : [public_6fb3154]
        lea ecx, ds:[esi+8]
        push eax
        call public_6f0dfa0
        mov ecx, dword ptr ss : [esp+0x54]
        mov edx, dword ptr ds : [ecx]
        push ebp
        call dword ptr ds : [edx+0x10]
        mov eax, dword ptr ss : [esp+0x54]
        lea ecx, ss:[esp+0x58]
        push ecx
        mov ecx, ebx
        mov dword ptr ss : [esp+0x5C], eax
        call public_6ecfc30
        mov ecx, dword ptr ss : [esp+0x58]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx]
        lea ecx, ss:[esp+0x54]
        mov dword ptr ss : [esp+0x4C], 0xFFFFFFFF
        call public_6f28e10
        jmp public_6f25f07
/*FIXUP public_6f253ec : nop
        push offset public_6fb91a4 @0x6f253ec*/
  FIXUP public_6f253ec : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb91a4
        mov ecx, ebp
        call esi
        test al, al
        je public_6f25472
        mov dword ptr ss : [esp+0x54], 0
        lea ecx, ss:[esp+0x54]
        mov dword ptr ss : [esp+0x4C], 2
        call public_6f28e10
        lea eax, ss:[esp+0x54]
        push eax
        push 0x12
        call public_6f24870
        mov esi, dword ptr ss : [esp+0x5C]
        add esp, 8
        mov ecx, ebp
        call dword ptr ds : [public_6fb3154]
        lea ecx, ds:[esi+8]
        push eax
        call public_6f0dfa0
        mov ecx, dword ptr ss : [esp+0x54]
        mov edx, dword ptr ds : [ecx]
        push ebp
        call dword ptr ds : [edx+0x10]
        mov eax, dword ptr ss : [esp+0x54]
        lea ecx, ss:[esp+0x58]
        push ecx
        mov ecx, ebx
        mov dword ptr ss : [esp+0x5C], eax
        call public_6ecfc30
        mov ecx, dword ptr ss : [esp+0x58]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx]
        lea ecx, ss:[esp+0x54]
        mov dword ptr ss : [esp+0x4C], 0xFFFFFFFF
        call public_6f28e10
        jmp public_6f25f07
/*FIXUP public_6f25472 : nop
        push offset public_6fb919c @0x6f25472*/
  FIXUP public_6f25472 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb919c
        mov ecx, ebp
        call esi
        test al, al
        je public_6f254f8
        mov dword ptr ss : [esp+0x54], 0
        lea ecx, ss:[esp+0x54]
        mov dword ptr ss : [esp+0x4C], 3
        call public_6f28e10
        lea eax, ss:[esp+0x54]
        push eax
        push 1
        call public_6f24870
        mov esi, dword ptr ss : [esp+0x5C]
        add esp, 8
        mov ecx, ebp
        call dword ptr ds : [public_6fb3154]
        lea ecx, ds:[esi+8]
        push eax
        call public_6f0dfa0
        mov ecx, dword ptr ss : [esp+0x54]
        mov edx, dword ptr ds : [ecx]
        push ebp
        call dword ptr ds : [edx+0x10]
        mov eax, dword ptr ss : [esp+0x54]
        lea ecx, ss:[esp+0x58]
        push ecx
        mov ecx, ebx
        mov dword ptr ss : [esp+0x5C], eax
        call public_6ecfc30
        mov ecx, dword ptr ss : [esp+0x58]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx]
        lea ecx, ss:[esp+0x54]
        mov dword ptr ss : [esp+0x4C], 0xFFFFFFFF
        call public_6f28e10
        jmp public_6f25f07
/*FIXUP public_6f254f8 : nop
        push offset public_6fb9194 @0x6f254f8*/
  FIXUP public_6f254f8 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb9194
        mov ecx, ebp
        call esi
        test al, al
        je public_6f2557e
        mov dword ptr ss : [esp+0x54], 0
        lea ecx, ss:[esp+0x54]
        mov dword ptr ss : [esp+0x4C], 4
        call public_6f28e10
        lea eax, ss:[esp+0x54]
        push eax
        push 2
        call public_6f24870
        mov esi, dword ptr ss : [esp+0x5C]
        add esp, 8
        mov ecx, ebp
        call dword ptr ds : [public_6fb3154]
        lea ecx, ds:[esi+8]
        push eax
        call public_6f0dfa0
        mov ecx, dword ptr ss : [esp+0x54]
        mov edx, dword ptr ds : [ecx]
        push ebp
        call dword ptr ds : [edx+0x10]
        mov eax, dword ptr ss : [esp+0x54]
        lea ecx, ss:[esp+0x58]
        push ecx
        mov ecx, ebx
        mov dword ptr ss : [esp+0x5C], eax
        call public_6ecfc30
        mov ecx, dword ptr ss : [esp+0x58]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx]
        lea ecx, ss:[esp+0x54]
        mov dword ptr ss : [esp+0x4C], 0xFFFFFFFF
        call public_6f28e10
        jmp public_6f25f07
/*FIXUP public_6f2557e : nop
        push offset public_6fb918c @0x6f2557e*/
  FIXUP public_6f2557e : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb918c
        mov ecx, ebp
        call esi
        test al, al
        je public_6f25604
        mov dword ptr ss : [esp+0x54], 0
        lea ecx, ss:[esp+0x54]
        mov dword ptr ss : [esp+0x4C], 5
        call public_6f28e10
        lea eax, ss:[esp+0x54]
        push eax
        push 0x13
        call public_6f24870
        mov esi, dword ptr ss : [esp+0x5C]
        add esp, 8
        mov ecx, ebp
        call dword ptr ds : [public_6fb3154]
        lea ecx, ds:[esi+8]
        push eax
        call public_6f0dfa0
        mov ecx, dword ptr ss : [esp+0x54]
        mov edx, dword ptr ds : [ecx]
        push ebp
        call dword ptr ds : [edx+0x10]
        mov eax, dword ptr ss : [esp+0x54]
        lea ecx, ss:[esp+0x58]
        push ecx
        mov ecx, ebx
        mov dword ptr ss : [esp+0x5C], eax
        call public_6ecfc30
        mov ecx, dword ptr ss : [esp+0x58]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx]
        lea ecx, ss:[esp+0x54]
        mov dword ptr ss : [esp+0x4C], 0xFFFFFFFF
        call public_6f28e10
        jmp public_6f25f07
/*FIXUP public_6f25604 : nop
        push offset public_6fb9178 @0x6f25604*/
  FIXUP public_6f25604 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb9178
        mov ecx, ebp
        call esi
        test al, al
        je public_6f2568a
        mov dword ptr ss : [esp+0x54], 0
        lea ecx, ss:[esp+0x54]
        mov dword ptr ss : [esp+0x4C], 6
        call public_6f28e10
        lea eax, ss:[esp+0x54]
        push eax
        push 0x14
        call public_6f24870
        mov esi, dword ptr ss : [esp+0x5C]
        add esp, 8
        mov ecx, ebp
        call dword ptr ds : [public_6fb3154]
        lea ecx, ds:[esi+8]
        push eax
        call public_6f0dfa0
        mov ecx, dword ptr ss : [esp+0x54]
        mov edx, dword ptr ds : [ecx]
        push ebp
        call dword ptr ds : [edx+0x10]
        mov eax, dword ptr ss : [esp+0x54]
        lea ecx, ss:[esp+0x58]
        push ecx
        mov ecx, ebx
        mov dword ptr ss : [esp+0x5C], eax
        call public_6ecfc30
        mov ecx, dword ptr ss : [esp+0x58]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx]
        lea ecx, ss:[esp+0x54]
        mov dword ptr ss : [esp+0x4C], 0xFFFFFFFF
        call public_6f28e10
        jmp public_6f25f07
/*FIXUP public_6f2568a : nop
        push offset public_6fb9170 @0x6f2568a*/
  FIXUP public_6f2568a : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb9170
        mov ecx, ebp
        call esi
        test al, al
        je public_6f25710
        mov dword ptr ss : [esp+0x54], 0
        lea ecx, ss:[esp+0x54]
        mov dword ptr ss : [esp+0x4C], 7
        call public_6f28e10
        lea eax, ss:[esp+0x54]
        push eax
        push 7
        call public_6f24870
        mov esi, dword ptr ss : [esp+0x5C]
        add esp, 8
        mov ecx, ebp
        call dword ptr ds : [public_6fb3154]
        lea ecx, ds:[esi+8]
        push eax
        call public_6f0dfa0
        mov ecx, dword ptr ss : [esp+0x54]
        mov edx, dword ptr ds : [ecx]
        push ebp
        call dword ptr ds : [edx+0x10]
        mov eax, dword ptr ss : [esp+0x54]
        lea ecx, ss:[esp+0x58]
        push ecx
        mov ecx, ebx
        mov dword ptr ss : [esp+0x5C], eax
        call public_6ecfc30
        mov ecx, dword ptr ss : [esp+0x58]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx]
        lea ecx, ss:[esp+0x54]
        mov dword ptr ss : [esp+0x4C], 0xFFFFFFFF
        call public_6f28e10
        jmp public_6f25f07
/*FIXUP public_6f25710 : nop
        push offset public_6fb9168 @0x6f25710*/
  FIXUP public_6f25710 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb9168
        mov ecx, ebp
        call esi
        test al, al
        je public_6f257a3
        mov dword ptr ss : [esp+0x54], 0
        lea ecx, ss:[esp+0x54]
        mov dword ptr ss : [esp+0x4C], 8
        call public_6f28e10
        lea eax, ss:[esp+0x54]
        push eax
        push 8
        call public_6f24870
        mov esi, dword ptr ss : [esp+0x5C]
        add esp, 8
        mov ecx, ebp
        call dword ptr ds : [public_6fb3154]
        lea ecx, ds:[esi+8]
        push eax
        call public_6f0dfa0
        mov ecx, dword ptr ss : [esp+0x54]
        mov edx, dword ptr ds : [ecx]
        push ebp
        call dword ptr ds : [edx+0x10]
        mov eax, dword ptr ss : [esp+0x54]
        lea ecx, ss:[esp+0x58]
        push ecx
        mov dword ptr ss : [esp+0x5C], eax
        mov eax, dword ptr ds : [ebx+4]
        push eax
        lea edx, ss:[esp+0x18]
        push edx
        mov ecx, ebx
        call public_6f1e390
        mov ecx, dword ptr ss : [esp+0x58]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax]
        lea ecx, ss:[esp+0x54]
        mov dword ptr ss : [esp+0x4C], 0xFFFFFFFF
        call public_6f28e10
        jmp public_6f25f07
/*FIXUP public_6f257a3 : nop
        push offset public_6fb915c @0x6f257a3*/
  FIXUP public_6f257a3 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb915c
        mov ecx, ebp
        call esi
        test al, al
        je public_6f25836
        mov dword ptr ss : [esp+0x54], 0
        lea ecx, ss:[esp+0x54]
        mov dword ptr ss : [esp+0x4C], 9
        call public_6f28e10
        lea ecx, ss:[esp+0x54]
        push ecx
        push 9
        call public_6f24870
        mov esi, dword ptr ss : [esp+0x5C]
        add esp, 8
        mov ecx, ebp
        call dword ptr ds : [public_6fb3154]
        lea ecx, ds:[esi+8]
        push eax
        call public_6f0dfa0
        mov ecx, dword ptr ss : [esp+0x54]
        mov edx, dword ptr ds : [ecx]
        push ebp
        call dword ptr ds : [edx+0x10]
        mov eax, dword ptr ss : [esp+0x54]
        lea ecx, ss:[esp+0x58]
        push ecx
        mov dword ptr ss : [esp+0x5C], eax
        mov eax, dword ptr ds : [ebx+4]
        push eax
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, ebx
        call public_6f1e390
        mov ecx, dword ptr ss : [esp+0x58]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax]
        lea ecx, ss:[esp+0x54]
        mov dword ptr ss : [esp+0x4C], 0xFFFFFFFF
        call public_6f28e10
        jmp public_6f25f07
/*FIXUP public_6f25836 : nop
        push offset public_6fb9150 @0x6f25836*/
  FIXUP public_6f25836 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb9150
        mov ecx, ebp
        call esi
        test al, al
        je public_6f258d1
        mov dword ptr ss : [esp+0x54], 0
        lea ecx, ss:[esp+0x54]
        mov dword ptr ss : [esp+0x4C], 0xA
        call public_6f28e10
        lea ecx, ss:[esp+0x54]
        push ecx
        push 3
        call public_6f24870
        mov esi, dword ptr ss : [esp+0x5C]
        add esp, 8
        mov ecx, ebp
        call dword ptr ds : [public_6fb3154]
        lea ecx, ds:[esi+8]
        push eax
        call public_6f0dfa0
        mov ecx, dword ptr ss : [esp+0x54]
        mov edx, dword ptr ds : [ecx]
        push ebp
        call dword ptr ds : [edx+0x10]
        mov eax, dword ptr ss : [esp+0x54]
        lea ecx, ss:[esp+0x58]
        push ecx
        mov dword ptr ss : [esp+0x5C], eax
        mov eax, dword ptr ds : [ebx+4]
        push eax
        lea edx, ss:[esp+0x20]
        push edx
        mov ecx, ebx
        call public_6f1e390
        mov ecx, dword ptr ss : [esp+0x58]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax]
        mov ecx, dword ptr ss : [esp+0x54]
        test ecx, ecx
        mov dword ptr ss : [esp+0x4C], 0xFFFFFFFF
        je public_6f25f07
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+4]
        jmp public_6f25f07
/*FIXUP public_6f258d1 : nop
        push offset public_6fb9144 @0x6f258d1*/
  FIXUP public_6f258d1 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb9144
        mov ecx, ebp
        call esi
        test al, al
        je public_6f2594f
        mov dword ptr ss : [esp+0x54], 0
        lea eax, ss:[esp+0x54]
        push eax
        push 4
        mov dword ptr ss : [esp+0x54], 0xB
        call public_6f24870
        add esp, 8
        mov ecx, ebp
        call dword ptr ds : [public_6fb3154]
        mov esi, dword ptr ss : [esp+0x54]
        lea ecx, ds:[esi+8]
        push eax
        call public_6f0dfa0
        mov edx, dword ptr ds : [esi]
        push ebp
        mov ecx, esi
        call dword ptr ds : [edx+0x10]
        lea edx, ss:[esp+0x1C]
        public_6f2591e : nop
        mov eax, dword ptr ds : [ebx+4]
        lea ecx, ss:[esp+0x58]
        push ecx
        push eax
        push edx
        mov ecx, ebx
        mov dword ptr ss : [esp+0x64], esi
        call public_6f1e390
        public_6f25933 : nop
        mov ecx, dword ptr ss : [esp+0x58]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax]
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        mov dword ptr ss : [esp+0x4C], 0xFFFFFFFF
        call dword ptr ds : [edx+4]
        jmp public_6f25f07
/*FIXUP public_6f2594f : nop
        push offset public_6fb913c @0x6f2594f*/
  FIXUP public_6f2594f : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb913c
        mov ecx, ebp
        call esi
        test al, al
        je public_6f2599e
        mov dword ptr ss : [esp+0x54], 0
        lea eax, ss:[esp+0x54]
        push eax
        push 5
        mov dword ptr ss : [esp+0x54], 0xC
        call public_6f24870
        add esp, 8
        mov ecx, ebp
        call dword ptr ds : [public_6fb3154]
        mov esi, dword ptr ss : [esp+0x54]
        lea ecx, ds:[esi+8]
        push eax
        call public_6f0dfa0
        mov edx, dword ptr ds : [esi]
        push ebp
        mov ecx, esi
        call dword ptr ds : [edx+0x10]
        lea edx, ss:[esp+0x20]
        jmp public_6f2591e
/*FIXUP public_6f2599e : nop
        push offset public_6fb9134 @0x6f2599e*/
  FIXUP public_6f2599e : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb9134
        mov ecx, ebp
        call esi
        test al, al
        je public_6f25a16
        xor edi, edi
        mov dword ptr ss : [esp+0x54], edi
        lea eax, ss:[esp+0x54]
        push eax
        push 0xA
        mov dword ptr ss : [esp+0x54], 0xD
        call public_6f24870
        add esp, 8
        mov ecx, ebp
        call dword ptr ds : [public_6fb3154]
        cmp eax, edi
        mov esi, dword ptr ss : [esp+0x54]
        jne public_6f259f0
        mov dword ptr ds : [esi+8], edi
        mov byte ptr ds : [esi+0xC], 0
        mov edx, dword ptr ds : [esi]
        push ebp
        mov ecx, esi
        call dword ptr ds : [edx+0x10]
        lea edx, ss:[esp+0x24]
        jmp public_6f2591e
        public_6f259f0 : nop
        push eax
        lea ecx, ds:[esi+0xC]
        push 0x100
        push ecx
        call public_6ea9f40
        add esp, 0xC
        mov dword ptr ds : [esi+8], eax
        mov edx, dword ptr ds : [esi]
        push ebp
        mov ecx, esi
        call dword ptr ds : [edx+0x10]
        lea edx, ss:[esp+0x24]
        jmp public_6f2591e
/*FIXUP public_6f25a16 : nop
        push offset public_6fb912c @0x6f25a16*/
  FIXUP public_6f25a16 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb912c
        mov ecx, ebp
        call esi
        test al, al
        je public_6f25a8e
        xor edi, edi
        mov dword ptr ss : [esp+0x54], edi
        lea eax, ss:[esp+0x54]
        push eax
        push 0x15
        mov dword ptr ss : [esp+0x54], 0xE
        call public_6f24870
        add esp, 8
        mov ecx, ebp
        call dword ptr ds : [public_6fb3154]
        cmp eax, edi
        mov esi, dword ptr ss : [esp+0x54]
        jne public_6f25a68
        mov dword ptr ds : [esi+8], edi
        mov byte ptr ds : [esi+0xC], 0
        mov edx, dword ptr ds : [esi]
        push ebp
        mov ecx, esi
        call dword ptr ds : [edx+0x10]
        lea edx, ss:[esp+0x28]
        jmp public_6f2591e
        public_6f25a68 : nop
        push eax
        lea ecx, ds:[esi+0xC]
        push 0x100
        push ecx
        call public_6ea9f40
        add esp, 0xC
        mov dword ptr ds : [esi+8], eax
        mov edx, dword ptr ds : [esi]
        push ebp
        mov ecx, esi
        call dword ptr ds : [edx+0x10]
        lea edx, ss:[esp+0x28]
        jmp public_6f2591e
/*FIXUP public_6f25a8e : nop
        push offset public_6fb9118 @0x6f25a8e*/
  FIXUP public_6f25a8e : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb9118
        mov ecx, ebp
        call esi
        test al, al
        je public_6f25b06
        xor edi, edi
        mov dword ptr ss : [esp+0x54], edi
        lea eax, ss:[esp+0x54]
        push eax
        push 0xF
        mov dword ptr ss : [esp+0x54], 0xF
        call public_6f24870
        add esp, 8
        mov ecx, ebp
        call dword ptr ds : [public_6fb3154]
        cmp eax, edi
        mov esi, dword ptr ss : [esp+0x54]
        jne public_6f25ae0
        mov dword ptr ds : [esi+8], edi
        mov byte ptr ds : [esi+0xC], 0
        mov edx, dword ptr ds : [esi]
        push ebp
        mov ecx, esi
        call dword ptr ds : [edx+0x10]
        lea edx, ss:[esp+0x2C]
        jmp public_6f2591e
        public_6f25ae0 : nop
        push eax
        lea ecx, ds:[esi+0xC]
        push 0x100
        push ecx
        call public_6ea9f40
        add esp, 0xC
        mov dword ptr ds : [esi+8], eax
        mov edx, dword ptr ds : [esi]
        push ebp
        mov ecx, esi
        call dword ptr ds : [edx+0x10]
        lea edx, ss:[esp+0x2C]
        jmp public_6f2591e
/*FIXUP public_6f25b06 : nop
        push offset public_6fb9108 @0x6f25b06*/
  FIXUP public_6f25b06 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb9108
        mov ecx, ebp
        call esi
        test al, al
        je public_6f25b7e
        xor edi, edi
        mov dword ptr ss : [esp+0x54], edi
        lea eax, ss:[esp+0x54]
        push eax
        push 0x10
        mov dword ptr ss : [esp+0x54], 0x10
        call public_6f24870
        add esp, 8
        mov ecx, ebp
        call dword ptr ds : [public_6fb3154]
        cmp eax, edi
        mov esi, dword ptr ss : [esp+0x54]
        jne public_6f25b58
        mov dword ptr ds : [esi+8], edi
        mov byte ptr ds : [esi+0xC], 0
        mov edx, dword ptr ds : [esi]
        push ebp
        mov ecx, esi
        call dword ptr ds : [edx+0x10]
        lea edx, ss:[esp+0x30]
        jmp public_6f2591e
        public_6f25b58 : nop
        push eax
        lea ecx, ds:[esi+0xC]
        push 0x100
        push ecx
        call public_6ea9f40
        add esp, 0xC
        mov dword ptr ds : [esi+8], eax
        mov edx, dword ptr ds : [esi]
        push ebp
        mov ecx, esi
        call dword ptr ds : [edx+0x10]
        lea edx, ss:[esp+0x30]
        jmp public_6f2591e
/*FIXUP public_6f25b7e : nop
        push offset public_6fb90fc @0x6f25b7e*/
  FIXUP public_6f25b7e : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb90fc
        mov ecx, ebp
        call esi
        test al, al
        je public_6f25bf6
        xor edi, edi
        mov dword ptr ss : [esp+0x54], edi
        lea eax, ss:[esp+0x54]
        push eax
        push 0xC
        mov dword ptr ss : [esp+0x54], 0x11
        call public_6f24870
        add esp, 8
        mov ecx, ebp
        call dword ptr ds : [public_6fb3154]
        cmp eax, edi
        mov esi, dword ptr ss : [esp+0x54]
        jne public_6f25bd0
        mov dword ptr ds : [esi+8], edi
        mov byte ptr ds : [esi+0xC], 0
        mov edx, dword ptr ds : [esi]
        push ebp
        mov ecx, esi
        call dword ptr ds : [edx+0x10]
        lea edx, ss:[esp+0x34]
        jmp public_6f2591e
        public_6f25bd0 : nop
        push eax
        lea ecx, ds:[esi+0xC]
        push 0x100
        push ecx
        call public_6ea9f40
        add esp, 0xC
        mov dword ptr ds : [esi+8], eax
        mov edx, dword ptr ds : [esi]
        push ebp
        mov ecx, esi
        call dword ptr ds : [edx+0x10]
        lea edx, ss:[esp+0x34]
        jmp public_6f2591e
/*FIXUP public_6f25bf6 : nop
        push offset public_6fb90f0 @0x6f25bf6*/
  FIXUP public_6f25bf6 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb90f0
        mov ecx, ebp
        call esi
        test al, al
        je public_6f25c6e
        xor edi, edi
        mov dword ptr ss : [esp+0x54], edi
        lea eax, ss:[esp+0x54]
        push eax
        push 0xB
        mov dword ptr ss : [esp+0x54], 0x12
        call public_6f24870
        add esp, 8
        mov ecx, ebp
        call dword ptr ds : [public_6fb3154]
        cmp eax, edi
        mov esi, dword ptr ss : [esp+0x54]
        jne public_6f25c48
        mov dword ptr ds : [esi+8], edi
        mov byte ptr ds : [esi+0xC], 0
        mov edx, dword ptr ds : [esi]
        push ebp
        mov ecx, esi
        call dword ptr ds : [edx+0x10]
        lea edx, ss:[esp+0x38]
        jmp public_6f2591e
        public_6f25c48 : nop
        push eax
        lea ecx, ds:[esi+0xC]
        push 0x100
        push ecx
        call public_6ea9f40
        add esp, 0xC
        mov dword ptr ds : [esi+8], eax
        mov edx, dword ptr ds : [esi]
        push ebp
        mov ecx, esi
        call dword ptr ds : [edx+0x10]
        lea edx, ss:[esp+0x38]
        jmp public_6f2591e
/*FIXUP public_6f25c6e : nop
        push offset public_6fb90e4 @0x6f25c6e*/
  FIXUP public_6f25c6e : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb90e4
        mov ecx, ebp
        call esi
        test al, al
        je public_6f25ce6
        xor edi, edi
        mov dword ptr ss : [esp+0x54], edi
        lea eax, ss:[esp+0x54]
        push eax
        push 0xD
        mov dword ptr ss : [esp+0x54], 0x13
        call public_6f24870
        add esp, 8
        mov ecx, ebp
        call dword ptr ds : [public_6fb3154]
        cmp eax, edi
        mov esi, dword ptr ss : [esp+0x54]
        jne public_6f25cc0
        mov dword ptr ds : [esi+8], edi
        mov byte ptr ds : [esi+0xC], 0
        mov edx, dword ptr ds : [esi]
        push ebp
        mov ecx, esi
        call dword ptr ds : [edx+0x10]
        lea edx, ss:[esp+0x3C]
        jmp public_6f2591e
        public_6f25cc0 : nop
        push eax
        lea ecx, ds:[esi+0xC]
        push 0x100
        push ecx
        call public_6ea9f40
        add esp, 0xC
        mov dword ptr ds : [esi+8], eax
        mov edx, dword ptr ds : [esi]
        push ebp
        mov ecx, esi
        call dword ptr ds : [edx+0x10]
        lea edx, ss:[esp+0x3C]
        jmp public_6f2591e
/*FIXUP public_6f25ce6 : nop
        push offset public_6fb90d4 @0x6f25ce6*/
  FIXUP public_6f25ce6 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb90d4
        mov ecx, ebp
        call esi
        test al, al
        je public_6f25d5e
        xor edi, edi
        mov dword ptr ss : [esp+0x54], edi
        lea eax, ss:[esp+0x54]
        push eax
        push 0xE
        mov dword ptr ss : [esp+0x54], 0x14
        call public_6f24870
        add esp, 8
        mov ecx, ebp
        call dword ptr ds : [public_6fb3154]
        cmp eax, edi
        mov esi, dword ptr ss : [esp+0x54]
        jne public_6f25d38
        mov dword ptr ds : [esi+8], edi
        mov byte ptr ds : [esi+0xC], 0
        mov edx, dword ptr ds : [esi]
        push ebp
        mov ecx, esi
        call dword ptr ds : [edx+0x10]
        lea edx, ss:[esp+0x40]
        jmp public_6f2591e
        public_6f25d38 : nop
        push eax
        lea ecx, ds:[esi+0xC]
        push 0x100
        push ecx
        call public_6ea9f40
        add esp, 0xC
        mov dword ptr ds : [esi+8], eax
        mov edx, dword ptr ds : [esi]
        push ebp
        mov ecx, esi
        call dword ptr ds : [edx+0x10]
        lea edx, ss:[esp+0x40]
        jmp public_6f2591e
/*FIXUP public_6f25d5e : nop
        push offset public_6fb90cc @0x6f25d5e*/
  FIXUP public_6f25d5e : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb90cc
        mov ecx, ebp
        call esi
        test al, al
        je public_6f25e28
        xor edi, edi
        mov dword ptr ss : [esp+0x54], edi
        lea eax, ss:[esp+0x54]
        push eax
        push 6
        mov dword ptr ss : [esp+0x54], 0x15
        call public_6f24870
        add esp, 8
        mov ecx, ebp
        call dword ptr ds : [public_6fb3154]
        mov esi, eax
        cmp esi, edi
        jne public_6f25da7
        mov esi, dword ptr ss : [esp+0x54]
        mov dword ptr ds : [esi+8], edi
        mov byte ptr ds : [esi+0xC], 0
        jmp public_6f25de8
        public_6f25da7 : nop
        mov ecx, dword ptr ss : [esp+0x54]
        lea edx, ds:[ecx+0xC]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x100
        jb public_6f25dc8
        mov eax, 0xFF
        public_6f25dc8 : nop
        mov ecx, eax
        mov edi, edx
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [esp+0x54]
        mov byte ptr ds : [eax+ecx+0xC], 0
        mov dword ptr ds : [ecx+8], eax
        mov esi, ecx
        public_6f25de8 : nop
        mov eax, dword ptr ds : [esi]
        push ebp
        mov ecx, esi
        call dword ptr ds : [eax+0x10]
        mov edi, dword ptr ds : [ebx+4]
        mov dword ptr ss : [esp+0x58], esi
        mov ecx, dword ptr ds : [edi+4]
        push ecx
        push edi
        mov ecx, ebx
        call public_6f93790
        mov dword ptr ds : [edi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        lea edx, ss:[esp+0x58]
        mov dword ptr ds : [ecx], eax
        push edx
        add eax, 8
        push eax
        call public_6eb6740
        mov eax, dword ptr ds : [ebx+8]
        add esp, 8
        inc eax
        mov dword ptr ds : [ebx+8], eax
        jmp public_6f25933
/*FIXUP public_6f25e28 : nop
        push offset public_6fb90b4 @0x6f25e28*/
  FIXUP public_6f25e28 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb90b4
        mov ecx, ebp
        call esi
        test al, al
        je public_6f25f07
        mov dword ptr ss : [esp+0x54], 0
        lea eax, ss:[esp+0x54]
        push eax
        push 0x16
        mov dword ptr ss : [esp+0x54], 0x16
        call public_6f24870
        add esp, 8
        mov ecx, ebp
        call dword ptr ds : [public_6fb3154]
        mov esi, eax
        test esi, esi
        jne public_6f25e72
        mov edi, dword ptr ss : [esp+0x54]
        mov dword ptr ds : [edi+8], eax
        mov byte ptr ds : [edi+0xC], al
        jmp public_6f25eb3
        public_6f25e72 : nop
        mov ecx, dword ptr ss : [esp+0x54]
        lea edx, ds:[ecx+0xC]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x100
        jb public_6f25e93
        mov eax, 0xFF
        public_6f25e93 : nop
        mov ecx, eax
        mov edi, edx
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [esp+0x54]
        mov byte ptr ds : [eax+ecx+0xC], 0
        mov dword ptr ds : [ecx+8], eax
        mov edi, ecx
        public_6f25eb3 : nop
        mov eax, dword ptr ds : [edi]
        push ebp
        mov ecx, edi
        call dword ptr ds : [eax+0x10]
        mov esi, dword ptr ds : [ebx+4]
        mov ecx, dword ptr ds : [esi+4]
        push 0xC
        mov dword ptr ss : [esp+0x5C], ecx
        call public_6fa912a
        mov ecx, dword ptr ss : [esp+0x5C]
        add esp, 4
        test ecx, ecx
        mov dword ptr ds : [eax], esi
        jne public_6f25edb
        mov ecx, eax
        public_6f25edb : nop
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        je public_6f25eef
        mov dword ptr ds : [eax], edi
        public_6f25eef : nop
        inc dword ptr ds : [ebx+8]
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx]
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        mov dword ptr ss : [esp+0x4C], 0xFFFFFFFF
        call dword ptr ds : [eax+4]
        public_6f25f07 : nop
        mov ecx, ebp
        call dword ptr ds : [public_6fb3018]
        test al, al
        jne public_6f252a8
        pop edi
        pop esi
        pop ebx
        public_6f25f1a : nop
        mov ecx, dword ptr ss : [esp+0x38]
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x40
        ret 
        UNREACHABLE_TRAP(0x6f25260)
    }
}

#undef public_6f252a8
#undef public_6f252d8
#undef public_6f25366
#undef public_6f253ec
#undef public_6f25472
#undef public_6f254f8
#undef public_6f2557e
#undef public_6f25604
#undef public_6f2568a
#undef public_6f25710
#undef public_6f257a3
#undef public_6f25836
#undef public_6f258d1
#undef public_6f2591e
#undef public_6f25933
#undef public_6f2594f
#undef public_6f2599e
#undef public_6f259f0
#undef public_6f25a16
#undef public_6f25a68
#undef public_6f25a8e
#undef public_6f25ae0
#undef public_6f25b06
#undef public_6f25b58
#undef public_6f25b7e
#undef public_6f25bd0
#undef public_6f25bf6
#undef public_6f25c48
#undef public_6f25c6e
#undef public_6f25cc0
#undef public_6f25ce6
#undef public_6f25d38
#undef public_6f25d5e
#undef public_6f25da7
#undef public_6f25dc8
#undef public_6f25de8
#undef public_6f25e28
#undef public_6f25e72
#undef public_6f25e93
#undef public_6f25eb3
#undef public_6f25edb
#undef public_6f25eef
#undef public_6f25f07
#undef public_6f25f1a
