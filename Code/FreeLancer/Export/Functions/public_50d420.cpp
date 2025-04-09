#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_417c50);
CLANG_FORWARD_PROC_SYMBOL(public_50d420);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e90);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);
CLANG_FORWARD_JUMP_SYMBOL(public_5bfcaf);

#define public_50d488 _public_50d488
#define public_50d4b0 _public_50d4b0
#define public_50d500 _public_50d500
#define public_50d52e _public_50d52e
#define public_50d54b _public_50d54b
#define public_50d56c _public_50d56c
#define public_50d5d5 _public_50d5d5
#define public_50d63e _public_50d63e
#define public_50d65c _public_50d65c
#define public_50d67a _public_50d67a
#define public_50d698 _public_50d698
#define public_50d6b6 _public_50d6b6
#define public_50d6d7 _public_50d6d7
#define public_50d6eb _public_50d6eb
#define public_50d6f5 _public_50d6f5
#define public_50d6f7 _public_50d6f7
#define public_50d7e6 _public_50d7e6
#define public_50d7f7 _public_50d7f7
#define public_50d80c _public_50d80c
#define public_50d831 _public_50d831
#define public_50d856 _public_50d856
#define public_50d85f _public_50d85f
#define public_50d8b3 _public_50d8b3
#define public_50d8be _public_50d8be
#define public_50d8cd _public_50d8cd
#define public_50d8e3 _public_50d8e3
#define public_50d902 _public_50d902
#define public_50d90b _public_50d90b

