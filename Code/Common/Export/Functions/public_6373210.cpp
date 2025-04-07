#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_636e100);
CLANG_FORWARD_PROC_SYMBOL(public_636e1b0);
CLANG_FORWARD_PROC_SYMBOL(public_636e460);
CLANG_FORWARD_PROC_SYMBOL(public_636e7d0);
CLANG_FORWARD_PROC_SYMBOL(public_636ec10);
CLANG_FORWARD_PROC_SYMBOL(public_636ec70);
CLANG_FORWARD_PROC_SYMBOL(public_636ecc0);
CLANG_FORWARD_PROC_SYMBOL(public_6373210);
CLANG_FORWARD_PROC_SYMBOL(public_6373d60);
CLANG_FORWARD_PROC_SYMBOL(public_6373f50);
CLANG_FORWARD_PROC_SYMBOL(public_6382800);
CLANG_FORWARD_PROC_SYMBOL(public_6383af0);
CLANG_FORWARD_PROC_SYMBOL(public_6384610);
CLANG_FORWARD_PROC_SYMBOL(public_6391dae);

#define public_637325f _public_637325f
#define public_637327e _public_637327e
#define public_63732c6 _public_63732c6
#define public_63732ef _public_63732ef
#define public_637331a _public_637331a
#define public_6373362 _public_6373362
#define public_63733b3 _public_63733b3
#define public_637340a _public_637340a
#define public_6373423 _public_6373423
#define public_637343e _public_637343e
#define public_6373441 _public_6373441
#define public_6373448 _public_6373448
#define public_637344b _public_637344b
#define public_63734ac _public_63734ac
#define public_63734ba _public_63734ba
#define public_63734bf _public_63734bf
#define public_63734c8 _public_63734c8
#define public_637352b _public_637352b
#define public_6373530 _public_6373530
#define public_6373559 _public_6373559
#define public_637356a _public_637356a
#define public_6373573 _public_6373573
#define public_6373588 _public_6373588
#define public_63735a7 _public_63735a7

