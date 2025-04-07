#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4206c0);
CLANG_FORWARD_PROC_SYMBOL(public_425680);
CLANG_FORWARD_PROC_SYMBOL(public_427020);
CLANG_FORWARD_PROC_SYMBOL(public_450870);
CLANG_FORWARD_PROC_SYMBOL(public_4fe1c0);
CLANG_FORWARD_PROC_SYMBOL(public_4fee30);
CLANG_FORWARD_PROC_SYMBOL(public_500a80);
CLANG_FORWARD_PROC_SYMBOL(public_500de0);
CLANG_FORWARD_PROC_SYMBOL(public_5012e0);
CLANG_FORWARD_PROC_SYMBOL(public_537260);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e90);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);
CLANG_FORWARD_JUMP_SYMBOL(public_5bf57d);

#define public_4fe230 _public_4fe230
#define public_4fe26f _public_4fe26f
#define public_4fe271 _public_4fe271
#define public_4fe2a0 _public_4fe2a0
#define public_4fe2cd _public_4fe2cd
#define public_4fe2ff _public_4fe2ff
#define public_4fe30d _public_4fe30d
#define public_4fe335 _public_4fe335
#define public_4fe358 _public_4fe358
#define public_4fe37e _public_4fe37e
#define public_4fe3a4 _public_4fe3a4
#define public_4fe3ca _public_4fe3ca
#define public_4fe3f0 _public_4fe3f0
#define public_4fe416 _public_4fe416
#define public_4fe43c _public_4fe43c
#define public_4fe462 _public_4fe462
#define public_4fe488 _public_4fe488
#define public_4fe4ae _public_4fe4ae
#define public_4fe4d4 _public_4fe4d4
#define public_4fe4fa _public_4fe4fa
#define public_4fe520 _public_4fe520
#define public_4fe5ac _public_4fe5ac
#define public_4fe632 _public_4fe632
#define public_4fe644 _public_4fe644
#define public_4fe6cc _public_4fe6cc
#define public_4fe6e9 _public_4fe6e9
#define public_4fe785 _public_4fe785
#define public_4fe80b _public_4fe80b
#define public_4fe82e _public_4fe82e
#define public_4fe84d _public_4fe84d
#define public_4fe86c _public_4fe86c
#define public_4fe88b _public_4fe88b
#define public_4fe8aa _public_4fe8aa
#define public_4fe8c9 _public_4fe8c9
#define public_4fe8e8 _public_4fe8e8
#define public_4fe907 _public_4fe907
#define public_4fe961 _public_4fe961
#define public_4fe97c _public_4fe97c
#define public_4fe98b _public_4fe98b
#define public_4fe9b0 _public_4fe9b0
#define public_4fe9c0 _public_4fe9c0
#define public_4fe9eb _public_4fe9eb
#define public_4fea00 _public_4fea00
#define public_4fea2a _public_4fea2a
#define public_4fea3e _public_4fea3e
#define public_4feab0 _public_4feab0
#define public_4feabd _public_4feabd
#define public_4feb02 _public_4feb02
#define public_4feb09 _public_4feb09
#define public_4feb46 _public_4feb46
#define public_4feb57 _public_4feb57
#define public_4feb6f _public_4feb6f
#define public_4feb99 _public_4feb99
#define public_4febb7 _public_4febb7
#define public_4febc0 _public_4febc0
#define public_4fec26 _public_4fec26
#define public_4fec30 _public_4fec30
#define public_4fec63 _public_4fec63
#define public_4fec66 _public_4fec66
#define public_4fec70 _public_4fec70
#define public_4fec9a _public_4fec9a
#define public_4fecbf _public_4fecbf
#define public_4fecc8 _public_4fecc8
#define public_4fecd7 _public_4fecd7
#define public_4fecdf _public_4fecdf
#define public_4fece3 _public_4fece3
#define public_4fed1a _public_4fed1a
#define public_4fed2f _public_4fed2f
#define public_4fed48 _public_4fed48
#define public_4fed6f _public_4fed6f
#define public_4feda6 _public_4feda6
#define public_4fedaf _public_4fedaf

