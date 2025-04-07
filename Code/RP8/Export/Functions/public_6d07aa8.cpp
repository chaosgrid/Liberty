#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d07aa8);
CLANG_FORWARD_PROC_SYMBOL(public_6d168b0);
CLANG_FORWARD_PROC_SYMBOL(public_6d1b100);
CLANG_FORWARD_PROC_SYMBOL(public_6d1b130);
CLANG_FORWARD_PROC_SYMBOL(public_6d1dc30);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f249);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f2a0);

#define public_6d07acd _public_6d07acd
#define public_6d07ad9 _public_6d07ad9
#define public_6d07b1a _public_6d07b1a
#define public_6d07b41 _public_6d07b41
#define public_6d07b61 _public_6d07b61
#define public_6d07b86 _public_6d07b86
#define public_6d07ba6 _public_6d07ba6
#define public_6d07c03 _public_6d07c03
#define public_6d07c23 _public_6d07c23
#define public_6d07c44 _public_6d07c44
#define public_6d07c50 _public_6d07c50
#define public_6d07c86 _public_6d07c86
#define public_6d07dd9 _public_6d07dd9
#define public_6d07e86 _public_6d07e86
#define public_6d07e98 _public_6d07e98
#define public_6d07ebb _public_6d07ebb
#define public_6d07ede _public_6d07ede
#define public_6d07f4e _public_6d07f4e
#define public_6d07f94 _public_6d07f94
#define public_6d07fa2 _public_6d07fa2
#define public_6d07fb4 _public_6d07fb4
#define public_6d07fe5 _public_6d07fe5
#define public_6d08003 _public_6d08003
#define public_6d08008 _public_6d08008
#define public_6d08020 _public_6d08020
#define public_6d08040 _public_6d08040
#define public_6d080aa _public_6d080aa
#define public_6d080cd _public_6d080cd
#define public_6d080f0 _public_6d080f0
#define public_6d08119 _public_6d08119
#define public_6d0812b _public_6d0812b
#define public_6d0813b _public_6d0813b
#define public_6d0814a _public_6d0814a
#define public_6d0817b _public_6d0817b
#define public_6d081ac _public_6d081ac

