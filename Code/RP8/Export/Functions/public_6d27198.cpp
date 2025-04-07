#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d22bdf);
CLANG_FORWARD_PROC_SYMBOL(public_6d22ed0);
CLANG_FORWARD_PROC_SYMBOL(public_6d22f4d);
CLANG_FORWARD_PROC_SYMBOL(public_6d22f85);
CLANG_FORWARD_PROC_SYMBOL(public_6d234a6);
CLANG_FORWARD_PROC_SYMBOL(public_6d23639);
CLANG_FORWARD_PROC_SYMBOL(public_6d236f4);
CLANG_FORWARD_PROC_SYMBOL(public_6d23d9b);
CLANG_FORWARD_PROC_SYMBOL(public_6d23e0a);
CLANG_FORWARD_PROC_SYMBOL(public_6d27198);
CLANG_FORWARD_PROC_SYMBOL(public_6d27cd7);
CLANG_FORWARD_PROC_SYMBOL(public_6d29b10);
CLANG_FORWARD_PROC_SYMBOL(public_6d2a2d0);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f249);

#define public_6d271cd _public_6d271cd
#define public_6d271e1 _public_6d271e1
#define public_6d271ec _public_6d271ec
#define public_6d2720b _public_6d2720b
#define public_6d2726a _public_6d2726a
#define public_6d27287 _public_6d27287
#define public_6d272a3 _public_6d272a3
#define public_6d27317 _public_6d27317
#define public_6d2732e _public_6d2732e
#define public_6d27407 _public_6d27407
#define public_6d27409 _public_6d27409
#define public_6d27428 _public_6d27428
#define public_6d27457 _public_6d27457
#define public_6d27478 _public_6d27478
#define public_6d27556 _public_6d27556
#define public_6d2757d _public_6d2757d
#define public_6d275b5 _public_6d275b5
#define public_6d275b7 _public_6d275b7
#define public_6d275d7 _public_6d275d7
#define public_6d27606 _public_6d27606
#define public_6d27628 _public_6d27628
#define public_6d27694 _public_6d27694
#define public_6d276bf _public_6d276bf
#define public_6d276c1 _public_6d276c1
#define public_6d276d8 _public_6d276d8
#define public_6d276dd _public_6d276dd
#define public_6d27761 _public_6d27761
#define public_6d2777d _public_6d2777d
#define public_6d2777f _public_6d2777f
#define public_6d27794 _public_6d27794
#define public_6d277b6 _public_6d277b6
#define public_6d277bb _public_6d277bb
#define public_6d277f2 _public_6d277f2
#define public_6d27819 _public_6d27819
#define public_6d2782f _public_6d2782f
#define public_6d278b6 _public_6d278b6
#define public_6d278d1 _public_6d278d1
#define public_6d278d3 _public_6d278d3
#define public_6d278f3 _public_6d278f3
#define public_6d27922 _public_6d27922
#define public_6d27944 _public_6d27944
#define public_6d27a2f _public_6d27a2f
#define public_6d27a56 _public_6d27a56
#define public_6d27ae0 _public_6d27ae0
#define public_6d27ae2 _public_6d27ae2
#define public_6d27b02 _public_6d27b02
#define public_6d27b31 _public_6d27b31
#define public_6d27b53 _public_6d27b53
#define public_6d27b7c _public_6d27b7c
#define public_6d27bb3 _public_6d27bb3
#define public_6d27bb5 _public_6d27bb5
#define public_6d27bd5 _public_6d27bd5
#define public_6d27c04 _public_6d27c04
#define public_6d27c26 _public_6d27c26
#define public_6d27c46 _public_6d27c46
#define public_6d27c5a _public_6d27c5a
#define public_6d27c5c _public_6d27c5c
#define public_6d27c90 _public_6d27c90
#define public_6d27ca8 _public_6d27ca8
#define public_6d27cba _public_6d27cba
#define public_6d27cce _public_6d27cce
#define public_6d27cd0 _public_6d27cd0

PROC_DECLARE(0x6d27198, internal_6d27198, public_6d27198);
extern "C" NAKED register_t __cdecl internal_6d27198()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x52C
        push edi
        mov dword ptr ss : [ebp-0x510], ecx
        mov dword ptr ss : [ebp-0x410], 0x100
        mov dword ptr ss : [ebp-0x40C], 0
        mov dword ptr ss : [ebp-0x408], 0
        mov byte ptr ss : [ebp-0x401], 1
        public_6d271cd : nop
        movzx eax, byte ptr ss : [ebp-0x401]
        test eax, eax
        je public_6d271e1
        mov byte ptr ss : [ebp-0x401], 0
        jmp public_6d271ec
        public_6d271e1 : nop
        mov ecx, dword ptr ss : [ebp-0x510]
        call public_6d22ed0
