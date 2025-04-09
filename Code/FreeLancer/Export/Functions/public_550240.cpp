#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_411c50);
CLANG_FORWARD_PROC_SYMBOL(public_417c50);
CLANG_FORWARD_PROC_SYMBOL(public_4205c0);
CLANG_FORWARD_PROC_SYMBOL(public_420690);
CLANG_FORWARD_PROC_SYMBOL(public_4206c0);
CLANG_FORWARD_PROC_SYMBOL(public_422b80);
CLANG_FORWARD_PROC_SYMBOL(public_512660);
CLANG_FORWARD_PROC_SYMBOL(public_550240);
CLANG_FORWARD_PROC_SYMBOL(public_550b60);
CLANG_FORWARD_PROC_SYMBOL(public_550cf0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);

#define public_550264 _public_550264
#define public_550370 _public_550370
#define public_550394 _public_550394
#define public_5503b4 _public_5503b4
#define public_550438 _public_550438
#define public_55048e _public_55048e
#define public_5504a7 _public_5504a7
#define public_5504c4 _public_5504c4
#define public_5504e5 _public_5504e5
#define public_550518 _public_550518
#define public_550538 _public_550538
#define public_550554 _public_550554
#define public_550575 _public_550575
#define public_550589 _public_550589
#define public_5505c0 _public_5505c0
#define public_5505d9 _public_5505d9
#define public_5505e5 _public_5505e5
#define public_550616 _public_550616
#define public_550640 _public_550640
#define public_5506b8 _public_5506b8
#define public_5506d8 _public_5506d8
#define public_5506f8 _public_5506f8
#define public_550718 _public_550718
#define public_550738 _public_550738
#define public_5507ae _public_5507ae
#define public_5507ce _public_5507ce
#define public_5507ee _public_5507ee
#define public_55086c _public_55086c
#define public_550891 _public_550891
#define public_5508b6 _public_5508b6
#define public_5508db _public_5508db
#define public_550900 _public_550900
#define public_550925 _public_550925
#define public_55094a _public_55094a
#define public_550973 _public_550973
#define public_550a0f _public_550a0f
#define public_550a14 _public_550a14
#define public_550a27 _public_550a27
#define public_550a41 _public_550a41
#define public_550a49 _public_550a49
#define public_550a58 _public_550a58
#define public_550a6a _public_550a6a
#define public_550afc _public_550afc
#define public_550b12 _public_550b12
#define public_550b23 _public_550b23
#define public_550b42 _public_550b42
#define public_550b48 _public_550b48

