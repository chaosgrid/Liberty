#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42d680);
CLANG_FORWARD_PROC_SYMBOL(public_42d740);
CLANG_FORWARD_PROC_SYMBOL(public_43d2a0);
CLANG_FORWARD_PROC_SYMBOL(public_442720);
CLANG_FORWARD_PROC_SYMBOL(public_45a470);
CLANG_FORWARD_PROC_SYMBOL(public_45a740);
CLANG_FORWARD_PROC_SYMBOL(public_4bd620);
CLANG_FORWARD_PROC_SYMBOL(public_53ab20);
CLANG_FORWARD_PROC_SYMBOL(public_59da10);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);

#define public_4bb3ae _public_4bb3ae
#define public_4bb423 _public_4bb423
#define public_4bb430 _public_4bb430
#define public_4bb442 _public_4bb442
#define public_4bb458 _public_4bb458
#define public_4bb4b0 _public_4bb4b0
#define public_4bb4c0 _public_4bb4c0
#define public_4bb4f2 _public_4bb4f2
#define public_4bb50c _public_4bb50c
#define public_4bb51a _public_4bb51a
#define public_4bb563 _public_4bb563
#define public_4bb5a8 _public_4bb5a8
#define public_4bb5c5 _public_4bb5c5
#define public_4bb606 _public_4bb606
#define public_4bb610 _public_4bb610
#define public_4bb622 _public_4bb622
#define public_4bb638 _public_4bb638
#define public_4bb655 _public_4bb655
#define public_4bb676 _public_4bb676

PROC_DECLARE(0x4bb390, internal_4bb390, public_4bb390);
extern "C" NAKED register_t __cdecl internal_4bb390()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        push esi
        push edi
        mov esi, ecx
        call public_45a740
        test al, al
        jne public_4bb3ae
        call public_42d740
        test al, al
        je public_4bb458
/*FIXUP public_4bb3ae : nop
        push offset public_5d0234 @0x4bb3ae*/
  FIXUP public_4bb3ae : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0234
        call public_59da10
        add esp, 4
        test eax, eax
        jne public_4bb458
        mov al, byte ptr ds : [esi+0x331]
        xor ebx, ebx
        cmp al, bl
        jne public_4bb676
        cmp byte ptr ds : [esi+0x338], bl
        jne public_4bb423
        mov eax, dword ptr ds : [public_672328]
        mov ecx, dword ptr ds : [eax]
        push ebx
        lea edx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x14], ecx
        push edx
        lea ecx, ss:[esp+0x18]
        call public_53ab20
        mov edi, dword ptr ds : [eax]
        mov eax, dword ptr ds : [edi+4]
        mov ecx, dword ptr ds : [edi]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi]
        mov eax, dword ptr ds : [edi+4]
        push ebx
        lea ecx, ds:[edi+8]
        mov dword ptr ds : [edx+4], eax
        call public_4bd620
        push edi
        call public_5b7e1d
        mov eax, dword ptr ds : [public_67232c]
        add esp, 4
        dec eax
        mov dword ptr ds : [public_67232c], eax
        public_4bb423 : nop
        mov eax, dword ptr ds : [esi+0xC]
        cmp eax, ebx
        je public_4bb442
        lea ebx, ds:[ebx]
        public_4bb430 : nop
        mov edi, dword ptr ds : [eax+8]
        push eax
        call public_43d2a0
        add esp, 4
        cmp edi, ebx
        mov eax, edi
        jne public_4bb430
        public_4bb442 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x28]
        mov eax, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        call dword ptr ds : [eax]
        pop edi
        pop esi
        pop ebx
        add esp, 0xC
        ret 
        public_4bb458 : nop
        call public_45a470
        xor ebx, ebx
        test al, al
        jne public_4bb4b0
        call public_442720
        test al, al
        jne public_4bb4b0
