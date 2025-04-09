#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_406880);
CLANG_FORWARD_PROC_SYMBOL(public_411c50);
CLANG_FORWARD_PROC_SYMBOL(public_4215b0);
CLANG_FORWARD_PROC_SYMBOL(public_4347e0);
CLANG_FORWARD_PROC_SYMBOL(public_434e90);
CLANG_FORWARD_PROC_SYMBOL(public_4356c0);
CLANG_FORWARD_PROC_SYMBOL(public_43d2a0);
CLANG_FORWARD_PROC_SYMBOL(public_4c9a80);
CLANG_FORWARD_PROC_SYMBOL(public_4ca480);
CLANG_FORWARD_PROC_SYMBOL(public_4cb250);
CLANG_FORWARD_PROC_SYMBOL(public_4cba10);
CLANG_FORWARD_PROC_SYMBOL(public_4cba60);
CLANG_FORWARD_PROC_SYMBOL(public_4cbb40);
CLANG_FORWARD_PROC_SYMBOL(public_4cec20);
CLANG_FORWARD_PROC_SYMBOL(public_5472a0);
CLANG_FORWARD_PROC_SYMBOL(public_5472d0);
CLANG_FORWARD_PROC_SYMBOL(public_58a110);
CLANG_FORWARD_PROC_SYMBOL(public_58a530);
CLANG_FORWARD_PROC_SYMBOL(public_59db20);
CLANG_FORWARD_PROC_SYMBOL(public_5b3510);
CLANG_FORWARD_JUMP_SYMBOL(public_5bda5b);

#define public_4cb290 _public_4cb290
#define public_4cb2a5 _public_4cb2a5
#define public_4cb2d6 _public_4cb2d6
#define public_4cb2d8 _public_4cb2d8
#define public_4cb2e5 _public_4cb2e5
#define public_4cb3c0 _public_4cb3c0
#define public_4cb3e5 _public_4cb3e5
#define public_4cb3ff _public_4cb3ff
#define public_4cb422 _public_4cb422
#define public_4cb473 _public_4cb473
#define public_4cb484 _public_4cb484
#define public_4cb4e5 _public_4cb4e5
#define public_4cb4f5 _public_4cb4f5
#define public_4cb4f7 _public_4cb4f7
#define public_4cb580 _public_4cb580
#define public_4cb597 _public_4cb597
#define public_4cb5b0 _public_4cb5b0
#define public_4cb5cb _public_4cb5cb
#define public_4cb5d3 _public_4cb5d3
#define public_4cb624 _public_4cb624
#define public_4cb639 _public_4cb639
#define public_4cb644 _public_4cb644
#define public_4cb660 _public_4cb660
#define public_4cb671 _public_4cb671
#define public_4cb6b2 _public_4cb6b2
#define public_4cb6c2 _public_4cb6c2
#define public_4cb6c4 _public_4cb6c4
#define public_4cb743 _public_4cb743
#define public_4cb75c _public_4cb75c
#define public_4cb769 _public_4cb769
#define public_4cb79a _public_4cb79a
#define public_4cb80d _public_4cb80d
#define public_4cb87f _public_4cb87f
#define public_4cb8d1 _public_4cb8d1
#define public_4cb8e4 _public_4cb8e4
#define public_4cb8f7 _public_4cb8f7
#define public_4cb908 _public_4cb908
#define public_4cb90a _public_4cb90a
#define public_4cb940 _public_4cb940
#define public_4cb957 _public_4cb957
#define public_4cb974 _public_4cb974
#define public_4cb994 _public_4cb994
#define public_4cb9c3 _public_4cb9c3
#define public_4cb9d6 _public_4cb9d6
#define public_4cb9ea _public_4cb9ea

