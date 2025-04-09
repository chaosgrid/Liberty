#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5a9ea0);
CLANG_FORWARD_PROC_SYMBOL(public_5ac2b0);
CLANG_FORWARD_PROC_SYMBOL(public_5ad910);
CLANG_FORWARD_PROC_SYMBOL(public_5adfc0);
CLANG_FORWARD_PROC_SYMBOL(public_5af640);
CLANG_FORWARD_PROC_SYMBOL(public_5b73b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b73b6);

#define public_5ac2d1 _public_5ac2d1
#define public_5ac300 _public_5ac300
#define public_5ac328 _public_5ac328
#define public_5ac360 _public_5ac360
#define public_5ac37a _public_5ac37a
#define public_5ac3a6 _public_5ac3a6
#define public_5ac3b2 _public_5ac3b2
#define public_5ac3ba _public_5ac3ba
#define public_5ac3e0 _public_5ac3e0
#define public_5ac41c _public_5ac41c
#define public_5ac440 _public_5ac440
#define public_5ac461 _public_5ac461
#define public_5ac471 _public_5ac471
#define public_5ac473 _public_5ac473
#define public_5ac485 _public_5ac485
#define public_5ac4a7 _public_5ac4a7
#define public_5ac4c1 _public_5ac4c1
#define public_5ac4ee _public_5ac4ee
#define public_5ac4f4 _public_5ac4f4
#define public_5ac4fc _public_5ac4fc
#define public_5ac538 _public_5ac538
#define public_5ac583 _public_5ac583
#define public_5ac5b8 _public_5ac5b8
#define public_5ac5d9 _public_5ac5d9
#define public_5ac5e9 _public_5ac5e9
#define public_5ac5eb _public_5ac5eb
#define public_5ac5fd _public_5ac5fd
#define public_5ac60f _public_5ac60f
#define public_5ac621 _public_5ac621
#define public_5ac639 _public_5ac639
#define public_5ac645 _public_5ac645
#define public_5ac658 _public_5ac658
#define public_5ac65e _public_5ac65e
#define public_5ac676 _public_5ac676
#define public_5ac690 _public_5ac690
#define public_5ac69c _public_5ac69c
#define public_5ac6b8 _public_5ac6b8
#define public_5ac6d4 _public_5ac6d4
#define public_5ac6f1 _public_5ac6f1
#define public_5ac6ff _public_5ac6ff

