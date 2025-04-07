#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_527820);
CLANG_FORWARD_PROC_SYMBOL(public_537260);
CLANG_FORWARD_PROC_SYMBOL(public_53aaa0);
CLANG_FORWARD_PROC_SYMBOL(public_58c470);
CLANG_FORWARD_PROC_SYMBOL(public_5995c0);
CLANG_FORWARD_PROC_SYMBOL(public_5ad970);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e90);

#define public_58c493 _public_58c493
#define public_58c495 _public_58c495
#define public_58c4b6 _public_58c4b6
#define public_58c4c1 _public_58c4c1
#define public_58c4c4 _public_58c4c4
#define public_58c4e4 _public_58c4e4
#define public_58c4e6 _public_58c4e6
#define public_58c506 _public_58c506
#define public_58c511 _public_58c511
#define public_58c514 _public_58c514
#define public_58c558 _public_58c558
#define public_58c560 _public_58c560
#define public_58c581 _public_58c581
#define public_58c59c _public_58c59c
#define public_58c5a2 _public_58c5a2
#define public_58c5b6 _public_58c5b6
#define public_58c5b9 _public_58c5b9
#define public_58c5cb _public_58c5cb
#define public_58c5cd _public_58c5cd
#define public_58c5ee _public_58c5ee
#define public_58c5f9 _public_58c5f9
#define public_58c5fc _public_58c5fc
#define public_58c619 _public_58c619
#define public_58c61b _public_58c61b
#define public_58c63b _public_58c63b
#define public_58c646 _public_58c646
#define public_58c649 _public_58c649
#define public_58c697 _public_58c697
#define public_58c6b2 _public_58c6b2
#define public_58c6b8 _public_58c6b8
#define public_58c6c6 _public_58c6c6

PROC_DECLARE(0x58c470, internal_58c470, public_58c470);
extern "C" NAKED register_t __cdecl internal_58c470()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x10
        push ebx
        mov ebx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [ebx]
        test eax, eax
        push esi
        push edi
        mov edi, ecx
        mov dword ptr ss : [ebp-8], edi
        mov dword ptr ss : [ebp-4], 0
        jle public_58c493
        mov eax, dword ptr ds : [ebx+eax*4]
        jmp public_58c495
        public_58c493 : nop
        xor eax, eax
        public_58c495 : nop
        lea ecx, ss:[ebp-4]
        push ecx
        push 0
        lea edx, ss:[ebp-0xC]
        push edx
        push 0
