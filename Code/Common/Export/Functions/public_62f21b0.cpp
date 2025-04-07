#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6272a00);
CLANG_FORWARD_PROC_SYMBOL(public_62f1830);
CLANG_FORWARD_PROC_SYMBOL(public_62fc9d0);
CLANG_FORWARD_PROC_SYMBOL(public_62fd000);
CLANG_FORWARD_PROC_SYMBOL(public_630cd00);
CLANG_FORWARD_PROC_SYMBOL(public_6310410);
CLANG_FORWARD_PROC_SYMBOL(public_6310560);
CLANG_FORWARD_PROC_SYMBOL(public_63107c0);
CLANG_FORWARD_PROC_SYMBOL(public_63108f0);
CLANG_FORWARD_PROC_SYMBOL(public_6310a30);
CLANG_FORWARD_PROC_SYMBOL(public_6310b70);
CLANG_FORWARD_PROC_SYMBOL(public_6333ca0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_63956a8);

#define public_62f220f _public_62f220f
#define public_62f223c _public_62f223c
#define public_62f2269 _public_62f2269
#define public_62f2296 _public_62f2296
#define public_62f22ba _public_62f22ba
#define public_62f22de _public_62f22de
#define public_62f2302 _public_62f2302
#define public_62f2358 _public_62f2358
#define public_62f23ae _public_62f23ae
#define public_62f23d2 _public_62f23d2
#define public_62f23f6 _public_62f23f6
#define public_62f241a _public_62f241a
#define public_62f243e _public_62f243e
#define public_62f2462 _public_62f2462
#define public_62f2486 _public_62f2486
#define public_62f24aa _public_62f24aa
#define public_62f24ce _public_62f24ce
#define public_62f24f2 _public_62f24f2
#define public_62f251e _public_62f251e
#define public_62f2531 _public_62f2531
#define public_62f2571 _public_62f2571
#define public_62f258a _public_62f258a
#define public_62f259f _public_62f259f
#define public_62f2612 _public_62f2612
#define public_62f2659 _public_62f2659
#define public_62f265e _public_62f265e
#define public_62f2666 _public_62f2666
#define public_62f266b _public_62f266b
#define public_62f2677 _public_62f2677
#define public_62f2694 _public_62f2694
#define public_62f26a8 _public_62f26a8
#define public_62f26c2 _public_62f26c2
#define public_62f26d6 _public_62f26d6
#define public_62f270d _public_62f270d
#define public_62f2729 _public_62f2729
#define public_62f2768 _public_62f2768
#define public_62f2777 _public_62f2777
#define public_62f2790 _public_62f2790
#define public_62f279f _public_62f279f
#define public_62f27a6 _public_62f27a6
#define public_62f27b3 _public_62f27b3
#define public_62f27b9 _public_62f27b9
#define public_62f27cc _public_62f27cc
#define public_62f27d0 _public_62f27d0
#define public_62f27d2 _public_62f27d2

PROC_DECLARE(0x62f21b0, internal_62f21b0, public_62f21b0);
extern "C" NAKED register_t __cdecl internal_62f21b0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_63956a8 @0x62f21b8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_63956a8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x24
        push ebx
        mov ebx, dword ptr ss : [esp+0x38]
        push ebp
        push esi
        push edi
        push ebx
        mov esi, ecx
        call public_62f1830
        test al, al
        jne public_62f27cc
/*FIXUP push offset public_63a16d0 @0x62f21e0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a16d0
        mov ecx, ebx
        call public_6310410
        test al, al
        mov ecx, ebx
        je public_62f220f
        call public_6310b70
        push 0
        push eax
        call public_6333ca0
        mov dword ptr ds : [esi+0xDC], eax
        add esp, 8
        mov al, 1
        jmp public_62f27d2
/*FIXUP public_62f220f : nop
        push offset public_63a16c0 @0x62f220f*/
  FIXUP public_62f220f : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a16c0
        call public_6310410
        test al, al
        mov ecx, ebx
        je public_62f223c
        call public_6310b70
        push 0
        push eax
        call public_6333ca0
        mov dword ptr ds : [esi+0xE0], eax
        add esp, 8
        mov al, 1
        jmp public_62f27d2
