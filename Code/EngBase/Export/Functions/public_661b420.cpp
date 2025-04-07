#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_661b120);
CLANG_FORWARD_PROC_SYMBOL(public_661b420);
CLANG_FORWARD_PROC_SYMBOL(public_6628190);
CLANG_FORWARD_PROC_SYMBOL(public_6628266);

#define public_661b490 _public_661b490
#define public_661b50c _public_661b50c
#define public_661b52e _public_661b52e
#define public_661b551 _public_661b551
#define public_661b558 _public_661b558
#define public_661b58f _public_661b58f
#define public_661b5d7 _public_661b5d7
#define public_661b5d9 _public_661b5d9
#define public_661b633 _public_661b633
#define public_661b671 _public_661b671
#define public_661b673 _public_661b673
#define public_661b699 _public_661b699
#define public_661b6a1 _public_661b6a1
#define public_661b6cc _public_661b6cc
#define public_661b70e _public_661b70e
#define public_661b71a _public_661b71a
#define public_661b735 _public_661b735
#define public_661b754 _public_661b754
#define public_661b75c _public_661b75c
#define public_661b77d _public_661b77d
#define public_661b795 _public_661b795
#define public_661b799 _public_661b799
#define public_661b7b6 _public_661b7b6
#define public_661b7b8 _public_661b7b8
#define public_661b7f1 _public_661b7f1
#define public_661b801 _public_661b801