PROC_DECLARE(0x4fe1c0, internal_4fe1c0, public_4fe1c0);
extern "C" NAKED register_t __cdecl internal_4fe1c0()
{
    __asm
    {
        push 0xFFFFFFFF
        mov eax, dword ptr fs : [0]
/*FIXUP push public_5bf57d @0x4fe1c8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bf57d
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, 0x15CC
        mov dword ptr fs : [0], esp
        call public_5b7e90
        push ebx
        push ebp
        push esi
        push edi
        lea ecx, ss:[esp+0x74]
        call dword ptr ds : [public_5c605c]
        mov eax, dword ptr ss : [esp+0x15EC]
        xor edi, edi
        push edi
        push eax
        lea ecx, ss:[esp+0x7C]
        mov dword ptr ss : [esp+0x15EC], edi
        call dword ptr ds : [public_5c6058]
        test al, al
        je public_4fea3e
        lea ecx, ss:[esp+0x74]
        mov dword ptr ss : [esp+0x10], edi
        call dword ptr ds : [public_5c6054]
        test al, al
        je public_4fea3e
        mov ebx, dword ptr ds : [public_5c6cf4]
        lea ecx, ds:[ecx]
        public_4fe230 : nop
        mov esi, dword ptr ds : [public_5c6050]
/*FIXUP push offset public_5da6dc @0x4fe236*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5da6dc
        lea ecx, ss:[esp+0x78]
        call esi
        test al, al
        je public_4fe6e9
        push 0x2B8
        call public_5b7e84
        add esp, 4
        mov dword ptr ss : [esp+0x14], eax
        test eax, eax
        mov byte ptr ss : [esp+0x15E4], 1
        je public_4fe26f
        mov ecx, eax
        call public_4fee30
        jmp public_4fe271
        public_4fe26f : nop
        xor eax, eax
        public_4fe271 : nop
        lea ecx, ss:[esp+0x74]
        mov byte ptr ss : [esp+0x15E4], 0
        mov dword ptr ss : [esp+0x10], eax
        call dword ptr ds : [public_5c669c]
        test al, al
        je public_4fe644
        mov edi, dword ptr ds : [public_5c6d00]
        mov ebp, dword ptr ds : [public_5c6698]
        nop 
        lea esp, ss:[esp]
/*FIXUP public_4fe2a0 : nop
        push offset public_5c866c @0x4fe2a0*/
  FIXUP public_4fe2a0 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c866c
        lea ecx, ss:[esp+0x78]
        call ebx
        test al, al
        lea ecx, ss:[esp+0x74]
        je public_4fe2cd
        call ebp
        mov ecx, dword ptr ss : [esp+0x10]
        push eax
        lea esi, ds:[ecx+4]
        call dword ptr ds : [public_5c6020]
        add esp, 4
        mov dword ptr ds : [esi], eax
        jmp public_4fe632
/*FIXUP public_4fe2cd : nop
        push offset public_5da6c8 @0x4fe2cd*/
  FIXUP public_4fe2cd : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5da6c8
        call ebx
        test al, al
        lea ecx, ss:[esp+0x74]
        je public_4fe30d
        push 0
        call dword ptr ds : [public_5c6cfc]
        fcomp qword ptr ds : [public_5c8ba8]
        fnstsw ax
        test ah, 0x44
        jnp public_4fe2ff
        mov edx, dword ptr ss : [esp+0x10]
        mov al, 1
        mov byte ptr ds : [edx+0x74], al
        jmp public_4fe632
        public_4fe2ff : nop
        mov edx, dword ptr ss : [esp+0x10]
        xor al, al
        mov byte ptr ds : [edx+0x74], al
        jmp public_4fe632
/*FIXUP public_4fe30d : nop
        push offset public_5da6ac @0x4fe30d*/
  FIXUP public_4fe30d : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5da6ac
        call ebx
        test al, al
        lea ecx, ss:[esp+0x74]
        je public_4fe335
        push 0
        call dword ptr ds : [public_5c6cfc]
        call public_5b7ec0
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx+0x78], eax
        jmp public_4fe632
/*FIXUP public_4fe335 : nop
        push offset public_5da6a4 @0x4fe335*/
  FIXUP public_4fe335 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5da6a4
        call ebx
        test al, al
        lea ecx, ss:[esp+0x74]
        je public_4fe358
        push 0
        call dword ptr ds : [public_5c6cfc]
        mov edx, dword ptr ss : [esp+0x10]
        fstp dword ptr ds : [edx+0x7C]
        jmp public_4fe632
/*FIXUP public_4fe358 : nop
        push offset public_5da69c @0x4fe358*/
  FIXUP public_4fe358 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5da69c
        call ebx
        test al, al
        lea ecx, ss:[esp+0x74]
        je public_4fe37e
        push 0
        call dword ptr ds : [public_5c6cfc]
        mov eax, dword ptr ss : [esp+0x10]
        fstp dword ptr ds : [eax+0x80]
        jmp public_4fe632
/*FIXUP public_4fe37e : nop
        push offset public_5da694 @0x4fe37e*/
  FIXUP public_4fe37e : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5da694
        call ebx
        test al, al
        lea ecx, ss:[esp+0x74]
        je public_4fe3a4
        push 0
        call dword ptr ds : [public_5c6cfc]
        mov ecx, dword ptr ss : [esp+0x10]
        fstp dword ptr ds : [ecx+0x84]
        jmp public_4fe632
/*FIXUP public_4fe3a4 : nop
        push offset public_5da688 @0x4fe3a4*/
  FIXUP public_4fe3a4 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5da688
        call ebx
        test al, al
        lea ecx, ss:[esp+0x74]
        je public_4fe3ca
        push 0
        call dword ptr ds : [public_5c6cfc]
        mov edx, dword ptr ss : [esp+0x10]
        fstp dword ptr ds : [edx+0x88]
        jmp public_4fe632
/*FIXUP public_4fe3ca : nop
        push offset public_5da67c @0x4fe3ca*/
  FIXUP public_4fe3ca : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5da67c
        call ebx
        test al, al
        lea ecx, ss:[esp+0x74]
        je public_4fe3f0
        push 0
        call dword ptr ds : [public_5c6cfc]
        mov eax, dword ptr ss : [esp+0x10]
        fstp dword ptr ds : [eax+0x8C]
        jmp public_4fe632
/*FIXUP public_4fe3f0 : nop
        push offset public_5da668 @0x4fe3f0*/
  FIXUP public_4fe3f0 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5da668
        call ebx
        test al, al
        lea ecx, ss:[esp+0x74]
        je public_4fe416
        push 0
        call dword ptr ds : [public_5c6cfc]
        mov ecx, dword ptr ss : [esp+0x10]
        fstp dword ptr ds : [ecx+0x90]
        jmp public_4fe632
/*FIXUP public_4fe416 : nop
        push offset public_5da65c @0x4fe416*/
  FIXUP public_4fe416 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5da65c
        call ebx
        test al, al
        lea ecx, ss:[esp+0x74]
        je public_4fe43c
        push 0
        call dword ptr ds : [public_5c6cfc]
        mov edx, dword ptr ss : [esp+0x10]
        fstp dword ptr ds : [edx+0x94]
        jmp public_4fe632
/*FIXUP public_4fe43c : nop
        push offset public_5da650 @0x4fe43c*/
  FIXUP public_4fe43c : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5da650
        call ebx
        test al, al
        lea ecx, ss:[esp+0x74]
        je public_4fe462
        push 0
        call dword ptr ds : [public_5c6cfc]
        mov eax, dword ptr ss : [esp+0x10]
        fstp dword ptr ds : [eax+0x98]
        jmp public_4fe632
/*FIXUP public_4fe462 : nop
        push offset public_5da63c @0x4fe462*/
  FIXUP public_4fe462 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5da63c
        call ebx
        test al, al
        lea ecx, ss:[esp+0x74]
        je public_4fe488
        push 0
        call dword ptr ds : [public_5c6cfc]
        mov ecx, dword ptr ss : [esp+0x10]
        fstp dword ptr ds : [ecx+0x9C]
        jmp public_4fe632
/*FIXUP public_4fe488 : nop
        push offset public_5da630 @0x4fe488*/
  FIXUP public_4fe488 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5da630
        call ebx
        test al, al
        lea ecx, ss:[esp+0x74]
        je public_4fe4ae
        push 0
        call dword ptr ds : [public_5c6cfc]
        mov edx, dword ptr ss : [esp+0x10]
        fstp dword ptr ds : [edx+0xA0]
        jmp public_4fe632
/*FIXUP public_4fe4ae : nop
        push offset public_5da624 @0x4fe4ae*/
  FIXUP public_4fe4ae : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5da624
        call ebx
        test al, al
        lea ecx, ss:[esp+0x74]
        je public_4fe4d4
        push 0
        call dword ptr ds : [public_5c6cfc]
        mov eax, dword ptr ss : [esp+0x10]
        fstp dword ptr ds : [eax+0xA4]
        jmp public_4fe632
/*FIXUP public_4fe4d4 : nop
        push offset public_5da614 @0x4fe4d4*/
  FIXUP public_4fe4d4 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5da614
        call ebx
        test al, al
        lea ecx, ss:[esp+0x74]
        je public_4fe4fa
        push 0
        call dword ptr ds : [public_5c6cfc]
        mov ecx, dword ptr ss : [esp+0x10]
        fstp dword ptr ds : [ecx+0xA8]
        jmp public_4fe632
/*FIXUP public_4fe4fa : nop
        push offset public_5da604 @0x4fe4fa*/
  FIXUP public_4fe4fa : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5da604
        call ebx
        test al, al
        lea ecx, ss:[esp+0x74]
        je public_4fe520
        push 0
        call dword ptr ds : [public_5c6cfc]
        mov edx, dword ptr ss : [esp+0x10]
        fstp dword ptr ds : [edx+0xAC]
        jmp public_4fe632
/*FIXUP public_4fe520 : nop
        push offset public_5da5fc @0x4fe520*/
  FIXUP public_4fe520 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5da5fc
        call ebx
        test al, al
        lea ecx, ss:[esp+0x74]
        je public_4fe5ac
        push 2
        call edi
        mov dword ptr ss : [esp+0x18], eax
        fild dword ptr ss : [esp+0x18]
        push 1
        lea ecx, ss:[esp+0x78]
        fmul dword ptr ds : [public_5c7f68]
        fstp dword ptr ss : [esp+0x18]
        call edi
        mov dword ptr ss : [esp+0x18], eax
        fild dword ptr ss : [esp+0x18]
        push 0
        lea ecx, ss:[esp+0x78]
        fmul dword ptr ds : [public_5c7f68]
        fstp dword ptr ss : [esp+0x24]
        call edi
        mov edx, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x18], eax
        fild dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x50], eax
        add edx, 0xB0
        fmul dword ptr ds : [public_5c7f68]
        mov dword ptr ss : [esp+0x54], ecx
        mov ecx, dword ptr ss : [esp+0x50]
        fstp dword ptr ss : [esp+0x4C]
        mov eax, dword ptr ss : [esp+0x4C]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ss : [esp+0x54]
        mov dword ptr ds : [edx+4], ecx
        mov dword ptr ds : [edx+8], eax
        jmp public_4fe632