/*FIXUP public_6d271ec : nop
        push offset public_6d5e738 @0x6d271ec*/
  FIXUP public_6d271ec : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d5e738
        mov ecx, dword ptr ss : [ebp-0x510]
        call public_6d23d9b
        xor ecx, ecx
        mov cl, al
        test ecx, ecx
        je public_6d2720b
        mov al, 1
        jmp public_6d27cd0
        public_6d2720b : nop
        mov ecx, dword ptr ss : [ebp-0x510]
        call public_6d22f4d
        mov edx, dword ptr ss : [ebp-0x510]
        mov eax, dword ptr ds : [edx+8]
        movsx ecx, byte ptr ds : [eax]
        cmp ecx, 0xD
        je public_6d27c90
        mov edx, dword ptr ss : [ebp-0x510]
        mov eax, dword ptr ds : [edx+8]
        movzx ecx, word ptr ds : [eax]
        cmp ecx, 0x2F2F
        je public_6d27c90
        mov edx, dword ptr ss : [ebp-0x510]
        mov eax, dword ptr ds : [edx+8]
        movsx ecx, byte ptr ds : [eax]
        cmp ecx, 0x30
        jl public_6d2726a
        mov edx, dword ptr ss : [ebp-0x510]
        mov eax, dword ptr ds : [edx+8]
        movsx ecx, byte ptr ds : [eax]
        cmp ecx, 0x39
        jg public_6d2726a
        jmp public_6d27c90
/*FIXUP public_6d2726a : nop
        push offset public_6d5e7d8 @0x6d2726a*/
  FIXUP public_6d2726a : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d5e7d8
        mov ecx, dword ptr ss : [ebp-0x510]
        call public_6d23d9b
        xor edx, edx
        mov dl, al
        test edx, edx
        je public_6d27287
        jmp public_6d27c90
/*FIXUP public_6d27287 : nop
        push offset public_6d5e7d0 @0x6d27287*/
  FIXUP public_6d27287 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d5e7d0
        mov ecx, dword ptr ss : [ebp-0x510]
        call public_6d23d9b
        movzx eax, al
        test eax, eax
        je public_6d272a3
        jmp public_6d27ca8
/*FIXUP public_6d272a3 : nop
        push offset public_6d5eadc @0x6d272a3*/
  FIXUP public_6d272a3 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d5eadc
        mov ecx, dword ptr ss : [ebp-0x510]
        call public_6d23d9b
        xor ecx, ecx
        mov cl, al
        test ecx, ecx
        je public_6d276dd
        mov edi, offset public_6d5eadc
        mov ecx, 0xFFFFFFFF
        xor eax, eax
        repne scasb
        not ecx
        add ecx, 0xFFFFFFFF
        mov edx, dword ptr ss : [ebp-0x510]
        add ecx, dword ptr ds : [edx+8]
        mov eax, dword ptr ss : [ebp-0x510]
        mov dword ptr ds : [eax+8], ecx
        mov ecx, dword ptr ss : [ebp-0x510]
        call public_6d22f4d
        mov ecx, dword ptr ss : [ebp-0x510]
        mov edx, dword ptr ds : [ecx+8]
        movsx eax, byte ptr ds : [edx]
        cmp eax, 0x3D
        jne public_6d27317
        mov ecx, dword ptr ss : [ebp-0x510]
        mov edx, dword ptr ds : [ecx+8]
        add edx, 1
        mov eax, dword ptr ss : [ebp-0x510]
        mov dword ptr ds : [eax+8], edx
        jmp public_6d2732e
/*FIXUP public_6d27317 : nop
        push offset public_6d6bfc0 @0x6d27317*/
  FIXUP public_6d27317 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6bfc0
        mov ecx, dword ptr ss : [ebp-0x510]
        call public_6d22f85
        xor al, al
        jmp public_6d27cd0
        public_6d2732e : nop
        mov ecx, dword ptr ss : [ebp-0x510]
        call public_6d22f4d
        mov ecx, dword ptr ss : [ebp-0x510]
        call public_6d234a6
        mov dword ptr ss : [ebp-0x414], eax
        cmp dword ptr ss : [ebp-0x414], 0xFFFFFFFF
        je public_6d276c1
        mov cx, word ptr ds : [public_6d6bfde]
        mov word ptr ss : [ebp-0x424], cx
        xor edx, edx
        mov dword ptr ss : [ebp-0x422], edx
        mov dword ptr ss : [ebp-0x41E], edx
        mov dword ptr ss : [ebp-0x41A], edx
        mov word ptr ss : [ebp-0x416], dx
        mov eax, dword ptr ss : [ebp-0x414]
        push eax
