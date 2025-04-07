#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6356960);
CLANG_FORWARD_PROC_SYMBOL(public_636e4a0);
CLANG_FORWARD_PROC_SYMBOL(public_636e740);
CLANG_FORWARD_PROC_SYMBOL(public_636ec10);
CLANG_FORWARD_PROC_SYMBOL(public_636ecc0);
CLANG_FORWARD_PROC_SYMBOL(public_6373d10);
CLANG_FORWARD_PROC_SYMBOL(public_638d5a0);
CLANG_FORWARD_PROC_SYMBOL(public_638d910);
CLANG_FORWARD_PROC_SYMBOL(public_638e430);
CLANG_FORWARD_PROC_SYMBOL(public_638e480);
CLANG_FORWARD_PROC_SYMBOL(public_6391b20);

#define public_638d5e8 _public_638d5e8
#define public_638d607 _public_638d607
#define public_638d61b _public_638d61b
#define public_638d639 _public_638d639
#define public_638d648 _public_638d648
#define public_638d650 _public_638d650
#define public_638d662 _public_638d662
#define public_638d66d _public_638d66d
#define public_638d67d _public_638d67d
#define public_638d68e _public_638d68e
#define public_638d699 _public_638d699
#define public_638d6a1 _public_638d6a1
#define public_638d6b1 _public_638d6b1
#define public_638d6ce _public_638d6ce
#define public_638d6d6 _public_638d6d6
#define public_638d721 _public_638d721
#define public_638d72b _public_638d72b
#define public_638d784 _public_638d784
#define public_638d7b2 _public_638d7b2
#define public_638d7d1 _public_638d7d1
#define public_638d7e9 _public_638d7e9
#define public_638d809 _public_638d809
#define public_638d837 _public_638d837
#define public_638d83d _public_638d83d
#define public_638d841 _public_638d841
#define public_638d85c _public_638d85c
#define public_638d8b3 _public_638d8b3
#define public_638d8f2 _public_638d8f2

PROC_DECLARE(0x638d5a0, internal_638d5a0, public_638d5a0);
extern "C" NAKED register_t __cdecl internal_638d5a0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_658b078]
        sub esp, 0xC
        push ebx
        push ebp
        mov ebx, 4
        cmp eax, ebx
        push esi
        push edi
        jl public_638d648
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ds : [eax+0x14]
        and ecx, 0xFFFFFF
        push ecx
