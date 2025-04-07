#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef44b0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef6750);
CLANG_FORWARD_PROC_SYMBOL(public_6ef6bb0);
CLANG_FORWARD_PROC_SYMBOL(public_6f350f0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fac242);

#define public_6ef4555 _public_6ef4555
#define public_6ef4574 _public_6ef4574
#define public_6ef4581 _public_6ef4581
#define public_6ef4585 _public_6ef4585
#define public_6ef4598 _public_6ef4598
#define public_6ef45a3 _public_6ef45a3
#define public_6ef45c8 _public_6ef45c8
#define public_6ef45d9 _public_6ef45d9
#define public_6ef45ef _public_6ef45ef
#define public_6ef4601 _public_6ef4601
#define public_6ef4650 _public_6ef4650
#define public_6ef4669 _public_6ef4669
#define public_6ef466b _public_6ef466b
#define public_6ef46b4 _public_6ef46b4
#define public_6ef46b6 _public_6ef46b6
#define public_6ef46db _public_6ef46db
#define public_6ef46f0 _public_6ef46f0
#define public_6ef4734 _public_6ef4734
#define public_6ef474b _public_6ef474b
#define public_6ef474d _public_6ef474d
#define public_6ef474f _public_6ef474f
#define public_6ef4777 _public_6ef4777