/*FIXUP push offset public_6d6bfe0 @0x6d27387*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6bfe0
        lea ecx, ss:[ebp-0x434]
        push ecx
        call dword ptr ds : [public_6d5e13c]
        add esp, 0xC
        push 0x10
        lea edx, ss:[ebp-0x424]
        push edx
/*FIXUP push offset public_6d5eac4 @0x6d273a5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d5eac4
        mov eax, dword ptr ss : [ebp-0x510]
        mov ecx, dword ptr ds : [eax+0x18]
        call public_6d22bdf
        xor ecx, ecx
        mov cl, al
        test ecx, ecx
        je public_6d276bf
        lea edx, ss:[ebp-0x424]
        push edx
        call dword ptr ds : [public_6d5e0d8]
        add esp, 4
        mov dword ptr ss : [ebp-0x438], eax
        mov eax, dword ptr ss : [ebp-0x438]
        cmp eax, dword ptr ss : [ebp-0x414]
        jbe public_6d276bf
        mov cl, byte ptr ss : [ebp-0x475]
        mov byte ptr ss : [ebp-0x474], cl
        xor edx, edx
        test edx, edx
        je public_6d27407
        cmp dword ptr ss : [ebp-0x470], 0
        jne public_6d27409
        public_6d27407 : nop
        jmp public_6d27478
        public_6d27409 : nop
        mov eax, dword ptr ss : [ebp-0x470]
        movzx ecx, byte ptr ds : [eax-1]
        test ecx, ecx
        je public_6d27428
        mov edx, dword ptr ss : [ebp-0x470]
        movzx eax, byte ptr ds : [edx-1]
        cmp eax, 0xFF
        jne public_6d27457
        public_6d27428 : nop
        mov ecx, dword ptr ss : [ebp-0x468]
        add ecx, 2
        mov dword ptr ss : [ebp-0x498], ecx
        mov edx, dword ptr ss : [ebp-0x470]
        sub edx, 1
        mov dword ptr ss : [ebp-0x494], edx
        mov eax, dword ptr ss : [ebp-0x494]
        push eax
        call public_6d2f249
        add esp, 4
        jmp public_6d27478
        public_6d27457 : nop
        mov ecx, dword ptr ss : [ebp-0x470]
        sub ecx, 1
        mov dword ptr ss : [ebp-0x514], ecx
        mov edx, dword ptr ss : [ebp-0x514]
        mov al, byte ptr ds : [edx]
        sub al, 1
        mov ecx, dword ptr ss : [ebp-0x514]
        mov byte ptr ds : [ecx], al
        public_6d27478 : nop
        mov dword ptr ss : [ebp-0x470], 0
        mov dword ptr ss : [ebp-0x46C], 0
        mov dword ptr ss : [ebp-0x468], 0
        lea edi, ss:[ebp-0x434]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        repne scasb
        not ecx
        add ecx, 0xFFFFFFFF
        push ecx
        lea edx, ss:[ebp-0x434]
        push edx
        lea ecx, ss:[ebp-0x474]
        call dword ptr ds : [public_6d5e078]
        mov eax, dword ptr ss : [ebp-0x510]
        add eax, 0x570
        mov dword ptr ss : [ebp-0x4BC], eax
        lea ecx, ss:[ebp-0x474]
        push ecx
        lea edx, ss:[ebp-0x49C]
        push edx
        mov ecx, dword ptr ss : [ebp-0x4BC]
        call public_6d29b10
        mov eax, dword ptr ss : [ebp-0x4BC]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [ebp-0x4AC], ecx
        mov edx, dword ptr ss : [ebp-0x4AC]
        mov dword ptr ss : [ebp-0x4A4], edx
        mov eax, dword ptr ss : [ebp-0x49C]
        sub eax, dword ptr ss : [ebp-0x4A4]
        neg eax
        sbb eax, eax
        inc eax
        xor ecx, ecx
        mov cl, al
        test ecx, ecx
        jne public_6d27556
        mov edx, dword ptr ss : [ebp-0x49C]
        add edx, 0xC
        mov dword ptr ss : [ebp-0x4B4], edx
        mov eax, dword ptr ss : [ebp-0x4B4]
        push eax
        lea ecx, ss:[ebp-0x474]
        push ecx
        call dword ptr ds : [public_6d5e0ac]
        add esp, 8
        xor edx, edx
        mov dl, al
        test edx, edx
        jne public_6d27556
        lea eax, ss:[ebp-0x49C]
        mov dword ptr ss : [ebp-0x518], eax
        jmp public_6d2757d
        public_6d27556 : nop
        mov ecx, dword ptr ss : [ebp-0x4BC]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ss : [ebp-0x4B8], edx
        mov eax, dword ptr ss : [ebp-0x4B8]
        mov dword ptr ss : [ebp-0x4A8], eax
        lea ecx, ss:[ebp-0x4A8]
        mov dword ptr ss : [ebp-0x518], ecx
        public_6d2757d : nop
        mov edx, dword ptr ss : [ebp-0x518]
        mov dword ptr ss : [ebp-0x4A0], edx
        mov eax, dword ptr ss : [ebp-0x4A0]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [ebp-0x47C], ecx
        mov edx, dword ptr ss : [ebp-0x47C]
        mov dword ptr ss : [ebp-0x440], edx
        mov eax, 1
        test eax, eax
        je public_6d275b5
        cmp dword ptr ss : [ebp-0x470], 0
        jne public_6d275b7
        public_6d275b5 : nop
        jmp public_6d27628
        public_6d275b7 : nop
        mov ecx, dword ptr ss : [ebp-0x470]
        movzx edx, byte ptr ds : [ecx-1]
        test edx, edx
        je public_6d275d7
        mov eax, dword ptr ss : [ebp-0x470]
        movzx ecx, byte ptr ds : [eax-1]
        cmp ecx, 0xFF
        jne public_6d27606
        public_6d275d7 : nop
        mov edx, dword ptr ss : [ebp-0x468]
        add edx, 2
        mov dword ptr ss : [ebp-0x4C4], edx
        mov eax, dword ptr ss : [ebp-0x470]
        sub eax, 1
        mov dword ptr ss : [ebp-0x4C0], eax
        mov ecx, dword ptr ss : [ebp-0x4C0]
        push ecx
        call public_6d2f249
        add esp, 4
        jmp public_6d27628
        public_6d27606 : nop
        mov edx, dword ptr ss : [ebp-0x470]
        sub edx, 1
        mov dword ptr ss : [ebp-0x51C], edx
        mov eax, dword ptr ss : [ebp-0x51C]
        mov cl, byte ptr ds : [eax]
        sub cl, 1
        mov edx, dword ptr ss : [ebp-0x51C]
        mov byte ptr ds : [edx], cl
        public_6d27628 : nop
        mov dword ptr ss : [ebp-0x470], 0
        mov dword ptr ss : [ebp-0x46C], 0
        mov dword ptr ss : [ebp-0x468], 0
        mov eax, dword ptr ss : [ebp-0x510]
        mov ecx, dword ptr ds : [eax+0x574]
        mov dword ptr ss : [ebp-0x4C8], ecx
        mov edx, dword ptr ss : [ebp-0x4C8]
        mov dword ptr ss : [ebp-0x480], edx
        mov eax, dword ptr ss : [ebp-0x440]
        sub eax, dword ptr ss : [ebp-0x480]
        neg eax
        sbb eax, eax
        inc eax
        xor ecx, ecx
        mov cl, al
        test ecx, ecx
        je public_6d27694
/*FIXUP push offset public_6d6bfe4 @0x6d2767d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6bfe4
        mov ecx, dword ptr ss : [ebp-0x510]
        call public_6d22f85
        xor al, al
        jmp public_6d27cd0
        public_6d27694 : nop
        mov edx, dword ptr ss : [ebp-0x440]
        mov eax, dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [ebp-0x43C], eax
        mov ecx, dword ptr ss : [ebp-0x43C]
        push ecx
        mov edx, dword ptr ss : [ebp-0x510]
        mov eax, dword ptr ds : [edx+0x18]
        push eax
        mov ecx, dword ptr ss : [ebp-0x510]
        call public_6d27cd7
        public_6d276bf : nop
        jmp public_6d276d8
/*FIXUP public_6d276c1 : nop
        push offset public_6d6c000 @0x6d276c1*/
  FIXUP public_6d276c1 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6c000
        mov ecx, dword ptr ss : [ebp-0x510]
        call public_6d22f85
        xor al, al
        jmp public_6d27cd0
        public_6d276d8 : nop
        jmp public_6d27c90