/*FIXUP public_4fe5ac : nop
        push offset public_5da5f4 @0x4fe5ac*/
  FIXUP public_4fe5ac : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5da5f4
        call ebx
        test al, al
        je public_4fe632
        push 2
        lea ecx, ss:[esp+0x78]
        call edi
        mov dword ptr ss : [esp+0x14], eax
        fild dword ptr ss : [esp+0x14]
        push 1
        lea ecx, ss:[esp+0x78]
        fmul dword ptr ds : [public_5c7f68]
        fstp dword ptr ss : [esp+0x1C]
        call edi
        mov dword ptr ss : [esp+0x14], eax
        fild dword ptr ss : [esp+0x14]
        push 0
        lea ecx, ss:[esp+0x78]
        fmul dword ptr ds : [public_5c7f68]
        fstp dword ptr ss : [esp+0x24]
        call edi
        mov ecx, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x14], eax
        fild dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x44], ecx
        fmul dword ptr ds : [public_5c7f68]
        add eax, 0xBC
        mov dword ptr ss : [esp+0x48], edx
        mov edx, dword ptr ss : [esp+0x44]
        fstp dword ptr ss : [esp+0x40]
        mov ecx, dword ptr ss : [esp+0x40]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+0x48]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax+8], ecx
        public_4fe632 : nop
        lea ecx, ss:[esp+0x74]
        call dword ptr ds : [public_5c669c]
        test al, al
        jne public_4fe2a0
        public_4fe644 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [ecx+0x78]
        test eax, eax
        jle public_4fe6cc
        push 0
        call public_500a80
        mov eax, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [eax+0x8C]
        mov ecx, dword ptr ds : [eax+0x88]
        push 0
        push 0
        push edx
        mov edx, dword ptr ds : [eax+0x78]
        push ecx
        push edx
        lea ecx, ds:[eax+0x140]
        call public_5012e0
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax+0xAC]
        mov edx, dword ptr ds : [eax+0xA8]
        push 0
        push 3
        push ecx
        mov ecx, dword ptr ds : [eax+0x78]
        push edx
        push ecx
        lea ecx, ds:[eax+0x168]
        call public_5012e0
        mov ecx, dword ptr ss : [esp+0x10]
        push 0
        call public_500de0
        mov eax, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [eax+0x78]
        push 0
        push 0
        push 0x3F800000
        push 0x3F000000
        push edx
        lea ecx, ds:[eax+0x190]
        call public_5012e0
        public_4fe6cc : nop
        mov ecx, dword ptr ds : [public_674fa0]
        lea eax, ss:[esp+0x10]
        push eax
        push 1
        push ecx
        mov ecx, offset public_674f98
        call public_537260
        jmp public_4fea2a
