#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_50f3a0);
CLANG_FORWARD_PROC_SYMBOL(public_512a40);
CLANG_FORWARD_PROC_SYMBOL(public_512b00);
CLANG_FORWARD_PROC_SYMBOL(public_512b70);
CLANG_FORWARD_PROC_SYMBOL(public_537260);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e90);
CLANG_FORWARD_JUMP_SYMBOL(public_5bfd4f);

#define public_50f408 _public_50f408
#define public_50f430 _public_50f430
#define public_50f480 _public_50f480
#define public_50f529 _public_50f529
#define public_50f549 _public_50f549
#define public_50f565 _public_50f565
#define public_50f588 _public_50f588
#define public_50f5a3 _public_50f5a3
#define public_50f5c2 _public_50f5c2
#define public_50f5d4 _public_50f5d4
#define public_50f5fb _public_50f5fb
#define public_50f604 _public_50f604
#define public_50f626 _public_50f626
#define public_50f62a _public_50f62a
#define public_50f62e _public_50f62e
#define public_50f632 _public_50f632
#define public_50f634 _public_50f634
#define public_50f65e _public_50f65e
#define public_50f667 _public_50f667
#define public_50f676 _public_50f676
#define public_50f690 _public_50f690
#define public_50f6a0 _public_50f6a0
#define public_50f6ae _public_50f6ae
#define public_50f6b7 _public_50f6b7
#define public_50f6bf _public_50f6bf
#define public_50f6c1 _public_50f6c1
#define public_50f730 _public_50f730
#define public_50f741 _public_50f741
#define public_50f756 _public_50f756
#define public_50f77b _public_50f77b
#define public_50f7d8 _public_50f7d8
#define public_50f7e3 _public_50f7e3
#define public_50f7f2 _public_50f7f2
#define public_50f808 _public_50f808
#define public_50f842 _public_50f842

