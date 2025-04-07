#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4215b0);
CLANG_FORWARD_PROC_SYMBOL(public_428f80);
CLANG_FORWARD_PROC_SYMBOL(public_4291c0);
CLANG_FORWARD_PROC_SYMBOL(public_429ea0);
CLANG_FORWARD_PROC_SYMBOL(public_429f10);
CLANG_FORWARD_PROC_SYMBOL(public_42ae40);
CLANG_FORWARD_PROC_SYMBOL(public_527a70);
CLANG_FORWARD_PROC_SYMBOL(public_528d70);
CLANG_FORWARD_PROC_SYMBOL(public_528f90);

#define public_528fd1 _public_528fd1
#define public_52900e _public_52900e
#define public_529010 _public_529010
#define public_52902f _public_52902f
#define public_529031 _public_529031
#define public_529050 _public_529050
#define public_529052 _public_529052
#define public_529065 _public_529065
#define public_529067 _public_529067
#define public_5290a0 _public_5290a0
#define public_5290a6 _public_5290a6
#define public_5290a8 _public_5290a8
#define public_5290f5 _public_5290f5
#define public_529104 _public_529104
#define public_529106 _public_529106
#define public_52913e _public_52913e
#define public_529144 _public_529144
#define public_529146 _public_529146
#define public_52918e _public_52918e
#define public_52919d _public_52919d
#define public_52919f _public_52919f
#define public_5291d7 _public_5291d7
#define public_5291dd _public_5291dd
#define public_5291df _public_5291df
#define public_529227 _public_529227
#define public_529236 _public_529236
#define public_529238 _public_529238
#define public_529271 _public_529271
#define public_529273 _public_529273
#define public_5292a0 _public_5292a0
#define public_5292af _public_5292af
#define public_5292b1 _public_5292b1
#define public_5292ec _public_5292ec
#define public_5292f2 _public_5292f2
#define public_5292f4 _public_5292f4
#define public_52933c _public_52933c
#define public_52934b _public_52934b
#define public_52934d _public_52934d
#define public_529388 _public_529388
#define public_52938e _public_52938e
#define public_529390 _public_529390
#define public_5293d8 _public_5293d8
#define public_5293e7 _public_5293e7
#define public_5293e9 _public_5293e9
#define public_529424 _public_529424
#define public_52942a _public_52942a
#define public_52942c _public_52942c
#define public_529474 _public_529474
#define public_529484 _public_529484
#define public_529486 _public_529486
#define public_5294c1 _public_5294c1
#define public_5294c3 _public_5294c3
#define public_5294f0 _public_5294f0
#define public_5294ff _public_5294ff
#define public_529501 _public_529501
#define public_529536 _public_529536
#define public_529538 _public_529538
#define public_529565 _public_529565
#define public_529588 _public_529588
#define public_52959a _public_52959a
#define public_5295ac _public_5295ac
#define public_5295be _public_5295be

