#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41dda0);
CLANG_FORWARD_PROC_SYMBOL(public_41dde0);
CLANG_FORWARD_PROC_SYMBOL(public_424f30);
CLANG_FORWARD_PROC_SYMBOL(public_425080);
CLANG_FORWARD_PROC_SYMBOL(public_425140);
CLANG_FORWARD_PROC_SYMBOL(public_428040);
CLANG_FORWARD_PROC_SYMBOL(public_4288e0);
CLANG_FORWARD_PROC_SYMBOL(public_45a100);
CLANG_FORWARD_PROC_SYMBOL(public_45a140);
CLANG_FORWARD_PROC_SYMBOL(public_4b9bb0);
CLANG_FORWARD_PROC_SYMBOL(public_4c4830);
CLANG_FORWARD_PROC_SYMBOL(public_4c4910);
CLANG_FORWARD_PROC_SYMBOL(public_4c4fb0);
CLANG_FORWARD_PROC_SYMBOL(public_564760);
CLANG_FORWARD_PROC_SYMBOL(public_564f90);
CLANG_FORWARD_PROC_SYMBOL(public_579190);
CLANG_FORWARD_PROC_SYMBOL(public_59db20);
CLANG_FORWARD_PROC_SYMBOL(public_59e300);

#define public_43d381 _public_43d381
#define public_43d3c1 _public_43d3c1
#define public_43d3d3 _public_43d3d3
#define public_43d3fe _public_43d3fe
#define public_43d41a _public_43d41a
#define public_43d4c5 _public_43d4c5
#define public_43d505 _public_43d505
#define public_43d532 _public_43d532
#define public_43d542 _public_43d542
#define public_43d551 _public_43d551

PROC_DECLARE(0x43d360, internal_43d360, public_43d360);
extern "C" NAKED register_t __cdecl internal_43d360()
{
    __asm
    {
        fld dword ptr ss : [esp+4]
        push ebx
        fcomp dword ptr ds : [public_5c7474]
        push ebp
        mov ebp, dword ptr ss : [esp+0xC]
        xor ebx, ebx
        push esi
        fnstsw ax
        mov esi, ecx
        test ah, 0x44
        jnp public_43d381
        cmp byte ptr ds : [esi+0xD], bl
        je public_43d3d3
        public_43d381 : nop
        push ebp
        push ebx
        call public_428040
        add esp, 8
        call public_424f30
        test al, al
        je public_43d3c1
        lea eax, ss:[esp+0x10]
        push eax
        mov byte ptr ss : [esp+0x14], bl
        mov byte ptr ss : [esp+0x15], bl
        mov byte ptr ss : [esp+0x16], bl
        mov byte ptr ss : [esp+0x17], 0xFF
        call public_564f90
        add esp, 4
        call public_59e300
        call public_425080
        call public_425140
        public_43d3c1 : nop
        cmp byte ptr ds : [esi+0xD], bl
        je public_43d3d3
        call public_564760
        test al, al
        jne public_43d551
        public_43d3d3 : nop
        cmp byte ptr ds : [esi+0x14], bl
        jne public_43d551
        cmp byte ptr ds : [esi+4], bl
        je public_43d4c5
        call public_4c4fb0
        test eax, eax
        jne public_43d3fe
        call public_4b9bb0
        pop esi
        pop ebp
        mov eax, 2
        pop ebx
        ret 4
        public_43d3fe : nop
        mov ecx, dword ptr ds : [public_672950]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        jne public_43d41a
        call public_4b9bb0
        pop esi
        pop ebp
        mov eax, 2
        pop ebx
        ret 4
        public_43d41a : nop
        mov eax, dword ptr ds : [eax+0x3C]
        cmp eax, 2
        je public_43d532
        cmp eax, 1
        je public_43d532
        push edi
        push ebx
        mov byte ptr ds : [esi+4], bl
        call public_45a100
        mov eax, dword ptr ds : [esi+8]
        or byte ptr ds : [eax+0x6C], 3
        lea ecx, ds:[esi+0x10]
        push ecx
        call public_4c4910
        mov edx, dword ptr ds : [esi+8]
        push ebx
        push edx
/*FIXUP push offset public_5cb130 @0x43d44e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb130
/*FIXUP push offset public_5cb130 @0x43d453*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb130
        mov byte ptr ds : [esi+0xC], 1
        call public_59db20
        add esp, 0x18
        push ebx
        mov edi, eax
        mov eax, dword ptr ds : [edi]
        push ebx
        push 0xEF01
        mov ecx, edi
        call dword ptr ds : [eax+0x5C]
        mov cl, byte ptr ds : [edi+0x6C]
        or cl, 3
        push ebx
        mov byte ptr ds : [edi+0x6C], cl
/*FIXUP push offset public_5cb128 @0x43d47e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb128
        mov byte ptr ds : [esi+0xC], bl
        call public_41dde0
        push 1
        call public_41dda0
        call public_4c4830
        push eax
        call dword ptr ds : [public_5c6094]
        add esp, 0x10
        cmp eax, ebx
        pop edi
        je public_43d4c5
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0x54]
        push 0xBF800000
        mov dword ptr ss : [esp+0x14], eax
        lea eax, ss:[esp+0x14]
        push 1
        push eax
        call public_4288e0
        add esp, 0xC
        public_43d4c5 : nop
        push ebp
        push ebx
        call public_428040
        add esp, 8
        call public_424f30
        test al, al
        je public_43d505
        lea ecx, ss:[esp+0x10]
        push ecx
        mov byte ptr ss : [esp+0x14], bl
        mov byte ptr ss : [esp+0x15], bl
        mov byte ptr ss : [esp+0x16], bl
        mov byte ptr ss : [esp+0x17], 0xFF
        call public_564f90
        add esp, 4
        call public_59e300
        call public_425080
        call public_425140
        public_43d505 : nop
        cmp byte ptr ds : [esi+0xD], bl
        je public_43d542
        mov byte ptr ds : [esi+0x14], 1
        mov byte ptr ds : [esi+0xD], bl
        mov byte ptr ds : [esi+4], 1
        mov esi, dword ptr ds : [esi+8]
        and byte ptr ds : [esi+0x6C], 0xFC
        lea edx, ss:[esp+0x10]
        push edx
        mov dword ptr ss : [esp+0x14], ebx
        call public_4c4910
        add esp, 4
        call public_45a140
        public_43d532 : nop
        call public_4b9bb0
        pop esi
        pop ebp
        mov eax, 2
        pop ebx
        ret 4
        public_43d542 : nop
        call public_579190
        push 1
        call public_41dda0
        add esp, 4
        public_43d551 : nop
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x43d360)
    }
}

#undef public_43d381
#undef public_43d3c1
#undef public_43d3d3
#undef public_43d3fe
#undef public_43d41a
#undef public_43d4c5
#undef public_43d505
#undef public_43d532
#undef public_43d542
#undef public_43d551