/*FIXUP public_4fe6e9 : nop
        push offset public_5da5ec @0x4fe6e9*/
  FIXUP public_4fe6e9 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5da5ec
        lea ecx, ss:[esp+0x78]
        call esi
        test al, al
        je public_4fea2a
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax+8]
        cmp ecx, 2
        jge public_4fea00
        mov edx, ecx
        imul edx, 0x34
        lea esi, ds:[edx+eax+0xC]
        inc ecx
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ss : [esp+0x28], 0x3F000000
        mov ecx, dword ptr ss : [esp+0x28]
        lea eax, ds:[esi+8]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ss : [esp+0x2C], 0x3F000000
        mov edx, dword ptr ss : [esp+0x2C]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ss : [esp+0x30], 0x3F000000
        mov ecx, dword ptr ss : [esp+0x30]
        mov dword ptr ds : [eax+8], ecx
        mov ecx, 0x3F800000
        xor eax, eax
        mov dword ptr ds : [esi+0x14], ecx
        mov dword ptr ds : [esi+0x1C], ecx
        lea ecx, ss:[esp+0x74]
        mov dword ptr ds : [esi+0x18], eax
        mov dword ptr ds : [esi+0x20], eax
        mov dword ptr ds : [esi+0x24], eax
        mov dword ptr ds : [esi+0x28], 0x3DB851EC
        mov dword ptr ds : [esi+0x2C], 0x3D8F5C29
        mov dword ptr ds : [esi+0x30], 0x41200000
        call dword ptr ds : [public_5c669c]
        test al, al
        je public_4fea2a