/*FIXUP public_6d276dd : nop
        push offset public_6d5e758 @0x6d276dd*/
  FIXUP public_6d276dd : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d5e758
        mov ecx, dword ptr ss : [ebp-0x510]
        call public_6d23d9b
        xor ecx, ecx
        mov cl, al
        test ecx, ecx
        je public_6d277bb
        mov edx, dword ptr ss : [ebp-0x510]
        mov eax, dword ptr ds : [edx+8]
        add eax, 2
        mov ecx, dword ptr ss : [ebp-0x510]
        mov dword ptr ds : [ecx+8], eax
        mov ecx, dword ptr ss : [ebp-0x510]
        call public_6d23e0a
        mov dword ptr ss : [ebp-0x444], eax
        mov edx, dword ptr ss : [ebp-0x40C]
        mov eax, dword ptr ss : [ebp-0x408]
        mov dword ptr ss : [ebp+edx*4-0x400], eax
        mov ecx, dword ptr ss : [ebp-0x40C]
        add ecx, 1
        mov dword ptr ss : [ebp-0x40C], ecx
        cmp dword ptr ss : [ebp-0x40C], 0x10
        jne public_6d27761
/*FIXUP push offset public_6d6c034 @0x6d2774a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6c034
        mov ecx, dword ptr ss : [ebp-0x510]
        call public_6d22f85
        xor al, al
        jmp public_6d27cd0
        public_6d27761 : nop
        cmp dword ptr ss : [ebp-0x444], 1
        jne public_6d2777f
        cmp dword ptr ss : [ebp-0x408], 2
        je public_6d2777d
        mov dword ptr ss : [ebp-0x408], 1
        public_6d2777d : nop
        jmp public_6d277b6
        public_6d2777f : nop
        cmp dword ptr ss : [ebp-0x444], 0
        jne public_6d27794
        mov dword ptr ss : [ebp-0x408], 2
        jmp public_6d277b6
        public_6d27794 : nop
        cmp dword ptr ss : [ebp-0x444], 0
        je public_6d277b6
        mov edx, dword ptr ss : [ebp-0x444]
        push edx
        mov ecx, dword ptr ss : [ebp-0x510]
        call public_6d22f85
        xor al, al
        jmp public_6d27cd0
        public_6d277b6 : nop
        jmp public_6d27c90
/*FIXUP public_6d277bb : nop
        push offset public_6d5e75c @0x6d277bb*/
  FIXUP public_6d277bb : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d5e75c
        mov ecx, dword ptr ss : [ebp-0x510]
        call public_6d23d9b
        movzx eax, al
        test eax, eax
        je public_6d27819
        cmp dword ptr ss : [ebp-0x40C], 0
        jne public_6d277f2
