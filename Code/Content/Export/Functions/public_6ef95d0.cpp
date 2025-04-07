#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6eae300);
CLANG_FORWARD_PROC_SYMBOL(public_6ed2700);
CLANG_FORWARD_PROC_SYMBOL(public_6ef52d0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef54e0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef95d0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef9940);
CLANG_FORWARD_PROC_SYMBOL(public_6efa020);
CLANG_FORWARD_PROC_SYMBOL(public_6efa4f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f96770);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fac668);

#define public_6ef9610 _public_6ef9610
#define public_6ef9656 _public_6ef9656
#define public_6ef9674 _public_6ef9674
#define public_6ef9678 _public_6ef9678
#define public_6ef968c _public_6ef968c
#define public_6ef96c6 _public_6ef96c6
#define public_6ef96ca _public_6ef96ca
#define public_6ef96d5 _public_6ef96d5
#define public_6ef9743 _public_6ef9743
#define public_6ef97a6 _public_6ef97a6
#define public_6ef97b2 _public_6ef97b2
#define public_6ef97e1 _public_6ef97e1
#define public_6ef97e7 _public_6ef97e7
#define public_6ef9800 _public_6ef9800
#define public_6ef9850 _public_6ef9850
#define public_6ef9869 _public_6ef9869
#define public_6ef986b _public_6ef986b
#define public_6ef98b6 _public_6ef98b6
#define public_6ef98ce _public_6ef98ce
#define public_6ef98f0 _public_6ef98f0
#define public_6ef98f2 _public_6ef98f2
#define public_6ef991f _public_6ef991f
#define public_6ef9925 _public_6ef9925