/*FIXUP public_4fe785 : nop
        push offset public_5c7f6c @0x4fe785*/
  FIXUP public_4fe785 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c7f6c
        lea ecx, ss:[esp+0x78]
        call ebx
        test al, al
        je public_4fe80b
        mov edi, dword ptr ds : [public_5c6d00]
        push 2
        lea ecx, ss:[esp+0x78]
        call edi
        mov dword ptr ss : [esp+0x14], eax
        fild dword ptr ss : [esp+0x14]
        push 1
        lea ecx, ss:[esp+0x78]
        fmul dword ptr ds : [public_5c7f68]
        fstp dword ptr ss : [esp+0x1C]
        call edi
        mov dword ptr ss : [esp+0x14], eax
        fild dword ptr ss : [esp+0x14]
        push 0
        lea ecx, ss:[esp+0x78]
        fmul dword ptr ds : [public_5c7f68]
        fstp dword ptr ss : [esp+0x24]
        call edi
        mov edx, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x14], eax
        fild dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x3C], eax
        fmul dword ptr ds : [public_5c7f68]
        lea eax, ds:[esi+8]
        mov dword ptr ss : [esp+0x38], edx
        fstp dword ptr ss : [esp+0x34]
        mov ecx, dword ptr ss : [esp+0x34]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+0x3C]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax+8], ecx
/*FIXUP public_4fe80b : nop
        push offset public_5da5e0 @0x4fe80b*/
  FIXUP public_4fe80b : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5da5e0
        lea ecx, ss:[esp+0x78]
        call ebx
        test al, al
        lea ecx, ss:[esp+0x74]
        je public_4fe82e
        push 0
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ds : [esi+0x14]
        jmp public_4fe9eb
/*FIXUP public_4fe82e : nop
        push offset public_5da5d4 @0x4fe82e*/
  FIXUP public_4fe82e : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5da5d4
        call ebx
        test al, al
        lea ecx, ss:[esp+0x74]
        je public_4fe84d
        push 0
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ds : [esi+0x18]
        jmp public_4fe9eb
/*FIXUP public_4fe84d : nop
        push offset public_5da5c4 @0x4fe84d*/
  FIXUP public_4fe84d : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5da5c4
        call ebx
        test al, al
        lea ecx, ss:[esp+0x74]
        je public_4fe86c
        push 0
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ds : [esi+0x1C]
        jmp public_4fe9eb
/*FIXUP public_4fe86c : nop
        push offset public_5da5b8 @0x4fe86c*/
  FIXUP public_4fe86c : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5da5b8
        call ebx
        test al, al
        lea ecx, ss:[esp+0x74]
        je public_4fe88b
        push 0
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ds : [esi+0x20]
        jmp public_4fe9eb
/*FIXUP public_4fe88b : nop
        push offset public_5da5ac @0x4fe88b*/
  FIXUP public_4fe88b : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5da5ac
        call ebx
        test al, al
        lea ecx, ss:[esp+0x74]
        je public_4fe8aa
        push 0
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ds : [esi+0x24]
        jmp public_4fe9eb
/*FIXUP public_4fe8aa : nop
        push offset public_5da5a8 @0x4fe8aa*/
  FIXUP public_4fe8aa : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5da5a8
        call ebx
        test al, al
        lea ecx, ss:[esp+0x74]
        je public_4fe8c9
        push 0
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ds : [esi+0x28]
        jmp public_4fe9eb
/*FIXUP public_4fe8c9 : nop
        push offset public_5da5a4 @0x4fe8c9*/
  FIXUP public_4fe8c9 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5da5a4
        call ebx
        test al, al
        lea ecx, ss:[esp+0x74]
        je public_4fe8e8
        push 0
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ds : [esi+0x2C]
        jmp public_4fe9eb
/*FIXUP public_4fe8e8 : nop
        push offset public_5da59c @0x4fe8e8*/
  FIXUP public_4fe8e8 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5da59c
        call ebx
        test al, al
        lea ecx, ss:[esp+0x74]
        je public_4fe907
        push 0
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ds : [esi+0x30]
        jmp public_4fe9eb