PROC_DECLARE(0x528f90, internal_528f90, public_528f90);
extern "C" NAKED register_t __cdecl internal_528f90()
{
    __asm
    {
        sub esp, 0x48
        push ebx
        push esi
        lea eax, ss:[esp+0x14]
        push eax
        mov esi, ecx
        mov dword ptr ss : [esp+0x18], 0
        mov dword ptr ss : [esp+0x1C], 0
        mov dword ptr ss : [esp+0x20], 0
        call public_528d70
        xor ebx, ebx
        test eax, eax
        jne public_528fd1
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+0xC]
        cmp byte ptr ds : [edx+0x84], bl
        je public_5295be
        public_528fd1 : nop
        mov eax, dword ptr ds : [public_5c6d44]
        cmp dword ptr ds : [eax], ebx
        je public_5295be
        lea ecx, ss:[esp+0x20]
        call public_4215b0
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x4C], eax
        mov eax, dword ptr ds : [esi+4]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x44], ecx
        mov dword ptr ss : [esp+0x48], edx
        je public_52900e
        mov ecx, dword ptr ds : [eax+0xC]
        mov ecx, dword ptr ds : [ecx+4]
        jmp public_529010
        public_52900e : nop
        xor ecx, ecx
        public_529010 : nop
        cmp eax, ebx
        mov edx, dword ptr ds : [ecx+0x54]
        mov dword ptr ss : [esp+0x14], edx
        mov dword ptr ss : [esp+0x18], ebx
        fild qword ptr ss : [esp+0x14]
        fstp dword ptr ss : [esp+0x14]
        je public_52902f
        mov ecx, dword ptr ds : [eax+0xC]
        mov ecx, dword ptr ds : [ecx+4]
        jmp public_529031
        public_52902f : nop
        xor ecx, ecx
        public_529031 : nop
        cmp eax, ebx
        mov edx, dword ptr ds : [ecx+0x58]
        mov dword ptr ss : [esp+0xC], edx
        mov dword ptr ss : [esp+0x10], ebx
        fild qword ptr ss : [esp+0xC]
        fstp dword ptr ss : [esp+8]
        je public_529050
        mov ecx, dword ptr ds : [eax+0xC]
        mov ecx, dword ptr ds : [ecx+4]
        jmp public_529052
        public_529050 : nop
        xor ecx, ecx
        public_529052 : nop
        cmp eax, ebx
        mov edx, dword ptr ds : [ecx+0x5C]
        mov dword ptr ss : [esp+0xC], edx
        je public_529065
        mov eax, dword ptr ds : [eax+0xC]
        mov eax, dword ptr ds : [eax+4]
        jmp public_529067
        public_529065 : nop
        xor eax, eax
        public_529067 : nop
        push edi
        lea edi, ds:[eax+0x60]
        mov ecx, edi
        call dword ptr ds : [public_5c6040]
        test al, al
        jne public_5290a6
        push edi
        call public_42ae40
        mov edi, eax
        add esp, 4
        cmp edi, ebx
        je public_5290a6
        push 0x68
        call public_428f80
        add esp, 4
        cmp eax, ebx
        je public_5290a0
        push edi
        mov ecx, eax
        call public_527a70
        mov ecx, eax
        jmp public_5290a8
        public_5290a0 : nop
        xor eax, eax
        mov ecx, eax
        jmp public_5290a8
        public_5290a6 : nop
        xor ecx, ecx
        public_5290a8 : nop
        cmp ecx, ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+0x38], ecx
        je public_5290f5
        mov edx, dword ptr ss : [esp+0x10]
        push edx
        push ebp
        call public_429ea0
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [esi+0x38]
        push eax
        call public_429f10
        mov edx, dword ptr ds : [esi+0x38]
        mov ecx, dword ptr ds : [esi+8]
        mov edi, dword ptr ds : [edx]
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0x28]
        push eax
        call dword ptr ds : [edx+0x1C]
        mov ecx, dword ptr ds : [esi+0x38]
        push eax
        call dword ptr ds : [edi+0x94]
        mov ecx, dword ptr ds : [esi+0x38]
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax+0x88]
        public_5290f5 : nop
        mov eax, dword ptr ds : [esi+4]
        cmp eax, ebx
        je public_529104
        mov ecx, dword ptr ds : [eax+0xC]
        mov eax, dword ptr ds : [ecx+4]
        jmp public_529106
        public_529104 : nop
        xor eax, eax
        public_529106 : nop
        lea edi, ds:[eax+0x74]
        mov ecx, edi
        call dword ptr ds : [public_5c6040]
        test al, al
        jne public_529144
        push edi
        call public_42ae40
        mov edi, eax
        add esp, 4
        test edi, edi
        je public_529144
        push 0x68
        call public_428f80
        add esp, 4
        test eax, eax
        je public_52913e
        push edi
        mov ecx, eax
        call public_527a70
        mov ecx, eax
        jmp public_529146
        public_52913e : nop
        xor eax, eax
        mov ecx, eax
        jmp public_529146
        public_529144 : nop
        xor ecx, ecx
        public_529146 : nop
        test ecx, ecx
        mov dword ptr ds : [esi+0x3C], ecx
        je public_52918e
        mov edx, dword ptr ss : [esp+0x10]
        push edx
        push ebp
        call public_429ea0
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [esi+0x3C]
        push eax
        call public_429f10
        mov edx, dword ptr ds : [esi+0x3C]
        mov ecx, dword ptr ds : [esi+8]
        mov edi, dword ptr ds : [edx]
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0x28]
        push eax
        call dword ptr ds : [edx+0x1C]
        mov ecx, dword ptr ds : [esi+0x3C]
        push eax
        call dword ptr ds : [edi+0x94]
        mov ecx, dword ptr ds : [esi+0x3C]
        mov eax, dword ptr ds : [ecx]
        push 0
        call dword ptr ds : [eax+0x88]
        public_52918e : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_52919d
        mov ecx, dword ptr ds : [eax+0xC]
        mov eax, dword ptr ds : [ecx+4]
        jmp public_52919f
        public_52919d : nop
        xor eax, eax
        public_52919f : nop
        lea edi, ds:[eax+0x78]
        mov ecx, edi
        call dword ptr ds : [public_5c6040]
        test al, al
        jne public_5291dd
        push edi
        call public_42ae40
        mov edi, eax
        add esp, 4
        test edi, edi
        je public_5291dd
        push 0x68
        call public_428f80
        add esp, 4
        test eax, eax
        je public_5291d7
        push edi
        mov ecx, eax
        call public_527a70
        mov ecx, eax
        jmp public_5291df
        public_5291d7 : nop
        xor eax, eax
        mov ecx, eax
        jmp public_5291df
        public_5291dd : nop
        xor ecx, ecx
        public_5291df : nop
        test ecx, ecx
        mov dword ptr ds : [esi+0x40], ecx
        je public_529227
        mov edx, dword ptr ss : [esp+0x10]
        push edx
        push ebp
        call public_429ea0
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [esi+0x40]
        push eax
        call public_429f10
        mov edx, dword ptr ds : [esi+0x40]
        mov ecx, dword ptr ds : [esi+8]
        mov edi, dword ptr ds : [edx]
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0x28]
        push eax
        call dword ptr ds : [edx+0x1C]
        mov ecx, dword ptr ds : [esi+0x40]
        push eax
        call dword ptr ds : [edi+0x94]
        mov ecx, dword ptr ds : [esi+0x40]
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax+0x88]
        public_529227 : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_529236
        mov ecx, dword ptr ds : [eax+0xC]
        mov eax, dword ptr ds : [ecx+4]
        jmp public_529238
        public_529236 : nop
        xor eax, eax
        public_529238 : nop
        lea edi, ds:[eax+0x84]
        mov ecx, edi
        call dword ptr ds : [public_5c6040]
        test al, al
        jne public_529271
        push edi
        call public_42ae40
        mov edi, eax
        add esp, 4
        test edi, edi
        je public_529271
        push 0x68
        call public_428f80
        add esp, 4
        test eax, eax
        je public_529271
        push edi
        mov ecx, eax
        call public_527a70
        jmp public_529273
        public_529271 : nop
        xor eax, eax
        public_529273 : nop
        test eax, eax
        mov dword ptr ds : [esi+0x44], eax
        je public_5292a0
        mov ecx, dword ptr ds : [esi+8]
        mov edi, dword ptr ds : [eax]
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+0x28]
        push edx
        call dword ptr ds : [eax+0x1C]
        mov ecx, dword ptr ds : [esi+0x44]
        push eax
        call dword ptr ds : [edi+0x94]
        mov ecx, dword ptr ds : [esi+0x44]
        mov edx, dword ptr ds : [ecx]
        push 0
        call dword ptr ds : [edx+0x88]
        public_5292a0 : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_5292af
        mov eax, dword ptr ds : [eax+0xC]
        mov eax, dword ptr ds : [eax+4]
        jmp public_5292b1
        public_5292af : nop
        xor eax, eax
        public_5292b1 : nop
        lea edi, ds:[eax+0x88]
        mov ecx, edi
        call dword ptr ds : [public_5c6040]
        test al, al
        jne public_5292f2
        push edi
        call public_42ae40
        mov edi, eax
        add esp, 4
        test edi, edi
        je public_5292f2
        push 0x68
        call public_428f80
        add esp, 4
        test eax, eax
        je public_5292ec
        push edi
        mov ecx, eax
        call public_527a70
        mov ecx, eax
        jmp public_5292f4
        public_5292ec : nop
        xor eax, eax
        mov ecx, eax
        jmp public_5292f4
        public_5292f2 : nop
        xor ecx, ecx
        public_5292f4 : nop
        test ecx, ecx
        mov dword ptr ds : [esi+0x48], ecx
        je public_52933c
        mov edx, dword ptr ss : [esp+0x10]
        push edx
        push ebp
        call public_429ea0
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [esi+0x48]
        push eax
        call public_429f10
        mov edx, dword ptr ds : [esi+0x48]
        mov ecx, dword ptr ds : [esi+8]
        mov edi, dword ptr ds : [edx]
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0x28]
        push eax
        call dword ptr ds : [edx+0x1C]
        mov ecx, dword ptr ds : [esi+0x48]
        push eax
        call dword ptr ds : [edi+0x94]
        mov ecx, dword ptr ds : [esi+0x48]
        mov eax, dword ptr ds : [ecx]
        push 0
        call dword ptr ds : [eax+0x88]
        public_52933c : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_52934b
        mov ecx, dword ptr ds : [eax+0xC]
        mov eax, dword ptr ds : [ecx+4]
        jmp public_52934d
        public_52934b : nop
        xor eax, eax
        public_52934d : nop
        lea edi, ds:[eax+0x8C]
        mov ecx, edi
        call dword ptr ds : [public_5c6040]
        test al, al
        jne public_52938e
        push edi
        call public_42ae40
        mov edi, eax
        add esp, 4
        test edi, edi
        je public_52938e
        push 0x68
        call public_428f80
        add esp, 4
        test eax, eax
        je public_529388
        push edi
        mov ecx, eax
        call public_527a70
        mov ecx, eax
        jmp public_529390
        public_529388 : nop
        xor eax, eax
        mov ecx, eax
        jmp public_529390
        public_52938e : nop
        xor ecx, ecx
        public_529390 : nop
        test ecx, ecx
        mov dword ptr ds : [esi+0x4C], ecx
        je public_5293d8
        mov edx, dword ptr ss : [esp+0x10]
        push edx
        push ebp
        call public_429ea0
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [esi+0x4C]
        push eax
        call public_429f10
        mov edx, dword ptr ds : [esi+0x4C]
        mov ecx, dword ptr ds : [esi+8]
        mov edi, dword ptr ds : [edx]
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0x28]
        push eax
        call dword ptr ds : [edx+0x1C]
        mov ecx, dword ptr ds : [esi+0x4C]
        push eax
        call dword ptr ds : [edi+0x94]
        mov ecx, dword ptr ds : [esi+0x4C]
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax+0x88]
        public_5293d8 : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_5293e7
        mov ecx, dword ptr ds : [eax+0xC]
        mov eax, dword ptr ds : [ecx+4]
        jmp public_5293e9
        public_5293e7 : nop
        xor eax, eax
        public_5293e9 : nop
        lea edi, ds:[eax+0x90]
        mov ecx, edi
        call dword ptr ds : [public_5c6040]
        test al, al
        jne public_52942a
        push edi
        call public_42ae40
        mov edi, eax
        add esp, 4
        test edi, edi
        je public_52942a
        push 0x68
        call public_428f80
        add esp, 4
        test eax, eax
        je public_529424
        push edi
        mov ecx, eax
        call public_527a70
        mov ecx, eax
        jmp public_52942c
        public_529424 : nop
        xor eax, eax
        mov ecx, eax
        jmp public_52942c
        public_52942a : nop
        xor ecx, ecx
        public_52942c : nop
        test ecx, ecx
        mov dword ptr ds : [esi+0x50], ecx
        je public_529474
        mov edx, dword ptr ss : [esp+0x10]
        push edx
        push ebp
        call public_429ea0
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [esi+0x50]
        push eax
        call public_429f10
        mov edx, dword ptr ds : [esi+0x50]
        mov ecx, dword ptr ds : [esi+8]
        mov edi, dword ptr ds : [edx]
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0x28]
        push eax
        call dword ptr ds : [edx+0x1C]
        mov ecx, dword ptr ds : [esi+0x50]
        push eax
        call dword ptr ds : [edi+0x94]
        mov ecx, dword ptr ds : [esi+0x50]
        mov eax, dword ptr ds : [ecx]
        push 0
        call dword ptr ds : [eax+0x88]
        public_529474 : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        pop ebp
        je public_529484
        mov ecx, dword ptr ds : [eax+0xC]
        mov eax, dword ptr ds : [ecx+4]
        jmp public_529486
        public_529484 : nop
        xor eax, eax
        public_529486 : nop
        mov ebx, dword ptr ds : [public_5c6040]
        lea edi, ds:[eax+0x94]
        mov ecx, edi
        call ebx
        test al, al
        jne public_5294c1
        push edi
        call public_42ae40
        mov edi, eax
        add esp, 4
        test edi, edi
        je public_5294c1
        push 0x68
        call public_428f80
        add esp, 4
        test eax, eax
        je public_5294c1
        push edi
        mov ecx, eax
        call public_527a70
        jmp public_5294c3
        public_5294c1 : nop
        xor eax, eax
        public_5294c3 : nop
        test eax, eax
        mov dword ptr ds : [esi+0x54], eax
        je public_5294f0
        mov ecx, dword ptr ds : [esi+8]
        mov edi, dword ptr ds : [eax]
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+0x24]
        push edx
        call dword ptr ds : [eax+0x1C]
        mov ecx, dword ptr ds : [esi+0x54]
        push eax
        call dword ptr ds : [edi+0x94]
        mov ecx, dword ptr ds : [esi+0x54]
        mov edx, dword ptr ds : [ecx]
        push 0
        call dword ptr ds : [edx+0x88]
        public_5294f0 : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_5294ff
        mov eax, dword ptr ds : [eax+0xC]
        mov eax, dword ptr ds : [eax+4]
        jmp public_529501
        public_5294ff : nop
        xor eax, eax
        public_529501 : nop
        lea edi, ds:[eax+0x98]
        mov ecx, edi
        call ebx
        test al, al
        jne public_529536
        push edi
        call public_42ae40
        mov edi, eax
        add esp, 4
        test edi, edi
        je public_529536
        push 0x68
        call public_428f80
        add esp, 4
        test eax, eax
        je public_529536
        push edi
        mov ecx, eax
        call public_527a70
        jmp public_529538
        public_529536 : nop
        xor eax, eax
        public_529538 : nop
        test eax, eax
        mov dword ptr ds : [esi+0x58], eax
        je public_529565
        mov ecx, dword ptr ds : [esi+8]
        mov edi, dword ptr ds : [eax]
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+0x24]
        push edx
        call dword ptr ds : [eax+0x1C]
        mov ecx, dword ptr ds : [esi+0x58]
        push eax
        call dword ptr ds : [edi+0x94]
        mov ecx, dword ptr ds : [esi+0x58]
        mov edx, dword ptr ds : [ecx]
        push 0
        call dword ptr ds : [edx+0x88]
        public_529565 : nop
        mov eax, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [eax+0x54]
        test cl, cl
        pop edi
        je public_529588
        mov ecx, dword ptr ds : [esi+0x4C]
        test ecx, ecx
        je public_5295be
        mov edx, dword ptr ds : [ecx+0x64]
        push 0
        push edx
        call public_4291c0
        pop esi
        pop ebx
        add esp, 0x48
        ret 
        public_529588 : nop
        mov ecx, dword ptr ds : [esi+0x38]
        test ecx, ecx
        je public_52959a
        mov eax, dword ptr ds : [ecx+0x64]
        push 0
        push eax
        call public_4291c0
        public_52959a : nop
        mov ecx, dword ptr ds : [esi+0x3C]
        test ecx, ecx
        je public_5295ac
        mov edx, dword ptr ds : [ecx+0x64]
        push 0
        push edx
        call public_4291c0
        public_5295ac : nop
        mov ecx, dword ptr ds : [esi+0x40]
        test ecx, ecx
        je public_5295be
        mov eax, dword ptr ds : [ecx+0x64]
        push 0
        push eax
        call public_4291c0
        public_5295be : nop
        pop esi
        pop ebx
        add esp, 0x48
        ret 
        UNREACHABLE_TRAP(0x528f90)
    }
}