PROC_DECLARE(0x661b420, internal_661b420, public_661b420);
extern "C" NAKED register_t __cdecl internal_661b420()
{
    __asm
    {
        sub esp, 0x498
        push ebp
        mov ebp, ecx
        push esi
        xor esi, esi
        mov edx, dword ptr ss : [ebp+0x34]
        mov dword ptr ss : [esp+0x10], esi
        or edx, 4
        mov eax, edx
        mov dword ptr ss : [ebp+0x34], edx
        test al, 3
        jne public_661b801
        fld dword ptr ss : [esp+0x4A4]
        fmul dword ptr ss : [ebp+0x28]
        mov eax, dword ptr ss : [ebp+0x1C]
        push edi
        mov dword ptr ss : [esp+0xC], eax
        mov eax, dword ptr ss : [ebp+4]
        fadd dword ptr ss : [ebp+0x1C]
        cmp eax, esi
        fst dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [ebp+0x1C]
        je public_661b490
        mov ecx, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ds : [eax]
        mov eax, dword ptr ss : [ebp]
        lea edx, ss:[ebp+8]
        push ecx
        push edx
        push ebp
        mov ecx, ebp
        call dword ptr ds : [eax+0x2C]
        mov ecx, dword ptr ss : [ebp+4]
        push eax
        call dword ptr ds : [esi]
        pop edi
        pop esi
        mov dword ptr ss : [esp+0xC], eax
        pop ebp
        add esp, 0x498
        ret 4
        public_661b490 : nop
        mov eax, dword ptr ss : [ebp+0x24]
        lea edx, ss:[esp+0x48]
        push edx
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0x14]
        cmp dword ptr ss : [esp+0x48], 8
        jne public_661b52e
        mov edx, dword ptr ss : [ebp+0x1C]
        lea eax, ss:[esp+0x10]
        push eax
        mov eax, dword ptr ss : [esp+0x10]
        lea ecx, ss:[esp+0x2A8]
        push 0x40
        push ecx
        push 3
        push edx
        push eax
        mov ecx, ebp
        mov dword ptr ss : [esp+0x28], esi
        call public_661b120
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x14], eax
        cmp ecx, esi
        je public_661b7f1
        mov eax, dword ptr ss : [ebp+0xC]
        cmp eax, esi
        je public_661b7f1
        cmp ecx, esi
        mov dword ptr ss : [esp+0x2A0], ecx
        jbe public_661b50c
        and ecx, 0x1FFFFFFF
        lea esi, ss:[esp+0x2A4]
        add ecx, ecx
        lea edi, ss:[esp+0xA0]
        rep movsd
        public_661b50c : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0xA0]
        push edx
        mov edx, dword ptr ss : [ebp+0x10]
        push edx
        push ebp
        push eax
        call dword ptr ds : [ecx]
        mov eax, dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        pop ebp
        add esp, 0x498
        ret 4
        public_661b52e : nop
        mov eax, dword ptr ss : [ebp+0x24]
        lea edx, ss:[esp+0xC]
        push edx
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0x10]
        fld dword ptr ss : [ebp+0x28]
        fcomp qword ptr ds : [public_6629238]
        fnstsw ax
        test ah, 5
        jp public_661b551
        fld dword ptr ss : [ebp+0x1C]
        jmp public_661b558
        public_661b551 : nop
        fld dword ptr ss : [esp+0xC]
        fsub dword ptr ss : [ebp+0x1C]
        public_661b558 : nop
        fcom qword ptr ds : [public_6629238]
        push ebx
        fnstsw ax
        test ah, 0x41
        jp public_661b7b6
        fld dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [public_66291e0]
        xor ebx, ebx
        fnstsw ax
        test ah, 0x44
        jnp public_661b58f
        fld dword ptr ss : [esp+0x10]
        fdivr st, st(1)
        call public_6628266
        cdq 
        mov ebx, eax
        xor ebx, edx
        sub ebx, edx
        public_661b58f : nop
        fabs 
        mov dword ptr ss : [esp+0x38], ebx
        mov dword ptr ss : [esp+0x3C], esi
        fild qword ptr ss : [esp+0x38]
        mov ecx, dword ptr ss : [ebp+0x20]
        test cl, 2
        fmul dword ptr ss : [esp+0x10]
        fsubp 
        fstp dword ptr ss : [esp+0x14]
        je public_661b71a
        mov eax, dword ptr ss : [ebp+8]
        mov ebx, 1
        cmp eax, ebx
        jne public_661b673
        fld dword ptr ss : [ebp+0x28]
        fcomp qword ptr ds : [public_6629238]
        fnstsw ax
        test ah, 5
        jp public_661b5d7
        mov ecx, ebx
        jmp public_661b5d9
        public_661b5d7 : nop
        xor ecx, ecx
        public_661b5d9 : nop
        mov eax, dword ptr ss : [ebp+0x24]
        lea edi, ss:[esp+0x38]
        test cl, cl
        mov edx, dword ptr ds : [eax]
        push edi
        sete cl
        push ecx
        push eax
        call dword ptr ds : [edx+0x20]
        fld dword ptr ss : [esp+0x4AC]
        mov eax, dword ptr ss : [esp+0x38]
        mov edx, dword ptr ss : [ebp]
        sub esp, 8
        mov ecx, ebp
        fstp qword ptr ss : [esp]
        push eax
        push eax
        call dword ptr ds : [edx+8]
        lea eax, ss:[ebp+0x78]
        mov ecx, dword ptr ss : [ebp+0x78]
        mov dword ptr ss : [esp+0x74], ecx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x78], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x7C], eax
        mov eax, dword ptr ds : [public_662acf4]
        cmp eax, esi
        jne public_661b633
        call public_6628190
        mov dword ptr ds : [public_662acf4], eax
        public_661b633 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[ebp+0x84]
        push edx
        lea edx, ss:[esp+0x84]
        push edx
        push eax
        call dword ptr ds : [ecx+0x54]
        mov eax, dword ptr ss : [ebp+0xC]
        mov ecx, 9
        lea esi, ss:[esp+0x80]
        lea edi, ss:[esp+0x50]
        test eax, eax
        rep movsd
        je public_661b671
        mov edx, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ds : [eax]
        push edx
        lea edx, ss:[esp+0x54]
        push edx
        push ebp
        push eax
        call dword ptr ds : [ecx+8]
        public_661b671 : nop
        xor esi, esi
        public_661b673 : nop
        fld dword ptr ss : [ebp+0x28]
        fcomp qword ptr ds : [public_6629238]
        mov dword ptr ss : [esp+0x28], 0
        mov dword ptr ss : [esp+0x34], esi
        fnstsw ax
        test ah, 5
        jp public_661b699
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x1C], eax
        jmp public_661b6a1
        public_661b699 : nop
        mov dword ptr ss : [esp+0x1C], 0
        public_661b6a1 : nop
        mov eax, dword ptr ss : [ebp+0x20]
        mov ecx, dword ptr ss : [ebp+0x28]
        mov edx, dword ptr ss : [ebp+0x2C]
        mov dword ptr ss : [esp+0x20], eax
        mov eax, dword ptr ss : [ebp+8]
        mov dword ptr ss : [esp+0x24], ecx
        mov ecx, dword ptr ss : [ebp+0x30]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x2C], edx
        mov dword ptr ss : [esp+0x30], ecx
        jne public_661b6cc
        lea edx, ss:[esp+0x50]
        mov dword ptr ss : [esp+0x34], edx
        public_661b6cc : nop
        mov eax, dword ptr ss : [ebp]
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, ebp
        call dword ptr ds : [eax+4]
        fld dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [public_66291e0]
        fnstsw ax
        test ah, 0x44
        jnp public_661b7b8
        fld dword ptr ss : [ebp+0x28]
        fcomp qword ptr ds : [public_6629238]
        fnstsw ax
        test ah, 5
        jp public_661b70e
        fld dword ptr ss : [esp+0x10]
        fsub dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [ebp+0x1C]
        jmp public_661b7b8
        public_661b70e : nop
        fld dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [ebp+0x1C]
        jmp public_661b7b8
        public_661b71a : nop
        test cl, 4
        je public_661b77d
        fld dword ptr ss : [ebp+0x28]
        test bl, 1
        mov dword ptr ss : [esp+0x28], 0
        mov dword ptr ss : [esp+0x34], esi
        jne public_661b735
        fchs 
        public_661b735 : nop
        fst dword ptr ss : [esp+0x24]
        fcomp dword ptr ds : [public_66291e0]
        fnstsw ax
        test ah, 5
        jp public_661b754
        fld dword ptr ss : [esp+0x10]
        fsub dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [esp+0x1C]
        jmp public_661b75c
        public_661b754 : nop
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x1C], edx
        public_661b75c : nop
        mov eax, dword ptr ss : [ebp+0x2C]
        mov edx, dword ptr ss : [ebp]
        mov dword ptr ss : [esp+0x20], ecx
        mov ecx, dword ptr ss : [ebp+0x30]
        mov dword ptr ss : [esp+0x2C], eax
        lea eax, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x30], ecx
        push eax
        mov ecx, ebp
        call dword ptr ds : [edx+4]
        jmp public_661b7b8
        public_661b77d : nop
        fld dword ptr ss : [ebp+0x28]
        fcomp qword ptr ds : [public_6629238]
        fnstsw ax
        test ah, 5
        jp public_661b795
        fld qword ptr ds : [public_6629238]
        jmp public_661b799
        public_661b795 : nop
        fld dword ptr ss : [esp+0x10]
        public_661b799 : nop
        mov edx, dword ptr ss : [ebp+0x34]
        mov ebx, 1
        fstp dword ptr ss : [ebp+0x1C]
        or edx, 2
        mov eax, edx
        mov dword ptr ss : [ebp+0x34], edx
        test bl, al
        jne public_661b7b8
        mov dword ptr ss : [esp+0x18], ebx
        jmp public_661b7b8
        public_661b7b6 : nop
        fstp st(0)
        public_661b7b8 : nop
        mov eax, dword ptr ss : [ebp+0x24]
        lea edx, ss:[esp+0x48]
        push edx
        lea edx, ss:[esp+0x44]
        mov ecx, dword ptr ds : [eax]
        push edx
        lea edx, ss:[esp+0x4C]
        push edx
        mov edx, dword ptr ss : [ebp+0x1C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x18]
        fld dword ptr ss : [esp+0x48]
        mov ecx, dword ptr ss : [esp+0x40]
        mov edx, dword ptr ss : [esp+0x44]
        mov eax, dword ptr ss : [ebp]
        sub esp, 8
        fstp qword ptr ss : [esp]
        push ecx
        push edx
        mov ecx, ebp
        call dword ptr ds : [eax+8]
        pop ebx
        public_661b7f1 : nop
        mov eax, dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        pop ebp
        add esp, 0x498
        ret 4
        public_661b801 : nop
        pop esi
        xor eax, eax
        pop ebp
        add esp, 0x498
        ret 4
        UNREACHABLE_TRAP(0x661b420)
    }
}

#undef public_661b490
#undef public_661b50c
#undef public_661b52e
#undef public_661b551
#undef public_661b558
#undef public_661b58f
#undef public_661b5d7
#undef public_661b5d9
#undef public_661b633
#undef public_661b671
#undef public_661b673
#undef public_661b699
#undef public_661b6a1
#undef public_661b6cc
#undef public_661b70e
#undef public_661b71a
#undef public_661b735
#undef public_661b754
#undef public_661b75c
#undef public_661b77d
#undef public_661b795
#undef public_661b799
#undef public_661b7b6
#undef public_661b7b8
#undef public_661b7f1
#undef public_661b801