PROC_DECLARE(0x6ef95d0, internal_6ef95d0, public_6ef95d0);
extern "C" NAKED register_t __cdecl internal_6ef95d0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fac668 @0x6ef95d2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fac668
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x28
        push ebx
        push ebp
        mov ebp, ecx
        mov ebx, dword ptr ss : [ebp+0x24]
        mov eax, dword ptr ss : [ebp+0x28]
        push esi
        xor esi, esi
        cmp ebx, eax
        push edi
        mov dword ptr ss : [esp+0x18], esi
        je public_6ef96d5
        lea eax, ds:[ebx+0x50]
        mov dword ptr ss : [esp+0x14], eax
        lea esp, ss:[esp]
        public_6ef9610 : nop
        mov ecx, dword ptr ss : [esp+0x4C]
        mov edx, dword ptr ds : [ecx]
        push edx
        mov ecx, ebx
        call public_6ef52d0
        test al, al
        je public_6ef9656
        mov edx, dword ptr ss : [esp+0x48]
        lea eax, ss:[ebp+0x10]
        push eax
        lea ecx, ss:[esp+0x17]
        push ecx
        push edx
        mov ecx, ebx
        mov byte ptr ss : [esp+0x1F], 1
        call public_6ef54e0
        mov edx, dword ptr ss : [esp+0x18]
        add edx, eax
        mov eax, dword ptr ss : [esp+0x14]
        add ebx, 0x50
        add eax, 0x50
        mov dword ptr ss : [esp+0x18], edx
        mov dword ptr ss : [esp+0x14], eax
        jmp public_6ef96ca
        public_6ef9656 : nop
        mov esi, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [ebp+0x28]
        lea edi, ss:[ebp+0x20]
        mov ecx, esi
        cmp ecx, eax
        mov dword ptr ss : [esp+0x20], eax
        je public_6ef968c
        mov eax, ebx
        sub eax, ecx
        mov dword ptr ss : [esp+0x1C], eax
        jmp public_6ef9678
        public_6ef9674 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        public_6ef9678 : nop
        push esi
        lea ecx, ds:[eax+esi]
        call public_6efa4f0
        mov eax, dword ptr ss : [esp+0x20]
        add esi, 0x50
        cmp esi, eax
        jne public_6ef9674
        public_6ef968c : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        add eax, 0xFFFFFFB0
        push eax
        mov ecx, edi
        call public_6efa020
        mov edx, dword ptr ds : [edi+8]
        add edx, 0xFFFFFFB0
        mov dword ptr ds : [edi+8], edx
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        je public_6ef96c6
        mov edi, edx
        sub edi, eax
        mov eax, 0x66666667
        imul edi
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov dword ptr ss : [esp+0x20], edx
        jne public_6ef96ca
        public_6ef96c6 : nop
        mov byte ptr ss : [ebp+8], 0
        public_6ef96ca : nop
        cmp ebx, dword ptr ss : [ebp+0x28]
        jne public_6ef9610
        xor esi, esi
        public_6ef96d5 : nop
        mov ecx, dword ptr ss : [esp+0x54]
        mov edx, dword ptr ss : [esp+0x50]
        mov eax, dword ptr ss : [esp+0x48]
        push ecx
        push edx
        add eax, 0x10
        push eax
        mov ecx, ebp
        mov dword ptr ss : [esp+0x20], esi
        call public_6ef9940
        test al, al
        je public_6ef991f
        mov cl, byte ptr ss : [esp+0x48]
        mov byte ptr ss : [esp+0x28], cl
        xor ebx, ebx
        xor ecx, ecx
        mov dword ptr ss : [esp+0x2C], ebx
        mov dword ptr ss : [esp+0x30], ecx
        mov dword ptr ss : [esp+0x34], esi
        mov eax, dword ptr ss : [ebp+0x24]
        cmp eax, esi
        mov dword ptr ss : [esp+0x40], esi
        je public_6ef97a6
        mov edx, dword ptr ss : [ebp+0x28]
        sub edx, eax
        mov eax, 0x66666667
        imul edx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov edi, edx
        je public_6ef97a6
        cmp edi, esi
        mov eax, edi
        jge public_6ef9743
        xor eax, eax
        public_6ef9743 : nop
        lea ecx, ds:[eax*8]
        push ecx
        call public_6fa912a
        mov edx, dword ptr ss : [esp+0x34]
        add esp, 4
        mov esi, eax
        mov eax, dword ptr ss : [esp+0x2C]
        push esi
        push edx
        push eax
        lea ecx, ss:[esp+0x34]
        call public_6ed2700
        mov ecx, dword ptr ss : [esp+0x30]
        mov edx, dword ptr ss : [esp+0x2C]
        push ecx
        push edx
        lea ecx, ss:[esp+0x30]
        call public_6ea1490
        mov eax, dword ptr ss : [esp+0x2C]
        push eax
        call public_6fa8fe0
        lea ecx, ds:[esi+edi*8]
        mov dword ptr ss : [esp+0x38], ecx
        add esp, 4
        lea ecx, ss:[esp+0x28]
        call public_6eae300
        lea ecx, ds:[esi+eax*8]
        mov ebx, esi
        mov dword ptr ss : [esp+0x30], ecx
        mov dword ptr ss : [esp+0x2C], ebx
        public_6ef97a6 : nop
        mov esi, dword ptr ss : [ebp+0x24]
        mov eax, dword ptr ss : [ebp+0x28]
        xor edi, edi
        cmp esi, eax
        je public_6ef97e1
        public_6ef97b2 : nop
        mov edx, dword ptr ds : [esi+0x4C]
        lea eax, ss:[esp+0x20]
        push eax
        push 1
        push ecx
        lea ecx, ss:[esp+0x34]
        mov dword ptr ss : [esp+0x2C], edi
        mov dword ptr ss : [esp+0x30], edx
        call public_6f96770
        mov eax, dword ptr ss : [ebp+0x28]
        mov ecx, dword ptr ss : [esp+0x30]
        add esi, 0x50
        inc edi
        cmp esi, eax
        jne public_6ef97b2
        mov ebx, dword ptr ss : [esp+0x2C]
        public_6ef97e1 : nop
        mov edi, dword ptr ds : [public_6fb3370]
        public_6ef97e7 : nop
        cmp ebx, ecx
        fld dword ptr ds : [public_6fb444c]
        mov esi, ecx
        mov eax, ebx
        je public_6ef98f0
        lea esp, ss:[esp]
        public_6ef9800 : nop
        fadd dword ptr ds : [eax+4]
        add eax, 8
        cmp eax, ecx
        jne public_6ef9800
        fst dword ptr ss : [esp+0x50]
        fcomp dword ptr ds : [public_6fb444c]
        fnstsw ax
        test ah, 0x44
        jnp public_6ef98f2
        call edi
        mov ebx, dword ptr ss : [esp+0x2C]
        cmp ebx, esi
        mov dword ptr ss : [esp+0x54], eax
        fild dword ptr ss : [esp+0x54]
        mov ecx, ebx
        fmul dword ptr ds : [public_6fb4448]
        fld dword ptr ss : [esp+0x50]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x54]
        fstp st(0)
        fld dword ptr ds : [public_6fb444c]
        je public_6ef986b
        nop 
        lea esp, ss:[esp]
        public_6ef9850 : nop
        fadd dword ptr ds : [ecx+4]
        fld dword ptr ss : [esp+0x54]
        fcomp 
        fnstsw ax
        test ah, 0x41
        jnp public_6ef9869
        add ecx, 8
        cmp ecx, esi
        jne public_6ef9850
        jmp public_6ef986b
        public_6ef9869 : nop
        mov esi, ecx
        public_6ef986b : nop
        mov ecx, dword ptr ss : [esp+0x30]
        fstp st(0)
        cmp esi, ecx
        je public_6ef98f2
        mov eax, dword ptr ss : [esp+0x14]
        test eax, eax
        jne public_6ef98f2
        mov eax, dword ptr ds : [esi]
        lea ecx, ds:[eax+eax*4]
        mov eax, dword ptr ss : [ebp+0x24]
        shl ecx, 4
        lea edx, ss:[ebp+0x10]
        push edx
        mov edx, dword ptr ss : [esp+0x4C]
        add ecx, eax
        lea eax, ss:[esp+0x50]
        push eax
        push edx
        mov byte ptr ss : [esp+0x58], 0
        call public_6ef54e0
        mov ecx, dword ptr ss : [esp+0x30]
        mov dword ptr ss : [esp+0x14], eax
        lea eax, ds:[esi+8]
        cmp eax, ecx
        mov edx, ecx
        je public_6ef98ce
        lea ecx, ds:[eax-8]
        public_6ef98b6 : nop
        mov esi, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], esi
        add eax, 8
        add ecx, 8
        cmp eax, edx
        jne public_6ef98b6
        mov ecx, dword ptr ss : [esp+0x30]
        public_6ef98ce : nop
        push ecx
        add ecx, 0xFFFFFFF8
        push ecx
        lea ecx, ss:[esp+0x30]
        call public_6ea1490
        mov ecx, dword ptr ss : [esp+0x30]
        mov ebx, dword ptr ss : [esp+0x2C]
        sub ecx, 8
        mov dword ptr ss : [esp+0x30], ecx
        jmp public_6ef97e7
        public_6ef98f0 : nop
        fstp st(0)
        public_6ef98f2 : nop
        push ecx
        push ebx
        lea ecx, ss:[esp+0x30]
        mov dword ptr ss : [esp+0x48], 0xFFFFFFFF
        call public_6ea1490
        mov eax, dword ptr ss : [esp+0x2C]
        push eax
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x18]
        add esp, 4
        lea eax, ds:[edx+ecx]
        jmp public_6ef9925
        public_6ef991f : nop
        mov eax, dword ptr ss : [esp+0x18]
        add eax, esi
        public_6ef9925 : nop
        mov ecx, dword ptr ss : [esp+0x38]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x34
        ret 0x10
        UNREACHABLE_TRAP(0x6ef95d0)
    }
}

#undef public_6ef9610
#undef public_6ef9656
#undef public_6ef9674
#undef public_6ef9678
#undef public_6ef968c
#undef public_6ef96c6
#undef public_6ef96ca
#undef public_6ef96d5
#undef public_6ef9743
#undef public_6ef97a6
#undef public_6ef97b2
#undef public_6ef97e1
#undef public_6ef97e7
#undef public_6ef9800
#undef public_6ef9850
#undef public_6ef9869
#undef public_6ef986b
#undef public_6ef98b6
#undef public_6ef98ce
#undef public_6ef98f0
#undef public_6ef98f2
#undef public_6ef991f
#undef public_6ef9925