/*FIXUP push offset public_5d0234 @0x4bb46c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0234
        call public_59da10
        add esp, 4
        test eax, eax
        jne public_4bb4b0
/*FIXUP push offset public_5d0228 @0x4bb47d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0228
        call public_59da10
        add esp, 4
        test eax, eax
        jne public_4bb4b0
/*FIXUP push offset public_5d021c @0x4bb48e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d021c
        call public_59da10
        add esp, 4
        test eax, eax
        jne public_4bb4b0
/*FIXUP push offset public_5d0094 @0x4bb49f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0094
        call public_59da10
        add esp, 4
        test eax, eax
        je public_4bb4f2
        public_4bb4b0 : nop
        cmp byte ptr ds : [esi+0x330], bl
        jne public_4bb4c0
        cmp byte ptr ds : [esi+0x331], bl
        je public_4bb4f2
        public_4bb4c0 : nop
        fld dword ptr ds : [esi+0x334]
        fmul dword ptr ds : [public_5c75e0]
        fcomp dword ptr ds : [esi+0x32C]
        fnstsw ax
        test ah, 0x41
        jne public_4bb4f2
        mov byte ptr ds : [esi+0x331], bl
        mov byte ptr ds : [esi+0x330], bl
        mov dword ptr ds : [esi+0x32C], ebx
        mov byte ptr ds : [esi+0x338], 1
        public_4bb4f2 : nop
        call public_42d680
        fcom qword ptr ds : [public_5d5b58]
        fnstsw ax
        test ah, 0x41
        jne public_4bb50c
        fstp st(0)
        fld dword ptr ds : [public_5cb88c]
        public_4bb50c : nop
        mov cl, byte ptr ds : [esi+0x331]
        cmp cl, bl
        je public_4bb51a
        fld st(0)
        faddp 
        public_4bb51a : nop
        fadd dword ptr ds : [esi+0x32C]
        mov al, byte ptr ds : [esi+0x330]
        cmp al, bl
        fstp dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [esi+0x32C], edx
        je public_4bb563
        fld dword ptr ss : [esp+0xC]
        fcomp dword ptr ds : [esi+0x334]
        fnstsw ax
        test ah, 5
        jnp public_4bb676
        fld dword ptr ss : [esp+0xC]
        mov byte ptr ds : [esi+0x330], bl
        fsub dword ptr ds : [esi+0x334]
        fstp dword ptr ds : [esi+0x32C]
        public_4bb563 : nop
        cmp cl, bl
        fld dword ptr ds : [esi+0x32C]
        fcomp dword ptr ds : [public_5c75dc]
        mov eax, dword ptr ds : [public_679bb0]
        mov dword ptr ss : [esp+0xC], eax
        fnstsw ax
        je public_4bb5c5
        test ah, 0x41
        fld dword ptr ds : [esi+0x32C]
        jne public_4bb5a8
        fsub dword ptr ds : [public_5c75dc]
        mov byte ptr ds : [esi+0x331], bl
        mov byte ptr ds : [esi+0x330], 1
        fstp dword ptr ds : [esi+0x32C]
        fld dword ptr ds : [public_5c75dc]
        public_4bb5a8 : nop
        movzx ecx, byte ptr ss : [esp+0xF]
        mov dword ptr ss : [esp+0x10], ecx
        fild dword ptr ss : [esp+0x10]
        fmul st, st(1)
        call public_5b7ec0
        fstp st(0)
        mov bl, al
        jmp public_4bb655
        public_4bb5c5 : nop
        test ah, 0x41
        jne public_4bb638
        cmp byte ptr ds : [esi+0x338], bl
        jne public_4bb606
        mov edx, dword ptr ds : [public_672328]
        mov edi, dword ptr ds : [edx]
        mov eax, dword ptr ds : [edi+4]
        mov ecx, dword ptr ds : [edi]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi]
        mov eax, dword ptr ds : [edi+4]
        push ebx
        lea ecx, ds:[edi+8]
        mov dword ptr ds : [edx+4], eax
        call public_4bd620
        push edi
        call public_5b7e1d
        mov eax, dword ptr ds : [public_67232c]
        add esp, 4
        dec eax
        mov dword ptr ds : [public_67232c], eax
        public_4bb606 : nop
        mov eax, dword ptr ds : [esi+0xC]
        cmp eax, ebx
        je public_4bb622
        lea ecx, ds:[ecx]
        public_4bb610 : nop
        mov edi, dword ptr ds : [eax+8]
        push eax
        call public_43d2a0
        add esp, 4
        cmp edi, ebx
        mov eax, edi
        jne public_4bb610
        public_4bb622 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x28]
        mov eax, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        call dword ptr ds : [eax]
        pop edi
        pop esi
        pop ebx
        add esp, 0xC
        ret 
        public_4bb638 : nop
        mov bl, byte ptr ss : [esp+0xF]
        xor ecx, ecx
        mov cl, bl
        mov dword ptr ss : [esp+0x10], ecx
        fild dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [esi+0x32C]
        call public_5b7ec0
        sub bl, al
        public_4bb655 : nop
        mov ecx, dword ptr ds : [esi+0x33C]
        push 1
        lea eax, ss:[esp+0x10]
        push eax
        mov byte ptr ss : [esp+0x17], bl
        mov byte ptr ds : [esi+0x332], bl
        mov edx, dword ptr ds : [ecx]
        push 0x33
        call dword ptr ds : [edx+0xA8]
        public_4bb676 : nop
        pop edi
        pop esi
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x4bb390)
    }
}

#undef public_4bb3ae
#undef public_4bb423
#undef public_4bb430
#undef public_4bb442
#undef public_4bb458
#undef public_4bb4b0
#undef public_4bb4c0
#undef public_4bb4f2
#undef public_4bb50c
#undef public_4bb51a
#undef public_4bb563
#undef public_4bb5a8
#undef public_4bb5c5
#undef public_4bb606
#undef public_4bb610
#undef public_4bb622
#undef public_4bb638
#undef public_4bb655
#undef public_4bb676