PROC_DECLARE(0x550240, internal_550240, public_550240);
extern "C" NAKED register_t __cdecl internal_550240()
{
    __asm
    {
        sub esp, 0xBC
        push ebx
        push esi
        mov esi, ecx
        mov al, byte ptr ds : [esi+0xEC]
        xor ebx, ebx
        test al, al
        je public_550264
        call public_550cf0
        mov dword ptr ds : [esi+4], ebx
        mov byte ptr ds : [esi+0xEC], bl
        public_550264 : nop
        mov dword ptr ds : [esi+0x114], ebx
        mov dword ptr ds : [esi+0x110], ebx
        mov dword ptr ds : [esi+0x124], ebx
        mov dword ptr ds : [esi+0x120], ebx
        mov dword ptr ds : [esi+0x118], ebx
        mov dword ptr ds : [esi+0x74], ebx
        mov eax, 0x3F800000
        mov dword ptr ds : [esi+0x6C], eax
        mov dword ptr ds : [esi+0x70], eax
        fld dword ptr ds : [esi+0x74]
        fld dword ptr ds : [esi+0x70]
        push edi
        fld dword ptr ds : [esi+0x6C]
        mov edx, 0x42480000
        fld st(0)
        lea edi, ds:[esi+0x48]
        fmul st, st(1)
        mov ecx, 8
        fld st(2)
        mov dword ptr ss : [esp+0x14], ebx
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fsqrt 
        fstp st(3)
        fstp st(0)
        fstp st(0)
        fdivr dword ptr ds : [public_5c75dc]
        fld st(0)
        fmul dword ptr ds : [esi+0x6C]
        fstp dword ptr ds : [esi+0x6C]
        fld st(0)
        fmul dword ptr ds : [esi+0x70]
        fstp dword ptr ds : [esi+0x70]
        fmul dword ptr ds : [esi+0x74]
        fstp dword ptr ds : [esi+0x74]
        mov dword ptr ds : [esi+0xA4], eax
        mov dword ptr ds : [esi+0xDC], eax
        mov dword ptr ds : [esi+0xA8], edx
        mov dword ptr ds : [esi+0xB4], 0x3F400000
        mov dword ptr ds : [esi+0xA0], ebx
        mov dword ptr ds : [esi+0xB0], ebx
        mov dword ptr ds : [esi+0xC0], 0x44BB8000
        mov dword ptr ds : [esi+0xC8], ebx
        mov dword ptr ds : [esi+0x68], ebx
        rep stosd
        mov edi, dword ptr ss : [esp+0xCC]
        mov eax, 0x3E99999A
        mov ecx, edi
        mov dword ptr ds : [esi+0xE4], edx
        mov dword ptr ds : [esi+0xE8], 0x42C80000
        mov dword ptr ds : [esi+0x104], 0x3DCCCCCD
        mov dword ptr ds : [esi+0x108], eax
        mov dword ptr ds : [esi+0x10C], eax
        mov dword ptr ds : [esi+0xF0], ebx
        call dword ptr ds : [public_5c669c]
        test al, al
        je public_550a27
        mov ebx, dword ptr ds : [public_5c6cf4]
        push ebp
        nop 
        lea esp, ss:[esp]
/*FIXUP public_550370 : nop
        push offset public_5e0dec @0x550370*/
  FIXUP public_550370 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e0dec
        mov ecx, edi
        call ebx
        test al, al
        mov ecx, edi
        je public_550394
        push 0
        call dword ptr ds : [public_5c6cfc]
        call public_5b7ec0
        mov dword ptr ds : [esi+4], eax
        jmp public_550a14
/*FIXUP public_550394 : nop
        push offset public_5e0de0 @0x550394*/
  FIXUP public_550394 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e0de0
        call ebx
        test al, al
        mov ecx, edi
        je public_5503b4
        push 0
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ds : [esi+0xA8]
        jmp public_550a14
/*FIXUP public_5503b4 : nop
        push offset public_5e0dd4 @0x5503b4*/
  FIXUP public_5503b4 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e0dd4
        call ebx
        test al, al
        jne public_550973
/*FIXUP push offset public_5e0dc8 @0x5503c3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e0dc8
        mov ecx, edi
        call ebx
        test al, al
        jne public_550973
/*FIXUP push offset public_5e0dbc @0x5503d4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e0dbc
        mov ecx, edi
        call ebx
        test al, al
        je public_5504a7
        cmp dword ptr ds : [esi+0x68], 8
        jge public_550a14
        mov ecx, edi
        call dword ptr ds : [public_5c6698]
        mov ebp, eax
        push ebp
        lea ecx, ss:[esp+0xB4]
        xor ebx, ebx
        call public_4205c0
        lea eax, ss:[esp+0xB0]
        push eax
        lea ecx, ss:[esp+0x2C]
        push ecx
        mov ecx, dword ptr ss : [esp+0xDC]
        call public_512660
        mov edx, dword ptr ss : [esp+0xD4]
        mov eax, dword ptr ss : [esp+0x28]
        cmp eax, dword ptr ds : [edx+4]
        je public_550438
        lea ebx, ds:[eax+0x28]
        test ebx, ebx
        jne public_55048e
        public_550438 : nop
        push ebp
        push 0xF2
/*FIXUP push offset public_5da4a0 @0x55043e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5da4a0
        mov eax, 0x100002
/*FIXUP push offset public_5c958c @0x550448*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c958c
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        call dword ptr ds : [eax]
        add esp, 0x14
        test ebx, ebx
        jne public_55048e
        mov ecx, edi
        mov ebp, 0x100001
        call dword ptr ds : [public_5c64b4]
        push eax
        mov ecx, edi
        call dword ptr ds : [public_5c6698]
        mov ecx, dword ptr ds : [public_5c6d18]
        push eax
        push 0x523
/*FIXUP push offset public_5e0b08 @0x55047e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e0b08
/*FIXUP push offset public_5e0d70 @0x550483*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e0d70
        push ebp
        call dword ptr ds : [ecx]
        add esp, 0x18
        public_55048e : nop
        mov edx, dword ptr ds : [esi+0x68]
        mov dword ptr ds : [esi+edx*4+0x28], ebx
        mov eax, dword ptr ds : [esi+0x68]
        mov ebx, dword ptr ds : [public_5c6cf4]
        inc eax
        mov dword ptr ds : [esi+0x68], eax
        jmp public_550a14
/*FIXUP public_5504a7 : nop
        push offset public_5e0d60 @0x5504a7*/
  FIXUP public_5504a7 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e0d60
        mov ecx, edi
        call ebx
        test al, al
        je public_5504e5
        mov eax, dword ptr ds : [esi+0x68]
        xor ebp, ebp
        test eax, eax
        jle public_550a14
        lea ebx, ds:[esi+0x48]
        public_5504c4 : nop
        push ebp
        mov ecx, edi
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ds : [ebx]
        mov eax, dword ptr ds : [esi+0x68]
        inc ebp
        add ebx, 4
        cmp ebp, eax
        jl public_5504c4
        mov ebx, dword ptr ds : [public_5c6cf4]
        jmp public_550a14
/*FIXUP public_5504e5 : nop
        push offset public_5e0d50 @0x5504e5*/
  FIXUP public_5504e5 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e0d50
        mov ecx, edi
        call ebx
        test al, al
        jne public_550a14
/*FIXUP push offset public_5e0d40 @0x5504f6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e0d40
        mov ecx, edi
        call ebx
        test al, al
        mov ecx, edi
        je public_550518
        push 0
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ds : [esi+0xB4]
        jmp public_550a14
/*FIXUP public_550518 : nop
        push offset public_5e0d34 @0x550518*/
  FIXUP public_550518 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e0d34
        call ebx
        test al, al
        mov ecx, edi
        je public_550538
        push 0
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ds : [esi+0xB0]
        jmp public_550a14
/*FIXUP public_550538 : nop
        push offset public_5e0d24 @0x550538*/
  FIXUP public_550538 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e0d24
        call ebx
        test al, al
        je public_550640
        xor eax, eax
        lea ecx, ds:[esi+0x18]
        mov dword ptr ss : [esp+0x10], eax
        mov dword ptr ss : [esp+0x14], ecx
        public_550554 : nop
        xor ebx, ebx
        push eax
        mov ecx, edi
        mov dword ptr ss : [esp+0x74], ebx
        mov byte ptr ss : [esp+0x78], bl
        call dword ptr ds : [public_5c6024]
        cmp eax, ebx
        jne public_550575
        mov dword ptr ss : [esp+0x70], ebx
        mov byte ptr ss : [esp+0x74], bl
        jmp public_550589
        public_550575 : nop
        push eax
        lea edx, ss:[esp+0x78]
        push 0x20
        push edx
        call public_417c50
        add esp, 0xC
        mov dword ptr ss : [esp+0x70], eax
        public_550589 : nop
        lea eax, ss:[esp+0x74]
        push eax
        lea ecx, ss:[esp+0x98]
        xor ebp, ebp
        call public_4205c0
        lea ecx, ss:[esp+0x94]
        push ecx
        mov ecx, dword ptr ss : [esp+0xD8]
        call public_420690
        test al, al
        mov ebx, dword ptr ss : [esp+0xD4]
        je public_5505c0
        mov eax, dword ptr ds : [ebx+0x14]
        jmp public_5505d9
        public_5505c0 : nop
        lea edx, ss:[esp+0x94]
        push edx
        lea eax, ss:[esp+0x6C]
        push eax
        mov ecx, ebx
        call public_4206c0
        mov eax, dword ptr ds : [eax]
        mov dword ptr ds : [ebx+0x14], eax
        public_5505d9 : nop
        cmp eax, dword ptr ds : [ebx+4]
        je public_5505e5
        lea ebp, ds:[eax+0x28]
        test ebp, ebp
        jne public_550616
        public_5505e5 : nop
        push 2
        push 0x10000
        lea ecx, ss:[esp+0x74]
        call public_411c50
        mov edx, dword ptr ds : [eax]
        mov eax, dword ptr ds : [public_5c6d18]
        lea ecx, ss:[esp+0x74]
        push ecx
        push 0xF2
/*FIXUP push offset public_5da4a0 @0x550606*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5da4a0
/*FIXUP push offset public_5c958c @0x55060b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c958c
        push edx
        call dword ptr ds : [eax]
        add esp, 0x14
        public_550616 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x10]
        inc eax
        mov dword ptr ds : [ecx], ebp
        add ecx, 4
        cmp eax, 4
        mov dword ptr ss : [esp+0x10], eax
        mov dword ptr ss : [esp+0x14], ecx
        jl public_550554
        mov ebx, dword ptr ds : [public_5c6cf4]
        jmp public_550a14
/*FIXUP public_550640 : nop
        push offset public_5e0d14 @0x550640*/
  FIXUP public_550640 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e0d14
        mov ecx, edi
        call ebx
        test al, al
        mov ecx, edi
        je public_5506b8
        push 0
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ss : [esp+0x5C]
        push 1
        mov ecx, edi
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ss : [esp+0x60]
        push 2
        mov ecx, edi
        call dword ptr ds : [public_5c6cfc]
        fld dword ptr ss : [esp+0x5C]
        fmul dword ptr ds : [public_5c7f68]
        lea ecx, ds:[esi+0x90]
        fstp dword ptr ss : [esp+0x2C]
        fld dword ptr ss : [esp+0x60]
        mov edx, dword ptr ss : [esp+0x2C]
        fmul dword ptr ds : [public_5c7f68]
        mov dword ptr ds : [ecx], edx
        fstp dword ptr ss : [esp+0x30]
        mov eax, dword ptr ss : [esp+0x30]
        fmul dword ptr ds : [public_5c7f68]
        mov dword ptr ds : [ecx+4], eax
        fstp dword ptr ss : [esp+0x34]
        mov edx, dword ptr ss : [esp+0x34]
        mov dword ptr ds : [ecx+8], edx
        jmp public_550a14
/*FIXUP public_5506b8 : nop
        push offset public_5e0d04 @0x5506b8*/
  FIXUP public_5506b8 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e0d04
        call ebx
        test al, al
        mov ecx, edi
        je public_5506d8
        push 0
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ds : [esi+0x9C]
        jmp public_550a14
/*FIXUP public_5506d8 : nop
        push offset public_5e0cf0 @0x5506d8*/
  FIXUP public_5506d8 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e0cf0
        call ebx
        test al, al
        mov ecx, edi
        je public_5506f8
        push 0
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ds : [esi+0xA0]
        jmp public_550a14
/*FIXUP public_5506f8 : nop
        push offset public_5e0ce0 @0x5506f8*/
  FIXUP public_5506f8 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e0ce0
        call ebx
        test al, al
        mov ecx, edi
        je public_550718
        push 0
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ds : [esi+0xA4]
        jmp public_550a14
/*FIXUP public_550718 : nop
        push offset public_5e0cd0 @0x550718*/
  FIXUP public_550718 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e0cd0
        call ebx
        test al, al
        mov ecx, edi
        je public_550738
        push 0
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ds : [esi+0xC8]
        jmp public_550a14
/*FIXUP public_550738 : nop
        push offset public_5e0cc0 @0x550738*/
  FIXUP public_550738 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e0cc0
        call ebx
        test al, al
        mov ecx, edi
        je public_5507ae
        push 0
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ss : [esp+0x38]
        push 1
        mov ecx, edi
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ss : [esp+0x3C]
        push 2
        mov ecx, edi
        call dword ptr ds : [public_5c6cfc]
        fld dword ptr ss : [esp+0x38]
        fmul dword ptr ds : [public_5c7f68]
        lea eax, ds:[esi+0xCC]
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x3C]
        mov ecx, dword ptr ss : [esp+0x1C]
        fmul dword ptr ds : [public_5c7f68]
        mov dword ptr ds : [eax], ecx
        fstp dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x20]
        fmul dword ptr ds : [public_5c7f68]
        mov dword ptr ds : [eax+4], edx
        fstp dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [eax+8], ecx
        jmp public_550a14