PROC_DECLARE(0x6d07aa8, internal_6d07aa8, public_6d07aa8);
extern "C" NAKED register_t __cdecl internal_6d07aa8()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x59C
        push esi
        push edi
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ss : [ebp+8]
        push edx
        call dword ptr ds : [ecx+0x38]
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [eax+0x19C]
        mov dword ptr ss : [ebp-4], ecx
        jmp public_6d07ad9
        public_6d07acd : nop
        mov edx, dword ptr ss : [ebp-4]
        add edx, 0x520
        mov dword ptr ss : [ebp-4], edx
        public_6d07ad9 : nop
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [eax+0x1A0]
        mov dword ptr ss : [ebp-0x52C], ecx
        mov edx, dword ptr ss : [ebp-4]
        cmp edx, dword ptr ss : [ebp-0x52C]
        je public_6d07b1a
        mov eax, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ds : [eax+0x518]
        mov dword ptr ss : [ebp-8], ecx
        mov edx, dword ptr ss : [ebp-8]
        push edx
        call public_6d2f249
        add esp, 4
        mov eax, dword ptr ss : [ebp-4]
        mov dword ptr ds : [eax+0x518], 0
        jmp public_6d07acd
        public_6d07b1a : nop
        mov ecx, dword ptr ss : [ebp+8]
        add ecx, 0x198
        mov dword ptr ss : [ebp-0x588], ecx
        mov edx, dword ptr ss : [ebp-0x588]
        cmp dword ptr ds : [edx+4], 0
        jne public_6d07b41
        mov dword ptr ss : [ebp-0x58C], 0
        jmp public_6d07b61
        public_6d07b41 : nop
        mov eax, dword ptr ss : [ebp-0x588]
        mov ecx, dword ptr ss : [ebp-0x588]
        mov eax, dword ptr ds : [eax+8]
        sub eax, dword ptr ds : [ecx+4]
        cdq 
        mov ecx, 0x520
        idiv ecx
        mov dword ptr ss : [ebp-0x58C], eax
        public_6d07b61 : nop
        cmp dword ptr ss : [ebp-0x58C], 0
        jae public_6d08008
        mov edx, dword ptr ss : [ebp-0x588]
        cmp dword ptr ds : [edx+4], 0
        jne public_6d07b86
        mov dword ptr ss : [ebp-0x590], 0
        jmp public_6d07ba6
        public_6d07b86 : nop
        mov eax, dword ptr ss : [ebp-0x588]
        mov ecx, dword ptr ss : [ebp-0x588]
        mov eax, dword ptr ds : [eax+8]
        sub eax, dword ptr ds : [ecx+4]
        cdq 
        mov ecx, 0x520
        idiv ecx
        mov dword ptr ss : [ebp-0x590], eax
        public_6d07ba6 : nop
        mov edx, dword ptr ss : [ebp-0x588]
        mov eax, dword ptr ds : [edx+8]
        mov dword ptr ss : [ebp-0x530], eax
        xor ecx, ecx
        sub ecx, dword ptr ss : [ebp-0x590]
        mov dword ptr ss : [ebp-0x560], ecx
        mov edx, dword ptr ss : [ebp-0x588]
        mov eax, dword ptr ss : [ebp-0x588]
        mov ecx, dword ptr ds : [edx+0xC]
        sub ecx, dword ptr ds : [eax+8]
        mov eax, ecx
        cdq 
        mov ecx, 0x520
        idiv ecx
        cmp eax, dword ptr ss : [ebp-0x560]
        jae public_6d07dd9
        mov edx, dword ptr ss : [ebp-0x588]
        cmp dword ptr ds : [edx+4], 0
        jne public_6d07c03
        mov dword ptr ss : [ebp-0x594], 0
        jmp public_6d07c23
        public_6d07c03 : nop
        mov eax, dword ptr ss : [ebp-0x588]
        mov ecx, dword ptr ss : [ebp-0x588]
        mov eax, dword ptr ds : [eax+8]
        sub eax, dword ptr ds : [ecx+4]
        cdq 
        mov ecx, 0x520
        idiv ecx
        mov dword ptr ss : [ebp-0x594], eax
        public_6d07c23 : nop
        mov edx, dword ptr ss : [ebp-0x560]
        cmp edx, dword ptr ss : [ebp-0x594]
        jae public_6d07c44
        mov ecx, dword ptr ss : [ebp-0x588]
        call public_6d168b0
        mov dword ptr ss : [ebp-0x598], eax
        jmp public_6d07c50
        public_6d07c44 : nop
        mov eax, dword ptr ss : [ebp-0x560]
        mov dword ptr ss : [ebp-0x598], eax
        public_6d07c50 : nop
        mov ecx, dword ptr ss : [ebp-0x588]
        call public_6d168b0
        add eax, dword ptr ss : [ebp-0x598]
        mov dword ptr ss : [ebp-0x53C], eax
        mov ecx, dword ptr ss : [ebp-0x53C]
        mov dword ptr ss : [ebp-0x540], ecx
        cmp dword ptr ss : [ebp-0x540], 0
        jge public_6d07c86
        mov dword ptr ss : [ebp-0x540], 0
        public_6d07c86 : nop
        mov edx, dword ptr ss : [ebp-0x540]
        imul edx, 0x520
        push edx
        call public_6d2f2a0
        add esp, 4
        mov dword ptr ss : [ebp-0x538], eax
        mov eax, dword ptr ss : [ebp-0x538]
        push eax
        mov ecx, dword ptr ss : [ebp-0x530]
        push ecx
        mov edx, dword ptr ss : [ebp-0x588]
        mov eax, dword ptr ds : [edx+4]
        push eax
        mov ecx, dword ptr ss : [ebp-0x588]
        call public_6d1b130
        mov dword ptr ss : [ebp-0x534], eax
        lea ecx, ss:[ebp-0x528]
        push ecx
        mov edx, dword ptr ss : [ebp-0x560]
        push edx
        mov eax, dword ptr ss : [ebp-0x534]
        push eax
        mov ecx, dword ptr ss : [ebp-0x588]
        call public_6d1dc30
        mov ecx, dword ptr ss : [ebp-0x560]
        imul ecx, 0x520
        mov edx, dword ptr ss : [ebp-0x534]
        add edx, ecx
        push edx
        mov eax, dword ptr ss : [ebp-0x588]
        mov ecx, dword ptr ds : [eax+8]
        push ecx
        mov edx, dword ptr ss : [ebp-0x530]
        push edx
        mov ecx, dword ptr ss : [ebp-0x588]
        call public_6d1b130
        mov eax, dword ptr ss : [ebp-0x588]
        mov ecx, dword ptr ds : [eax+8]
        push ecx
        mov edx, dword ptr ss : [ebp-0x588]
        mov eax, dword ptr ds : [edx+4]
        push eax
        mov ecx, dword ptr ss : [ebp-0x588]
        call public_6d1b100
        mov ecx, dword ptr ss : [ebp-0x588]
        mov edx, dword ptr ss : [ebp-0x588]
        mov eax, dword ptr ds : [ecx+0xC]
        sub eax, dword ptr ds : [edx+4]
        cdq 
        mov ecx, 0x520
        idiv ecx
        mov dword ptr ss : [ebp-0x548], eax
        mov edx, dword ptr ss : [ebp-0x588]
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ss : [ebp-0x544], eax
        mov ecx, dword ptr ss : [ebp-0x544]
        push ecx
        call public_6d2f249
        add esp, 4
        mov edx, dword ptr ss : [ebp-0x53C]
        imul edx, 0x520
        mov eax, dword ptr ss : [ebp-0x538]
        add eax, edx
        mov ecx, dword ptr ss : [ebp-0x588]
        mov dword ptr ds : [ecx+0xC], eax
        mov ecx, dword ptr ss : [ebp-0x588]
        call public_6d168b0
        imul eax, 0x520
        mov edx, dword ptr ss : [ebp-0x538]
        add edx, eax
        mov eax, dword ptr ss : [ebp-0x560]
        imul eax, 0x520
        add edx, eax
        mov ecx, dword ptr ss : [ebp-0x588]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ss : [ebp-0x588]
        mov eax, dword ptr ss : [ebp-0x538]
        mov dword ptr ds : [edx+4], eax
        jmp public_6d08003
        public_6d07dd9 : nop
        mov ecx, dword ptr ss : [ebp-0x588]
        mov eax, dword ptr ds : [ecx+8]
        sub eax, dword ptr ss : [ebp-0x530]
        cdq 
        mov ecx, 0x520
        idiv ecx
        cmp eax, dword ptr ss : [ebp-0x560]
        jae public_6d07ede
        mov edx, dword ptr ss : [ebp-0x560]
        imul edx, 0x520
        mov eax, dword ptr ss : [ebp-0x530]
        add eax, edx
        push eax
        mov ecx, dword ptr ss : [ebp-0x588]
        mov edx, dword ptr ds : [ecx+8]
        push edx
        mov eax, dword ptr ss : [ebp-0x530]
        push eax
        mov ecx, dword ptr ss : [ebp-0x588]
        call public_6d1b130
        lea ecx, ss:[ebp-0x528]
        push ecx
        mov edx, dword ptr ss : [ebp-0x588]
        mov eax, dword ptr ds : [edx+8]
        sub eax, dword ptr ss : [ebp-0x530]
        cdq 
        mov ecx, 0x520
        idiv ecx
        mov edx, dword ptr ss : [ebp-0x560]
        sub edx, eax
        push edx
        mov eax, dword ptr ss : [ebp-0x588]
        mov ecx, dword ptr ds : [eax+8]
        push ecx
        mov ecx, dword ptr ss : [ebp-0x588]
        call public_6d1dc30
        mov edx, dword ptr ss : [ebp-0x588]
        mov eax, dword ptr ds : [edx+8]
        mov dword ptr ss : [ebp-0x550], eax
        mov ecx, dword ptr ss : [ebp-0x530]
        mov dword ptr ss : [ebp-0x54C], ecx
        jmp public_6d07e98
        public_6d07e86 : nop
        mov edx, dword ptr ss : [ebp-0x54C]
        add edx, 0x520
        mov dword ptr ss : [ebp-0x54C], edx
        public_6d07e98 : nop
        mov eax, dword ptr ss : [ebp-0x54C]
        cmp eax, dword ptr ss : [ebp-0x550]
        je public_6d07ebb
        mov ecx, 0x148
        lea esi, ss:[ebp-0x528]
        mov edi, dword ptr ss : [ebp-0x54C]
        rep movsd
        jmp public_6d07e86
        public_6d07ebb : nop
        mov ecx, dword ptr ss : [ebp-0x560]
        imul ecx, 0x520
        mov edx, dword ptr ss : [ebp-0x588]
        add ecx, dword ptr ds : [edx+8]
        mov eax, dword ptr ss : [ebp-0x588]
        mov dword ptr ds : [eax+8], ecx
        jmp public_6d08003
        public_6d07ede : nop
        cmp dword ptr ss : [ebp-0x560], 0
        jbe public_6d08003
        mov ecx, dword ptr ss : [ebp-0x588]
        mov edx, dword ptr ds : [ecx+8]
        push edx
        mov eax, dword ptr ss : [ebp-0x588]
        mov ecx, dword ptr ds : [eax+8]
        push ecx
        mov edx, dword ptr ss : [ebp-0x560]
        imul edx, 0x520
        mov eax, dword ptr ss : [ebp-0x588]
        mov ecx, dword ptr ds : [eax+8]
        sub ecx, edx
        push ecx
        mov ecx, dword ptr ss : [ebp-0x588]
        call public_6d1b130
        mov edx, dword ptr ss : [ebp-0x588]
        mov eax, dword ptr ds : [edx+8]
        mov dword ptr ss : [ebp-0x558], eax
        mov ecx, dword ptr ss : [ebp-0x560]
        imul ecx, 0x520
        mov edx, dword ptr ss : [ebp-0x588]
        mov eax, dword ptr ds : [edx+8]
        sub eax, ecx
        mov dword ptr ss : [ebp-0x554], eax
        public_6d07f4e : nop
        mov ecx, dword ptr ss : [ebp-0x530]
        cmp ecx, dword ptr ss : [ebp-0x554]
        je public_6d07f94
        mov edx, dword ptr ss : [ebp-0x554]
        sub edx, 0x520
        mov dword ptr ss : [ebp-0x554], edx
        mov esi, dword ptr ss : [ebp-0x554]
        mov eax, dword ptr ss : [ebp-0x558]
        sub eax, 0x520
        mov dword ptr ss : [ebp-0x558], eax
        mov ecx, 0x148
        mov edi, dword ptr ss : [ebp-0x558]
        rep movsd
        jmp public_6d07f4e
        public_6d07f94 : nop
        mov ecx, dword ptr ss : [ebp-0x530]
        mov dword ptr ss : [ebp-0x55C], ecx
        jmp public_6d07fb4
        public_6d07fa2 : nop
        mov edx, dword ptr ss : [ebp-0x55C]
        add edx, 0x520
        mov dword ptr ss : [ebp-0x55C], edx
        public_6d07fb4 : nop
        mov eax, dword ptr ss : [ebp-0x560]
        imul eax, 0x520
        mov ecx, dword ptr ss : [ebp-0x530]
        add ecx, eax
        cmp dword ptr ss : [ebp-0x55C], ecx
        je public_6d07fe5
        mov ecx, 0x148
        lea esi, ss:[ebp-0x528]
        mov edi, dword ptr ss : [ebp-0x55C]
        rep movsd
        jmp public_6d07fa2
        public_6d07fe5 : nop
        mov edx, dword ptr ss : [ebp-0x560]
        imul edx, 0x520
        mov eax, dword ptr ss : [ebp-0x588]
        add edx, dword ptr ds : [eax+8]
        mov ecx, dword ptr ss : [ebp-0x588]
        mov dword ptr ds : [ecx+8], edx
        public_6d08003 : nop
        jmp public_6d0814a
        public_6d08008 : nop
        mov edx, dword ptr ss : [ebp-0x588]
        cmp dword ptr ds : [edx+4], 0
        jne public_6d08020
        mov dword ptr ss : [ebp-0x59C], 0
        jmp public_6d08040
        public_6d08020 : nop
        mov eax, dword ptr ss : [ebp-0x588]
        mov ecx, dword ptr ss : [ebp-0x588]
        mov eax, dword ptr ds : [eax+8]
        sub eax, dword ptr ds : [ecx+4]
        cdq 
        mov ecx, 0x520
        idiv ecx
        mov dword ptr ss : [ebp-0x59C], eax
        public_6d08040 : nop
        cmp dword ptr ss : [ebp-0x59C], 0
        jbe public_6d0814a
        mov edx, dword ptr ss : [ebp-0x588]
        mov eax, dword ptr ds : [edx+8]
        mov dword ptr ss : [ebp-0x564], eax
        mov ecx, dword ptr ss : [ebp-0x588]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ss : [ebp-0x568], edx
        xor eax, eax
        imul eax, 0x520
        mov ecx, dword ptr ss : [ebp-0x568]
        add ecx, eax
        mov dword ptr ss : [ebp-0x584], ecx
        mov edx, dword ptr ss : [ebp-0x588]
        mov eax, dword ptr ds : [edx+8]
        mov dword ptr ss : [ebp-0x570], eax
        mov ecx, dword ptr ss : [ebp-0x584]
        mov dword ptr ss : [ebp-0x578], ecx
        mov edx, dword ptr ss : [ebp-0x564]
        mov dword ptr ss : [ebp-0x574], edx
        jmp public_6d080cd
        public_6d080aa : nop
        mov eax, dword ptr ss : [ebp-0x578]
        add eax, 0x520
        mov dword ptr ss : [ebp-0x578], eax
        mov ecx, dword ptr ss : [ebp-0x574]
        add ecx, 0x520
        mov dword ptr ss : [ebp-0x574], ecx
        public_6d080cd : nop
        mov edx, dword ptr ss : [ebp-0x574]
        cmp edx, dword ptr ss : [ebp-0x570]
        je public_6d080f0
        mov esi, dword ptr ss : [ebp-0x574]
        mov ecx, 0x148
        mov edi, dword ptr ss : [ebp-0x578]
        rep movsd
        jmp public_6d080aa
        public_6d080f0 : nop
        mov eax, dword ptr ss : [ebp-0x578]
        mov dword ptr ss : [ebp-0x56C], eax
        mov ecx, dword ptr ss : [ebp-0x588]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [ebp-0x57C], edx
        mov eax, dword ptr ss : [ebp-0x56C]
        mov dword ptr ss : [ebp-0x580], eax
        jmp public_6d0812b
        public_6d08119 : nop
        mov ecx, dword ptr ss : [ebp-0x580]
        add ecx, 0x520
        mov dword ptr ss : [ebp-0x580], ecx
        public_6d0812b : nop
        mov edx, dword ptr ss : [ebp-0x580]
        cmp edx, dword ptr ss : [ebp-0x57C]
        je public_6d0813b
        jmp public_6d08119
        public_6d0813b : nop
        mov eax, dword ptr ss : [ebp-0x588]
        mov ecx, dword ptr ss : [ebp-0x56C]
        mov dword ptr ds : [eax+8], ecx
        public_6d0814a : nop
        mov edx, dword ptr ss : [ebp+8]
        cmp dword ptr ds : [edx+0x130], 0
        je public_6d0817b
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [eax+0x130]
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [edx+0x130]
        mov ecx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [ecx+8]
        mov edx, dword ptr ss : [ebp+8]
        mov dword ptr ds : [edx+0x130], 0
        public_6d0817b : nop
        mov eax, dword ptr ss : [ebp+8]
        cmp dword ptr ds : [eax+0x12C], 0
        je public_6d081ac
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [ecx+0x12C]
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [eax+0x12C]
        mov edx, dword ptr ds : [edx]
        push ecx
        call dword ptr ds : [edx+8]
        mov eax, dword ptr ss : [ebp+8]
        mov dword ptr ds : [eax+0x12C], 0
        public_6d081ac : nop
        xor eax, eax
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ret 4
        UNREACHABLE_TRAP(0x6d07aa8)
    }
}

#undef public_6d07acd
#undef public_6d07ad9
#undef public_6d07b1a
#undef public_6d07b41
#undef public_6d07b61
#undef public_6d07b86
#undef public_6d07ba6
#undef public_6d07c03
#undef public_6d07c23
#undef public_6d07c44
#undef public_6d07c50
#undef public_6d07c86
#undef public_6d07dd9
#undef public_6d07e86
#undef public_6d07e98
#undef public_6d07ebb
#undef public_6d07ede
#undef public_6d07f4e
#undef public_6d07f94
#undef public_6d07fa2
#undef public_6d07fb4
#undef public_6d07fe5
#undef public_6d08003
#undef public_6d08008
#undef public_6d08020
#undef public_6d08040
#undef public_6d080aa
#undef public_6d080cd
#undef public_6d080f0
#undef public_6d08119
#undef public_6d0812b
#undef public_6d0813b
#undef public_6d0814a
#undef public_6d0817b
#undef public_6d081ac
