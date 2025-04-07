#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4583a0);
CLANG_FORWARD_PROC_SYMBOL(public_458d00);
CLANG_FORWARD_PROC_SYMBOL(public_46d660);
CLANG_FORWARD_PROC_SYMBOL(public_53e430);
CLANG_FORWARD_PROC_SYMBOL(public_5a7c20);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e90);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);
CLANG_FORWARD_JUMP_SYMBOL(public_5ba15f);

#define public_458427 _public_458427
#define public_458452 _public_458452
#define public_4584ce _public_4584ce
#define public_4584f7 _public_4584f7
#define public_458520 _public_458520
#define public_458551 _public_458551
#define public_458561 _public_458561
#define public_458564 _public_458564
#define public_458568 _public_458568
#define public_458592 _public_458592
#define public_4585cd _public_4585cd
#define public_4585d6 _public_4585d6
#define public_458602 _public_458602
#define public_458610 _public_458610
#define public_45861a _public_45861a
#define public_458633 _public_458633
#define public_458649 _public_458649
#define public_458692 _public_458692
#define public_45869b _public_45869b
#define public_45870f _public_45870f
#define public_458720 _public_458720
#define public_458731 _public_458731
#define public_458754 _public_458754

PROC_DECLARE(0x4583a0, internal_4583a0, public_4583a0);
extern "C" NAKED register_t __cdecl internal_4583a0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5ba15f @0x4583a8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5ba15f
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, 0x16B4
        mov dword ptr fs : [0], esp
        call public_5b7e90
        push ebx
        push esi
        push edi
        xor ebx, ebx
        push ebx
        lea eax, ss:[esp+0x58]
/*FIXUP push offset public_5ce798 @0x4583c9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ce798
        push eax
        mov dword ptr ss : [esp+0x28], ecx
        call dword ptr ds : [public_5c6068]
        add esp, 0xC
        lea ecx, ss:[esp+0x158]
        call dword ptr ds : [public_5c605c]
        push ebx
        lea ecx, ss:[esp+0x58]
        push ecx
        lea ecx, ss:[esp+0x160]
        mov dword ptr ss : [esp+0x16D0], ebx
        call dword ptr ds : [public_5c6058]
        test al, al
        je public_458649
        lea ecx, ss:[esp+0x158]
        call dword ptr ds : [public_5c6054]
        test al, al
        je public_458649
        mov esi, dword ptr ds : [public_5c669c]
        push ebp
/*FIXUP public_458427 : nop
        push offset public_5ce784 @0x458427*/
  FIXUP public_458427 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ce784
        lea ecx, ss:[esp+0x160]
        call dword ptr ds : [public_5c6050]
        test al, al
        je public_458633
        lea ecx, ss:[esp+0x15C]
        call esi
        test al, al
        je public_458633