PROC_DECLARE(0x5ac2b0, internal_5ac2b0, public_5ac2b0);
extern "C" NAKED register_t __cdecl internal_5ac2b0()
{
    __asm
    {
        mov al, byte ptr ds : [public_615b18]
        sub esp, 0x14
        test al, al
        push ebx
        push ebp
        push esi
        push edi
        mov esi, ecx
        je public_5ac2d1
        mov eax, dword ptr ds : [esi+0x7C]
        test eax, eax
        jne public_5ac2d1
        lea ecx, ds:[esi+4]
        call public_5b73b0
        public_5ac2d1 : nop
        mov ebx, dword ptr ds : [esi+0x144]
        mov edi, dword ptr ds : [esi+0x148]
        call dword ptr ds : [public_5c72ec]
        cmp ebx, edi
        mov dword ptr ss : [esp+0x1C], eax
        mov edx, 0x9C
        je public_5ac3ba
        lea eax, ds:[ebx+0x9C]
        mov dword ptr ss : [esp+0x14], eax
        mov edi, edi
        public_5ac300 : nop
        mov ecx, dword ptr ds : [ebx+0x30]
        mov eax, dword ptr ss : [esp+0x1C]
        sub eax, ecx
        xor cl, cl
        cmp byte ptr ds : [ebx+0x3E], cl
        je public_5ac3a6
        cmp eax, 0x1388
        jbe public_5ac3a6
        cmp eax, 0x7530
        jbe public_5ac328
        mov cl, 1
        public_5ac328 : nop
        test cl, cl
        mov dword ptr ds : [ebx+0x2C], 0xFFFFFFFF
        mov byte ptr ds : [esi+0x238], 1
        je public_5ac3a6
        mov eax, dword ptr ds : [esi+0x148]
        mov edi, dword ptr ss : [esp+0x14]
        cmp edi, eax
        lea ebp, ds:[esi+0x140]
        mov dword ptr ss : [esp+0x20], eax
        je public_5ac37a
        mov eax, ebx
        mov ecx, edi
        sub eax, ecx
        mov dword ptr ss : [esp+0x18], eax
        lea esp, ss:[esp]
        public_5ac360 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        push edi
        add ecx, edi
        call public_5a9ea0
        mov eax, dword ptr ss : [esp+0x20]
        add edi, 0x9C
        cmp edi, eax
        jne public_5ac360
        public_5ac37a : nop
        mov eax, dword ptr ss : [ebp+8]
        push eax
        add eax, 0xFFFFFF64
        push eax
        mov ecx, ebp
        call public_5ad910
        add dword ptr ss : [ebp+8], 0xFFFFFF64
        mov edi, dword ptr ds : [esi+0x148]
        mov byte ptr ds : [esi+0x238], 1
        mov edx, 0x9C
        jmp public_5ac3b2
        public_5ac3a6 : nop
        mov eax, dword ptr ss : [esp+0x14]
        add ebx, edx
        add eax, edx
        mov dword ptr ss : [esp+0x14], eax
        public_5ac3b2 : nop
        cmp ebx, edi
        jne public_5ac300
        public_5ac3ba : nop
        mov eax, dword ptr ds : [esi+0x23C]
        test eax, eax
        jne public_5ac6ff
        mov eax, dword ptr ds : [esi+0x168]
        mov ebx, dword ptr ds : [esi+0x164]
        cmp ebx, eax
        je public_5ac4fc
        lea esp, ss:[esp]
        public_5ac3e0 : nop
        mov cl, byte ptr ds : [ebx+0x3D]
        test cl, cl
        je public_5ac4ee
        mov edx, dword ptr ss : [esp+0x1C]
        sub edx, dword ptr ds : [ebx+0x30]
        cmp edx, 0x3E8
        jb public_5ac4ee
        cmp dword ptr ds : [ebx+0x34], 5
        jae public_5ac41c
        push ebx
        lea ecx, ds:[esi+0x170]
        mov byte ptr ds : [ebx+0x3D], 0
        mov eax, dword ptr ds : [ecx+8]
        push 1
        push eax
        call public_5adfc0
        jmp public_5ac485
        public_5ac41c : nop
        mov eax, dword ptr ds : [ebx+0x6C]
        test eax, eax
        je public_5ac471
        mov edi, dword ptr ds : [esi+0x144]
        cmp edi, dword ptr ds : [esi+0x148]
        mov ecx, dword ptr ds : [ebx+0x90]
        mov dword ptr ss : [esp+0x20], ecx
        je public_5ac471
        nop 
        lea esp, ss:[esp]
        public_5ac440 : nop
        lea eax, ds:[ebx+0x64]
        push eax
        lea edx, ds:[edi+0x64]
        push edx
        call dword ptr ds : [public_5c704c]
        add esp, 8
        test al, al
        je public_5ac461
        mov eax, dword ptr ss : [esp+0x20]
        cmp dword ptr ds : [edi+0x90], eax
        je public_5ac473
        public_5ac461 : nop
        mov eax, dword ptr ds : [esi+0x148]
        add edi, 0x9C
        cmp edi, eax
        jne public_5ac440
        public_5ac471 : nop
        xor edi, edi
        public_5ac473 : nop
        test edi, edi
        je public_5ac485
        mov dword ptr ds : [edi+0x2C], 0xFFFFFFFF
        mov byte ptr ds : [esi+0x238], 1
        public_5ac485 : nop
        mov eax, dword ptr ds : [esi+0x168]
        lea ebp, ds:[esi+0x160]
        lea edi, ds:[ebx+0x9C]
        cmp edi, eax
        mov dword ptr ss : [esp+0x20], eax
        je public_5ac4c1
        mov eax, ebx
        sub eax, edi
        mov dword ptr ss : [esp+0x18], eax
        public_5ac4a7 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        push edi
        add ecx, edi
        call public_5a9ea0
        mov eax, dword ptr ss : [esp+0x20]
        add edi, 0x9C
        cmp edi, eax
        jne public_5ac4a7
        public_5ac4c1 : nop
        mov eax, dword ptr ss : [ebp+8]
        push eax
        add eax, 0xFFFFFF64
        push eax
        mov ecx, ebp
        call public_5ad910
        add dword ptr ss : [ebp+8], 0xFFFFFF64
        mov ecx, dword ptr ds : [esi+0x25C]
        mov eax, dword ptr ds : [esi+0x168]
        dec ecx
        mov dword ptr ds : [esi+0x25C], ecx
        jmp public_5ac4f4
        public_5ac4ee : nop
        add ebx, 0x9C
        public_5ac4f4 : nop
        cmp ebx, eax
        jne public_5ac3e0
        public_5ac4fc : nop
        cmp dword ptr ds : [esi+0x25C], 5
        jae public_5ac6ff
        mov eax, dword ptr ds : [esi+0x164]
        test eax, eax
        je public_5ac538
        mov ecx, dword ptr ds : [esi+0x168]
        sub ecx, eax
        mov eax, 0xD20D20D3
        imul ecx
        add edx, ecx
        sar edx, 7
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov dword ptr ss : [esp+0x20], edx
        jne public_5ac65e
        public_5ac538 : nop
        mov eax, dword ptr ds : [esi+0x174]
        test eax, eax
        je public_5ac65e
        mov ecx, dword ptr ds : [esi+0x178]
        sub ecx, eax
        mov eax, 0xD20D20D3
        imul ecx
        add edx, ecx
        sar edx, 7
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        mov dword ptr ss : [esp+0x20], edx
        je public_5ac65e
        mov eax, dword ptr ds : [esi+0x178]
        mov ebx, dword ptr ds : [esi+0x174]
        cmp ebx, eax
        mov dword ptr ss : [esp+0x18], eax
        je public_5ac60f
        public_5ac583 : nop
        push ebx
        lea ecx, ds:[esi+0x160]
        mov byte ptr ds : [ebx+0x3D], 0
        mov edx, dword ptr ds : [ecx+8]
        push 1
        push edx
        call public_5adfc0
        mov eax, dword ptr ds : [ebx+0x6C]
        test eax, eax
        je public_5ac5e9
        mov eax, dword ptr ds : [ebx+0x90]
        mov edi, dword ptr ds : [esi+0x144]
        mov dword ptr ss : [esp+0x20], eax
        cmp edi, dword ptr ds : [esi+0x148]
        je public_5ac5e9
        public_5ac5b8 : nop
        lea eax, ds:[ebx+0x64]
        push eax
        lea ecx, ds:[edi+0x64]
        push ecx
        call dword ptr ds : [public_5c704c]
        add esp, 8
        test al, al
        je public_5ac5d9
        mov edx, dword ptr ss : [esp+0x20]
        cmp dword ptr ds : [edi+0x90], edx
        je public_5ac5eb
        public_5ac5d9 : nop
        mov eax, dword ptr ds : [esi+0x148]
        add edi, 0x9C
        cmp edi, eax
        jne public_5ac5b8
        public_5ac5e9 : nop
        xor edi, edi
        public_5ac5eb : nop
        test edi, edi
        je public_5ac5fd
        mov dword ptr ds : [edi+0x2C], 0xFFFFFFFE
        mov byte ptr ds : [esi+0x238], 1
        public_5ac5fd : nop
        mov eax, dword ptr ss : [esp+0x18]
        add ebx, 0x9C
        cmp ebx, eax
        jne public_5ac583
        public_5ac60f : nop
        mov ebp, dword ptr ds : [esi+0x178]
        mov ebx, dword ptr ds : [esi+0x174]
        mov edi, ebp
        cmp edi, ebp
        je public_5ac639
        public_5ac621 : nop
        push edi
        mov ecx, ebx
        call public_5a9ea0
        add edi, 0x9C
        add ebx, 0x9C
        cmp edi, ebp
        jne public_5ac621
        public_5ac639 : nop
        mov ebp, dword ptr ds : [esi+0x178]
        cmp ebx, ebp
        mov edi, ebx
        je public_5ac658
        public_5ac645 : nop
        push 0
        mov ecx, edi
        call public_5af640
        add edi, 0x9C
        cmp edi, ebp
        jne public_5ac645
        public_5ac658 : nop
        mov dword ptr ds : [esi+0x178], ebx
        public_5ac65e : nop
        mov eax, dword ptr ds : [esi+0x168]
        mov edi, dword ptr ds : [esi+0x164]
        cmp edi, eax
        mov dword ptr ss : [esp+0x18], eax
        je public_5ac6ff
        public_5ac676 : nop
        mov cl, byte ptr ds : [edi+0x3D]
        test cl, cl
        jne public_5ac6f1
        mov ebp, dword ptr ds : [edi+0x1C]
        cmp ebp, dword ptr ds : [edi+0x20]
        mov byte ptr ss : [esp+0x13], 0
        je public_5ac6d4
        lea ebx, ds:[ebx]
        public_5ac690 : nop
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        jne public_5ac69c
        mov eax, dword ptr ds : [public_5c700c]
        public_5ac69c : nop
        mov ecx, dword ptr ss : [ebp]
        push 0
        push 0
        push 2
        push ecx
        push eax
        lea ecx, ds:[esi+4]
        call public_5b73b6
        test al, al
        je public_5ac6b8
        mov byte ptr ss : [esp+0x13], 1
        public_5ac6b8 : nop
        mov eax, dword ptr ds : [edi+0x20]
        add ebp, 4
        cmp ebp, eax
        jne public_5ac690
        mov al, byte ptr ss : [esp+0x13]
        test al, al
        je public_5ac6d4
        inc dword ptr ds : [esi+0x25C]
        mov byte ptr ds : [edi+0x3D], 1
        public_5ac6d4 : nop
        call dword ptr ds : [public_5c72ec]
        mov ecx, dword ptr ds : [edi+0x34]
        inc ecx
        mov dword ptr ds : [edi+0x30], eax
        mov dword ptr ds : [edi+0x34], ecx
        cmp dword ptr ds : [esi+0x25C], 5
        jae public_5ac6ff
        mov eax, dword ptr ss : [esp+0x18]
        public_5ac6f1 : nop
        add edi, 0x9C
        cmp edi, eax
        jne public_5ac676
        public_5ac6ff : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x5ac2b0)
    }
}

#undef public_5ac2d1
#undef public_5ac300
#undef public_5ac328
#undef public_5ac360
#undef public_5ac37a
#undef public_5ac3a6
#undef public_5ac3b2
#undef public_5ac3ba
#undef public_5ac3e0
#undef public_5ac41c
#undef public_5ac440
#undef public_5ac461
#undef public_5ac471
#undef public_5ac473
#undef public_5ac485
#undef public_5ac4a7
#undef public_5ac4c1
#undef public_5ac4ee
#undef public_5ac4f4
#undef public_5ac4fc
#undef public_5ac538
#undef public_5ac583
#undef public_5ac5b8
#undef public_5ac5d9
#undef public_5ac5e9
#undef public_5ac5eb
#undef public_5ac5fd
#undef public_5ac60f
#undef public_5ac621
#undef public_5ac639
#undef public_5ac645
#undef public_5ac658
#undef public_5ac65e
#undef public_5ac676
#undef public_5ac690
#undef public_5ac69c
#undef public_5ac6b8
#undef public_5ac6d4
#undef public_5ac6f1
#undef public_5ac6ff