/*FIXUP push offset public_6d6c04c @0x6d277db*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6c04c
        mov ecx, dword ptr ss : [ebp-0x510]
        call public_6d22f85
        xor al, al
        jmp public_6d27cd0
        public_6d277f2 : nop
        mov ecx, dword ptr ss : [ebp-0x40C]
        sub ecx, 1
        mov dword ptr ss : [ebp-0x40C], ecx
        mov edx, dword ptr ss : [ebp-0x40C]
        mov eax, dword ptr ss : [ebp+edx*4-0x400]
        mov dword ptr ss : [ebp-0x408], eax
        jmp public_6d27c90
        public_6d27819 : nop
        cmp dword ptr ss : [ebp-0x408], 0
        je public_6d2782f
        cmp dword ptr ss : [ebp-0x408], 1
        jne public_6d27c90
/*FIXUP public_6d2782f : nop
        push offset public_6d5e74c @0x6d2782f*/
  FIXUP public_6d2782f : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d5e74c
        mov ecx, dword ptr ss : [ebp-0x510]
        call public_6d23d9b
        xor ecx, ecx
        mov cl, al
        test ecx, ecx
        je public_6d27c5c
        mov edx, dword ptr ss : [ebp-0x510]
        mov eax, dword ptr ds : [edx+8]
        add eax, 0xB
        mov ecx, dword ptr ss : [ebp-0x510]
        mov dword ptr ds : [ecx+8], eax
        mov ecx, dword ptr ss : [ebp-0x510]
        call public_6d22f4d
        mov edx, dword ptr ss : [ebp-0x510]
        mov eax, dword ptr ds : [edx+8]
        movsx ecx, byte ptr ds : [eax]
        cmp ecx, 0x3D
        jne public_6d27c46
        mov edx, dword ptr ss : [ebp-0x510]
        mov eax, dword ptr ds : [edx+8]
        add eax, 1
        mov ecx, dword ptr ss : [ebp-0x510]
        mov dword ptr ds : [ecx+8], eax
        mov ecx, dword ptr ss : [ebp-0x510]
        call public_6d23639
        mov dword ptr ss : [ebp-0x448], eax
        cmp dword ptr ss : [ebp-0x448], 0
        jne public_6d278b6
        xor al, al
        jmp public_6d27cd0
        public_6d278b6 : nop
        mov dl, byte ptr ss : [ebp-0x481]
        mov byte ptr ss : [ebp-0x45C], dl
        xor eax, eax
        test eax, eax
        je public_6d278d1
        cmp dword ptr ss : [ebp-0x458], 0
        jne public_6d278d3
        public_6d278d1 : nop
        jmp public_6d27944
        public_6d278d3 : nop
        mov ecx, dword ptr ss : [ebp-0x458]
        movzx edx, byte ptr ds : [ecx-1]
        test edx, edx
        je public_6d278f3
        mov eax, dword ptr ss : [ebp-0x458]
        movzx ecx, byte ptr ds : [eax-1]
        cmp ecx, 0xFF
        jne public_6d27922
        public_6d278f3 : nop
        mov edx, dword ptr ss : [ebp-0x450]
        add edx, 2
        mov dword ptr ss : [ebp-0x4D0], edx
        mov eax, dword ptr ss : [ebp-0x458]
        sub eax, 1
        mov dword ptr ss : [ebp-0x4CC], eax
        mov ecx, dword ptr ss : [ebp-0x4CC]
        push ecx
        call public_6d2f249
        add esp, 4
        jmp public_6d27944
        public_6d27922 : nop
        mov edx, dword ptr ss : [ebp-0x458]
        sub edx, 1
        mov dword ptr ss : [ebp-0x520], edx
        mov eax, dword ptr ss : [ebp-0x520]
        mov cl, byte ptr ds : [eax]
        sub cl, 1
        mov edx, dword ptr ss : [ebp-0x520]
        mov byte ptr ds : [edx], cl
        public_6d27944 : nop
        mov dword ptr ss : [ebp-0x458], 0
        mov dword ptr ss : [ebp-0x454], 0
        mov dword ptr ss : [ebp-0x450], 0
        mov edi, dword ptr ss : [ebp-0x448]
        mov ecx, 0xFFFFFFFF
        xor eax, eax
        repne scasb
        not ecx
        add ecx, 0xFFFFFFFF
        push ecx
        mov eax, dword ptr ss : [ebp-0x448]
        push eax
        lea ecx, ss:[ebp-0x45C]
        call dword ptr ds : [public_6d5e078]
        mov ecx, dword ptr ss : [ebp-0x510]
        add ecx, 0x55C
        mov dword ptr ss : [ebp-0x4F8], ecx
        lea edx, ss:[ebp-0x45C]
        push edx
        mov ecx, dword ptr ss : [ebp-0x4F8]
        call public_6d2a2d0
        mov dword ptr ss : [ebp-0x4E4], eax
        mov eax, dword ptr ss : [ebp-0x4E4]
        mov dword ptr ss : [ebp-0x4D4], eax
        mov ecx, dword ptr ss : [ebp-0x4F8]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ss : [ebp-0x4E8], edx
        mov eax, dword ptr ss : [ebp-0x4E8]
        mov dword ptr ss : [ebp-0x4DC], eax
        mov ecx, dword ptr ss : [ebp-0x4D4]
        sub ecx, dword ptr ss : [ebp-0x4DC]
        neg ecx
        sbb ecx, ecx
        inc ecx
        xor edx, edx
        mov dl, cl
        test edx, edx
        jne public_6d27a2f
        mov eax, dword ptr ss : [ebp-0x4D4]
        add eax, 0xC
        mov dword ptr ss : [ebp-0x4F0], eax
        mov ecx, dword ptr ss : [ebp-0x4F0]
        push ecx
        lea edx, ss:[ebp-0x45C]
        push edx
        call dword ptr ds : [public_6d5e0ac]
        add esp, 8
        movzx eax, al
        test eax, eax
        jne public_6d27a2f
        lea ecx, ss:[ebp-0x4D4]
        mov dword ptr ss : [ebp-0x524], ecx
        jmp public_6d27a56
        public_6d27a2f : nop
        mov edx, dword ptr ss : [ebp-0x4F8]
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ss : [ebp-0x4F4], eax
        mov ecx, dword ptr ss : [ebp-0x4F4]
        mov dword ptr ss : [ebp-0x4E0], ecx
        lea edx, ss:[ebp-0x4E0]
        mov dword ptr ss : [ebp-0x524], edx
        public_6d27a56 : nop
        mov eax, dword ptr ss : [ebp-0x524]
        mov dword ptr ss : [ebp-0x4D8], eax
        mov ecx, dword ptr ss : [ebp-0x4D8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [ebp-0x488], edx
        mov eax, dword ptr ss : [ebp-0x488]
        mov dword ptr ss : [ebp-0x460], eax
        mov ecx, dword ptr ss : [ebp-0x510]
        mov edx, dword ptr ds : [ecx+0x560]
        mov dword ptr ss : [ebp-0x4FC], edx
        mov eax, dword ptr ss : [ebp-0x4FC]
        mov dword ptr ss : [ebp-0x48C], eax
        mov ecx, dword ptr ss : [ebp-0x460]
        sub ecx, dword ptr ss : [ebp-0x48C]
        neg ecx
        sbb ecx, ecx
        inc ecx
        xor edx, edx
        mov dl, cl
        test edx, edx
        je public_6d27b7c
/*FIXUP push offset public_6d6c060 @0x6d27ab7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6c060
        mov ecx, dword ptr ss : [ebp-0x510]
        call public_6d22f85
        mov byte ptr ss : [ebp-0x48D], 0
        mov eax, 1
        test eax, eax
        je public_6d27ae0
        cmp dword ptr ss : [ebp-0x458], 0
        jne public_6d27ae2
        public_6d27ae0 : nop
        jmp public_6d27b53
        public_6d27ae2 : nop
        mov ecx, dword ptr ss : [ebp-0x458]
        movzx edx, byte ptr ds : [ecx-1]
        test edx, edx
        je public_6d27b02
        mov eax, dword ptr ss : [ebp-0x458]
        movzx ecx, byte ptr ds : [eax-1]
        cmp ecx, 0xFF
        jne public_6d27b31
        public_6d27b02 : nop
        mov edx, dword ptr ss : [ebp-0x450]
        add edx, 2
        mov dword ptr ss : [ebp-0x504], edx
        mov eax, dword ptr ss : [ebp-0x458]
        sub eax, 1
        mov dword ptr ss : [ebp-0x500], eax
        mov ecx, dword ptr ss : [ebp-0x500]
        push ecx
        call public_6d2f249
        add esp, 4
        jmp public_6d27b53
        public_6d27b31 : nop
        mov edx, dword ptr ss : [ebp-0x458]
        sub edx, 1
        mov dword ptr ss : [ebp-0x528], edx
        mov eax, dword ptr ss : [ebp-0x528]
        mov cl, byte ptr ds : [eax]
        sub cl, 1
        mov edx, dword ptr ss : [ebp-0x528]
        mov byte ptr ds : [edx], cl
        public_6d27b53 : nop
        mov dword ptr ss : [ebp-0x458], 0
        mov dword ptr ss : [ebp-0x454], 0
        mov dword ptr ss : [ebp-0x450], 0
        mov al, byte ptr ss : [ebp-0x48D]
        jmp public_6d27cd0
        public_6d27b7c : nop
        mov eax, dword ptr ss : [ebp-0x460]
        mov ecx, dword ptr ds : [eax+0x1C]
        mov dword ptr ss : [ebp-0x44C], ecx
        mov edx, dword ptr ss : [ebp-0x44C]
        push edx
        mov eax, dword ptr ss : [ebp+8]
        push eax
        mov ecx, dword ptr ss : [ebp-0x510]
        call public_6d27cd7
        mov ecx, 1
        test ecx, ecx
        je public_6d27bb3
        cmp dword ptr ss : [ebp-0x458], 0
        jne public_6d27bb5
        public_6d27bb3 : nop
        jmp public_6d27c26
        public_6d27bb5 : nop
        mov edx, dword ptr ss : [ebp-0x458]
        movzx eax, byte ptr ds : [edx-1]
        test eax, eax
        je public_6d27bd5
        mov ecx, dword ptr ss : [ebp-0x458]
        movzx edx, byte ptr ds : [ecx-1]
        cmp edx, 0xFF
        jne public_6d27c04
        public_6d27bd5 : nop
        mov eax, dword ptr ss : [ebp-0x450]
        add eax, 2
        mov dword ptr ss : [ebp-0x50C], eax
        mov ecx, dword ptr ss : [ebp-0x458]
        sub ecx, 1
        mov dword ptr ss : [ebp-0x508], ecx
        mov edx, dword ptr ss : [ebp-0x508]
        push edx
        call public_6d2f249
        add esp, 4
        jmp public_6d27c26
        public_6d27c04 : nop
        mov eax, dword ptr ss : [ebp-0x458]
        sub eax, 1
        mov dword ptr ss : [ebp-0x52C], eax
        mov ecx, dword ptr ss : [ebp-0x52C]
        mov dl, byte ptr ds : [ecx]
        sub dl, 1
        mov eax, dword ptr ss : [ebp-0x52C]
        mov byte ptr ds : [eax], dl
        public_6d27c26 : nop
        mov dword ptr ss : [ebp-0x458], 0
        mov dword ptr ss : [ebp-0x454], 0
        mov dword ptr ss : [ebp-0x450], 0
        jmp public_6d27c5a
/*FIXUP public_6d27c46 : nop
        push offset public_6d6c07c @0x6d27c46*/
  FIXUP public_6d27c46 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6c07c
        mov ecx, dword ptr ss : [ebp-0x510]
        call public_6d22f85
        xor al, al
        jmp public_6d27cd0
        public_6d27c5a : nop
        jmp public_6d27c90
        public_6d27c5c : nop
        mov ecx, dword ptr ss : [ebp+8]
        push ecx
        mov ecx, dword ptr ss : [ebp-0x510]
        call public_6d236f4
        mov dword ptr ss : [ebp-0x464], eax
        cmp dword ptr ss : [ebp-0x464], 0
        je public_6d27c90
        mov edx, dword ptr ss : [ebp-0x464]
        push edx
        mov ecx, dword ptr ss : [ebp-0x510]
        call public_6d22f85
        xor al, al
        jmp public_6d27cd0
        public_6d27c90 : nop
        mov eax, dword ptr ss : [ebp-0x510]
        mov ecx, dword ptr ss : [ebp-0x510]
        mov edx, dword ptr ds : [eax+8]
        cmp edx, dword ptr ds : [ecx+0xC]
        jb public_6d271cd
        public_6d27ca8 : nop
        cmp dword ptr ss : [ebp-0x408], 0
        jne public_6d27cba
        cmp dword ptr ss : [ebp-0x40C], 0
        je public_6d27cce
/*FIXUP public_6d27cba : nop
        push offset public_6d6c088 @0x6d27cba*/
  FIXUP public_6d27cba : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6c088
        mov ecx, dword ptr ss : [ebp-0x510]
        call public_6d22f85
        xor al, al
        jmp public_6d27cd0
        public_6d27cce : nop
        mov al, 1
        public_6d27cd0 : nop
        pop edi
        mov esp, ebp
        pop ebp
        ret 4
        UNREACHABLE_TRAP(0x6d27198)
    }
}