PROC_DECLARE(0x50f3a0, internal_50f3a0, public_50f3a0);
extern "C" NAKED register_t __cdecl internal_50f3a0()
{
    __asm
    {
        push 0xFFFFFFFF
        mov eax, dword ptr fs : [0]
/*FIXUP push public_5bfd4f @0x50f3a8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bfd4f
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, 0x1574
        mov dword ptr fs : [0], esp
        call public_5b7e90
        push ebx
        push ebp
        push esi
        mov ebp, ecx
        push edi
        lea ecx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x14], 2
        call dword ptr ds : [public_5c605c]
        mov eax, dword ptr ss : [esp+0x1594]
        xor ebx, ebx
        push ebx
        push eax
        lea ecx, ss:[esp+0x24]
        mov dword ptr ss : [esp+0x1594], ebx
        call dword ptr ds : [public_5c6058]
        test al, al
        je public_50f842
        mov esi, dword ptr ss : [esp+0x1598]
        mov edi, dword ptr ds : [public_5c6d24]
        public_50f408 : nop
        lea ecx, ss:[esp+0x1C]
        call dword ptr ds : [public_5c6054]
        test al, al
        je public_50f6bf
/*FIXUP push offset public_5db608 @0x50f41a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5db608
        lea ecx, ss:[esp+0x20]
        call dword ptr ds : [public_5c6050]
        test al, al
        je public_50f408
        lea ecx, ds:[ecx]
        public_50f430 : nop
        lea ecx, ss:[esp+0x1C]
        call dword ptr ds : [public_5c669c]
        test al, al
        je public_50f408
/*FIXUP push offset public_5c866c @0x50f43e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c866c
        lea ecx, ss:[esp+0x20]
        call dword ptr ds : [public_5c6cf4]
        test al, al
        je public_50f430
        lea ecx, ss:[esp+0x1C]
        call dword ptr ds : [public_5c6698]
        push eax
        push esi
        call edi
        add esp, 8
        test eax, eax
        jne public_50f408
        lea ecx, ss:[esp+0x1C]
        call dword ptr ds : [public_5c669c]
        test al, al
        je public_50f5d4
        mov edi, dword ptr ds : [public_5c6cf4]
        mov edi, edi
/*FIXUP public_50f480 : nop
        push offset public_5db600 @0x50f480*/
  FIXUP public_50f480 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5db600
        lea ecx, ss:[esp+0x20]
        call edi
        test al, al
        je public_50f529
        push 0x18
        call public_5b7e84
        add esp, 4
        push 0
        lea ecx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x14], eax
        call dword ptr ds : [public_5c6cfc]
        mov ecx, dword ptr ss : [esp+0x10]
        fstp dword ptr ds : [ecx]
        push 1
        lea ecx, ss:[esp+0x20]
        call dword ptr ds : [public_5c6cfc]
        mov edx, dword ptr ss : [esp+0x10]
        push 2
        fstp dword ptr ds : [edx+4]
        lea ecx, ss:[esp+0x20]
        call dword ptr ds : [public_5c6cfc]
        mov eax, dword ptr ss : [esp+0x10]
        push 3
        fstp dword ptr ds : [eax+8]
        lea ecx, ss:[esp+0x20]
        call dword ptr ds : [public_5c6cfc]
        mov ecx, dword ptr ss : [esp+0x10]
        fstp dword ptr ds : [ecx+0xC]
        push 4
        lea ecx, ss:[esp+0x20]
        call dword ptr ds : [public_5c6cfc]
        mov edx, dword ptr ss : [esp+0x10]
        push 5
        fstp dword ptr ds : [edx+0x10]
        lea ecx, ss:[esp+0x20]
        call dword ptr ds : [public_5c6cfc]
        mov eax, dword ptr ss : [esp+0x10]
        lea ecx, ss:[esp+0x10]
        fstp dword ptr ds : [eax+0x14]
        mov eax, dword ptr ss : [ebp+8]
        push ecx
        push 1
        push eax
        mov ecx, ebp
        call public_537260
        jmp public_50f5c2
/*FIXUP public_50f529 : nop
        push offset public_5da688 @0x50f529*/
  FIXUP public_50f529 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5da688
        lea ecx, ss:[esp+0x20]
        call edi
        test al, al
        lea ecx, ss:[esp+0x1C]
        je public_50f549
        push 0
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ss : [ebp+0x38]
        jmp public_50f5c2
/*FIXUP public_50f549 : nop
        push offset public_5da67c @0x50f549*/
  FIXUP public_50f549 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5da67c
        call edi
        test al, al
        lea ecx, ss:[esp+0x1C]
        je public_50f565
        push 0
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ss : [ebp+0x3C]
        jmp public_50f5c2
/*FIXUP public_50f565 : nop
        push offset public_5c9660 @0x50f565*/
  FIXUP public_50f565 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c9660
        call edi
        test al, al
        je public_50f5c2
        lea ecx, ss:[esp+0x1C]
        call dword ptr ds : [public_5c6698]
        mov esi, eax
        test esi, esi
        jne public_50f588
        mov dword ptr ss : [ebp+0x10], eax
        mov byte ptr ss : [ebp+0x14], al
        jmp public_50f5c2
        public_50f588 : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x20
        lea edx, ss:[ebp+0x14]
        jb public_50f5a3
        mov eax, 0x1F
        public_50f5a3 : nop
        mov ecx, eax
        mov ebx, ecx
        shr ecx, 2
        mov edi, edx
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
        mov edi, dword ptr ds : [public_5c6cf4]
        mov byte ptr ds : [eax+edx], 0
        mov dword ptr ss : [ebp+0x10], eax
        public_50f5c2 : nop
        lea ecx, ss:[esp+0x1C]
        call dword ptr ds : [public_5c669c]
        test al, al
        jne public_50f480
        public_50f5d4 : nop
        mov ecx, dword ptr ss : [ebp+8]
        mov ebx, dword ptr ss : [ebp+4]
        mov eax, ecx
        sub eax, ebx
        sar eax, 2
        cmp eax, 0x10
        mov dword ptr ss : [esp+0x14], ecx
        jg public_50f5fb
        push 0
        push ecx
        push ebx
        call public_512b00
        add esp, 0xC
        jmp public_50f6b7
        public_50f5fb : nop
        cmp eax, 0x10
        mov ebp, ecx
        mov edi, ebx
        jle public_50f676
        public_50f604 : nop
        mov ecx, dword ptr ss : [ebp-4]
        mov eax, ebp
        sub eax, edi
        sar eax, 2
        cdq 
        sub eax, edx
        mov edx, dword ptr ds : [edi]
        sar eax, 1
        mov eax, dword ptr ds : [edi+eax*4]
        cmp edx, eax
        jae public_50f626
        cmp eax, ecx
        jb public_50f634
        cmp edx, ecx
        jae public_50f62a
        jmp public_50f632
        public_50f626 : nop
        cmp edx, ecx
        jae public_50f62e
        public_50f62a : nop
        mov eax, edx
        jmp public_50f634
        public_50f62e : nop
        cmp eax, ecx
        jae public_50f634
        public_50f632 : nop
        mov eax, ecx
        public_50f634 : nop
        push eax
        push ebp
        push edi
        call public_512b70
        mov esi, eax
        mov edx, ebp
        sub edx, esi
        sub eax, edi
        add esp, 0xC
        and edx, 0xFFFFFFFC
        and eax, 0xFFFFFFFC
        cmp edx, eax
        push 0
        jg public_50f65e
        push ebp
        push esi
        call public_512a40
        mov ebp, esi
        jmp public_50f667
        public_50f65e : nop
        push esi
        push edi
        call public_512a40
        mov edi, esi
        public_50f667 : nop
        mov ecx, ebp
        sub ecx, edi
        and ecx, 0xFFFFFFFC
        add esp, 0xC
        cmp ecx, 0x40
        jg public_50f604
        public_50f676 : nop
        push 0
        lea esi, ds:[ebx+0x40]
        push esi
        push ebx
        call public_512b00
        mov ebx, dword ptr ss : [esp+0x20]
        add esp, 0xC
        cmp esi, ebx
        je public_50f6b7
        lea ecx, ds:[ecx]
        public_50f690 : nop
        mov edi, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi-4]
        cmp edi, ecx
        lea eax, ds:[esi-4]
        mov edx, esi
        jae public_50f6ae
        mov edi, edi
        public_50f6a0 : nop
        mov dword ptr ds : [edx], ecx
        mov ecx, dword ptr ds : [eax-4]
        mov edx, eax
        sub eax, 4
        cmp edi, ecx
        jb public_50f6a0
        public_50f6ae : nop
        add esi, 4
        cmp esi, ebx
        mov dword ptr ds : [edx], edi
        jne public_50f690
        public_50f6b7 : nop
        mov dword ptr ss : [esp+0x14], 0
        public_50f6bf : nop
        xor ebx, ebx
        public_50f6c1 : nop
        lea edx, ss:[esp+0x1444]
        mov dword ptr ss : [esp+0x158C], 1
        mov dword ptr ss : [esp+0x18], edx
        mov eax, dword ptr ds : [public_5c7080]
        mov ecx, dword ptr ds : [eax]
        push ecx
        push ebx
        lea ecx, ss:[esp+0x144C]
        mov byte ptr ss : [esp+0x1594], 2
        call dword ptr ds : [public_5c707c]
        cmp dword ptr ss : [esp+0x1454], 0xFFFFFFFF
        mov ebp, dword ptr ds : [public_5c6efc]
        mov esi, dword ptr ds : [public_5c6ef8]
        je public_50f756
        cmp dword ptr ss : [esp+0x1458], ebx
        je public_50f741
        mov eax, dword ptr ss : [esp+0x145C]
        cmp eax, ebx
        je public_50f730
        push eax
        call ebp
        mov dword ptr ss : [esp+0x145C], ebx
        mov dword ptr ss : [esp+0x1460], ebx
        public_50f730 : nop
        mov edx, dword ptr ss : [esp+0x1458]
        push edx
        call esi
        mov dword ptr ss : [esp+0x1458], ebx
        public_50f741 : nop
        mov eax, dword ptr ss : [esp+0x1454]
        push eax
        call esi
        mov dword ptr ss : [esp+0x1454], 0xFFFFFFFF
        public_50f756 : nop
        mov eax, dword ptr ss : [esp+0x145C]
        cmp eax, ebx
        mov edi, dword ptr ds : [public_5c71d8]
        je public_50f77b
        push eax
        call edi
        add esp, 4
        mov dword ptr ss : [esp+0x145C], ebx
        mov dword ptr ss : [esp+0x1460], ebx
        public_50f77b : nop
        push 1
        lea ecx, ss:[esp+0x1448]
        mov dword ptr ss : [esp+0x1468], ebx
        mov byte ptr ss : [esp+0x1590], 1
        call dword ptr ds : [public_5c7084]
        mov ecx, dword ptr ds : [public_5c7080]
        mov edx, dword ptr ds : [ecx]
        push edx
        push ebx
        lea ecx, ss:[esp+0x24]
        mov dword ptr ss : [esp+0x1594], 3
        call dword ptr ds : [public_5c707c]
        cmp dword ptr ss : [esp+0x2C], 0xFFFFFFFF
        je public_50f7f2
        cmp dword ptr ss : [esp+0x30], ebx
        je public_50f7e3
        mov eax, dword ptr ss : [esp+0x34]
        cmp eax, ebx
        je public_50f7d8
        push eax
        call ebp
        mov dword ptr ss : [esp+0x34], ebx
        mov dword ptr ss : [esp+0x38], ebx
        public_50f7d8 : nop
        mov eax, dword ptr ss : [esp+0x30]
        push eax
        call esi
        mov dword ptr ss : [esp+0x30], ebx
        public_50f7e3 : nop
        mov ecx, dword ptr ss : [esp+0x2C]
        push ecx
        call esi
        mov dword ptr ss : [esp+0x2C], 0xFFFFFFFF
        public_50f7f2 : nop
        mov eax, dword ptr ss : [esp+0x34]
        cmp eax, ebx
        je public_50f808
        push eax
        call edi
        add esp, 4
        mov dword ptr ss : [esp+0x34], ebx
        mov dword ptr ss : [esp+0x38], ebx
        public_50f808 : nop
        push 1
        lea ecx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x40], ebx
        mov dword ptr ss : [esp+0x1590], 0xFFFFFFFF
        call dword ptr ds : [public_5c7084]
        mov ecx, dword ptr ss : [esp+0x1584]
        mov eax, dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1580
        ret 8
        public_50f842 : nop
        mov dword ptr ss : [esp+0x14], 1
        jmp public_50f6c1
        UNREACHABLE_TRAP(0x50f3a0)
    }
}

#undef public_50f408
#undef public_50f430
#undef public_50f480
#undef public_50f529
#undef public_50f549
#undef public_50f565
#undef public_50f588
#undef public_50f5a3
#undef public_50f5c2
#undef public_50f5d4
#undef public_50f5fb
#undef public_50f604
#undef public_50f626
#undef public_50f62a
#undef public_50f62e
#undef public_50f632
#undef public_50f634
#undef public_50f65e
#undef public_50f667
#undef public_50f676
#undef public_50f690
#undef public_50f6a0
#undef public_50f6ae
#undef public_50f6b7
#undef public_50f6bf
#undef public_50f6c1
#undef public_50f730
#undef public_50f741
#undef public_50f756
#undef public_50f77b
#undef public_50f7d8
#undef public_50f7e3
#undef public_50f7f2
#undef public_50f808
#undef public_50f842