PROC_DECLARE(0x50d420, internal_50d420, public_50d420);
extern "C" NAKED register_t __cdecl internal_50d420()
{
    __asm
    {
        push 0xFFFFFFFF
        mov eax, dword ptr fs : [0]
/*FIXUP push public_5bfcaf @0x50d428*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bfcaf
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, 0x15A4
        mov dword ptr fs : [0], esp
        call public_5b7e90
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        lea ecx, ss:[esp+0x4C]
        mov dword ptr ss : [esp+0x10], 2
        call dword ptr ds : [public_5c605c]
        mov eax, dword ptr ss : [esp+0x15C4]
        xor ebx, ebx
        push ebx
        push eax
        lea ecx, ss:[esp+0x54]
        mov dword ptr ss : [esp+0x15C4], ebx
        call dword ptr ds : [public_5c6058]
        test al, al
        je public_50d6eb
        mov ebp, dword ptr ss : [esp+0x15C8]
        mov edi, dword ptr ds : [public_5c6cf4]
        public_50d488 : nop
        lea ecx, ss:[esp+0x4C]
        call dword ptr ds : [public_5c6054]
        test al, al
        je public_50d6f5
/*FIXUP push offset public_5db5d8 @0x50d49a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5db5d8
        lea ecx, ss:[esp+0x50]
        call dword ptr ds : [public_5c6050]
        test al, al
        je public_50d488
        lea ecx, ds:[ecx]
        public_50d4b0 : nop
        lea ecx, ss:[esp+0x4C]
        call dword ptr ds : [public_5c669c]
        test al, al
        je public_50d488
/*FIXUP push offset public_5c866c @0x50d4be*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c866c
        lea ecx, ss:[esp+0x50]
        call edi
        test al, al
        je public_50d4b0
        lea ecx, ss:[esp+0x4C]
        call dword ptr ds : [public_5c6698]
        push eax
        push ebp
        call dword ptr ds : [public_5c6d24]
        add esp, 8
        test eax, eax
        jne public_50d488
        xor ebx, ebx
        lea ecx, ss:[esp+0x4C]
        mov dword ptr ss : [esp+0x10], ebx
        call dword ptr ds : [public_5c669c]
        test al, al
        je public_50d6f7
        mov edi, edi
/*FIXUP public_50d500 : nop
        push offset public_5c9660 @0x50d500*/
  FIXUP public_50d500 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c9660
        lea ecx, ss:[esp+0x50]
        call edi
        test al, al
        lea ecx, ss:[esp+0x4C]
        je public_50d54b
        call dword ptr ds : [public_5c6698]
        cmp eax, ebx
        jne public_50d52e
        mov dword ptr ds : [esi+0x2BC], ebx
        mov byte ptr ds : [esi+0x2C0], bl
        jmp public_50d6d7
        public_50d52e : nop
        push eax
        lea ecx, ds:[esi+0x2C0]
        push 0x20
        push ecx
        call public_417c50
        add esp, 0xC
        mov dword ptr ds : [esi+0x2BC], eax
        jmp public_50d6d7
/*FIXUP public_50d54b : nop
        push offset public_5db5c8 @0x50d54b*/
  FIXUP public_50d54b : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5db5c8
        call edi
        test al, al
        lea ecx, ss:[esp+0x4C]
        je public_50d56c
        push ebx
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ds : [esi+0x2AC]
        jmp public_50d6d7
/*FIXUP public_50d56c : nop
        push offset public_5db554 @0x50d56c*/
  FIXUP public_50d56c : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5db554
        call edi
        test al, al
        lea ecx, ss:[esp+0x4C]
        je public_50d5d5
        push 1
        call dword ptr ds : [public_5c6cfc]
        fstp qword ptr ss : [esp+0x28]
        push ebx
        lea ecx, ss:[esp+0x50]
        call dword ptr ds : [public_5c6cfc]
        fstp qword ptr ss : [esp+0x20]
        push 2
        lea ecx, ss:[esp+0x50]
        call dword ptr ds : [public_5c6cfc]
        fld qword ptr ss : [esp+0x20]
        fstp dword ptr ss : [esp+0x34]
        mov eax, dword ptr ss : [esp+0x34]
        fld qword ptr ss : [esp+0x28]
        lea edx, ds:[esi+0x288]
        fstp dword ptr ss : [esp+0x38]
        mov ecx, dword ptr ss : [esp+0x38]
        mov dword ptr ds : [edx], eax
        fstp dword ptr ss : [esp+0x3C]
        mov eax, dword ptr ss : [esp+0x3C]
        mov dword ptr ds : [edx+4], ecx
        mov dword ptr ds : [edx+8], eax
        jmp public_50d6d7
/*FIXUP public_50d5d5 : nop
        push offset public_5db548 @0x50d5d5*/
  FIXUP public_50d5d5 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5db548
        call edi
        test al, al
        lea ecx, ss:[esp+0x4C]
        je public_50d63e
        push 1
        call dword ptr ds : [public_5c6cfc]
        fstp qword ptr ss : [esp+0x28]
        push ebx
        lea ecx, ss:[esp+0x50]
        call dword ptr ds : [public_5c6cfc]
        fstp qword ptr ss : [esp+0x20]
        push 2
        lea ecx, ss:[esp+0x50]
        call dword ptr ds : [public_5c6cfc]
        fld qword ptr ss : [esp+0x20]
        fstp dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x14]
        fld qword ptr ss : [esp+0x28]
        lea ecx, ds:[esi+0x2A0]
        fstp dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [ecx], edx
        fstp dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [ecx+4], eax
        mov dword ptr ds : [ecx+8], edx
        jmp public_50d6d7
/*FIXUP public_50d63e : nop
        push offset public_5db5b0 @0x50d63e*/
  FIXUP public_50d63e : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5db5b0
        call edi
        test al, al
        lea ecx, ss:[esp+0x4C]
        je public_50d65c
        push ebx
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ds : [esi+0x2E8]
        jmp public_50d6d7
/*FIXUP public_50d65c : nop
        push offset public_5db598 @0x50d65c*/
  FIXUP public_50d65c : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5db598
        call edi
        test al, al
        lea ecx, ss:[esp+0x4C]
        je public_50d67a
        push ebx
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ds : [esi+0x2EC]
        jmp public_50d6d7
/*FIXUP public_50d67a : nop
        push offset public_5db588 @0x50d67a*/
  FIXUP public_50d67a : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5db588
        call edi
        test al, al
        lea ecx, ss:[esp+0x4C]
        je public_50d698
        push ebx
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ds : [esi+0x2F0]
        jmp public_50d6d7
/*FIXUP public_50d698 : nop
        push offset public_5db574 @0x50d698*/
  FIXUP public_50d698 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5db574
        call edi
        test al, al
        lea ecx, ss:[esp+0x4C]
        je public_50d6b6
        push ebx
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ds : [esi+0x2F4]
        jmp public_50d6d7
/*FIXUP public_50d6b6 : nop
        push offset public_5db56c @0x50d6b6*/
  FIXUP public_50d6b6 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5db56c
        call edi
        test al, al
        je public_50d6d7
        push ebx
        lea ecx, ss:[esp+0x50]
        call dword ptr ds : [public_5c6cfc]
        call public_5b7ec0
        mov dword ptr ds : [esi+0x2B4], eax
        public_50d6d7 : nop
        lea ecx, ss:[esp+0x4C]
        call dword ptr ds : [public_5c669c]
        test al, al
        jne public_50d500
        jmp public_50d6f7
        public_50d6eb : nop
        mov dword ptr ss : [esp+0x10], 1
        jmp public_50d6f7
        public_50d6f5 : nop
        xor ebx, ebx
        public_50d6f7 : nop
        fld dword ptr ds : [esi+0x2F0]
        add esi, 0x294
        fld st(0)
        fmul dword ptr ds : [esi+0x14]
        fstp dword ptr ss : [esp+0x40]
        fld st(0)
        fmul dword ptr ds : [esi+0x10]
        fstp dword ptr ss : [esp+0x30]
        fmul dword ptr ds : [esi+0xC]
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ds : [esi+0x5C]
        fsubr qword ptr ds : [public_5c89b8]
        fld st(0)
        fmul dword ptr ds : [esi-4]
        fstp dword ptr ss : [esp+0x44]
        fld st(0)
        fmul dword ptr ds : [esi-8]
        fstp dword ptr ss : [esp+0x48]
        fmul dword ptr ds : [esi-0xC]
        fstp dword ptr ss : [esp+0x28]
        fld dword ptr ss : [esp+0x44]
        fadd dword ptr ss : [esp+0x40]
        fld dword ptr ss : [esp+0x48]
        fadd dword ptr ss : [esp+0x30]
        fld dword ptr ss : [esp+0x28]
        fadd dword ptr ss : [esp+0x20]
        fstp dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [esi], eax
        fstp dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [esi+4], ecx
        fstp dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+8], edx
        lea eax, ss:[esp+0x1474]
        mov dword ptr ss : [esp+0x15BC], 1
        mov dword ptr ss : [esp+0x20], eax
        mov ecx, dword ptr ds : [public_5c7080]
        mov edx, dword ptr ds : [ecx]
        push edx
        push ebx
        lea ecx, ss:[esp+0x147C]
        mov byte ptr ss : [esp+0x15C4], 2
        call dword ptr ds : [public_5c707c]
        cmp dword ptr ss : [esp+0x1484], 0xFFFFFFFF
        mov ebp, dword ptr ds : [public_5c6efc]
        mov esi, dword ptr ds : [public_5c6ef8]
        je public_50d80c
        cmp dword ptr ss : [esp+0x1488], ebx
        je public_50d7f7
        mov eax, dword ptr ss : [esp+0x148C]
        cmp eax, ebx
        je public_50d7e6
        push eax
        call ebp
        mov dword ptr ss : [esp+0x148C], ebx
        mov dword ptr ss : [esp+0x1490], ebx
        public_50d7e6 : nop
        mov eax, dword ptr ss : [esp+0x1488]
        push eax
        call esi
        mov dword ptr ss : [esp+0x1488], ebx
        public_50d7f7 : nop
        mov ecx, dword ptr ss : [esp+0x1484]
        push ecx
        call esi
        mov dword ptr ss : [esp+0x1484], 0xFFFFFFFF
        public_50d80c : nop
        mov eax, dword ptr ss : [esp+0x148C]
        cmp eax, ebx
        mov edi, dword ptr ds : [public_5c71d8]
        je public_50d831
        push eax
        call edi
        add esp, 4
        mov dword ptr ss : [esp+0x148C], ebx
        mov dword ptr ss : [esp+0x1490], ebx
        public_50d831 : nop
        mov eax, dword ptr ss : [esp+0x1478]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x1494], ebx
        je public_50d85f
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_50d856
        cmp cl, 0xFF
        je public_50d856
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_50d85f
        public_50d856 : nop
        push eax
        call public_5b7e1d
        add esp, 4
        public_50d85f : nop
        mov dword ptr ss : [esp+0x1478], ebx
        mov dword ptr ss : [esp+0x147C], ebx
        mov dword ptr ss : [esp+0x1480], ebx
        mov edx, dword ptr ds : [public_5c7080]
        mov eax, dword ptr ds : [edx]
        push eax
        push ebx
        lea ecx, ss:[esp+0x54]
        mov dword ptr ss : [esp+0x15C4], 3
        call dword ptr ds : [public_5c707c]
        cmp dword ptr ss : [esp+0x5C], 0xFFFFFFFF
        je public_50d8cd
        cmp dword ptr ss : [esp+0x60], ebx
        je public_50d8be
        mov eax, dword ptr ss : [esp+0x64]
        cmp eax, ebx
        je public_50d8b3
        push eax
        call ebp
        mov dword ptr ss : [esp+0x64], ebx
        mov dword ptr ss : [esp+0x68], ebx
        public_50d8b3 : nop
        mov ecx, dword ptr ss : [esp+0x60]
        push ecx
        call esi
        mov dword ptr ss : [esp+0x60], ebx
        public_50d8be : nop
        mov edx, dword ptr ss : [esp+0x5C]
        push edx
        call esi
        mov dword ptr ss : [esp+0x5C], 0xFFFFFFFF
        public_50d8cd : nop
        mov eax, dword ptr ss : [esp+0x64]
        cmp eax, ebx
        je public_50d8e3
        push eax
        call edi
        add esp, 4
        mov dword ptr ss : [esp+0x64], ebx
        mov dword ptr ss : [esp+0x68], ebx
        public_50d8e3 : nop
        mov eax, dword ptr ss : [esp+0x50]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x6C], ebx
        je public_50d90b
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_50d902
        cmp cl, 0xFF
        je public_50d902
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_50d90b
        public_50d902 : nop
        push eax
        call public_5b7e1d
        add esp, 4
        public_50d90b : nop
        mov ecx, dword ptr ss : [esp+0x15B4]
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x15B0
        ret 8
        UNREACHABLE_TRAP(0x50d420)
    }
}

#undef public_50d488
#undef public_50d4b0
#undef public_50d500
#undef public_50d52e
#undef public_50d54b
#undef public_50d56c
#undef public_50d5d5
#undef public_50d63e
#undef public_50d65c
#undef public_50d67a
#undef public_50d698
#undef public_50d6b6
#undef public_50d6d7
#undef public_50d6eb
#undef public_50d6f5
#undef public_50d6f7
#undef public_50d7e6
#undef public_50d7f7
#undef public_50d80c
#undef public_50d831
#undef public_50d856
#undef public_50d85f
#undef public_50d8b3
#undef public_50d8be
#undef public_50d8cd
#undef public_50d8e3
#undef public_50d902
#undef public_50d90b