/*FIXUP public_62f223c : nop
        push offset public_63a16b0 @0x62f223c*/
  FIXUP public_62f223c : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a16b0
        call public_6310410
        test al, al
        mov ecx, ebx
        je public_62f2269
        call public_6310b70
        push 0
        push eax
        call public_6333ca0
        mov dword ptr ds : [esi+0xE4], eax
        add esp, 8
        mov al, 1
        jmp public_62f27d2
/*FIXUP public_62f2269 : nop
        push offset public_63a169c @0x62f2269*/
  FIXUP public_62f2269 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a169c
        call public_6310410
        test al, al
        mov ecx, ebx
        je public_62f2296
        call public_6310b70
        push 0
        push eax
        call public_6333ca0
        mov dword ptr ds : [esi+0xE8], eax
        add esp, 8
        mov al, 1
        jmp public_62f27d2
/*FIXUP public_62f2296 : nop
        push offset public_63a1688 @0x62f2296*/
  FIXUP public_62f2296 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a1688
        call public_6310410
        test al, al
        mov ecx, ebx
        je public_62f22ba
        push 0
        call public_63107c0
        mov dword ptr ds : [esi+0xFC], eax
        mov al, 1
        jmp public_62f27d2
/*FIXUP public_62f22ba : nop
        push offset public_63a167c @0x62f22ba*/
  FIXUP public_62f22ba : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a167c
        call public_6310410
        test al, al
        mov ecx, ebx
        je public_62f22de
        push 0
        call public_63108f0
        fstp dword ptr ds : [esi+0x100]
        mov al, 1
        jmp public_62f27d2
/*FIXUP public_62f22de : nop
        push offset public_63a1670 @0x62f22de*/
  FIXUP public_62f22de : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a1670
        call public_6310410
        test al, al
        mov ecx, ebx
        je public_62f2302
        push 0
        call public_63108f0
        fstp dword ptr ds : [esi+0x104]
        mov al, 1
        jmp public_62f27d2
/*FIXUP public_62f2302 : nop
        push offset public_63a1660 @0x62f2302*/
  FIXUP public_62f2302 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a1660
        call public_6310410
        test al, al
        mov ecx, ebx
        je public_62f2358
        push 0
        call public_63108f0
        fstp dword ptr ss : [esp+0x20]
        push 1
        mov ecx, ebx
        call public_63108f0
        fstp dword ptr ss : [esp+0x24]
        push 2
        mov ecx, ebx
        call public_63108f0
        fstp dword ptr ss : [esp+0x28]
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x28]
        add esi, 0x108
        mov dword ptr ds : [esi], eax
        mov dword ptr ds : [esi+4], ecx
        mov dword ptr ds : [esi+8], edx
        mov al, 1
        jmp public_62f27d2
/*FIXUP public_62f2358 : nop
        push offset public_63a1650 @0x62f2358*/
  FIXUP public_62f2358 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a1650
        call public_6310410
        test al, al
        mov ecx, ebx
        je public_62f23ae
        push 0
        call public_63108f0
        fstp dword ptr ss : [esp+0x20]
        push 1
        mov ecx, ebx
        call public_63108f0
        fstp dword ptr ss : [esp+0x24]
        push 2
        mov ecx, ebx
        call public_63108f0
        fstp dword ptr ss : [esp+0x28]
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x28]
        add esi, 0x114
        mov dword ptr ds : [esi], eax
        mov dword ptr ds : [esi+4], ecx
        mov dword ptr ds : [esi+8], edx
        mov al, 1
        jmp public_62f27d2
/*FIXUP public_62f23ae : nop
        push offset public_63a1644 @0x62f23ae*/
  FIXUP public_62f23ae : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a1644
        call public_6310410
        test al, al
        mov ecx, ebx
        je public_62f23d2
        push 0
        call public_63108f0
        fstp dword ptr ds : [esi+0x120]
        mov al, 1
        jmp public_62f27d2
/*FIXUP public_62f23d2 : nop
        push offset public_63a1634 @0x62f23d2*/
  FIXUP public_62f23d2 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a1634
        call public_6310410
        test al, al
        mov ecx, ebx
        je public_62f23f6
        push 0
        call public_63108f0
        fstp dword ptr ds : [esi+0x124]
        mov al, 1
        jmp public_62f27d2
