#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6eac680);
CLANG_FORWARD_PROC_SYMBOL(public_6ecfe80);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0160);
CLANG_FORWARD_PROC_SYMBOL(public_6ed2a00);
CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef4ab0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef6680);
CLANG_FORWARD_PROC_SYMBOL(public_6ef6b80);
CLANG_FORWARD_PROC_SYMBOL(public_6efc860);
CLANG_FORWARD_PROC_SYMBOL(public_6f06200);
CLANG_FORWARD_PROC_SYMBOL(public_6f15350);
CLANG_FORWARD_PROC_SYMBOL(public_6f1df30);
CLANG_FORWARD_PROC_SYMBOL(public_6f1e390);
CLANG_FORWARD_PROC_SYMBOL(public_6f28e10);
CLANG_FORWARD_PROC_SYMBOL(public_6f31650);
CLANG_FORWARD_PROC_SYMBOL(public_6f31910);
CLANG_FORWARD_PROC_SYMBOL(public_6f319b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f319d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f33500);
CLANG_FORWARD_PROC_SYMBOL(public_6f348f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f34a80);
CLANG_FORWARD_PROC_SYMBOL(public_6f35890);
CLANG_FORWARD_PROC_SYMBOL(public_6f37ea0);
CLANG_FORWARD_PROC_SYMBOL(public_6f63cc0);
CLANG_FORWARD_PROC_SYMBOL(public_6f66c80);
CLANG_FORWARD_PROC_SYMBOL(public_6f68e30);
CLANG_FORWARD_PROC_SYMBOL(public_6f73810);
CLANG_FORWARD_PROC_SYMBOL(public_6f832b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f83ad0);
CLANG_FORWARD_PROC_SYMBOL(public_6f93490);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8130);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fb0953);

#define public_6f832f5 _public_6f832f5
#define public_6f8332c _public_6f8332c
#define public_6f83335 _public_6f83335
#define public_6f83374 _public_6f83374
#define public_6f833a9 _public_6f833a9
#define public_6f833ac _public_6f833ac
#define public_6f833b2 _public_6f833b2
#define public_6f833de _public_6f833de
#define public_6f83418 _public_6f83418
#define public_6f834b1 _public_6f834b1
#define public_6f834d8 _public_6f834d8
#define public_6f83530 _public_6f83530
#define public_6f83554 _public_6f83554
#define public_6f83581 _public_6f83581
#define public_6f835f6 _public_6f835f6
#define public_6f8362a _public_6f8362a
#define public_6f8362d _public_6f8362d
#define public_6f83632 _public_6f83632
#define public_6f83640 _public_6f83640
#define public_6f83645 _public_6f83645
#define public_6f83648 _public_6f83648
#define public_6f83727 _public_6f83727
#define public_6f8373f _public_6f8373f
#define public_6f837b5 _public_6f837b5
#define public_6f837d8 _public_6f837d8
#define public_6f83847 _public_6f83847
#define public_6f83899 _public_6f83899
#define public_6f838d3 _public_6f838d3
#define public_6f83924 _public_6f83924
#define public_6f83993 _public_6f83993
#define public_6f8399d _public_6f8399d
#define public_6f839cf _public_6f839cf
#define public_6f839d1 _public_6f839d1
#define public_6f839f6 _public_6f839f6
#define public_6f83a06 _public_6f83a06