PROC_DECLARE(0x6373210, internal_6373210, public_6373210);
extern "C" NAKED register_t __cdecl internal_6373210()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        sub esp, 0x1C
        push ebx
        push esi
        mov esi, dword ptr ss : [ebp+8]
        push edi
        lea edi, ds:[esi+1]
        push edi
        mov dword ptr ss : [esp+0x18], 0
        call public_636ec70
        push edi
        mov dword ptr ss : [esp+0x28], eax
        call public_636ec70
        mov ecx, dword ptr ds : [public_658b010]
        add esp, 8
        test ecx, ecx
        mov dword ptr ss : [esp+0x10], eax
        je public_637325f
        mov ecx, dword ptr ss : [ebp+0x14]
        mov edx, dword ptr ss : [ebp+0x10]
        lea eax, ss:[esp+0x10]
        push eax
        push ecx
        push edx
        push 0
        jmp public_637356a
        public_637325f : nop
        mov ecx, dword ptr ds : [public_658b1c8]
        test ecx, ecx
        je public_637331a
        push eax
        call public_636ec10
        add esp, 4
        cmp eax, edi
        je public_6373573
        public_637327e : nop
        call public_6384610
        mov dword ptr ss : [esp+0x1C], eax
        fild dword ptr ss : [esp+0x1C]
        sub esp, 8
        fmul qword ptr ds : [public_63a5950]
        fild dword ptr ds : [public_658b254]
        fmul st, st(1)
        fstp qword ptr ss : [esp]
        fstp st(0)
        call dword ptr ds : [public_63991f8]
        call public_6391dae
        mov esi, eax
        push esi
        call public_6373f50
        push eax
        mov eax, dword ptr ss : [esp+0x20]
        push eax
        call public_636e7d0
        add esp, 0x14
        test eax, eax
        je public_63732ef
        public_63732c6 : nop
        mov ebx, dword ptr ds : [public_658b254]
        inc esi
        xor ecx, ecx
        cmp esi, ebx
        setge cl
        dec ecx
        and esi, ecx
        push esi
        call public_6373f50
        mov edx, dword ptr ss : [esp+0x14]
        push eax
        push edx
        call public_636e7d0
        add esp, 0xC
        test eax, eax
        jne public_63732c6
        public_63732ef : nop
        push esi
        call public_6373f50
        push eax
        lea eax, ss:[esp+0x18]
        push eax
        call public_636e1b0
        mov ecx, dword ptr ss : [esp+0x1C]
        push ecx
        call public_636ec10
        add esp, 0x10
        cmp eax, edi
        jne public_637327e
        jmp public_6373573
        public_637331a : nop
        cmp dword ptr ds : [public_658b24c], 8
        jl public_6373559
        push edi
        call public_636ec70
        mov ebx, dword ptr ss : [ebp+0xC]
        mov edx, dword ptr ds : [ebx+4]
        lea edi, ds:[ebx+4]
        mov dword ptr ss : [esp+0x1C], eax
        push edx
        lea eax, ss:[esp+0x18]
        push eax
        call public_636e1b0
        mov ecx, dword ptr ds : [ebx+8]
        push ecx
        lea edx, ss:[esp+0x20]
        push edx
        call public_636e1b0
        add esp, 0x14
        cmp esi, 6
        mov eax, esi
        jl public_6373362
        mov eax, 6
        public_6373362 : nop
        mov edx, dword ptr ss : [ebp+0x14]
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, dword ptr ss : [ebp+0x10]
        push edx
        push ecx
        push ebx
        push eax
        call public_6383af0
        mov edx, dword ptr ss : [esp+0x24]
        push edx
        call public_636ec10
        add esp, 0x18
        test ebx, ebx
        mov esi, eax
        je public_6373441
        mov eax, dword ptr ss : [ebp+0xC]
        mov edi, dword ptr ds : [edi]
        push eax
        xor ebx, ebx
        call public_636ec10
        add esp, 4
        test eax, eax
        mov dword ptr ss : [esp+0x24], eax
        jle public_637343e
        mov ecx, dword ptr ss : [ebp+0xC]
        lea eax, ds:[ecx+4]
        mov dword ptr ss : [esp+0x1C], eax
        public_63733b3 : nop
        test bl, 1
        je public_6373423
        mov edx, dword ptr ss : [esp+0x10]
        push edi
        push edx
        call public_636e7d0
        add esp, 8
        test eax, eax
        jne public_6373423
        mov eax, dword ptr ss : [esp+0x18]
        push edi
        push eax
        call public_636e7d0
        add esp, 8
        test eax, eax
        jne public_6373423
        mov edx, dword ptr ss : [esp+0x10]
        lea ecx, ss:[esp+0x14]
        push ecx
        push esi
        push edx
        push edi
        call public_6382800
        fstp st(0)
        mov eax, dword ptr ss : [esp+0x24]
        add esp, 0x10
        test eax, eax
        push edi
        je public_637340a
        lea eax, ss:[esp+0x1C]
        push eax
        call public_636e1b0
        add esp, 8
        jmp public_6373423
        public_637340a : nop
        lea ecx, ss:[esp+0x14]
        push ecx
        call public_636e1b0
        mov eax, dword ptr ss : [ebp+8]
        add esp, 8
        inc esi
        cmp esi, eax
        je public_63734bf
        public_6373423 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        mov edi, dword ptr ds : [eax+4]
        add eax, 4
        mov dword ptr ss : [esp+0x1C], eax
        mov eax, dword ptr ss : [esp+0x24]
        inc ebx
        cmp ebx, eax
        jl public_63733b3
        public_637343e : nop
        mov ebx, dword ptr ss : [ebp+0xC]
        public_6373441 : nop
        cmp esi, dword ptr ss : [ebp+8]
        je public_63734bf
        jmp public_637344b
        public_6373448 : nop
        mov ebx, dword ptr ss : [ebp+0xC]
        public_637344b : nop
        push ebx
        call public_636e460
        mov edi, eax
        add esp, 4
        test edi, edi
        je public_63734bf
        mov edx, dword ptr ss : [esp+0x10]
        push edi
        push edx
        call public_636e7d0
        add esp, 8
        test eax, eax
        jne public_63734ba
        mov eax, dword ptr ss : [esp+0x18]
        push edi
        push eax
        call public_636e7d0
        add esp, 8
        test eax, eax
        jne public_63734ba
        mov edx, dword ptr ss : [esp+0x10]
        lea ecx, ss:[esp+0x14]
        push ecx
        push esi
        push edx
        push edi
        call public_6382800
        fstp st(0)
        mov eax, dword ptr ss : [esp+0x24]
        add esp, 0x10
        test eax, eax
        push edi
        je public_63734ac
        lea eax, ss:[esp+0x1C]
        push eax
        call public_636e1b0
        add esp, 8
        jmp public_63734ba
        public_63734ac : nop
        lea ecx, ss:[esp+0x14]
        push ecx
        call public_636e1b0
        add esp, 8
        inc esi
        public_63734ba : nop
        cmp esi, dword ptr ss : [ebp+8]
        jne public_6373448
        public_63734bf : nop
        mov eax, dword ptr ss : [ebp+8]
        xor ebx, ebx
        cmp esi, eax
        je public_6373530
        public_63734c8 : nop
        mov eax, ebx
        push eax
        inc ebx
        call public_6373f50
        mov edi, eax
        add esp, 4
        test edi, edi
        je public_6373530
        mov edx, dword ptr ss : [esp+0x10]
        push edi
        push edx
        call public_636e7d0
        add esp, 8
        test eax, eax
        jne public_637352b
        mov eax, dword ptr ss : [esp+0x18]
        push edi
        push eax
        call public_636e7d0
        add esp, 8
        test eax, eax
        jne public_637352b
        mov edx, dword ptr ss : [esp+0x10]
        lea ecx, ss:[esp+0x14]
        push ecx
        push esi
        push edx
        push edi
        call public_6382800
        fstp st(0)
        mov eax, dword ptr ss : [esp+0x24]
        add esp, 0x10
        test eax, eax
        jne public_637352b
        lea eax, ss:[esp+0x10]
        push edi
        push eax
        call public_636e1b0
        add esp, 8
        inc esi
        public_637352b : nop
        cmp esi, dword ptr ss : [ebp+8]
        jne public_63734c8
        public_6373530 : nop
        lea ecx, ss:[esp+0x18]
        push ecx
        call public_636ecc0
        mov eax, dword ptr ss : [ebp+0x14]
        mov ecx, dword ptr ss : [ebp+0x10]
        lea edx, ss:[esp+0x14]
        push edx
        mov edx, dword ptr ss : [ebp+0xC]
        push eax
        mov eax, dword ptr ss : [ebp+8]
        push ecx
        push edx
        push eax
        call public_6383af0
        add esp, 0x18
        jmp public_6373573
        public_6373559 : nop
        mov edx, dword ptr ss : [ebp+0x14]
        mov eax, dword ptr ss : [ebp+0x10]
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, dword ptr ss : [ebp+0xC]
        push edx
        push eax
        push ecx
        public_637356a : nop
        push esi
        call public_6383af0
        add esp, 0x14
        public_6373573 : nop
        mov esi, dword ptr ss : [esp+0x10]
        test esi, esi
        je public_63735a7
        mov eax, dword ptr ds : [esi+4]
        add esi, 4
        add esi, 4
        test eax, eax
        je public_63735a7
        public_6373588 : nop
        push eax
        call public_6373d60
        push eax
        lea edx, ss:[esp+0x28]
        push 0
        push edx
        call public_636e100
        mov eax, dword ptr ds : [esi]
        add esp, 0x10
        add esi, 4
        test eax, eax
        jne public_6373588
        public_63735a7 : nop
        lea eax, ss:[esp+0x10]
        push eax
        call public_636ecc0
        mov eax, dword ptr ss : [esp+0x24]
        add esp, 4
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6373210)
    }
}

#undef public_637325f
#undef public_637327e
#undef public_63732c6
#undef public_63732ef
#undef public_637331a
#undef public_6373362
#undef public_63733b3
#undef public_637340a
#undef public_6373423
#undef public_637343e
#undef public_6373441
#undef public_6373448
#undef public_637344b
#undef public_63734ac
#undef public_63734ba
#undef public_63734bf
#undef public_63734c8
#undef public_637352b
#undef public_6373530
#undef public_6373559
#undef public_637356a
#undef public_6373573
#undef public_6373588
#undef public_63735a7