/*FIXUP public_458452 : nop
        push offset public_5ce780 @0x458452*/
  FIXUP public_458452 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ce780
        lea ecx, ss:[esp+0x160]
        call dword ptr ds : [public_5c6cf4]
        test al, al
        je public_45861a
        push ebx
        lea ecx, ss:[esp+0x160]
        call dword ptr ds : [public_5c6cfc]
        call public_5b7ec0
        mov esi, 1
        push esi
        lea ecx, ss:[esp+0x160]
        mov ebp, eax
        call dword ptr ds : [public_5c6cfc]
        call public_5b7ec0
        push 2
        lea ecx, ss:[esp+0x160]
        mov dword ptr ss : [esp+0x40], eax
        mov dword ptr ss : [esp+0x44], esi
        mov edi, esi
        call dword ptr ds : [public_5c6cf8]
        test al, al
        jne public_4584ce
        push 2
        lea ecx, ss:[esp+0x160]
        call dword ptr ds : [public_5c6cfc]
        call public_5b7ec0
        mov dword ptr ss : [esp+0x40], eax
        public_4584ce : nop
        push 3
        lea ecx, ss:[esp+0x160]
        call dword ptr ds : [public_5c6cf8]
        test al, al
        jne public_4584f7
        push 3
        lea ecx, ss:[esp+0x160]
        call dword ptr ds : [public_5c6cfc]
        call public_5b7ec0
        mov edi, eax
        public_4584f7 : nop
        push 4
        lea ecx, ss:[esp+0x160]
        call dword ptr ds : [public_5c6cf8]
        test al, al
        jne public_458520
        push 4
        lea ecx, ss:[esp+0x160]
        call dword ptr ds : [public_5c6cfc]
        call public_5b7ec0
        mov esi, eax
        public_458520 : nop
        mov eax, dword ptr ss : [esp+0x40]
        mov ebx, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x3C]
        mov ecx, dword ptr ds : [ebx+8]
        mov dword ptr ss : [esp+0x30], eax
        mov eax, dword ptr ds : [ebx+4]
        mov dword ptr ss : [esp+0x34], edi
        mov dword ptr ss : [esp+0x28], ebp
        mov dword ptr ss : [esp+0x2C], edx
        mov dword ptr ss : [esp+0x38], esi
        mov esi, dword ptr ds : [eax+4]
        cmp esi, ecx
        mov edi, eax
        mov al, 1
        je public_458568
        public_458551 : nop
        cmp ebp, dword ptr ds : [esi+0xC]
        setb al
        test al, al
        mov edi, esi
        je public_458561
        mov esi, dword ptr ds : [esi]
        jmp public_458564
        public_458561 : nop
        mov esi, dword ptr ds : [esi+8]
        public_458564 : nop
        cmp esi, ecx
        jne public_458551
        public_458568 : nop
        mov cl, byte ptr ds : [ebx+0xC]
        test cl, cl
        je public_458592
        lea ecx, ss:[esp+0x28]
        push ecx
        push edi
        push esi
        lea edx, ss:[esp+0x5C]
        push edx
        mov ecx, ebx
        call public_458d00
        mov eax, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x18], eax
        mov byte ptr ss : [esp+0x1C], 1
        jmp public_45861a
        public_458592 : nop
        test al, al
        mov dword ptr ss : [esp+0x14], edi
        je public_4585d6
        lea ecx, ss:[esp+0x54]
        push ecx
        mov ecx, ebx
        call public_53e430
        mov edx, dword ptr ss : [esp+0x14]
        cmp edx, dword ptr ds : [eax]
        jne public_4585cd
        lea eax, ss:[esp+0x12]
        push eax
        lea ecx, ss:[esp+0x2C]
        push ecx
        push edi
        push esi
        lea edx, ss:[esp+0x5C]
        push edx
        mov ecx, ebx
        mov byte ptr ss : [esp+0x26], 1
        call public_458d00
        jmp public_458610
        public_4585cd : nop
        lea ecx, ss:[esp+0x14]
        call public_5a7c20
        public_4585d6 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x28]
        cmp dword ptr ds : [ecx+0xC], eax
        jae public_458602
        lea edx, ss:[esp+0x12]
        push edx
        lea eax, ss:[esp+0x2C]
        push eax
        push edi
        push esi
        lea ecx, ss:[esp+0x34]
        push ecx
        mov ecx, ebx
        mov byte ptr ss : [esp+0x26], 1
        call public_458d00
        jmp public_458610
        public_458602 : nop
        lea edx, ss:[esp+0x13]
        mov byte ptr ss : [esp+0x13], 0
        push edx
        lea eax, ss:[esp+0x18]
        public_458610 : nop
        lea ecx, ss:[esp+0x1C]
        push eax
        call public_46d660
        public_45861a : nop
        mov esi, dword ptr ds : [public_5c669c]
        lea ecx, ss:[esp+0x15C]
        call esi
        xor ebx, ebx
        test al, al
        jne public_458452
        public_458633 : nop
        lea ecx, ss:[esp+0x15C]
        call dword ptr ds : [public_5c6054]
        test al, al
        jne public_458427
        pop ebp
        public_458649 : nop
        lea ecx, ss:[esp+0x1580]
        mov dword ptr ss : [esp+0x16C8], 1
        mov dword ptr ss : [esp+0x20], ecx
        lea ecx, ss:[esp+0x1580]
        mov byte ptr ss : [esp+0x16C8], 2
        call dword ptr ds : [public_5c604c]
        mov eax, dword ptr ss : [esp+0x1584]
        cmp eax, ebx
        je public_45869b
        mov cl, byte ptr ds : [eax-1]
        dec eax
        test cl, cl
        je public_458692
        cmp cl, 0xFF
        je public_458692
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_45869b
        public_458692 : nop
        push eax
        call public_5b7e1d
        add esp, 4
        public_45869b : nop
        mov dword ptr ss : [esp+0x1584], ebx
        mov dword ptr ss : [esp+0x1588], ebx
        mov dword ptr ss : [esp+0x158C], ebx
        mov edx, dword ptr ds : [public_5c7080]
        mov eax, dword ptr ds : [edx]
        push eax
        push ebx
        lea ecx, ss:[esp+0x160]
        mov dword ptr ss : [esp+0x16D0], 3
        call dword ptr ds : [public_5c707c]
        mov eax, dword ptr ss : [esp+0x168]
        or edi, 0xFFFFFFFF
        cmp eax, edi
        je public_458731
        cmp dword ptr ss : [esp+0x16C], ebx
        mov esi, dword ptr ds : [public_5c6ef8]
        je public_458720
        mov eax, dword ptr ss : [esp+0x170]
        cmp eax, ebx
        je public_45870f
        push eax
        call dword ptr ds : [public_5c6efc]
        mov dword ptr ss : [esp+0x170], ebx
        mov dword ptr ss : [esp+0x174], ebx
        public_45870f : nop
        mov ecx, dword ptr ss : [esp+0x16C]
        push ecx
        call esi
        mov dword ptr ss : [esp+0x16C], ebx
        public_458720 : nop
        mov edx, dword ptr ss : [esp+0x168]
        push edx
        call esi
        mov dword ptr ss : [esp+0x168], edi
        public_458731 : nop
        mov eax, dword ptr ss : [esp+0x170]
        cmp eax, ebx
        je public_458754
        push eax
        call dword ptr ds : [public_5c71d8]
        add esp, 4
        mov dword ptr ss : [esp+0x170], ebx
        mov dword ptr ss : [esp+0x174], ebx
        public_458754 : nop
        push 1
        lea ecx, ss:[esp+0x15C]
        mov dword ptr ss : [esp+0x17C], ebx
        mov dword ptr ss : [esp+0x16CC], edi
        call dword ptr ds : [public_5c7084]
        mov ecx, dword ptr ss : [esp+0x16C0]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x16C0
        ret 
        UNREACHABLE_TRAP(0x4583a0)
    }
}

#undef public_458427
#undef public_458452
#undef public_4584ce
#undef public_4584f7
#undef public_458520
#undef public_458551
#undef public_458561
#undef public_458564
#undef public_458568
#undef public_458592
#undef public_4585cd
#undef public_4585d6
#undef public_458602
#undef public_458610
#undef public_45861a
#undef public_458633
#undef public_458649
#undef public_458692
#undef public_45869b
#undef public_45870f
#undef public_458720
#undef public_458731
#undef public_458754