/*FIXUP public_4fe907 : nop
        push offset public_5da594 @0x4fe907*/
  FIXUP public_4fe907 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5da594
        call ebx
        test al, al
        je public_4fe9eb
        lea ecx, ss:[esp+0x74]
        call dword ptr ds : [public_5c6698]
        mov ebp, eax
        xor edi, edi
        push ebp
        lea ecx, ss:[esp+0x5C]
        mov dword ptr ss : [esp+0x5C], edi
        mov byte ptr ss : [esp+0x60], 0
        call public_427020
        mov eax, dword ptr ds : [public_674f38]
        cmp dword ptr ds : [public_674f28], eax
        je public_4fe961
        lea edx, ss:[esp+0x5C]
        push edx
        add eax, 0x10
        push eax
        call dword ptr ds : [public_5c70bc]
        add esp, 8
        test eax, eax
        jne public_4fe961
        mov eax, dword ptr ds : [public_674f38]
        jmp public_4fe97c
        public_4fe961 : nop
        lea eax, ss:[esp+0x58]
        push eax
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, offset public_674f24
        call public_4206c0
        mov eax, dword ptr ds : [eax]
        mov dword ptr ds : [public_674f38], eax
        public_4fe97c : nop
        cmp eax, dword ptr ds : [public_674f28]
        je public_4fe98b
        lea edi, ds:[eax+0x28]
        test edi, edi
        jne public_4fe9b0
        public_4fe98b : nop
        mov edx, dword ptr ds : [public_5c6d18]
        push ebp
        push 0xF2