#undef public_6d271cd
#undef public_6d271e1
#undef public_6d271ec
#undef public_6d2720b
#undef public_6d2726a
#undef public_6d27287
#undef public_6d272a3
#undef public_6d27317
#undef public_6d2732e
#undef public_6d27407
#undef public_6d27409
#undef public_6d27428
#undef public_6d27457
#undef public_6d27478
#undef public_6d27556
#undef public_6d2757d
#undef public_6d275b5
#undef public_6d275b7
#undef public_6d275d7
#undef public_6d27606
#undef public_6d27628
#undef public_6d27694
#undef public_6d276bf
#undef public_6d276c1
#undef public_6d276d8
#undef public_6d276dd
#undef public_6d27761
#undef public_6d2777d
#undef public_6d2777f
#undef public_6d27794
#undef public_6d277b6
#undef public_6d277bb
#undef public_6d277f2
#undef public_6d27819
#undef public_6d2782f
#undef public_6d278b6
#undef public_6d278d1
#undef public_6d278d3
#undef public_6d278f3
#undef public_6d27922
#undef public_6d27944
#undef public_6d27a2f
#undef public_6d27a56
#undef public_6d27ae0
#undef public_6d27ae2
#undef public_6d27b02
#undef public_6d27b31
#undef public_6d27b53
#undef public_6d27b7c
#undef public_6d27bb3
#undef public_6d27bb5
#undef public_6d27bd5
#undef public_6d27c04
#undef public_6d27c26
#undef public_6d27c46
#undef public_6d27c5a
#undef public_6d27c5c
#undef public_6d27c90
#undef public_6d27ca8
#undef public_6d27cba
#undef public_6d27cce
#undef public_6d27cd0
