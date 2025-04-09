#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_428790);
CLANG_FORWARD_PROC_SYMBOL(public_428f80);
CLANG_FORWARD_PROC_SYMBOL(public_4363b0);
CLANG_FORWARD_PROC_SYMBOL(public_436bb0);
CLANG_FORWARD_PROC_SYMBOL(public_53aaa0);
CLANG_FORWARD_PROC_SYMBOL(public_5995f0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_53a4fb _public_53a4fb
#define public_53a507 _public_53a507
#define public_53a516 _public_53a516
#define public_53a547 _public_53a547
#define public_53a556 _public_53a556
#define public_53a561 _public_53a561
#define public_53a570 _public_53a570
#define public_53a596 _public_53a596
#define public_53a5ab _public_53a5ab
#define public_53a5c4 _public_53a5c4
#define public_53a5c6 _public_53a5c6
#define public_53a673 _public_53a673
#define public_53a678 _public_53a678
#define public_53a680 _public_53a680
#define public_53a685 _public_53a685
#define public_53a691 _public_53a691
#define public_53a70f _public_53a70f
#define public_53a750 _public_53a750
#define public_53a766 _public_53a766
#define public_53a780 _public_53a780
#define public_53a795 _public_53a795
#define public_53a7a0 _public_53a7a0
#define public_53a7b4 _public_53a7b4
#define public_53a7ba _public_53a7ba
#define public_53a7bd _public_53a7bd
#define public_53a806 _public_53a806
#define public_53a80d _public_53a80d

PROC_DECLARE(0x53a4c0, internal_53a4c0, public_53a4c0);
extern "C" NAKED register_t __cdecl internal_53a4c0()
{
    __asm
    {
        sub esp, 0x40
        push ebx
        mov ebx, ecx
        mov ecx, dword ptr ss : [esp+0x4C]
        test ecx, ecx
        push ebp
        push esi
        mov dword ptr ss : [esp+0x10], ebx
        je public_53a80d
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x30]
        test eax, eax
        je public_53a80d
        mov ecx, dword ptr ds : [ebx+0x84]
        test ecx, ecx
        lea esi, ds:[ebx+0x80]
        jne public_53a4fb
        mov dword ptr ss : [esp+0xC], ecx
        jmp public_53a507
        public_53a4fb : nop
        mov eax, dword ptr ds : [esi+8]
        sub eax, ecx
        sar eax, 3
        mov dword ptr ss : [esp+0xC], eax
        public_53a507 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        xor eax, eax
        test ecx, ecx
        push edi
        mov dword ptr ss : [esp+0x1C], eax
        jle public_53a561
        public_53a516 : nop
        mov ecx, dword ptr ds : [ebx+0x84]
        mov edx, dword ptr ss : [esp+0x54]
        lea edi, ds:[ecx+eax*8]
        cmp dword ptr ds : [edi], edx
        jne public_53a547
        mov ecx, dword ptr ss : [esp+0x58]
        mov eax, dword ptr ds : [edi+4]
        mov edx, dword ptr ds : [ecx]
        mov ebp, dword ptr ds : [eax+0x18]
        call dword ptr ds : [edx+0x30]
        mov ecx, dword ptr ss : [ebp+4]
        mov edx, dword ptr ds : [eax+4]
        add eax, 4
        cmp ecx, edx
        je public_53a556
        mov eax, dword ptr ss : [esp+0x1C]
        public_53a547 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        inc eax
        cmp eax, ecx
        mov dword ptr ss : [esp+0x1C], eax
        jl public_53a516
        jmp public_53a561
        public_53a556 : nop
        mov ebp, dword ptr ds : [edi+4]
        test ebp, ebp
        jne public_53a7bd
        public_53a561 : nop
        mov eax, dword ptr ss : [esp+0x10]
        xor ebp, ebp
        test eax, eax
        jle public_53a5ab
        nop 
        lea esp, ss:[esp]
        public_53a570 : nop
        mov edx, dword ptr ds : [ebx+0x84]
        mov eax, dword ptr ds : [edx+ebp*8+4]
        mov ecx, dword ptr ds : [eax]
        lea edi, ds:[edx+ebp*8]
        push eax
        call dword ptr ds : [ecx+0x14]
        test al, al
        je public_53a596
        mov eax, dword ptr ss : [esp+0x10]
        mov ebx, dword ptr ss : [esp+0x14]
        inc ebp
        cmp ebp, eax
        jl public_53a570
        jmp public_53a5ab
        public_53a596 : nop
        mov ebp, dword ptr ds : [edi+4]
        test ebp, ebp
        mov edx, dword ptr ss : [esp+0x54]
        mov dword ptr ds : [edi], edx
        jne public_53a7bd
        mov ebx, dword ptr ss : [esp+0x14]
        public_53a5ab : nop
        push 0x64
        call public_428f80
        add esp, 4
        test eax, eax
        je public_53a5c4
        mov ecx, eax
        call public_428790
        mov ebp, eax
        jmp public_53a5c6
        public_53a5c4 : nop
        xor ebp, ebp
        public_53a5c6 : nop
        mov edx, dword ptr ds : [ebx]
        mov edi, dword ptr ss : [ebp]
        lea eax, ss:[esp+0x20]
        push eax
        mov ecx, ebx
        mov dword ptr ss : [esp+0x44], 0x3F800000
        mov dword ptr ss : [esp+0x34], 0x3F800000
        mov dword ptr ss : [esp+0x24], 0x3F800000
        mov dword ptr ss : [esp+0x40], 0
        mov dword ptr ss : [esp+0x3C], 0
        mov dword ptr ss : [esp+0x38], 0
        mov dword ptr ss : [esp+0x30], 0
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x28], 0
        mov dword ptr ss : [esp+0x50], 0
        mov dword ptr ss : [esp+0x4C], 0
        mov dword ptr ss : [esp+0x48], 0
        call dword ptr ds : [edx+0x1C]
        push eax
        mov ecx, ebp
        call dword ptr ds : [edi+0x94]
        mov eax, dword ptr ss : [esp+0x54]
        mov ecx, dword ptr ds : [esi+0xC]
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ds : [esi+8]
        sub ecx, eax
        sar ecx, 3
        cmp ecx, 1
        mov dword ptr ss : [esp+0x18], ebp
        mov edi, eax
        jae public_53a70f
        mov edx, dword ptr ds : [esi+4]
        test edx, edx
        je public_53a673
        mov ecx, eax
        sub ecx, edx
        sar ecx, 3
        cmp ecx, 1
        ja public_53a678
        public_53a673 : nop
        mov ecx, 1
        public_53a678 : nop
        test edx, edx
        jne public_53a680
        xor eax, eax
        jmp public_53a685
        public_53a680 : nop
        sub eax, edx
        sar eax, 3
        public_53a685 : nop
        add eax, ecx
        test eax, eax
        mov dword ptr ss : [esp+0x1C], eax
        jge public_53a691
        xor eax, eax
        public_53a691 : nop
        lea edx, ds:[eax*8]
        push edx
        call public_5b7e84
        add esp, 4
        mov ebx, eax
        mov eax, dword ptr ds : [esi+4]
        push ebx
        push edi
        push eax
        mov ecx, esi
        call public_4363b0
        lea ecx, ss:[esp+0x14]
        push ecx
        push 1
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x60], eax
        call public_436bb0
        mov edx, dword ptr ss : [esp+0x54]
        mov eax, dword ptr ds : [esi+8]
        add edx, 8
        push edx
        push eax
        push edi
        mov ecx, esi
        call public_4363b0
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [esi+4]
        push ecx
        push edx
        mov ecx, esi
        call public_53aaa0
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_5b7e1d
        mov ecx, dword ptr ss : [esp+0x20]
        lea edx, ds:[ebx+ecx*8]
        add esp, 4
        mov ecx, esi
        mov dword ptr ds : [esi+0xC], edx
        call public_5995f0
        lea eax, ds:[ebx+eax*8+8]
        mov dword ptr ds : [esi+4], ebx
        jmp public_53a7ba
        public_53a70f : nop
        mov ecx, eax
        sub ecx, edi
        sar ecx, 3
        cmp ecx, 1
        mov ecx, esi
        jae public_53a766
        lea edx, ds:[edi+8]
        push edx
        push eax
        push edi
        call public_4363b0
        mov eax, dword ptr ds : [esi+8]
        mov edx, eax
        lea ecx, ss:[esp+0x14]
        push ecx
        sub edx, edi
        sar edx, 3
        mov ecx, 1
        sub ecx, edx
        push ecx
        push eax
        mov ecx, esi
        call public_436bb0
        mov ecx, dword ptr ds : [esi+8]
        cmp edi, ecx
        mov eax, edi
        je public_53a7b4
        public_53a750 : nop
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax+4], edx
        add eax, 8
        cmp eax, ecx
        jne public_53a750
        jmp public_53a7b4
        public_53a766 : nop
        push eax
        push eax
        add eax, 0xFFFFFFF8
        push eax
        call public_4363b0
        mov ecx, dword ptr ds : [esi+8]
        lea eax, ds:[ecx-8]
        cmp edi, eax
        je public_53a795
        nop 
        lea esp, ss:[esp]
        public_53a780 : nop
        mov edx, dword ptr ds : [eax-8]
        sub eax, 8
        sub ecx, 8
        cmp eax, edi
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        jne public_53a780
        public_53a795 : nop
        lea ecx, ds:[edi+8]
        cmp edi, ecx
        mov eax, edi
        je public_53a7b4
        mov edi, edi
        public_53a7a0 : nop
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax+4], edx
        add eax, 8
        cmp eax, ecx
        jne public_53a7a0
        public_53a7b4 : nop
        mov eax, dword ptr ds : [esi+8]
        add eax, 8
        public_53a7ba : nop
        mov dword ptr ds : [esi+8], eax
        public_53a7bd : nop
        mov ecx, dword ptr ss : [esp+0x5C]
        mov eax, dword ptr ss : [ebp]
        push ecx
        mov ecx, ebp
        call dword ptr ds : [eax+0x8C]
        mov esi, dword ptr ss : [esp+0x58]
        mov edx, dword ptr ds : [esi]
        mov edi, dword ptr ss : [ebp]
        mov ecx, esi
        call dword ptr ds : [edx+0x2C]
        push ecx
        mov ecx, ebp
        fstp dword ptr ss : [esp]
        call dword ptr ds : [edi+0x98]
        mov eax, dword ptr ss : [ebp]
        push ebp
        call dword ptr ds : [eax+0x14]
        test al, al
        pop edi
        mov ecx, ebp
        push 0
        je public_53a806
        mov edx, dword ptr ss : [ebp]
        call dword ptr ds : [edx+0x64]
        pop esi
        pop ebp
        pop ebx
        add esp, 0x40
        ret 0xC
        public_53a806 : nop
        mov eax, dword ptr ss : [ebp]
        push esi
        call dword ptr ds : [eax+0x58]
        public_53a80d : nop
        pop esi
        pop ebp
        pop ebx
        add esp, 0x40
        ret 0xC
        UNREACHABLE_TRAP(0x53a4c0)
    }
}

#undef public_53a4fb
#undef public_53a507
#undef public_53a516
#undef public_53a547
#undef public_53a556
#undef public_53a561
#undef public_53a570
#undef public_53a596
#undef public_53a5ab
#undef public_53a5c4
#undef public_53a5c6
#undef public_53a673
#undef public_53a678
#undef public_53a680
#undef public_53a685
#undef public_53a691
#undef public_53a70f
#undef public_53a750
#undef public_53a766
#undef public_53a780
#undef public_53a795
#undef public_53a7a0
#undef public_53a7b4
#undef public_53a7ba
#undef public_53a7bd
#undef public_53a806
#undef public_53a80d