/*FIXUP public_5507ae : nop
        push offset public_5e0cac @0x5507ae*/
  FIXUP public_5507ae : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e0cac
        call ebx
        test al, al
        mov ecx, edi
        je public_5507ce
        push 0
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ds : [esi+0xDC]
        jmp public_550a14
/*FIXUP public_5507ce : nop
        push offset public_5e0c9c @0x5507ce*/
  FIXUP public_5507ce : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e0c9c
        call ebx
        test al, al
        mov ecx, edi
        je public_5507ee
        push 0
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ds : [esi+0xC0]
        jmp public_550a14
/*FIXUP public_5507ee : nop
        push offset public_5e0c88 @0x5507ee*/
  FIXUP public_5507ee : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e0c88
        call ebx
        test al, al
        mov ecx, edi
        je public_55086c
        push 0
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ds : [esi+0xE4]
        push 1
        mov ecx, edi
        call dword ptr ds : [public_5c6cfc]
        fst dword ptr ds : [esi+0xE8]
        fcomp dword ptr ds : [esi+0xE4]
        fnstsw ax
        test ah, 5
        jp public_550a14
        mov edx, dword ptr ds : [public_5c6d18]
/*FIXUP push offset public_5e0c68 @0x550830*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e0c68
        push 0x555
/*FIXUP push offset public_5e0b08 @0x55083a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e0b08
        mov eax, 0x100002
/*FIXUP push offset public_5c8bd4 @0x550844*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8bd4
        push eax
        call dword ptr ds : [edx]
        fld dword ptr ds : [esi+0xE4]
        mov eax, dword ptr ds : [esi+0xE8]
        fstp dword ptr ds : [esi+0xE8]
        add esp, 0x14
        mov dword ptr ds : [esi+0xE4], eax
        jmp public_550a14
/*FIXUP public_55086c : nop
        push offset public_5e0c58 @0x55086c*/
  FIXUP public_55086c : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e0c58
        call ebx
        test al, al
        mov ecx, edi
        je public_550891
        push 0
        call dword ptr ds : [public_5c6cfc]
        call public_5b7ec0
        mov dword ptr ds : [esi+0x110], eax
        jmp public_550a14