PROC_DECLARE(0x6f832b0, internal_6f832b0, public_6f832b0);
extern "C" NAKED register_t __cdecl internal_6f832b0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fb0953 @0x6f832b2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fb0953
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x664
        push ebx
        push ebp
        push esi
        mov ebx, ecx
        push edi
        lea eax, ss:[esp+0x1C]
        lea esi, ds:[ebx+0x44]
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x14], 0
        call public_6f1df30
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x24], eax
        je public_6f8332c
        public_6f832f5 : nop
        fld dword ptr ss : [esp+0x10]
        push 0
        fadd dword ptr ds : [eax+0x2C]
        lea ecx, ss:[esp+0x20]
        push ecx
        lea ecx, ss:[esp+0x2C]
        fstp dword ptr ss : [esp+0x18]
        call public_6f68e30
        mov ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ss : [esp+0x24]
        cmp eax, ecx
        jne public_6f832f5
        fld dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [public_6fb444c]
        fnstsw ax
        test ah, 0x44
        jp public_6f83335
        public_6f8332c : nop
        mov ebp, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0x14], ebp
        jmp public_6f833b2
        public_6f83335 : nop
        call dword ptr ds : [public_6fb3370]
        mov dword ptr ss : [esp+0x20], eax
        fild dword ptr ss : [esp+0x20]
        lea edx, ss:[esp+0x1C]
        push edx
        fmul dword ptr ds : [public_6fb4448]
        mov ecx, esi
        fld dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x14], 0
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x24]
        fstp st(0)
        call public_6f1df30
        mov ecx, dword ptr ds : [eax]
        cmp ecx, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0x24], ecx
        je public_6f833a9
        public_6f83374 : nop
        fld dword ptr ss : [esp+0x10]
        fadd dword ptr ds : [ecx+0x2C]
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x20]
        fcomp dword ptr ss : [esp+0x10]
        fnstsw ax
        test ah, 0x41
        jnp public_6f833ac
        push 0
        lea eax, ss:[esp+0x20]
        push eax
        lea ecx, ss:[esp+0x2C]
        call public_6f68e30
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ss : [esp+0x24]
        cmp ecx, eax
        jne public_6f83374
        public_6f833a9 : nop
        mov ecx, dword ptr ds : [esi+4]
        public_6f833ac : nop
        mov dword ptr ss : [esp+0x14], ecx
        mov ebp, ecx
        public_6f833b2 : nop
        mov eax, dword ptr ss : [esp+0x688]
        cmp eax, 0xFFFFFFFF
        jne public_6f833de
        mov esi, dword ptr ss : [ebp+0x18]
        mov edi, dword ptr ss : [ebp+0x14]
        call dword ptr ds : [public_6fb3370]
        sub esi, edi
        inc esi
        imul eax, esi
        cdq 
        and edx, 0x7FFF
        add eax, edx
        sar eax, 0xF
        add eax, edi
        public_6f833de : nop
        mov dl, byte ptr ss : [esp+0x1B]
        xor esi, esi
        push esi
        mov dword ptr ss : [ebp+0x1C], eax
        push esi
        lea ecx, ss:[esp+0x48]
        mov byte ptr ss : [esp+0x48], dl
        call public_6ef6b80
        mov dword ptr ss : [esp+0x44], eax
        mov dword ptr ss : [esp+0x48], esi
        cmp dword ptr ss : [ebp+0x1C], esi
        mov dword ptr ss : [esp+0x67C], esi
        mov dword ptr ss : [esp+0x2C], esi
        jle public_6f838d3
        mov ebp, dword ptr ds : [public_6fb3034]
        public_6f83418 : nop
        lea ecx, ss:[esp+0x170]
        call public_6f33500
        lea ecx, ss:[esp+0xD8]
        mov byte ptr ss : [esp+0x67C], 1
        call public_6eac680
        lea ecx, ss:[esp+0xF0]
        mov byte ptr ss : [esp+0x67C], 2
        call public_6eac680
        mov dword ptr ss : [esp+0x108], esi
        mov dword ptr ss : [esp+0x10C], 0xFFFFFFFF
        mov edi, dword ptr ss : [esp+0x694]
        cmp edi, esi
        mov byte ptr ss : [esp+0x67C], 3
        jne public_6f834b1
        mov eax, dword ptr ds : [ebx+0x9C]
        push eax
        lea ecx, ss:[esp+0x134]