#undef public_528fd1
#undef public_52900e
#undef public_529010
#undef public_52902f
#undef public_529031
#undef public_529050
#undef public_529052
#undef public_529065
#undef public_529067
#undef public_5290a0
#undef public_5290a6
#undef public_5290a8
#undef public_5290f5
#undef public_529104
#undef public_529106
#undef public_52913e
#undef public_529144
#undef public_529146
#undef public_52918e
#undef public_52919d
#undef public_52919f
#undef public_5291d7
#undef public_5291dd
#undef public_5291df
#undef public_529227
#undef public_529236
#undef public_529238
#undef public_529271
#undef public_529273
#undef public_5292a0
#undef public_5292af
#undef public_5292b1
#undef public_5292ec
#undef public_5292f2
#undef public_5292f4
#undef public_52933c
#undef public_52934b
#undef public_52934d
#undef public_529388
#undef public_52938e
#undef public_529390
#undef public_5293d8
#undef public_5293e7
#undef public_5293e9
#undef public_529424
#undef public_52942a
#undef public_52942c
#undef public_529474
#undef public_529484
#undef public_529486
#undef public_5294c1
#undef public_5294c3
#undef public_5294f0
#undef public_5294ff
#undef public_529501
#undef public_529536
#undef public_529538
#undef public_529565
#undef public_529588
#undef public_52959a
#undef public_5295ac
#undef public_5295be