/*FIXUP public_550891 : nop
        push offset public_5e0c48 @0x550891*/
  FIXUP public_550891 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e0c48
        call ebx
        test al, al
        mov ecx, edi
        je public_5508b6
        push 0
        call dword ptr ds : [public_5c6cfc]
        call public_5b7ec0
        mov dword ptr ds : [esi+0x114], eax
        jmp public_550a14
/*FIXUP public_5508b6 : nop
        push offset public_5e0c38 @0x5508b6*/
  FIXUP public_5508b6 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e0c38
        call ebx
        test al, al
        mov ecx, edi
        je public_5508db
        push 0
        call dword ptr ds : [public_5c6cfc]
        call public_5b7ec0
        mov dword ptr ds : [esi+0x118], eax
        jmp public_550a14
/*FIXUP public_5508db : nop
        push offset public_5e0c28 @0x5508db*/
  FIXUP public_5508db : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e0c28
        call ebx
        test al, al
        mov ecx, edi
        je public_550900
        push 0
        call dword ptr ds : [public_5c6cfc]
        call public_5b7ec0
        mov dword ptr ds : [esi+0x11C], eax
        jmp public_550a14
/*FIXUP public_550900 : nop
        push offset public_5e0c10 @0x550900*/
  FIXUP public_550900 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e0c10
        call ebx
        test al, al
        mov ecx, edi
        je public_550925
        push 0
        call dword ptr ds : [public_5c6cfc]
        call public_5b7ec0
        mov dword ptr ds : [esi+0x124], eax
        jmp public_550a14