PROC_DECLARE(0x6ef44b0, internal_6ef44b0, public_6ef44b0);
extern "C" NAKED register_t __cdecl internal_6ef44b0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6fac242 @0x6ef44b8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fac242
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x28
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x44]
        mov edx, dword ptr ds : [edi+0x18]
        lea esi, ds:[edi+0x14]
        xor ebx, ebx
        cmp edx, ebx
        je public_6ef45d9
        mov eax, dword ptr ds : [esi+8]
        sub eax, edx
        sar eax, 3
        cmp eax, ebx
        je public_6ef45d9
        cmp dword ptr ds : [edi], 1
        jne public_6ef46db
        mov al, byte ptr ss : [esp+0x44]
        push ebp
        mov byte ptr ss : [esp+0x18], al
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ss : [esp+0x20], ebx
        mov dword ptr ss : [esp+0x24], ebx
        mov eax, dword ptr ds : [ecx+0x30]
        mov ecx, dword ptr ds : [edi+0x10]
        mov edi, dword ptr ds : [edi+8]
        shl ecx, 7
        mov ebp, dword ptr ds : [ecx+eax+0x24]
        push esi
        lea ecx, ss:[esp+0x2C]
        mov dword ptr ss : [esp+0x44], ebx
        call dword ptr ds : [public_6fb3140]
        mov edx, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ss : [esp+0x1C]
        push edx
        push eax
        lea ecx, ss:[esp+0x20]
        mov byte ptr ss : [esp+0x48], 1
        call public_6ef6750
        cmp edi, 8
        mov eax, dword ptr ss : [esp+0x30]
        mov esi, dword ptr ss : [esp+0x2C]
        je public_6ef4581
        cmp esi, eax
        je public_6ef45a3
        public_6ef4555 : nop
        mov ecx, dword ptr ds : [esi]
        push ebp
        push ecx
        call public_6f350f0
        add esp, 8
        test edi, eax
        je public_6ef4574
        mov edx, dword ptr ss : [esp+0x20]
        push esi
        push edx
        lea ecx, ss:[esp+0x20]
        call public_6ef6bb0
        public_6ef4574 : nop
        mov eax, dword ptr ss : [esp+0x30]
        add esi, 8
        cmp esi, eax
        jne public_6ef4555
        jmp public_6ef45a3
        public_6ef4581 : nop
        cmp esi, eax
        je public_6ef45a3
        public_6ef4585 : nop
        cmp dword ptr ds : [esi], ebp
        jne public_6ef4598
        mov eax, dword ptr ss : [esp+0x20]
        push esi
        push eax
        lea ecx, ss:[esp+0x20]
        call public_6ef6bb0
        public_6ef4598 : nop
        mov eax, dword ptr ss : [esp+0x30]
        add esi, 8
        cmp esi, eax
        jne public_6ef4585
        public_6ef45a3 : nop
        lea ecx, ss:[esp+0x28]
        mov byte ptr ss : [esp+0x40], bl
        call public_6eec8d0
        mov edx, dword ptr ss : [esp+0x1C]
        cmp edx, ebx
        pop ebp
        je public_6ef45c8
        mov ecx, dword ptr ss : [esp+0x1C]
        mov eax, ecx
        sub eax, edx
        sar eax, 3
        cmp eax, ebx
        jne public_6ef45ef
        public_6ef45c8 : nop
        lea ecx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x3C], 0xFFFFFFFF
        call public_6eec8d0
        public_6ef45d9 : nop
        pop edi
        pop esi
        xor al, al
        pop ebx
        mov ecx, dword ptr ss : [esp+0x28]
        mov dword ptr fs : [0], ecx
        add esp, 0x34
        ret 4
        public_6ef45ef : nop
        cmp edx, ecx
        fld dword ptr ds : [public_6fb444c]
        mov esi, ecx
        mov eax, edx
        je public_6ef46b4
        public_6ef4601 : nop
        fadd dword ptr ds : [eax+4]
        add eax, 8
        cmp eax, ecx
        jne public_6ef4601
        fst dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [public_6fb444c]
        fnstsw ax
        test ah, 0x44
        jnp public_6ef46b6
        call dword ptr ds : [public_6fb3370]
        mov edx, dword ptr ss : [esp+0x18]
        cmp edx, esi
        mov dword ptr ss : [esp+0xC], eax
        fild dword ptr ss : [esp+0xC]
        mov ecx, edx
        fmul dword ptr ds : [public_6fb4448]
        fld dword ptr ss : [esp+0x10]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x10]
        fstp st(0)
        fld dword ptr ds : [public_6fb444c]
        je public_6ef466b
        public_6ef4650 : nop
        fadd dword ptr ds : [ecx+4]
        fld dword ptr ss : [esp+0x10]
        fcomp 
        fnstsw ax
        test ah, 0x41
        jnp public_6ef4669
        add ecx, 8
        cmp ecx, esi
        jne public_6ef4650
        jmp public_6ef466b
        public_6ef4669 : nop
        mov esi, ecx
        public_6ef466b : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        fstp st(0)
        cmp esi, ecx
        je public_6ef46b6
        mov eax, dword ptr ds : [esi]
        mov esi, dword ptr ss : [esp+0x44]
        push ecx
        push edx
        lea ecx, ss:[esp+0x1C]
        mov dword ptr ds : [esi+0x24], eax
        mov dword ptr ss : [esp+0x44], 0xFFFFFFFF
        call public_6ea1490
        mov ecx, dword ptr ss : [esp+0x18]
        push ecx
        call public_6fa8fe0
        add esp, 4
        pop edi
        pop esi
        mov al, 1
        pop ebx
        mov ecx, dword ptr ss : [esp+0x28]
        mov dword ptr fs : [0], ecx
        add esp, 0x34
        ret 4
        public_6ef46b4 : nop
        fstp st(0)
        public_6ef46b6 : nop
        push ecx
        push edx
        lea ecx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x44], 0xFFFFFFFF
        call public_6ea1490
        mov edx, dword ptr ss : [esp+0x18]
        push edx
        call public_6fa8fe0
        add esp, 4
        jmp public_6ef45d9
        public_6ef46db : nop
        mov edi, dword ptr ds : [esi+8]
        fld dword ptr ds : [public_6fb444c]
        mov eax, dword ptr ds : [esi+4]
        cmp eax, edi
        je public_6ef474b
        nop 
        lea esp, ss:[esp]
        public_6ef46f0 : nop
        fadd dword ptr ds : [eax+4]
        add eax, 8
        cmp eax, edi
        jne public_6ef46f0
        fst dword ptr ss : [esp+0xC]
        fcomp dword ptr ds : [public_6fb444c]
        fnstsw ax
        test ah, 0x44
        jnp public_6ef474d
        call dword ptr ds : [public_6fb3370]
        mov esi, dword ptr ds : [esi+4]
        cmp esi, edi
        mov dword ptr ss : [esp+0x10], eax
        fild dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [public_6fb4448]
        fmul dword ptr ss : [esp+0xC]
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ds : [public_6fb444c]
        je public_6ef474b
        public_6ef4734 : nop
        fadd dword ptr ds : [esi+4]
        fld dword ptr ss : [esp+0x10]
        fcomp 
        fnstsw ax
        test ah, 0x41
        jnp public_6ef4777
        add esi, 8
        cmp esi, edi
        jne public_6ef4734
        public_6ef474b : nop
        fstp st(0)
        public_6ef474d : nop
        mov esi, edi
        public_6ef474f : nop
        mov eax, dword ptr ss : [esp+0x44]
        cmp esi, dword ptr ds : [eax+0x1C]
        je public_6ef45d9
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [eax+0x24], ecx
        mov ecx, dword ptr ss : [esp+0x34]
        pop edi
        pop esi
        mov al, 1
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x34
        ret 4
        public_6ef4777 : nop
        fstp st(0)
        jmp public_6ef474f
        UNREACHABLE_TRAP(0x6ef44b0)
    }
}

#undef public_6ef4555
#undef public_6ef4574
#undef public_6ef4581
#undef public_6ef4585
#undef public_6ef4598
#undef public_6ef45a3
#undef public_6ef45c8
#undef public_6ef45d9
#undef public_6ef45ef
#undef public_6ef4601
#undef public_6ef4650
#undef public_6ef4669
#undef public_6ef466b
#undef public_6ef46b4
#undef public_6ef46b6
#undef public_6ef46db
#undef public_6ef46f0
#undef public_6ef4734
#undef public_6ef474b
#undef public_6ef474d
#undef public_6ef474f
#undef public_6ef4777
