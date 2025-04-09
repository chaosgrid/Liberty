#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_412070);
CLANG_FORWARD_PROC_SYMBOL(public_41a0f0);
CLANG_FORWARD_PROC_SYMBOL(public_41dda0);
CLANG_FORWARD_PROC_SYMBOL(public_428be0);
CLANG_FORWARD_PROC_SYMBOL(public_428c50);
CLANG_FORWARD_PROC_SYMBOL(public_428d00);
CLANG_FORWARD_PROC_SYMBOL(public_43a340);
CLANG_FORWARD_PROC_SYMBOL(public_43ba90);
CLANG_FORWARD_PROC_SYMBOL(public_43bab0);
CLANG_FORWARD_PROC_SYMBOL(public_44ad70);
CLANG_FORWARD_PROC_SYMBOL(public_44fa90);
CLANG_FORWARD_PROC_SYMBOL(public_44fb80);
CLANG_FORWARD_PROC_SYMBOL(public_4554c0);
CLANG_FORWARD_PROC_SYMBOL(public_556cd0);
CLANG_FORWARD_PROC_SYMBOL(public_556ce0);
CLANG_FORWARD_PROC_SYMBOL(public_556e00);
CLANG_FORWARD_PROC_SYMBOL(public_556f10);
CLANG_FORWARD_PROC_SYMBOL(public_558a30);
CLANG_FORWARD_PROC_SYMBOL(public_558bf0);
CLANG_FORWARD_PROC_SYMBOL(public_5592a0);

#define public_455522 _public_455522
#define public_455536 _public_455536
#define public_45553b _public_45553b
#define public_455556 _public_455556
#define public_45559f _public_45559f
#define public_4555d0 _public_4555d0
#define public_4555df _public_4555df
#define public_4555e1 _public_4555e1
#define public_4555f0 _public_4555f0
#define public_4555f2 _public_4555f2
#define public_45562b _public_45562b
#define public_45567b _public_45567b
#define public_455685 _public_455685
#define public_455699 _public_455699
#define public_45569e _public_45569e
#define public_4556aa _public_4556aa
#define public_455749 _public_455749
#define public_455757 _public_455757
#define public_455782 _public_455782
#define public_4557a5 _public_4557a5
#define public_4557be _public_4557be