/*FIXUP push offset public_6fb7b2c @0x6f8347f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb7b2c
        push ecx
        call dword ptr ds : [public_6fb3360]
        mov ecx, dword ptr ds : [ebx+0x9C]
        add esp, 0xC
        inc ecx
        lea edx, ss:[esp+0x130]
        mov dword ptr ds : [ebx+0x9C], ecx
        push edx
        lea ecx, ss:[esp+0x17C]
        call public_6ed0160
        jmp public_6f834d8
        public_6f834b1 : nop
        mov eax, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax]
        add eax, 0xC
        push eax
        lea ecx, ss:[esp+0x17C]
        call public_6ed0160
        mov eax, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax]
        push eax
        lea eax, ss:[esp+0x5C]
        push eax
        mov ecx, edi
        call public_6ecfe80
        public_6f834d8 : nop
        mov esi, dword ptr ss : [esp+0x684]
        mov ecx, dword ptr ds : [ebx+0xC]
        lea eax, ds:[esi+0x24]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x1DC], ecx
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x224], edx
        mov edx, dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [public_6fbc18c]
        mov dword ptr ss : [esp+0x228], ecx
        mov dword ptr ss : [esp+0x22C], edx
        mov ecx, 9
        lea edi, ss:[esp+0x200]
        rep movsd
        mov dword ptr ss : [esp+0x274], eax
        mov eax, dword ptr ds : [ebx+0x20]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_6f83554
        lea esp, ss:[esp]
        public_6f83530 : nop
        mov ecx, dword ptr ss : [esp+0x28C]
        lea eax, ds:[esi+8]
        push eax
        push ecx
        lea edx, ss:[esp+0x64]
        push edx
        lea ecx, ss:[esp+0x294]
        call public_6f1e390
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [ebx+0x20]
        jne public_6f83530
        public_6f83554 : nop
        mov eax, dword ptr ss : [esp+0x690]
        xor edi, edi
        cmp eax, edi
        jne public_6f83632
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [eax+0x24]
        lea esi, ds:[eax+0x20]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x10], edi
        mov dword ptr ss : [esp+0x28], eax
        je public_6f8362a
        public_6f83581 : nop
        fld dword ptr ss : [esp+0x10]
        push edi
        fadd dword ptr ds : [eax+0x18]
        lea ecx, ss:[esp+0x58]
        push ecx
        lea ecx, ss:[esp+0x30]
        fstp dword ptr ss : [esp+0x18]
        call public_6f68e30
        mov ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ss : [esp+0x28]
        cmp eax, ecx
        jne public_6f83581
        fld dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [public_6fb444c]
        fnstsw ax
        test ah, 0x44
        jnp public_6f8362a
        call dword ptr ds : [public_6fb3370]
        mov dword ptr ss : [esp+0x1C], eax
        fild dword ptr ss : [esp+0x1C]
        lea edx, ss:[esp+0x50]
        push edx
        fmul dword ptr ds : [public_6fb4448]
        mov ecx, esi
        fld dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x14], 0
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x20]
        fstp st(0)
        call public_6f1df30
        mov ecx, dword ptr ds : [eax]
        cmp ecx, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0x28], ecx
        je public_6f8362a
        public_6f835f6 : nop
        fld dword ptr ss : [esp+0x10]
        fadd dword ptr ds : [ecx+0x18]
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x1C]
        fcomp dword ptr ss : [esp+0x10]
        fnstsw ax
        test ah, 0x41
        jnp public_6f8362d
        push edi
        lea eax, ss:[esp+0x64]
        push eax
        lea ecx, ss:[esp+0x30]
        call public_6f68e30
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ss : [esp+0x28]
        cmp ecx, eax
        jne public_6f835f6
        public_6f8362a : nop
        mov ecx, dword ptr ds : [esi+4]
        public_6f8362d : nop
        lea eax, ds:[ecx+8]
        jmp public_6f83648
        public_6f83632 : nop
        mov ecx, dword ptr ss : [esp+0x2C]
        cmp ecx, edi
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax]
        jle public_6f83645
        nop 
        public_6f83640 : nop
        dec ecx
        mov eax, dword ptr ds : [eax]
        jne public_6f83640
        public_6f83645 : nop
        add eax, 8
        public_6f83648 : nop
        mov ecx, dword ptr ds : [ebx+0x14]
        push 0xFFFFFFFF
        push eax
        push ecx
        call public_6f35890
        mov esi, eax
        add esp, 0xC
        cmp esi, edi
        je public_6f83847
        lea ecx, ss:[esp+0xA0]
        call public_6eac680
        lea ecx, ss:[esp+0xB8]
        mov byte ptr ss : [esp+0x67C], 4
        call public_6eac680
        mov dword ptr ss : [esp+0xD0], edi
        mov dword ptr ss : [esp+0xD4], 0xFFFFFFFF
        mov eax, dword ptr ds : [ebx+0x14]
        lea edx, ss:[esp+0xA0]
        push edx
        push eax
        mov byte ptr ss : [esp+0x684], 5
        call public_6f319b0
        add esp, 8
        push 1
        lea ecx, ss:[esp+0xA4]
        push ecx
        lea ecx, ss:[esp+0x118]
        call public_6f31650
        mov edx, dword ptr ds : [ebx+0x14]
        push eax
        push edx
        call public_6f319d0
        add esp, 0x10
        test al, al
        je public_6f8373f
        mov ecx, dword ptr ss : [esp+0xD0]
        mov edx, dword ptr ds : [ebx+0x14]
        lea eax, ss:[esp+0x170]
        push eax
        push ecx
        push edx
        call public_6f34a80
        push edi
        lea eax, ds:[ebx+0x18]
        push eax
        lea ecx, ss:[esp+0x184]
        push esi
        push ecx
        call public_6f348f0
        mov ecx, dword ptr ss : [esp+0x18C]
        add esp, 0x1C
        cmp ecx, edi
        mov dword ptr ss : [esp+0x664], 0x3F800000
        je public_6f83727
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+4]
        mov dword ptr ss : [esp+0x170], edi
        public_6f83727 : nop
        lea eax, ss:[esp+0x170]
        push eax
        lea ecx, ss:[esp+0xA4]
        push ecx
        call public_6f31910
        add esp, 8
        public_6f8373f : nop
        mov edx, dword ptr ds : [esi+0x24]
        mov dword ptr ss : [esp+0x670], edx
        mov ebp, dword ptr ds : [public_6fb3034]
        lea ecx, ss:[esp+0xB8]
        mov byte ptr ss : [esp+0x67C], 6
        call ebp
        lea ecx, ss:[esp+0xA0]
        mov byte ptr ss : [esp+0x67C], 3
        call ebp
        cmp dword ptr ss : [esp+0x2C], edi
        jne public_6f837d8
        lea ecx, ss:[esp+0x1D0]
        call public_6ed2a00
        mov eax, dword ptr ss : [esp+0x68C]
        push eax
        lea ecx, ss:[esp+0x1D4]
        call public_6f93490
        lea ecx, ss:[esp+0x20]
        push ecx
        lea ecx, ss:[esp+0x1D4]
        call public_6f1df30
        mov eax, dword ptr ss : [esp+0x20]
        cmp eax, dword ptr ss : [esp+0x1D4]
        je public_6f837d8
        public_6f837b5 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx]
        push edi
        lea eax, ss:[esp+0x50]
        push eax
        lea ecx, ss:[esp+0x28]
        call public_6f68e30
        mov eax, dword ptr ss : [esp+0x20]
        cmp eax, dword ptr ss : [esp+0x1D4]
        jne public_6f837b5
        public_6f837d8 : nop
        mov edx, dword ptr ss : [esp+0x44]
        lea ecx, ss:[esp+0x170]
        push ecx
        push edx
        lea eax, ss:[esp+0x6C]
        push eax
        lea ecx, ss:[esp+0x4C]
        call public_6efc860
        lea ecx, ss:[esp+0xF0]
        mov byte ptr ss : [esp+0x67C], 0xB
        call ebp
        lea ecx, ss:[esp+0xD8]
        mov byte ptr ss : [esp+0x67C], 1
        call ebp
        lea ecx, ss:[esp+0x288]
        mov byte ptr ss : [esp+0x67C], 0xE
        call public_6f15350
        lea ecx, ss:[esp+0x26C]
        mov byte ptr ss : [esp+0x67C], 0xD
        call public_6f28e10
        mov byte ptr ss : [esp+0x67C], 0xC
        jmp public_6f83899
        public_6f83847 : nop
        lea ecx, ss:[esp+0xF0]
        mov byte ptr ss : [esp+0x67C], 7
        call ebp
        lea ecx, ss:[esp+0xD8]
        mov byte ptr ss : [esp+0x67C], 1
        call ebp
        lea ecx, ss:[esp+0x288]
        mov byte ptr ss : [esp+0x67C], 0xA
        call public_6f15350
        lea ecx, ss:[esp+0x26C]
        mov byte ptr ss : [esp+0x67C], 9
        call public_6f28e10
        mov byte ptr ss : [esp+0x67C], 8
        public_6f83899 : nop
        lea ecx, ss:[esp+0x1F0]
        call public_6eec8d0
        lea ecx, ss:[esp+0x170]
        mov byte ptr ss : [esp+0x67C], 0
        call public_6ef4ab0
        mov eax, dword ptr ss : [esp+0x2C]
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [ecx+0x1C]
        inc eax
        xor esi, esi
        cmp eax, edx
        mov dword ptr ss : [esp+0x2C], eax
        jl public_6f83418
        public_6f838d3 : nop
        mov ecx, dword ptr ds : [ebx+0xB8]
        call public_6fa8130
        mov dl, byte ptr ss : [esp+0x1B]
        mov edi, eax
        mov byte ptr ss : [esp+0x30], dl
        mov dword ptr ss : [esp+0x34], esi
        mov dword ptr ss : [esp+0x38], esi
        mov dword ptr ss : [esp+0x3C], esi
        mov ecx, dword ptr ds : [ebx+0xB8]
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0x30]
        push eax
        push edx
        mov ecx, edi
        mov byte ptr ss : [esp+0x684], 0xF
        call public_6f37ea0
        mov eax, dword ptr ss : [esp+0x34]
        cmp eax, esi
        mov ebp, eax
        je public_6f83924
        mov esi, dword ptr ss : [esp+0x38]
        sub esi, eax
        sar esi, 3
        public_6f83924 : nop
        call dword ptr ds : [public_6fb3370]
        imul eax, esi
        cdq 
        and edx, 0x7FFF
        add eax, edx
        sar eax, 0xF
        lea ebp, ss:[ebp+eax*8]
        xor eax, eax
        lea ecx, ss:[esp+0x78]
        mov dword ptr ss : [esp+0x68], eax
        mov dword ptr ss : [esp+0x6C], eax
        mov dword ptr ss : [esp+0x70], eax
        mov dword ptr ss : [esp+0x74], eax
        call public_6f83ad0
        mov dword ptr ss : [esp+0x90], edi
        call dword ptr ds : [public_6fb3370]
        shl eax, 1
        cdq 
        and edx, 0x7FFF
        add eax, edx
        sar eax, 0xF
        neg eax
        sbb eax, eax
        and eax, 2
        dec eax
        cmp eax, 1
        mov dword ptr ss : [esp+0x9C], eax
        jne public_6f83993
        mov eax, dword ptr ss : [ebp+4]
        mov dword ptr ss : [esp+0x98], eax
        jmp public_6f8399d
        public_6f83993 : nop
        mov ecx, dword ptr ss : [ebp]
        mov dword ptr ss : [esp+0x98], ecx
        public_6f8399d : nop
        mov edx, dword ptr ss : [esp+0x44]
        mov ebp, dword ptr ds : [edx]
        push 0x64
        add ebp, 8
        call public_6fa912a
        add esp, 4
        mov dword ptr ss : [esp+0x4C], eax
        test eax, eax
        mov byte ptr ss : [esp+0x67C], 0x10
        je public_6f839cf
        push 0
        push 3
        mov ecx, eax
        call public_6f06200
        mov esi, eax
        jmp public_6f839d1
        public_6f839cf : nop
        xor esi, esi
        public_6f839d1 : nop
        mov ecx, dword ptr ss : [ebp+0xFC]
        cmp ecx, esi
        mov byte ptr ss : [esp+0x67C], 0xF
        je public_6f83a06
        test ecx, ecx
        je public_6f839f6
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+4]
        mov dword ptr ss : [ebp+0xFC], 0
        public_6f839f6 : nop
        test esi, esi
        mov dword ptr ss : [ebp+0xFC], esi
        je public_6f83a06
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx]
        public_6f83a06 : nop
        mov edi, dword ptr ss : [ebp+0xFC]
        add edi, 0x10
        mov ecx, 0xE
        lea esi, ss:[esp+0x68]
        rep movsd
        mov eax, dword ptr ss : [ebp+0xFC]
        mov ecx, dword ptr ds : [ebx+0xB8]
        mov dword ptr ds : [eax+0x48], ecx
        mov edx, dword ptr ss : [ebp+0xFC]
        mov eax, dword ptr ds : [ebx+8]
        push ebp
        add edx, 0x10
        push edx
        push eax
        call public_6f63cc0
        mov ecx, dword ptr ss : [esp+0x690]
        mov edx, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [edx+8]
        push ecx
        push eax
        lea ecx, ss:[esp+0x54]
        push ecx
        call public_6f66c80
        mov ecx, dword ptr ds : [ebx+8]
        add esp, 0x18
        xor esi, esi
        push esi
        push esi
        lea edx, ss:[esp+0x48]
        push edx
        call public_6f73810
        mov eax, dword ptr ss : [esp+0x38]
        mov ecx, dword ptr ss : [esp+0x34]
        push eax
        push ecx
        lea ecx, ss:[esp+0x38]
        mov byte ptr ss : [esp+0x684], 0
        call public_6ea1490
        mov edx, dword ptr ss : [esp+0x34]
        push edx
        call public_6fa8fe0
        add esp, 4
        lea ecx, ss:[esp+0x40]
        mov dword ptr ss : [esp+0x34], esi
        mov dword ptr ss : [esp+0x38], esi
        mov dword ptr ss : [esp+0x3C], esi
        mov dword ptr ss : [esp+0x67C], 0xFFFFFFFF
        call public_6ef6680
        mov ecx, dword ptr ss : [esp+0x674]
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x670
        ret 0x14
        UNREACHABLE_TRAP(0x6f832b0)
    }
}

#undef public_6f832f5
#undef public_6f8332c
#undef public_6f83335
#undef public_6f83374
#undef public_6f833a9
#undef public_6f833ac
#undef public_6f833b2
#undef public_6f833de
#undef public_6f83418
#undef public_6f834b1
#undef public_6f834d8
#undef public_6f83530
#undef public_6f83554
#undef public_6f83581
#undef public_6f835f6
#undef public_6f8362a
#undef public_6f8362d
#undef public_6f83632
#undef public_6f83640
#undef public_6f83645
#undef public_6f83648
#undef public_6f83727
#undef public_6f8373f
#undef public_6f837b5
#undef public_6f837d8
#undef public_6f83847
#undef public_6f83899
#undef public_6f838d3
#undef public_6f83924
#undef public_6f83993
#undef public_6f8399d
#undef public_6f839cf
#undef public_6f839d1
#undef public_6f839f6
#undef public_6f83a06