PROC_DECLARE(0x4cb250, internal_4cb250, public_4cb250);
extern "C" NAKED register_t __cdecl internal_4cb250()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bda5b @0x4cb252*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bda5b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x278
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x1BC]
        push edi
        xor edi, edi
        cmp eax, edi
        mov dword ptr ss : [esp+0x14], esi
        je public_4cb290
        push eax
        call public_43d2a0
        add esp, 4
        mov dword ptr ds : [esi+0x1BC], edi
        public_4cb290 : nop
        mov ecx, esi
        call public_4cbb40
        cmp dword ptr ds : [esi+0x170], edi
        je public_4cb2a5
        mov dword ptr ds : [esi+0x170], edi
        public_4cb2a5 : nop
        mov eax, dword ptr ss : [esp+0x298]
        cmp eax, edi
        mov byte ptr ds : [esi+0x174], 0
        mov dword ptr ds : [esi+0x1C0], edi
        mov dword ptr ds : [esi+0x1C4], edi
        mov dword ptr ds : [esi+0x1C8], edi
        mov dword ptr ds : [esi+0x1CC], edi
        je public_4cb2d6
        add eax, 0x9C
        jmp public_4cb2d8
        public_4cb2d6 : nop
        xor eax, eax
        public_4cb2d8 : nop
        cmp eax, dword ptr ds : [esi]
        je public_4cb2e5
        push eax
        mov ecx, esi
        call dword ptr ds : [public_5c62a8]
        public_4cb2e5 : nop
        mov eax, dword ptr ss : [esp+0x2D4]
        mov dword ptr ds : [esi+0x1B4], eax
        push 5
        mov byte ptr ds : [esi+0x84], 1
        mov byte ptr ds : [esi+0x85], 0
        mov byte ptr ds : [esi+0x38], 1
        call public_5b3510
        fcomp qword ptr ds : [public_5c8ba8]
        add esp, 4
        fnstsw ax
        test ah, 0x41
        jne public_4cb75c
        lea ecx, ss:[esp+0x2A0]
        push ecx
        mov ecx, offset public_6735b4
        call public_4c9a80
        cmp eax, edi
        mov dword ptr ds : [esi+0x170], eax
        mov byte ptr ds : [esi+0x174], 0
        je public_4cb769
        lea edx, ss:[esp+0x2A0]
        push edx
        call dword ptr ds : [public_5c60e4]
        mov ecx, eax
        call dword ptr ds : [public_5c61e8]
        lea ecx, ss:[esp+0x28]
        mov ebp, eax
        call public_4215b0
        cmp ebp, 1
        mov ebx, dword ptr ss : [esp+0x14]
        lea esi, ds:[ebx+0x178]
        mov ecx, 9
        lea edi, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x54], 0
        mov dword ptr ss : [esp+0x50], 0
        mov dword ptr ss : [esp+0x4C], 0
        rep movsd
        je public_4cb3e5
        cmp ebp, 2
        jne public_4cb3c0
        lea ecx, ds:[ebx+0x1A8]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x4C], edx
        mov dword ptr ss : [esp+0x50], eax
        mov dword ptr ss : [esp+0x54], ecx
        jmp public_4cb3ff
        lea ebx, ds:[ebx]
        public_4cb3c0 : nop
        mov edx, dword ptr ds : [public_5c6d18]