/*FIXUP public_550925 : nop
        push offset public_5e0bf8 @0x550925*/
  FIXUP public_550925 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e0bf8
        call ebx
        test al, al
        mov ecx, edi
        je public_55094a
        push 0
        call dword ptr ds : [public_5c6cfc]
        call public_5b7ec0
        mov dword ptr ds : [esi+0x120], eax
        jmp public_550a14
/*FIXUP public_55094a : nop
        push offset public_5e0be8 @0x55094a*/
  FIXUP public_55094a : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e0be8
        call ebx
        test al, al
        je public_550a14
        push 0
        mov ecx, edi
        call dword ptr ds : [public_5c6cfc]
        call public_5b7ec0
        mov dword ptr ds : [esi+0x128], eax
        jmp public_550a14
        public_550973 : nop
        mov ebp, dword ptr ss : [esp+0x18]
        cmp ebp, 2
        jge public_550a14
        push 0
        mov ecx, edi
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ss : [esp+0x44]
        push 1
        mov ecx, edi
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ss : [esp+0x48]
        push 2
        mov ecx, edi
        call dword ptr ds : [public_5c6cfc]
        fmul dword ptr ds : [public_5c7f68]
        sub esp, 0xC
        lea ecx, ss:[esp+0x5C]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x54]
        fmul dword ptr ds : [public_5c7f68]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x50]
        fmul dword ptr ds : [public_5c7f68]
        fstp dword ptr ss : [esp]
        call public_422b80
        test ebp, ebp
        mov eax, dword ptr ss : [esp+0x50]
        lea ecx, ss:[ebp+ebp*2+0x1E]
        lea edx, ds:[esi+ecx*4]
        mov ecx, dword ptr ss : [esp+0x54]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ss : [esp+0x58]
        mov dword ptr ds : [edx+4], ecx
        mov dword ptr ds : [edx+8], eax
        jne public_550a0f
        lea ecx, ds:[esi+0x78]
        mov eax, dword ptr ds : [ecx]
        lea edx, ds:[esi+0x84]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+4], eax
        mov dword ptr ds : [edx+8], ecx
        public_550a0f : nop
        inc ebp
        mov dword ptr ss : [esp+0x18], ebp
        public_550a14 : nop
        mov ecx, edi
        call dword ptr ds : [public_5c669c]
        test al, al
        jne public_550370
        xor ebx, ebx
        pop ebp
        public_550a27 : nop
        mov edx, dword ptr ds : [esi+0x68]
        fld dword ptr ds : [public_5c7474]
        cmp edx, ebx
        mov byte ptr ds : [esi+0xEC], 1
        pop edi
        jle public_550a49
        lea eax, ds:[esi+0x48]
        mov ecx, edx
        public_550a41 : nop
        fadd dword ptr ds : [eax]
        add eax, 4
        dec ecx
        jne public_550a41
        public_550a49 : nop
        xor ecx, ecx
        cmp edx, ebx
        jle public_550a6a
        fdivr dword ptr ds : [public_5c75dc]
        lea eax, ds:[esi+0x48]
        public_550a58 : nop
        fld st(0)
        inc ecx
        fmul dword ptr ds : [eax]
        add eax, 4
        fstp dword ptr ds : [eax-4]
        mov edx, dword ptr ds : [esi+0x68]
        cmp ecx, edx
        jl public_550a58
        public_550a6a : nop
        mov eax, dword ptr ds : [esi+4]
        fstp st(0)
        fld dword ptr ds : [esi+0xC0]
        mov ecx, esi
        fmul dword ptr ds : [public_5c75e0]
        mov dword ptr ds : [esi+0xC], eax
        mov dword ptr ds : [esi+0x10], eax
        fadd dword ptr ds : [esi+0xA8]
        fstp dword ptr ds : [esi+0x100]
        call public_550b60
        fld dword ptr ds : [esi+0xE4]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jne public_550b42
        fld qword ptr ds : [public_5e0be0]
        fptan 
        fstp st(0)
        fld dword ptr ds : [esi+0x100]
        fmul dword ptr ds : [public_5d8d40]
        fdiv st, st(1)
        fsub dword ptr ds : [esi+0xE4]
        fstp dword ptr ss : [esp+8]
        fmul dword ptr ds : [esi+0xE4]
        fld dword ptr ds : [esi+0xA8]
        fmul dword ptr ds : [public_5c9800]
        faddp 
        fmul dword ptr ds : [public_5c9804]
        fcom dword ptr ds : [esi+0x100]
        fnstsw ax
        test ah, 0x41
        jne public_550afc
        fstp st(0)
        fld dword ptr ss : [esp+8]
        jmp public_550b12
        public_550afc : nop
        fld dword ptr ds : [esi+0x100]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        fsubp 
        fsqrt 
        fstp st(2)
        fstp st(0)
        public_550b12 : nop
        fcom dword ptr ss : [esp+8]
        fnstsw ax
        test ah, 0x41
        jne public_550b23
        fstp st(0)
        fld dword ptr ss : [esp+8]
        public_550b23 : nop
        fadd dword ptr ds : [esi+0xE4]
        fsub dword ptr ds : [esi+0x100]
        fst dword ptr ds : [esi+0xBC]
        fcomp qword ptr ds : [public_5c8ba8]
        fnstsw ax
        test ah, 5
        jp public_550b48
        public_550b42 : nop
        mov dword ptr ds : [esi+0xBC], ebx
        public_550b48 : nop
        pop esi
        pop ebx
        add esp, 0xBC
        ret 8
        UNREACHABLE_TRAP(0x550240)
    }
}

#undef public_550264
#undef public_550370
#undef public_550394
#undef public_5503b4
#undef public_550438
#undef public_55048e
#undef public_5504a7
#undef public_5504c4
#undef public_5504e5
#undef public_550518
#undef public_550538
#undef public_550554
#undef public_550575
#undef public_550589
#undef public_5505c0
#undef public_5505d9
#undef public_5505e5
#undef public_550616
#undef public_550640
#undef public_5506b8
#undef public_5506d8
#undef public_5506f8
#undef public_550718
#undef public_550738
#undef public_5507ae
#undef public_5507ce
#undef public_5507ee
#undef public_55086c
#undef public_550891
#undef public_5508b6
#undef public_5508db
#undef public_550900
#undef public_550925
#undef public_55094a
#undef public_550973
#undef public_550a0f
#undef public_550a14
#undef public_550a27
#undef public_550a41
#undef public_550a49
#undef public_550a58
#undef public_550a6a
#undef public_550afc
#undef public_550b12
#undef public_550b23
#undef public_550b42
#undef public_550b48