PROC_DECLARE(0x4554c0, internal_4554c0, public_4554c0);
extern "C" NAKED register_t __cdecl internal_4554c0()
{
    __asm
    {
        sub esp, 0x38
        push ebp
        mov ebp, ecx
        mov al, byte ptr ss : [ebp+0x2C]
        test al, al
        jne public_4557be
        push ebx
        push esi
        push edi
        call dword ptr ds : [public_5c60f8]
        mov eax, dword ptr ss : [ebp+0x28]
        xor bl, bl
        test eax, eax
        mov byte ptr ss : [esp+0x13], bl
        je public_455556
        mov ecx, dword ptr ds : [public_5c6290]
        cmp eax, dword ptr ds : [ecx]
        je public_455536
        push eax
        mov ecx, offset public_668708
        call public_43a340
        test al, al
        je public_455522
        mov edx, dword ptr ss : [ebp+0x28]
        push edx
        mov ecx, offset public_668708
        call public_43bab0
        mov eax, dword ptr ss : [ebp+0x28]
        push 0
        push 0
        push eax
        mov ecx, offset public_668708
        call public_43ba90
        jmp public_45553b
        public_455522 : nop
        mov ecx, dword ptr ss : [ebp+0x28]
        push 1
        push 0
        push ecx
        mov ecx, offset public_668708
        call public_43ba90
        jmp public_45553b
        public_455536 : nop
        call public_558a30
        public_45553b : nop
        push 0x3F800000
        call public_412070
        add esp, 4
        call public_558bf0
        mov byte ptr ss : [esp+0x13], 1
        mov bl, byte ptr ss : [esp+0x13]
        public_455556 : nop
        mov al, byte ptr ss : [ebp+0xE]
        test al, al
        je public_45559f
        test bl, bl
        jne public_45559f
        mov al, byte ptr ss : [ebp+0x30]
        test al, al
        je public_45559f
        mov edx, dword ptr ds : [public_5c6d58]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[ebp+0x34]
        push edx
        mov edx, dword ptr ss : [ebp+0x68]
        push edx
        push eax
        call dword ptr ds : [ecx+0x4C]
        mov eax, dword ptr ds : [public_5c6d58]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[ebp+0x40]
        push edx
        mov edx, dword ptr ss : [ebp+0x68]
        push edx
        push eax
        call dword ptr ds : [ecx+0x50]
        mov ecx, dword ptr ss : [ebp+0x6C]
        mov edx, dword ptr ss : [ebp+0x64]
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax+0xC]
        public_45559f : nop
        mov al, byte ptr ss : [ebp+6]
        test al, al
        je public_4555d0
        test bl, bl
        jne public_4555d0
        push 0x40400000
        push 0
        call public_41a0f0
        call public_5592a0
        push 1
        call public_41dda0
        mov ecx, dword ptr ss : [ebp+0xB0]
        add esp, 0xC
        call public_44ad70
        public_4555d0 : nop
        mov al, byte ptr ss : [ebp+0xA]
        test al, al
        je public_4555df
        test bl, bl
        jne public_4555df
        mov al, 1
        jmp public_4555e1
        public_4555df : nop
        xor al, al
        public_4555e1 : nop
        mov cl, byte ptr ss : [ebp+0xB]
        test cl, cl
        je public_4555f0
        test bl, bl
        jne public_4555f0
        mov bl, 1
        jmp public_4555f2
        public_4555f0 : nop
        xor bl, bl
        public_4555f2 : nop
        test al, al
        je public_455685
        mov al, byte ptr ss : [ebp+0xC]
        test al, al
        je public_45562b
        mov eax, dword ptr ds : [public_5ce060]
        push eax
        push 0
        push 3
        call public_428d00
        fld dword ptr ds : [public_5ce060]
        fstp dword ptr ds : [public_66d2ec]
        add esp, 0xC
        mov dword ptr ds : [public_66d2e8], 0
        jmp public_455685
        public_45562b : nop
        push 0x501502F9
        push 0
        push 3
        call public_428d00
        push 0
        lea ecx, ss:[esp+0x24]
        push ecx
        push 0
        call public_428be0
        fld dword ptr ss : [esp+0x2C]
        fcomp qword ptr ds : [public_5c8ba8]
        add esp, 0x18
        mov dword ptr ds : [public_66d2e8], 0
        fnstsw ax
        test ah, 0x41
        jne public_45567b
        fld dword ptr ds : [public_66d2e0]
        fchs 
        fabs 
        fdiv dword ptr ss : [esp+0x14]
        fstp dword ptr ds : [public_66d2ec]
        jmp public_455685
        public_45567b : nop
        mov dword ptr ds : [public_66d2ec], 0x49742400
        public_455685 : nop
        test bl, bl
        je public_4556aa
        mov al, byte ptr ss : [ebp+0xC]
        test al, al
        je public_455699
        mov edx, dword ptr ds : [public_5ce060]
        push edx
        jmp public_45569e
        public_455699 : nop
        push 0x501502F9
        public_45569e : nop
        push 0
        push 3
        call public_428c50
        add esp, 0xC
        public_4556aa : nop
        mov al, byte ptr ss : [ebp+9]
        test al, al
        je public_455749
        mov al, byte ptr ss : [esp+0x13]
        test al, al
        jne public_455749
        mov eax, dword ptr ss : [ebp+0x70]
        mov edx, dword ptr ss : [ebp+0x78]
        lea esi, ss:[ebp+0x7C]
        mov ecx, 9
        lea edi, ss:[esp+0x18]
        rep movsd
        mov ecx, dword ptr ss : [ebp+0x74]
        mov dword ptr ss : [esp+0x3C], eax
        mov dword ptr ss : [esp+0x40], ecx
        mov ecx, dword ptr ss : [ebp+0xB0]
        lea eax, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x44], edx
        mov edx, dword ptr ds : [ecx+0x500]
        push eax
        push edx
        call public_556cd0
        mov eax, dword ptr ss : [ebp+0xA0]
        mov ecx, dword ptr ss : [ebp+0xB0]
        mov edx, dword ptr ds : [ecx+0x500]
        push eax
        push edx
        call public_556ce0
        mov eax, dword ptr ss : [ebp+0xA4]
        mov ecx, dword ptr ss : [ebp+0xB0]
        mov edx, dword ptr ds : [ecx+0x500]
        push eax
        push edx
        call public_556e00
        mov eax, dword ptr ss : [ebp+0xA8]
        mov ecx, dword ptr ss : [ebp+0xB0]
        mov edx, dword ptr ds : [ecx+0x500]
        push eax
        push edx
        call public_556f10
        add esp, 0x20
        public_455749 : nop
        mov eax, dword ptr ss : [ebp+0xBC]
        xor edi, edi
        test eax, eax
        jle public_455782
        xor ebx, ebx
        public_455757 : nop
        mov eax, dword ptr ss : [ebp+0xB4]
        mov esi, dword ptr ds : [ebx+eax+4]
        push 0
        push esi
        call public_44fb80
        push 0
        push esi
        call public_44fa90
        mov eax, dword ptr ss : [ebp+0xBC]
        add esp, 0x10
        inc edi
        add ebx, 0x40
        cmp edi, eax
        jl public_455757
        public_455782 : nop
        mov eax, dword ptr ss : [ebp+0x24]
        test eax, eax
        pop edi
        pop esi
        mov byte ptr ss : [ebp+0x2C], 1
        pop ebx
        je public_4557a5
        mov ecx, dword ptr ds : [public_67ecd0]
        mov edx, dword ptr ds : [ecx]
        push eax
        mov eax, dword ptr ds : [public_673344]
        push eax
        call dword ptr ds : [edx+0x114]
        public_4557a5 : nop
        mov eax, dword ptr ss : [ebp+0x18]
        test eax, eax
        je public_4557be
        mov ecx, dword ptr ss : [esp+0x40]
        mov edx, dword ptr ss : [ebp+0x20]
        push ecx
        mov ecx, dword ptr ss : [ebp+0x1C]
        push edx
        push ecx
        call eax
        add esp, 0xC
        public_4557be : nop
        pop ebp
        add esp, 0x38
        ret 4
        UNREACHABLE_TRAP(0x4554c0)
    }
}

#undef public_455522
#undef public_455536
#undef public_45553b
#undef public_455556
#undef public_45559f
#undef public_4555d0
#undef public_4555df
#undef public_4555e1
#undef public_4555f0
#undef public_4555f2
#undef public_45562b
#undef public_45567b
#undef public_455685
#undef public_455699
#undef public_45569e
#undef public_4556aa
#undef public_455749
#undef public_455757
#undef public_455782
#undef public_4557a5
#undef public_4557be