/*FIXUP push offset public_5d7448 @0x4cb3c6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d7448
        push 0x523
/*FIXUP push offset public_5d7220 @0x4cb3d0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d7220
        mov eax, 0x100002
/*FIXUP push offset public_5c8bd4 @0x4cb3da*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8bd4
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        public_4cb3e5 : nop
        lea eax, ds:[ebx+0x19C]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x4C], ecx
        mov dword ptr ss : [esp+0x50], edx
        mov dword ptr ss : [esp+0x54], eax
        public_4cb3ff : nop
        mov eax, dword ptr ds : [ebx+0x170]
        mov eax, dword ptr ds : [eax]
        test eax, eax
        je public_4cb422
        mov ecx, dword ptr ds : [public_5c6d58]
        fld dword ptr ss : [esp+0x50]
        mov ecx, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [ecx]
        push ecx
        fstp dword ptr ss : [esp]
        push eax
        push ecx
        call dword ptr ds : [edx+0x60]
        public_4cb422 : nop
        mov esi, dword ptr ds : [ebx+0x170]
        mov eax, dword ptr ds : [public_5c6d58]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x4C]
        push edx
        mov edx, dword ptr ds : [esi]
        push edx
        push eax
        call dword ptr ds : [ecx+0x4C]
        mov eax, dword ptr ds : [public_5c6d58]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x28]
        push edx
        mov edx, dword ptr ds : [esi]
        push edx
        push eax
        call dword ptr ds : [ecx+0x50]
        mov ecx, dword ptr ss : [esp+0x2D8]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x18]
        mov dword ptr ss : [esp+0x1C], eax
        mov eax, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [eax]
        cmp ecx, eax
        mov dword ptr ss : [esp+0x10], ecx
        je public_4cb597
        public_4cb473 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov ebx, dword ptr ds : [ecx+0xC]
        test ebx, ebx
        jne public_4cb484
        mov ebx, dword ptr ds : [public_5c7078]
        public_4cb484 : nop
        mov eax, dword ptr ds : [public_5c6d90]
        mov edx, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [eax]
        mov ebp, dword ptr ds : [edx+0x170]
        mov esi, dword ptr ds : [ecx]
        mov ecx, ebp
        call public_4ca480
        mov edx, dword ptr ds : [public_5c6d90]
        push eax
        mov eax, dword ptr ds : [edx]
        push eax
        call dword ptr ds : [esi+0xA0]
        push eax
        lea ecx, ss:[esp+0x5C]
        call public_406880
        test ebx, ebx
        lea edi, ss:[ebp+0x268]
        mov ecx, 0xC
        lea esi, ss:[esp+0x58]
        rep movsd
        je public_4cb580
        cmp byte ptr ds : [ebx], 0
        je public_4cb580
        or edi, 0xFFFFFFFF
        xor eax, eax
        lea ecx, ss:[ebp+0x254]
        public_4cb4e5 : nop
        cmp dword ptr ds : [ecx], 0xFFFFFFFF
        je public_4cb4f5
        inc eax
        add ecx, 4
        cmp eax, 4
        jl public_4cb4e5
        jmp public_4cb4f7
        public_4cb4f5 : nop
        mov edi, eax
        public_4cb4f7 : nop
        mov ecx, edi
        imul ecx, 0x84
        lea esi, ds:[ecx+ebp]
        lea ecx, ds:[esi+0x44]
        push ebx
        call public_4cec20
        add esi, 0x48
        push esi
        call public_4356c0
        mov ecx, eax
        call public_434e90
        mov edx, dword ptr ds : [public_5c6d58]
        mov ecx, dword ptr ds : [edx]
        push 0
        mov edx, dword ptr ds : [ecx]
        push 0xBF800000
        push 0
        push 0x3F800000
        push 0x3F800000
        push 0
        push 0
        push ebx
        push eax
        lea eax, ss:[ebp+edi*4+0x254]
        push eax
        mov eax, dword ptr ss : [ebp]
        push eax
        push ecx
        call dword ptr ds : [edx+0x1C]
        test eax, eax
        je public_4cb580
        push 2
        push 0x10000
        lea ecx, ss:[esp+0x20]
        call public_411c50
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [public_5c6d18]
        push ebx
        push 0x1F7
/*FIXUP push offset public_5d7188 @0x4cb570*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d7188
/*FIXUP push offset public_5d7408 @0x4cb575*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d7408
        push ecx
        call dword ptr ds : [edx]
        add esp, 0x14
        public_4cb580 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [ecx+4]
        mov dword ptr ss : [esp+0x10], eax
        jne public_4cb473
        public_4cb597 : nop
        mov edx, dword ptr ss : [esp+0x14]
        mov esi, dword ptr ds : [edx+0x170]
        mov dword ptr ss : [esp+0x10], 0x3DCCCCCD
        lea esp, ss:[esp]
        public_4cb5b0 : nop
        fld dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [public_5d043c]
        fnstsw ax
        test ah, 5
        jp public_4cb5cb
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x18], eax
        jmp public_4cb5d3
        public_4cb5cb : nop
        mov dword ptr ss : [esp+0x18], 0x3E4CCCCD
        public_4cb5d3 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        push ecx
        mov ecx, esi
        call public_4cba60
        fld dword ptr ss : [esp+0x10]
        fsub dword ptr ss : [esp+0x18]
        fst dword ptr ss : [esp+0x10]
        fcomp qword ptr ds : [public_5c8ba8]
        fnstsw ax
        test ah, 0x41
        je public_4cb5b0
        mov edx, dword ptr ss : [esp+0x14]
        mov esi, dword ptr ds : [edx+0x170]
        mov ecx, dword ptr ds : [esi]
        test ecx, ecx
        je public_4cb644
        mov eax, dword ptr ds : [public_5c6d58]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x24]
        lea ecx, ds:[esi+0x254]
        lea eax, ds:[esi+0x44]
        mov edx, 4
        public_4cb624 : nop
        cmp dword ptr ds : [ecx], 0xFFFFFFFF
        je public_4cb639
        mov dword ptr ds : [eax], 0
        mov byte ptr ds : [eax+4], 0
        mov dword ptr ds : [ecx], 0xFFFFFFFF
        public_4cb639 : nop
        add ecx, 4
        add eax, 0x84
        dec edx
        jne public_4cb624
        public_4cb644 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [eax]
        cmp ecx, eax
        mov dword ptr ss : [esp+0x10], ecx
        je public_4cb769
        lea esp, ss:[esp]
        public_4cb660 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov ebx, dword ptr ds : [ecx+0xC]
        test ebx, ebx
        jne public_4cb671
        mov ebx, dword ptr ds : [public_5c7078]
        public_4cb671 : nop
        mov edx, dword ptr ss : [esp+0x14]
        mov ebp, dword ptr ds : [edx+0x170]
        lea eax, ss:[esp+0x58]
        push eax
        mov ecx, ebp
        call public_4cba10
        test ebx, ebx
        lea edi, ss:[ebp+0x268]
        mov ecx, 0xC
        mov esi, eax
        rep movsd
        je public_4cb743
        cmp byte ptr ds : [ebx], 0
        je public_4cb743
        or edi, 0xFFFFFFFF
        xor eax, eax
        lea ecx, ss:[ebp+0x254]
        public_4cb6b2 : nop
        cmp dword ptr ds : [ecx], 0xFFFFFFFF
        je public_4cb6c2
        inc eax
        add ecx, 4
        cmp eax, 4
        jl public_4cb6b2
        jmp public_4cb6c4
        public_4cb6c2 : nop
        mov edi, eax
        public_4cb6c4 : nop
        mov ecx, edi
        imul ecx, 0x84
        lea esi, ds:[ecx+ebp]
        lea ecx, ds:[esi+0x44]
        push ebx
        call public_4cec20
        add esi, 0x48
        push esi
        call public_4356c0
        mov ecx, eax
        call public_434e90
        mov edx, dword ptr ds : [public_5c6d58]
        mov ecx, dword ptr ds : [edx]
        push 0
        mov edx, dword ptr ds : [ecx]
        push 0xBF800000
        push 2
        push 0x3F800000
        push 0x3F800000
        push 0x3E99999A
        push 0
        push ebx
        push eax
        lea eax, ss:[ebp+edi*4+0x254]
        push eax
        mov eax, dword ptr ss : [ebp]
        push eax
        push ecx
        call dword ptr ds : [edx+0x1C]
        test eax, eax
        je public_4cb743
        mov ecx, dword ptr ds : [public_5c6d18]
        push ebx
        push 0x1F7
/*FIXUP push offset public_5d7188 @0x4cb72e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d7188
        mov eax, 0x100002
/*FIXUP push offset public_5d7408 @0x4cb738*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d7408
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        public_4cb743 : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ss : [esp+0x1C]
        cmp eax, dword ptr ds : [ecx+4]
        mov dword ptr ss : [esp+0x10], eax
        jne public_4cb660
        jmp public_4cb769
        public_4cb75c : nop
        mov dword ptr ds : [esi+0x170], edi
        mov byte ptr ds : [esi+0x174], 1
        public_4cb769 : nop
        mov esi, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [esi+0x1BC]
        xor ebp, ebp
        cmp eax, ebp
        jne public_4cb79a
        mov edx, dword ptr ss : [esp+0x2DC]
        push ebp
        push edx
/*FIXUP push offset public_5d73fc @0x4cb782*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d73fc
/*FIXUP push offset public_5d73f0 @0x4cb787*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d73f0
        call public_59db20
        add esp, 0x10
        mov dword ptr ds : [esi+0x1BC], eax
        public_4cb79a : nop
        mov eax, dword ptr ds : [esi+0x1BC]
        cmp eax, ebp
        je public_4cb9ea
        mov dl, byte ptr ds : [eax+0x6C]
        push 1
        push ebp
        push 1
        push ebp
        push 0x3F800000
        push 0x3D75C28F
        push 0x3E041893
        or dl, 3
        mov byte ptr ds : [eax+0x6C], dl
        mov ecx, dword ptr ds : [esi+0x1BC]
        push ebp
        lea eax, ss:[esp+0x3C]
        push eax
/*FIXUP push offset public_5d0608 @0x4cb7d2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0608
        mov dword ptr ss : [esp+0x44], 0xBF028F5C
        mov dword ptr ss : [esp+0x48], 0x3E6A7EFA
        mov dword ptr ss : [esp+0x4C], 0xBF800000
        call public_58a110
        mov eax, dword ptr ds : [esi+0x1BC]
        mov eax, dword ptr ds : [eax+0x334]
        cmp byte ptr ds : [eax+0x30], 1
        je public_4cb80d
        mov byte ptr ds : [eax+0x30], 1
        mov dword ptr ds : [eax+0x28], ebp
        public_4cb80d : nop
        mov ecx, dword ptr ds : [esi+0x1BC]
        mov edx, dword ptr ds : [ecx]
        push 1
/*FIXUP push offset public_679bb4 @0x4cb817*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_679bb4
        push 0x33
        call dword ptr ds : [edx+0xA8]
        mov ebx, dword ptr ds : [public_5c70ac]
        mov word ptr ds : [public_66fc60], bp
        mov eax, dword ptr ds : [esi]
        xor edi, edi
        cmp eax, ebp
        je public_4cb974
        add eax, 0xFFFFFF64
        cmp eax, ebp
        je public_4cb974
        mov dword ptr ss : [esp+0x1C], ebp
        mov dword ptr ss : [esp+0x20], ebp
        lea ecx, ss:[esp+0x1C]
        push ecx
        push eax
        mov dword ptr ss : [esp+0x298], ebp
        call public_5472d0
        add esp, 8
        test eax, eax
        je public_4cb87f
        mov edx, dword ptr ss : [esp+0x1C]
        push edx
/*FIXUP push offset public_66fc60 @0x4cb870*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call ebx
        add esp, 8
        mov edi, 1
        public_4cb87f : nop
        mov eax, dword ptr ds : [esi]
        cmp eax, ebp
        je public_4cb8f7
        lea ecx, ds:[eax-0x9C]
        cmp ecx, ebp
        je public_4cb8f7
        mov eax, dword ptr ds : [ecx+0x4C]
        and eax, 0x503
        cmp eax, 0x503
        jne public_4cb8f7
        call dword ptr ds : [public_5c6354]
        cmp eax, ebp
        je public_4cb8f7
        mov edx, dword ptr ds : [public_67eca8]
        push 0x100
        lea ecx, ss:[esp+0x8C]
        push ecx
        push eax
        push edx
        call public_4347e0
        add esp, 0x10
        test eax, eax
        jne public_4cb8d1
        mov word ptr ss : [esp+0x88], bp
        public_4cb8d1 : nop
        cmp edi, ebp
        jle public_4cb8e4
/*FIXUP push offset public_5d0254 @0x4cb8d5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0254
/*FIXUP push offset public_66fc60 @0x4cb8da*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call ebx
        add esp, 8
        public_4cb8e4 : nop
        lea eax, ss:[esp+0x88]
        push eax
/*FIXUP push offset public_66fc60 @0x4cb8ec*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call ebx
        add esp, 8
        inc edi
        public_4cb8f7 : nop
        cmp edi, ebp
        jne public_4cb957
        mov eax, dword ptr ds : [esi]
        cmp eax, ebp
        je public_4cb908
        add eax, 0xFFFFFF64
        jmp public_4cb90a
        public_4cb908 : nop
        xor eax, eax
        public_4cb90a : nop
        push eax
        call public_5472a0
        add esp, 4
        cmp eax, ebp
        je public_4cb957
        mov edx, dword ptr ds : [public_67eca8]
        push 0x100
        lea ecx, ss:[esp+0x8C]
        push ecx
        push eax
        push edx
        call public_4347e0
        add esp, 0x10
        test eax, eax
        jne public_4cb940
        mov word ptr ss : [esp+0x88], bp
        public_4cb940 : nop
        lea eax, ss:[esp+0x88]
        push eax
/*FIXUP push offset public_66fc60 @0x4cb948*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call ebx
        add esp, 8
        mov edi, 1
        public_4cb957 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        cmp eax, ebp
        mov dword ptr ss : [esp+0x290], 0xFFFFFFFF
        je public_4cb974
        push eax
        call dword ptr ds : [public_5c71d8]
        add esp, 4
        public_4cb974 : nop
        cmp dword ptr ds : [esi+0x1B4], ebp
        je public_4cb9d6
        cmp edi, 2
        jge public_4cb9d6
        cmp edi, ebp
        jle public_4cb994
/*FIXUP push offset public_5d0254 @0x4cb985*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0254
/*FIXUP push offset public_66fc60 @0x4cb98a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call ebx
        add esp, 8
        public_4cb994 : nop
        mov eax, dword ptr ds : [esi+0x1B4]
        mov edx, dword ptr ds : [public_67eca8]
        push 0x100
        lea ecx, ss:[esp+0x8C]
        push ecx
        push eax
        push edx
        call public_4347e0
        add esp, 0x10
        test eax, eax
        jne public_4cb9c3
        mov word ptr ss : [esp+0x88], bp
        public_4cb9c3 : nop
        lea eax, ss:[esp+0x88]
        push eax
/*FIXUP push offset public_66fc60 @0x4cb9cb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call ebx
        add esp, 8
        inc edi
        public_4cb9d6 : nop
        cmp edi, ebp
        jle public_4cb9ea
        mov ecx, dword ptr ds : [esi+0x1BC]
/*FIXUP push offset public_66fc60 @0x4cb9e0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call public_58a530
        public_4cb9ea : nop
        mov ecx, dword ptr ss : [esp+0x288]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x284
        ret 0x48
        UNREACHABLE_TRAP(0x4cb250)
    }
}

#undef public_4cb290
#undef public_4cb2a5
#undef public_4cb2d6
#undef public_4cb2d8
#undef public_4cb2e5
#undef public_4cb3c0
#undef public_4cb3e5
#undef public_4cb3ff
#undef public_4cb422
#undef public_4cb473
#undef public_4cb484
#undef public_4cb4e5
#undef public_4cb4f5
#undef public_4cb4f7
#undef public_4cb580
#undef public_4cb597
#undef public_4cb5b0
#undef public_4cb5cb
#undef public_4cb5d3
#undef public_4cb624
#undef public_4cb639
#undef public_4cb644
#undef public_4cb660
#undef public_4cb671
#undef public_4cb6b2
#undef public_4cb6c2
#undef public_4cb6c4
#undef public_4cb743
#undef public_4cb75c
#undef public_4cb769
#undef public_4cb79a
#undef public_4cb80d
#undef public_4cb87f
#undef public_4cb8d1
#undef public_4cb8e4
#undef public_4cb8f7
#undef public_4cb908
#undef public_4cb90a
#undef public_4cb940
#undef public_4cb957
#undef public_4cb974
#undef public_4cb994
#undef public_4cb9c3
#undef public_4cb9d6
#undef public_4cb9ea