/*FIXUP public_62f23f6 : nop
        push offset public_63a1620 @0x62f23f6*/
  FIXUP public_62f23f6 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a1620
        call public_6310410
        test al, al
        mov ecx, ebx
        je public_62f241a
        push 0
        call public_63108f0
        fstp dword ptr ds : [esi+0x128]
        mov al, 1
        jmp public_62f27d2
/*FIXUP public_62f241a : nop
        push offset public_63a1614 @0x62f241a*/
  FIXUP public_62f241a : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a1614
        call public_6310410
        test al, al
        mov ecx, ebx
        je public_62f243e
        push 0
        call public_63107c0
        mov dword ptr ds : [esi+0xEC], eax
        mov al, 1
        jmp public_62f27d2
/*FIXUP public_62f243e : nop
        push offset public_63a1608 @0x62f243e*/
  FIXUP public_62f243e : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a1608
        call public_6310410
        test al, al
        mov ecx, ebx
        je public_62f2462
        push 0
        call public_63107c0
        mov dword ptr ds : [esi+0xF0], eax
        mov al, 1
        jmp public_62f27d2
/*FIXUP public_62f2462 : nop
        push offset public_63a15fc @0x62f2462*/
  FIXUP public_62f2462 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a15fc
        call public_6310410
        test al, al
        mov ecx, ebx
        je public_62f2486
        push 0
        call public_63107c0
        mov dword ptr ds : [esi+0xF4], eax
        mov al, 1
        jmp public_62f27d2
/*FIXUP public_62f2486 : nop
        push offset public_63a15f0 @0x62f2486*/
  FIXUP public_62f2486 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a15f0
        call public_6310410
        test al, al
        mov ecx, ebx
        je public_62f24aa
        push 0
        call public_63107c0
        mov dword ptr ds : [esi+0xF8], eax
        mov al, 1
        jmp public_62f27d2
/*FIXUP public_62f24aa : nop
        push offset public_63a15e0 @0x62f24aa*/
  FIXUP public_62f24aa : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a15e0
        call public_6310410
        test al, al
        mov ecx, ebx
        je public_62f24ce
        push 0
        call public_63107c0
        mov dword ptr ds : [esi+0x140], eax
        mov al, 1
        jmp public_62f27d2
/*FIXUP public_62f24ce : nop
        push offset public_63a15c8 @0x62f24ce*/
  FIXUP public_62f24ce : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a15c8
        call public_6310410
        test al, al
        mov ecx, ebx
        je public_62f24f2
        push 0
        call public_63107c0
        mov dword ptr ds : [esi+0x144], eax
        mov al, 1
        jmp public_62f27d2
/*FIXUP public_62f24f2 : nop
        push offset public_63a15b8 @0x62f24f2*/
  FIXUP public_62f24f2 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a15b8
        call public_6310410
        test al, al
        je public_62f2531
        push 0
        mov ecx, ebx
        call public_63108f0
        fcom dword ptr ds : [public_63a15b4]
        fnstsw ax
        test ah, 0x41
        jne public_62f251e
        fstp st(0)
        fld dword ptr ds : [public_63a15b4]
        public_62f251e : nop
        fmul dword ptr ds : [public_639d210]
        mov al, 1
        fstp dword ptr ds : [esi+0x12C]
        jmp public_62f27d2
        public_62f2531 : nop
        mov eax, dword ptr ds : [esi+0x94]
        lea ecx, ds:[esi+0x94]
        push ebx
        call dword ptr ds : [eax+8]
        test al, al
        jne public_62f27cc