/*FIXUP push offset public_5da4a0 @0x4fe997*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5da4a0
        mov eax, 0x100002
/*FIXUP push offset public_5c958c @0x4fe9a1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c958c
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        test edi, edi
        je public_4fe9c0
        public_4fe9b0 : nop
        mov eax, dword ptr ds : [edi]
        push eax
        mov ecx, esi
        call public_425680
        jmp public_4fe9eb
        lea esp, ss:[esp]
        public_4fe9c0 : nop
        lea ecx, ss:[esp+0x74]
        mov edi, 0x100002
        call dword ptr ds : [public_5c6698]
        mov ecx, dword ptr ds : [public_5c6d18]
        push eax
        push 0xE3
/*FIXUP push offset public_5da560 @0x4fe9db*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5da560
/*FIXUP push offset public_5da518 @0x4fe9e0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5da518
        push edi
        call dword ptr ds : [ecx]
        add esp, 0x14
        public_4fe9eb : nop
        lea ecx, ss:[esp+0x74]
        call dword ptr ds : [public_5c669c]
        test al, al
        jne public_4fe785
        jmp public_4fea2a
        nop 
        public_4fea00 : nop
        lea ecx, ds:[eax+4]
        mov esi, 0x100002
        call dword ptr ds : [public_5c6044]
        mov edx, dword ptr ds : [public_5c6d18]
        push eax
        push 0xE9
/*FIXUP push offset public_5da560 @0x4fea1a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5da560
/*FIXUP push offset public_5da4d0 @0x4fea1f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5da4d0
        push esi
        call dword ptr ds : [edx]
        add esp, 0x14
        public_4fea2a : nop
        lea ecx, ss:[esp+0x74]
        call dword ptr ds : [public_5c6054]
        test al, al
        jne public_4fe230
        xor edi, edi
        public_4fea3e : nop
        lea eax, ss:[esp+0x149C]
        mov dword ptr ss : [esp+0x15E4], 2
        mov dword ptr ss : [esp+0x24], eax
        mov eax, dword ptr ss : [esp+0x14A0]
        cmp eax, edi
        mov ecx, dword ptr ds : [public_5c7080]
        mov ebp, dword ptr ds : [ecx]
        mov byte ptr ss : [esp+0x15E4], 3
        je public_4feab0
        mov cl, byte ptr ds : [eax-1]
        test cl, cl
        je public_4feab0
        cmp cl, 0xFF
        je public_4feab0
        push 1
        lea ecx, ss:[esp+0x14A0]
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
        lea ecx, ss:[esp+0x14A4]
        call dword ptr ds : [public_5c7088]
        mov eax, dword ptr ss : [esp+0x14A0]
        xor edi, edi
        public_4feab0 : nop
        mov ecx, dword ptr ss : [esp+0x14A4]
        cmp ecx, ebp
        jae public_4feabd
        mov ebp, ecx
        public_4feabd : nop
        cmp ebp, edi
        mov ebx, dword ptr ds : [public_5c709c]
        jbe public_4feb09
        sub ecx, ebp
        push ecx
        lea edx, ds:[eax+ebp]
        push edx
        push eax
        call ebx
        mov esi, dword ptr ss : [esp+0x14B0]
        add esp, 0xC
        push edi
        sub esi, ebp
        push esi
        lea ecx, ss:[esp+0x14A4]
        call dword ptr ds : [public_5c708c]
        test al, al
        je public_4feb02
        mov edx, dword ptr ss : [esp+0x14A0]
        mov dword ptr ss : [esp+0x14A4], esi
        mov byte ptr ds : [edx+esi], 0
        public_4feb02 : nop
        mov eax, dword ptr ss : [esp+0x14A0]
        public_4feb09 : nop
        mov ecx, dword ptr ss : [esp+0x14AC]
        mov esi, dword ptr ds : [public_5c6ef8]
        or ebp, 0xFFFFFFFF
        cmp ecx, ebp
        je public_4feb6f
        cmp dword ptr ss : [esp+0x14B0], edi
        je public_4feb57
        mov eax, dword ptr ss : [esp+0x14B4]
        cmp eax, edi
        je public_4feb46
        push eax
        call dword ptr ds : [public_5c6efc]
        mov dword ptr ss : [esp+0x14B4], edi
        mov dword ptr ss : [esp+0x14B8], edi
        public_4feb46 : nop
        mov eax, dword ptr ss : [esp+0x14B0]
        push eax
        call esi
        mov dword ptr ss : [esp+0x14B0], edi
        public_4feb57 : nop
        mov ecx, dword ptr ss : [esp+0x14AC]
        push ecx
        call esi
        mov eax, dword ptr ss : [esp+0x14A0]
        mov dword ptr ss : [esp+0x14AC], ebp
        public_4feb6f : nop
        mov ecx, dword ptr ss : [esp+0x14B4]
        cmp ecx, edi
        je public_4feb99
        push ecx
        call dword ptr ds : [public_5c71d8]
        mov eax, dword ptr ss : [esp+0x14A4]
        add esp, 4
        mov dword ptr ss : [esp+0x14B4], edi
        mov dword ptr ss : [esp+0x14B8], edi
        public_4feb99 : nop
        cmp eax, edi
        mov dword ptr ss : [esp+0x14BC], edi
        je public_4febc0
        mov cl, byte ptr ds : [eax-1]
        dec eax
        test cl, cl
        je public_4febb7
        cmp cl, 0xFF
        je public_4febb7
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_4febc0
        public_4febb7 : nop
        push eax
        call public_5b7e1d
        add esp, 4
        public_4febc0 : nop
        xor ebp, ebp
        mov dword ptr ss : [esp+0x14A0], ebp
        mov dword ptr ss : [esp+0x14A4], ebp
        mov dword ptr ss : [esp+0x14A8], ebp
        mov eax, dword ptr ss : [esp+0x78]
        cmp eax, ebp
        mov edx, dword ptr ds : [public_5c7080]
        mov edi, dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x15E4], 4
        je public_4fec26
        mov cl, byte ptr ds : [eax-1]
        test cl, cl
        je public_4fec26
        cmp cl, 0xFF
        je public_4fec26
        push 1
        lea ecx, ss:[esp+0x78]
        mov esi, eax
        call dword ptr ds : [public_5c7084]
        push esi
        call dword ptr ds : [public_5c6f94]
        add esp, 4
        push eax
        push esi
        lea ecx, ss:[esp+0x7C]
        call dword ptr ds : [public_5c7088]
        mov eax, dword ptr ss : [esp+0x78]
        public_4fec26 : nop
        mov ecx, dword ptr ss : [esp+0x7C]
        cmp ecx, edi
        jae public_4fec30
        mov edi, ecx
        public_4fec30 : nop
        cmp edi, ebp
        jbe public_4fece3
        sub ecx, edi
        push ecx
        lea ecx, ds:[eax+edi]
        push ecx
        push eax
        call ebx
        mov esi, dword ptr ss : [esp+0x88]
        add esp, 0xC
        lea ecx, ss:[esp+0x74]
        sub esi, edi
        call public_450870
        cmp eax, 2
        ja public_4fec63
        mov eax, 1
        jmp public_4fec66
        public_4fec63 : nop
        add eax, 0xFFFFFFFE
        public_4fec66 : nop
        cmp eax, esi
        jae public_4fec70
        call dword ptr ds : [public_5c7070]
        public_4fec70 : nop
        mov eax, dword ptr ss : [esp+0x78]
        cmp eax, ebp
        je public_4fec9a
        mov cl, byte ptr ds : [eax-1]
        test cl, cl
        je public_4fec9a
        cmp cl, 0xFF
        je public_4fec9a
        cmp esi, ebp
        jne public_4fecc8
        dec cl
        mov byte ptr ds : [eax-1], cl
        push ebp
        lea ecx, ss:[esp+0x78]
        call dword ptr ds : [public_5c7084]
        jmp public_4fecdf
        public_4fec9a : nop
        cmp esi, ebp
        jne public_4fecbf
        cmp eax, ebp
        je public_4fece3
        lea edx, ss:[esp+0x1F]
        push edx
        push eax
        mov byte ptr ss : [esp+0x27], 0
        mov dword ptr ss : [esp+0x84], ebp
        call dword ptr ds : [public_5c6fdc]
        add esp, 8
        jmp public_4fecdf
        public_4fecbf : nop
        cmp dword ptr ss : [esp+0x80], esi
        jae public_4fecd7
        public_4fecc8 : nop
        lea ecx, ss:[esp+0x74]
        push esi
        call dword ptr ds : [public_5c7074]
        mov eax, dword ptr ss : [esp+0x78]
        public_4fecd7 : nop
        mov dword ptr ss : [esp+0x7C], esi
        mov byte ptr ds : [eax+esi], 0
        public_4fecdf : nop
        mov eax, dword ptr ss : [esp+0x78]
        public_4fece3 : nop
        mov ecx, dword ptr ss : [esp+0x84]
        or esi, 0xFFFFFFFF
        cmp ecx, esi
        je public_4fed48
        cmp dword ptr ss : [esp+0x88], ebp
        je public_4fed2f
        mov eax, dword ptr ss : [esp+0x8C]
        cmp eax, ebp
        je public_4fed1a
        push eax
        call dword ptr ds : [public_5c6efc]
        mov dword ptr ss : [esp+0x8C], ebp
        mov dword ptr ss : [esp+0x90], ebp
        public_4fed1a : nop
        mov eax, dword ptr ss : [esp+0x88]
        push eax
        call dword ptr ds : [public_5c6ef8]
        mov dword ptr ss : [esp+0x88], ebp
        public_4fed2f : nop
        mov ecx, dword ptr ss : [esp+0x84]
        push ecx
        call dword ptr ds : [public_5c6ef8]
        mov eax, dword ptr ss : [esp+0x78]
        mov dword ptr ss : [esp+0x84], esi
        public_4fed48 : nop
        mov ecx, dword ptr ss : [esp+0x8C]
        cmp ecx, ebp
        je public_4fed6f
        push ecx
        call dword ptr ds : [public_5c71d8]
        mov eax, dword ptr ss : [esp+0x7C]
        add esp, 4
        mov dword ptr ss : [esp+0x8C], ebp
        mov dword ptr ss : [esp+0x90], ebp
        public_4fed6f : nop
        pop edi
        pop esi
        mov dword ptr ss : [esp+0x8C], ebp
        cmp eax, ebp
        pop ebp
        pop ebx
        je public_4fedaf
        mov cl, byte ptr ds : [eax-1]
        dec eax
        test cl, cl
        je public_4feda6
        cmp cl, 0xFF
        je public_4feda6
        dec cl
        mov byte ptr ds : [eax], cl
        xor eax, eax
        mov ecx, dword ptr ss : [esp+0x15CC]
        mov dword ptr fs : [0], ecx
        add esp, 0x15D8
        ret 
        public_4feda6 : nop
        push eax
        call public_5b7e1d
        add esp, 4
        public_4fedaf : nop
        mov ecx, dword ptr ss : [esp+0x15CC]
        xor eax, eax
        mov dword ptr fs : [0], ecx
        add esp, 0x15D8
        ret 
        UNREACHABLE_TRAP(0x4fe1c0)
    }
}

#undef public_4fe230
#undef public_4fe26f
#undef public_4fe271
#undef public_4fe2a0
#undef public_4fe2cd
#undef public_4fe2ff
#undef public_4fe30d
#undef public_4fe335
#undef public_4fe358
#undef public_4fe37e
#undef public_4fe3a4
#undef public_4fe3ca
#undef public_4fe3f0
#undef public_4fe416
#undef public_4fe43c
#undef public_4fe462
#undef public_4fe488
#undef public_4fe4ae
#undef public_4fe4d4
#undef public_4fe4fa
#undef public_4fe520
#undef public_4fe5ac
#undef public_4fe632
#undef public_4fe644
#undef public_4fe6cc
#undef public_4fe6e9
#undef public_4fe785
#undef public_4fe80b
#undef public_4fe82e
#undef public_4fe84d
#undef public_4fe86c
#undef public_4fe88b
#undef public_4fe8aa
#undef public_4fe8c9
#undef public_4fe8e8
#undef public_4fe907
#undef public_4fe961
#undef public_4fe97c
#undef public_4fe98b
#undef public_4fe9b0
#undef public_4fe9c0
#undef public_4fe9eb
#undef public_4fea00
#undef public_4fea2a
#undef public_4fea3e
#undef public_4feab0
#undef public_4feabd
#undef public_4feb02
#undef public_4feb09
#undef public_4feb46
#undef public_4feb57
#undef public_4feb6f
#undef public_4feb99
#undef public_4febb7
#undef public_4febc0
#undef public_4fec26
#undef public_4fec30
#undef public_4fec63
#undef public_4fec66
#undef public_4fec70
#undef public_4fec9a
#undef public_4fecbf
#undef public_4fecc8
#undef public_4fecd7
#undef public_4fecdf
#undef public_4fece3
#undef public_4fed1a
#undef public_4fed2f
#undef public_4fed48
#undef public_4fed6f
#undef public_4feda6
#undef public_4fedaf