/*FIXUP push offset public_5e5104 @0x58c4a1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e5104
        push eax
        call dword ptr ds : [public_5c6010]
        test eax, eax
        je public_58c4b6
        or esi, 0xFFFFFFFF
        jmp public_58c4c4
        public_58c4b6 : nop
        cmp dword ptr ss : [ebp-0xC], 3
        je public_58c4c1
        or esi, 0xFFFFFFFF
        jmp public_58c4c4
        public_58c4c1 : nop
        mov esi, dword ptr ss : [ebp-4]
        public_58c4c4 : nop
        mov eax, esi
        add eax, 3
        and eax, 0xFFFFFFFC
        call public_5b7e90
        mov eax, dword ptr ds : [ebx]
        test eax, eax
        mov ecx, esp
        mov dword ptr ss : [ebp-0x10], ecx
        mov dword ptr ss : [ebp-4], esi
        jle public_58c4e4
        mov eax, dword ptr ds : [ebx+eax*4]
        jmp public_58c4e6
        public_58c4e4 : nop
        xor eax, eax
        public_58c4e6 : nop
        lea edx, ss:[ebp-4]
        push edx
        push ecx
        lea ecx, ss:[ebp-0xC]
        push ecx
        push 0
/*FIXUP push offset public_5e5104 @0x58c4f1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e5104
        push eax
        call dword ptr ds : [public_5c6010]
        test eax, eax
        je public_58c506
        or eax, 0xFFFFFFFF
        jmp public_58c514
        public_58c506 : nop
        cmp dword ptr ss : [ebp-0xC], 3
        je public_58c511
        or eax, 0xFFFFFFFF
        jmp public_58c514
        public_58c511 : nop
        mov eax, dword ptr ss : [ebp-4]
        public_58c514 : nop
        cmp eax, esi
        jne public_58c5b9
        mov ecx, dword ptr ds : [edi+0x14]
        mov eax, dword ptr ds : [edi+0x18]
        shr esi, 2
        mov ebx, esi
        lea esi, ds:[edi+0x10]
        push ecx
        push eax
        push eax
        call public_527820
        mov edx, dword ptr ds : [esi+8]
        add esp, 0xC
        mov edi, eax
        push edx
        push edi
        mov ecx, esi
        call public_53aaa0
        mov dword ptr ds : [esi+8], edi
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        mov dword ptr ss : [ebp-0xC], 0
        jne public_58c558
        xor ecx, ecx
        jmp public_58c560
        public_58c558 : nop
        mov ecx, dword ptr ds : [esi+8]
        sub ecx, eax
        sar ecx, 2
        public_58c560 : nop
        cmp ecx, ebx
        mov ecx, esi
        jae public_58c581
        mov edi, dword ptr ds : [esi+8]
        lea eax, ss:[ebp-0xC]
        push eax
        call public_5ad970
        mov ecx, ebx
        sub ecx, eax
        push ecx
        push edi
        mov ecx, esi
        call public_537260
        jmp public_58c59c
        public_58c581 : nop
        call public_5ad970
        cmp ebx, eax
        jae public_58c59c
        mov edx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [esi+4]
        lea ecx, ds:[eax+ebx*4]
        push edx
        push ecx
        mov ecx, esi
        call public_5995c0
        public_58c59c : nop
        xor eax, eax
        test ebx, ebx
        jle public_58c5b6
        public_58c5a2 : nop
        mov edx, dword ptr ss : [ebp-8]
        mov ecx, dword ptr ds : [edx+0x14]
        mov edx, dword ptr ss : [ebp-0x10]
        mov edx, dword ptr ds : [edx+eax*4]
        mov dword ptr ds : [ecx+eax*4], edx
        inc eax
        cmp eax, ebx
        jl public_58c5a2
        public_58c5b6 : nop
        mov ebx, dword ptr ss : [ebp+8]
        public_58c5b9 : nop
        mov eax, dword ptr ds : [ebx]
        test eax, eax
        mov dword ptr ss : [ebp+8], 0
        jle public_58c5cb
        mov eax, dword ptr ds : [ebx+eax*4]
        jmp public_58c5cd
        public_58c5cb : nop
        xor eax, eax
        public_58c5cd : nop
        lea ecx, ss:[ebp+8]
        push ecx
        push 0
        lea edx, ss:[ebp-0x10]
        push edx
        push 0
/*FIXUP push offset public_5e50fc @0x58c5d9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e50fc
        push eax
        call dword ptr ds : [public_5c6010]
        test eax, eax
        je public_58c5ee
        or esi, 0xFFFFFFFF
        jmp public_58c5fc
        public_58c5ee : nop
        cmp dword ptr ss : [ebp-0x10], 3
        je public_58c5f9
        or esi, 0xFFFFFFFF
        jmp public_58c5fc
        public_58c5f9 : nop
        mov esi, dword ptr ss : [ebp+8]
        public_58c5fc : nop
        mov eax, esi
        add eax, 3
        and eax, 0xFFFFFFFC
        call public_5b7e90
        mov eax, dword ptr ds : [ebx]
        test eax, eax
        mov edi, esp
        mov dword ptr ss : [ebp+8], esi
        jle public_58c619
        mov eax, dword ptr ds : [ebx+eax*4]
        jmp public_58c61b
        public_58c619 : nop
        xor eax, eax
        public_58c61b : nop
        lea ecx, ss:[ebp+8]
        push ecx
        push edi
        lea edx, ss:[ebp-0x10]
        push edx
        push 0
/*FIXUP push offset public_5e50fc @0x58c626*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e50fc
        push eax
        call dword ptr ds : [public_5c6010]
        test eax, eax
        je public_58c63b
        or eax, 0xFFFFFFFF
        jmp public_58c649
        public_58c63b : nop
        cmp dword ptr ss : [ebp-0x10], 3
        je public_58c646
        or eax, 0xFFFFFFFF
        jmp public_58c649
        public_58c646 : nop
        mov eax, dword ptr ss : [ebp+8]
        public_58c649 : nop
        cmp eax, esi
        jne public_58c6c6
        mov ebx, dword ptr ss : [ebp-8]
        mov eax, dword ptr ds : [ebx+8]
        mov ecx, dword ptr ds : [ebx+4]
        push eax
        push ecx
        mov ecx, ebx
        shr esi, 2
        call public_5995c0
        mov ecx, ebx
        mov dword ptr ss : [ebp+8], 0
        call public_5ad970
        cmp eax, esi
        mov ecx, ebx
        jae public_58c697
        mov edx, dword ptr ds : [ebx+8]
        lea eax, ss:[ebp+8]
        push eax
        mov dword ptr ss : [ebp-0x10], edx
        call public_5ad970
        mov edx, dword ptr ss : [ebp-0x10]
        mov ecx, esi
        sub ecx, eax
        push ecx
        push edx
        mov ecx, ebx
        call public_537260
        jmp public_58c6b2
        public_58c697 : nop
        call public_5ad970
        cmp esi, eax
        jae public_58c6b2
        mov ecx, dword ptr ds : [ebx+4]
        mov eax, dword ptr ds : [ebx+8]
        lea edx, ds:[ecx+esi*4]
        push eax
        push edx
        mov ecx, ebx
        call public_5995c0
        public_58c6b2 : nop
        xor eax, eax
        test esi, esi
        jle public_58c6c6
        public_58c6b8 : nop
        mov edx, dword ptr ds : [edi+eax*4]
        mov ecx, dword ptr ds : [ebx+4]
        mov dword ptr ds : [ecx+eax*4], edx
        inc eax
        cmp eax, esi
        jl public_58c6b8
        public_58c6c6 : nop
        mov al, 1
        lea esp, ss:[ebp-0x1C]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 4
        UNREACHABLE_TRAP(0x58c470)
    }
}

#undef public_58c493
#undef public_58c495
#undef public_58c4b6
#undef public_58c4c1
#undef public_58c4c4
#undef public_58c4e4
#undef public_58c4e6
#undef public_58c506
#undef public_58c511
#undef public_58c514
#undef public_58c558
#undef public_58c560
#undef public_58c581
#undef public_58c59c
#undef public_58c5a2
#undef public_58c5b6
#undef public_58c5b9
#undef public_58c5cb
#undef public_58c5cd
#undef public_58c5ee
#undef public_58c5f9
#undef public_58c5fc
#undef public_58c619
#undef public_58c61b
#undef public_58c63b
#undef public_58c646
#undef public_58c649
#undef public_58c697
#undef public_58c6b2
#undef public_58c6b8
#undef public_58c6c6