/*FIXUP push offset public_63a15ac @0x62f2549*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a15ac
        mov ecx, ebx
        call public_6310410
        test al, al
        je public_62f27d0
        push 0
        mov ecx, ebx
        call public_6310a30
        mov dword ptr ss : [esp+0x10], eax
        mov edi, offset public_63eca40
        xor ebp, ebp
        public_62f2571 : nop
        mov eax, dword ptr ds : [edi]
        test eax, eax
        je public_62f258a
        mov ecx, dword ptr ss : [esp+0x10]
        push eax
        push ecx
        call dword ptr ds : [public_639902c]
        add esp, 8
        test eax, eax
        je public_62f259f
        public_62f258a : nop
        add ebp, 8
        add edi, 8
        cmp ebp, 0x1F8
        jb public_62f2571
        mov al, 1
        jmp public_62f27d2
        public_62f259f : nop
        mov edi, dword ptr ds : [edi+4]
        xor eax, eax
        cmp edi, eax
        je public_62f27cc
        mov dl, byte ptr ss : [esp+0x44]
        mov byte ptr ss : [esp+0x24], dl
        mov dword ptr ss : [esp+0x28], eax
        mov dword ptr ss : [esp+0x2C], eax
        mov dword ptr ss : [esp+0x30], eax
        lea edx, ss:[esp+0x20]
        push edx
        lea ecx, ds:[esi+0x130]
        mov dword ptr ss : [esp+0x40], eax
        mov eax, dword ptr ds : [ecx+8]
        push 1
        push eax
        call public_62fc9d0
        mov eax, dword ptr ss : [esp+0x28]
        push eax
        mov dword ptr ss : [esp+0x40], 0xFFFFFFFF
        call public_6391d5a
        mov esi, dword ptr ds : [esi+0x138]
        add esp, 4
        mov ebp, 1
        sub esi, 0x14
        push ebp
        mov ecx, ebx
        mov dword ptr ds : [esi], edi
        call public_6310560
        test al, al
        jne public_62f27cc
        lea edi, ds:[esi+4]
        public_62f2612 : nop
        mov eax, ebp
        inc ebp
        push eax
        mov ecx, ebx
        mov dword ptr ss : [esp+0x20], ebp
        call public_6310a30
        push 0
        push eax
        call public_6333ca0
        mov ecx, dword ptr ds : [edi+0xC]
        mov dword ptr ss : [esp+0x18], eax
        mov eax, dword ptr ds : [edi+8]
        sub ecx, eax
        sar ecx, 2
        add esp, 8
        cmp ecx, 1
        mov esi, eax
        jae public_62f2729
        mov edx, dword ptr ds : [edi+4]
        test edx, edx
        je public_62f2659
        mov ecx, eax
        sub ecx, edx
        sar ecx, 2
        cmp ecx, 1
        ja public_62f265e
        public_62f2659 : nop
        mov ecx, 1
        public_62f265e : nop
        test edx, edx
        jne public_62f2666
        xor eax, eax
        jmp public_62f266b
        public_62f2666 : nop
        sub eax, edx
        sar eax, 2
        public_62f266b : nop
        add eax, ecx
        test eax, eax
        mov dword ptr ss : [esp+0x18], eax
        jge public_62f2677
        xor eax, eax
        public_62f2677 : nop
        lea edx, ds:[eax*4]
        push edx
        call public_6391d9c
        mov ebp, dword ptr ds : [edi+4]
        add esp, 4
        cmp ebp, esi
        mov dword ptr ss : [esp+0x14], eax
        mov ebx, eax
        je public_62f26a8
        public_62f2694 : nop
        push ebp
        push ebx
        call public_630cd00
        add ebp, 4
        add esp, 8
        add ebx, 4
        cmp ebp, esi
        jne public_62f2694
        public_62f26a8 : nop
        lea eax, ss:[esp+0x10]
        push eax
        push ebx
        call public_630cd00
        mov ebp, dword ptr ds : [edi+8]
        add esp, 8
        cmp esi, ebp
        je public_62f26d6
        sub ebx, esi
        add ebx, 4
        public_62f26c2 : nop
        lea ecx, ds:[esi+ebx]
        push esi
        push ecx
        call public_630cd00
        add esi, 4
        add esp, 8
        cmp esi, ebp
        jne public_62f26c2
        public_62f26d6 : nop
        mov edx, dword ptr ds : [edi+4]
        push edx
        call public_6391d5a
        mov ecx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x1C]
        lea edx, ds:[ecx+eax*4]
        mov dword ptr ds : [edi+0xC], edx
        mov edx, dword ptr ds : [edi+4]
        add esp, 4
        test edx, edx
        jne public_62f270d
        mov ebx, dword ptr ss : [esp+0x44]
        mov ebp, dword ptr ss : [esp+0x1C]
        xor eax, eax
        lea eax, ds:[ecx+eax*4+4]
        mov dword ptr ds : [edi+4], ecx
        jmp public_62f27b9
        public_62f270d : nop
        mov eax, dword ptr ds : [edi+8]
        mov ebx, dword ptr ss : [esp+0x44]
        mov ebp, dword ptr ss : [esp+0x1C]
        sub eax, edx
        sar eax, 2
        lea eax, ds:[ecx+eax*4+4]
        mov dword ptr ds : [edi+4], ecx
        jmp public_62f27b9
        public_62f2729 : nop
        mov ecx, eax
        sub ecx, esi
        sar ecx, 2
        cmp ecx, 1
        mov ecx, edi
        jae public_62f2777
        lea edx, ds:[esi+4]
        push edx
        push eax
        push esi
        call public_6272a00
        mov eax, dword ptr ds : [edi+8]
        mov edx, eax
        lea ecx, ss:[esp+0x10]
        push ecx
        sub edx, esi
        sar edx, 2
        mov ecx, 1
        sub ecx, edx
        push ecx
        push eax
        mov ecx, edi
        call public_62fd000
        mov eax, dword ptr ds : [edi+8]
        cmp esi, eax
        je public_62f27b3
        public_62f2768 : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [esi], edx
        add esi, 4
        cmp esi, eax
        jne public_62f2768
        jmp public_62f27b3
        public_62f2777 : nop
        push eax
        push eax
        add eax, 0xFFFFFFFC
        push eax
        call public_6272a00
        mov ecx, dword ptr ds : [edi+8]
        lea eax, ds:[ecx-4]
        cmp esi, eax
        je public_62f279f
        lea esp, ss:[esp]
        public_62f2790 : nop
        mov edx, dword ptr ds : [eax-4]
        sub eax, 4
        sub ecx, 4
        cmp eax, esi
        mov dword ptr ds : [ecx], edx
        jne public_62f2790
        public_62f279f : nop
        lea eax, ds:[esi+4]
        cmp esi, eax
        je public_62f27b3
        public_62f27a6 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [esi], ecx
        add esi, 4
        cmp esi, eax
        jne public_62f27a6
        public_62f27b3 : nop
        mov eax, dword ptr ds : [edi+8]
        add eax, 4
        public_62f27b9 : nop
        push ebp
        mov ecx, ebx
        mov dword ptr ds : [edi+8], eax
        call public_6310560
        test al, al
        je public_62f2612
        public_62f27cc : nop
        mov al, 1
        jmp public_62f27d2
        public_62f27d0 : nop
        xor al, al
        public_62f27d2 : nop
        mov ecx, dword ptr ss : [esp+0x34]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x30
        ret 4
        UNREACHABLE_TRAP(0x62f21b0)
    }
}

#undef public_62f220f
#undef public_62f223c
#undef public_62f2269
#undef public_62f2296
#undef public_62f22ba
#undef public_62f22de
#undef public_62f2302
#undef public_62f2358
#undef public_62f23ae
#undef public_62f23d2
#undef public_62f23f6
#undef public_62f241a
#undef public_62f243e
#undef public_62f2462
#undef public_62f2486
#undef public_62f24aa
#undef public_62f24ce
#undef public_62f24f2
#undef public_62f251e
#undef public_62f2531
#undef public_62f2571
#undef public_62f258a
#undef public_62f259f
#undef public_62f2612
#undef public_62f2659
#undef public_62f265e
#undef public_62f2666
#undef public_62f266b
#undef public_62f2677
#undef public_62f2694
#undef public_62f26a8
#undef public_62f26c2
#undef public_62f26d6
#undef public_62f270d
#undef public_62f2729
#undef public_62f2768
#undef public_62f2777
#undef public_62f2790
#undef public_62f279f
#undef public_62f27a6
#undef public_62f27b3
#undef public_62f27b9
#undef public_62f27cc
#undef public_62f27d0
#undef public_62f27d2