/*FIXUP push offset public_63fa4c4 @0x638d5c7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63fa4c4
        call public_6356960
        mov edi, dword ptr ss : [esp+0x2C]
        add esp, 8
        test edi, edi
        je public_638d607
        mov eax, dword ptr ds : [edi+4]
        lea esi, ds:[edi+4]
        add esi, ebx
        test eax, eax
        je public_638d607
        public_638d5e8 : nop
        mov edx, dword ptr ds : [eax+0x14]
        and edx, 0xFFFFFF
        push edx
/*FIXUP push offset public_63f1110 @0x638d5f2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f1110
        call public_6356960
        mov eax, dword ptr ds : [esi]
        add esp, 8
        add esi, ebx
        test eax, eax
        jne public_638d5e8
        public_638d607 : nop
        mov ebp, dword ptr ss : [esp+0x28]
        test ebp, ebp
        je public_638d639
        mov eax, dword ptr ss : [ebp+4]
        lea esi, ss:[ebp+4]
        add esi, ebx
        test eax, eax
        je public_638d639
        public_638d61b : nop
        mov eax, dword ptr ds : [eax+0xC]
        and eax, 0xFFFFFF
        push eax
/*FIXUP push offset public_63fa4bc @0x638d624*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63fa4bc
        call public_6356960
        mov eax, dword ptr ds : [esi]
        add esp, 8
        add esi, ebx
        test eax, eax
        jne public_638d61b
/*FIXUP public_638d639 : nop
        push offset public_63edccc @0x638d639*/
  FIXUP public_638d639 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63edccc
        call public_6356960
        add esp, 4
        jmp public_638d650
        public_638d648 : nop
        mov edi, dword ptr ss : [esp+0x24]
        mov ebp, dword ptr ss : [esp+0x28]
        public_638d650 : nop
        xor esi, esi
        cmp edi, esi
        je public_638d66d
        mov eax, dword ptr ds : [edi+4]
        lea ecx, ds:[edi+4]
        add ecx, ebx
        cmp eax, esi
        je public_638d66d
        public_638d662 : nop
        mov dword ptr ds : [eax+0x10], esi
        mov eax, dword ptr ds : [ecx]
        add ecx, ebx
        cmp eax, esi
        jne public_638d662
        public_638d66d : nop
        cmp ebp, esi
        je public_638d6a1
        mov eax, dword ptr ss : [ebp+4]
        lea edx, ss:[ebp+4]
        add edx, ebx
        cmp eax, esi
        je public_638d6a1
        public_638d67d : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, esi
        je public_638d699
        lea ecx, ds:[eax+4]
        mov eax, dword ptr ds : [ecx]
        add ecx, ebx
        cmp eax, esi
        je public_638d699
        public_638d68e : nop
        inc dword ptr ds : [eax+0x10]
        mov eax, dword ptr ds : [ecx]
        add ecx, ebx
        cmp eax, esi
        jne public_638d68e
        public_638d699 : nop
        mov eax, dword ptr ds : [edx]
        add edx, ebx
        cmp eax, esi
        jne public_638d67d
        public_638d6a1 : nop
        cmp edi, esi
        je public_638d6d6
        mov eax, dword ptr ds : [edi+4]
        lea esi, ds:[edi+4]
        add esi, ebx
        test eax, eax
        je public_638d6d6
        public_638d6b1 : nop
        mov ecx, dword ptr ds : [eax+0x10]
        test ecx, ecx
        jne public_638d6ce
        mov ecx, esi
        sub ecx, edi
        sub ecx, 8
        sar ecx, 2
        push ecx
        push edi
        call public_636e4a0
        add esp, 8
        sub esi, ebx
        public_638d6ce : nop
        mov eax, dword ptr ds : [esi]
        add esi, ebx
        test eax, eax
        jne public_638d6b1
        public_638d6d6 : nop
        push ebp
        call public_636ec10
        mov ebp, dword ptr ds : [public_658b8e4]
        add ebp, eax
        push edi
        mov dword ptr ds : [public_658b8e4], ebp
        call public_636ec10
        add esp, 8
        test eax, eax
        jne public_638d72b
        cmp dword ptr ds : [public_658b078], ebx
        jl public_638d721
        mov edx, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [edx+0x14]
        mov ecx, dword ptr ds : [public_658b7fc]
        and eax, 0xFFFFFF
        push eax
/*FIXUP push offset public_63fa488 @0x638d712*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63fa488
        push ecx
        call dword ptr ds : [public_63991e8]
        add esp, 0xC
        public_638d721 : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0xC
        ret 
/*FIXUP public_638d72b : nop
        push offset _public_638d910 @0x638d72b*/
  FIXUP public_638d72b : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset _public_638d910
        push ebx
        push edi
        lea ebp, ds:[edi+4]
        call public_636ec10
        add esp, 4
        push eax
        push ebp
        call dword ptr ds : [public_63992a8]
        mov eax, dword ptr ds : [public_658b190]
        add esp, 0x10
        test eax, eax
        je public_638d784
        push edi
        call public_636ec10
        mov esi, dword ptr ds : [public_658bc90]
        mov edx, dword ptr ds : [public_658bcb0]
        mov ecx, dword ptr ds : [public_658bca0]
        add esp, 4
        inc esi
        add edx, eax
        cmp ecx, eax
        mov dword ptr ds : [public_658bc90], esi
        mov dword ptr ds : [public_658bcb0], edx
        jge public_638d784
        mov dword ptr ds : [public_658bca0], eax
        public_638d784 : nop
        mov edx, dword ptr ss : [esp+0x28]
        push edx
        call public_636ec10
        push eax
        call public_6373d10
        mov esi, dword ptr ss : [esp+0x30]
        add esp, 8
        test esi, esi
        mov ebx, eax
        mov dword ptr ss : [esp+0x10], ebx
        je public_638d7d1
        mov eax, dword ptr ds : [esi+4]
        add esi, 4
        add esi, 4
        test eax, eax
        je public_638d7d1
        public_638d7b2 : nop
        mov ecx, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ds : [public_658b8f8]
        push ecx
        push eax
        push ebx
        push edx
        call public_638e430
        mov eax, dword ptr ds : [esi]
        add esp, 0x10
        add esi, 4
        test eax, eax
        jne public_638d7b2
        public_638d7d1 : nop
        xor ebx, ebx
        test edi, edi
        je public_638d8b3
        mov ebx, dword ptr ss : [ebp]
        add ebp, 4
        test ebx, ebx
        je public_638d8b3
        public_638d7e9 : nop
        push ebx
        call public_6391b20
        add esp, 4
        xor esi, esi
        test eax, eax
        mov dword ptr ss : [esp+0x14], eax
        je public_638d841
        mov esi, dword ptr ds : [eax+4]
        lea edi, ds:[eax+4]
        add edi, 4
        test esi, esi
        je public_638d83d
        public_638d809 : nop
        mov ecx, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x10]
        lea eax, ss:[esp+0x18]
        push eax
        mov eax, dword ptr ds : [public_658b8f8]
        push ecx
        push ebx
        push esi
        push edx
        push eax
        call public_638e480
        add esp, 0x18
        test eax, eax
        jne public_638d837
        mov esi, dword ptr ds : [edi]
        add edi, 4
        test esi, esi
        jne public_638d809
        jmp public_638d83d
        public_638d837 : nop
        inc dword ptr ds : [public_658bc20]
        public_638d83d : nop
        mov edi, dword ptr ss : [esp+0x24]
        public_638d841 : nop
        lea ecx, ss:[esp+0x14]
        push ecx
        call public_636ecc0
        add esp, 4
        test esi, esi
        je public_638d85c
        mov ebx, dword ptr ss : [ebp]
        add ebp, 4
        test ebx, ebx
        jne public_638d7e9
        public_638d85c : nop
        test ebx, ebx
        je public_638d8b3
        cmp dword ptr ds : [public_658b078], 2
        jl public_638d8f2
        mov edx, dword ptr ss : [esp+0x28]
        push edx
        call public_636ec10
        add esp, 4
        push eax
        push edi
        call public_636ec10
        mov edx, dword ptr ds : [ebx+0x14]
        add esp, 4
        push eax
        mov eax, dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ds : [eax+0x14]
        mov eax, dword ptr ds : [public_658b7fc]
        and ecx, 0xFFFFFF
        push ecx
        and edx, 0xFFFFFF
        push edx
/*FIXUP push offset public_63fa43c @0x638d8a2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63fa43c
        push eax
        call dword ptr ds : [public_63991e8]
        add esp, 0x18
        jmp public_638d8f2
        public_638d8b3 : nop
        mov ecx, dword ptr ds : [public_658bc30]
        mov eax, dword ptr ds : [public_658b078]
        inc ecx
        test eax, eax
        mov dword ptr ds : [public_658bc30], ecx
        je public_638d8f2
        mov edx, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ds : [public_658b870]
        mov eax, dword ptr ds : [edx+0x14]
        push ecx
        mov ecx, dword ptr ds : [public_658b7fc]
        and eax, 0xFFFFFF
        push eax
/*FIXUP push offset public_63fa3e8 @0x638d8e3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63fa3e8
        push ecx
        call dword ptr ds : [public_63991e8]
        add esp, 0x10
/*FIXUP public_638d8f2 : nop
        push offset public_658b8f8 @0x638d8f2*/
  FIXUP public_638d8f2 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_658b8f8
        call public_636e740
        add esp, 4
        pop edi
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x638d5a0)
    }
}

#undef public_638d5e8
#undef public_638d607
#undef public_638d61b
#undef public_638d639
#undef public_638d648
#undef public_638d650
#undef public_638d662
#undef public_638d66d
#undef public_638d67d
#undef public_638d68e
#undef public_638d699
#undef public_638d6a1
#undef public_638d6b1
#undef public_638d6ce
#undef public_638d6d6
#undef public_638d721
#undef public_638d72b
#undef public_638d784
#undef public_638d7b2
#undef public_638d7d1
#undef public_638d7e9
#undef public_638d809
#undef public_638d837
#undef public_638d83d
#undef public_638d841
#undef public_638d85c
#undef public_638d8b3
#undef public_638d8f2
