#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d30bc9);
CLANG_FORWARD_PROC_SYMBOL(public_6d36b91);
CLANG_FORWARD_PROC_SYMBOL(public_6d36fc4);

#define public_6d36fdb _public_6d36fdb
#define public_6d37051 _public_6d37051
#define public_6d37058 _public_6d37058
#define public_6d37068 _public_6d37068
#define public_6d3706c _public_6d3706c
#define public_6d37095 _public_6d37095
#define public_6d370a4 _public_6d370a4
#define public_6d370ae _public_6d370ae
#define public_6d370dd _public_6d370dd
#define public_6d37115 _public_6d37115
#define public_6d37125 _public_6d37125
#define public_6d3712c _public_6d3712c
#define public_6d3718d _public_6d3718d
#define public_6d371c0 _public_6d371c0
#define public_6d371f7 _public_6d371f7
#define public_6d37234 _public_6d37234
#define public_6d3723f _public_6d3723f
#define public_6d3725a _public_6d3725a
#define public_6d37261 _public_6d37261
#define public_6d37267 _public_6d37267
#define public_6d3726a _public_6d3726a
#define public_6d37283 _public_6d37283
#define public_6d37286 _public_6d37286
#define public_6d372b9 _public_6d372b9
#define public_6d37318 _public_6d37318

PROC_DECLARE(0x6d36fc4, internal_6d36fc4, public_6d36fc4);
extern "C" NAKED register_t __cdecl internal_6d36fc4()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x68
        push ebx
        push esi
        push edi
        xor edi, edi
        cmp dword ptr ds : [ecx], edi
        mov dword ptr ss : [ebp-0xC], ecx
        je public_6d36fdb
        call public_6d36b91
        public_6d36fdb : nop
        mov eax, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[ebp-0x68]
        push edx
        push eax
        call dword ptr ds : [ecx+0x20]
        mov esi, dword ptr ss : [ebp+0x14]
        cmp esi, edi
        je public_6d3706c
        push 6
        pop ecx
        lea edi, ss:[ebp-0x30]
        rep movsd
        mov ecx, dword ptr ss : [ebp-0x28]
        cmp ecx, dword ptr ss : [ebp-0x54]
        ja public_6d370a4
        cmp dword ptr ss : [ebp-0x30], ecx
        ja public_6d370a4
        mov eax, dword ptr ss : [ebp-0x24]
        cmp eax, dword ptr ss : [ebp-0x50]
        ja public_6d370a4
        cmp dword ptr ss : [ebp-0x2C], eax
        ja public_6d370a4
        mov ebx, dword ptr ss : [ebp-0x1C]
        cmp ebx, dword ptr ss : [ebp-0x4C]
        ja public_6d370a4
        cmp dword ptr ss : [ebp-0x20], ebx
        ja public_6d370a4
        xor edx, edx
        cmp dword ptr ss : [ebp-0x30], edx
        jne public_6d37051
        cmp ecx, dword ptr ss : [ebp-0x54]
        jne public_6d37051
        cmp dword ptr ss : [ebp-0x2C], edx
        jne public_6d37051
        cmp eax, dword ptr ss : [ebp-0x50]
        jne public_6d37051
        cmp dword ptr ss : [ebp-0x20], edx
        jne public_6d37051
        cmp ebx, dword ptr ss : [ebp-0x4C]
        mov dword ptr ss : [ebp+0x14], edx
        je public_6d37058
        public_6d37051 : nop
        mov dword ptr ss : [ebp+0x14], 1
        public_6d37058 : nop
        test byte ptr ss : [ebp+0x1C], 1
        jne public_6d37068
        cmp dword ptr ss : [ebp+0x14], edx
        jne public_6d37068
        xor eax, eax
        inc eax
        jmp public_6d37095
        public_6d37068 : nop
        xor eax, eax
        jmp public_6d37095
        public_6d3706c : nop
        mov eax, dword ptr ss : [ebp-0x54]
        mov ebx, dword ptr ss : [ebp-0x4C]
        and dword ptr ss : [ebp+0x14], 0
        mov dword ptr ss : [ebp-0x28], eax
        mov eax, dword ptr ss : [ebp-0x50]
        mov dword ptr ss : [ebp-0x24], eax
        mov eax, dword ptr ss : [ebp+0x1C]
        not eax
        and eax, 1
        mov dword ptr ss : [ebp-0x30], edi
        mov dword ptr ss : [ebp-0x2C], edi
        mov dword ptr ss : [ebp-0x20], edi
        mov dword ptr ss : [ebp-0x1C], ebx
        xor edx, edx
        public_6d37095 : nop
        cmp dword ptr ss : [ebp-0x5C], edx
        mov ecx, 0x200
        jne public_6d370ae
        test dword ptr ss : [ebp-0x60], ecx
        jne public_6d370ae
        public_6d370a4 : nop
        mov eax, 0x8876086C
        jmp public_6d37318
        public_6d370ae : nop
        movzx esi, byte ptr ss : [ebp+0x1C]
        and esi, 1
        or esi, 0x80
        shl esi, 4
        xor edi, edi
        cmp eax, edi
        mov dword ptr ss : [ebp-8], esi
        je public_6d3712c
        test dword ptr ss : [ebp-0x60], ecx
        je public_6d3712c
        test byte ptr ss : [ebp+0x1E], 2
        je public_6d370dd
        or esi, 0x2000
        jmp public_6d3726a
        public_6d370dd : nop
        push 1
        call public_6d30bc9
        mov eax, dword ptr ss : [ebp+0xC]
        pop ecx
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[ebp-4]
        push edx
/*FIXUP push offset public_6d6101c @0x6d370ee*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6101c
        push eax
        call dword ptr ds : [ecx+0x1C]
        test eax, eax
        jl public_6d37125
        mov eax, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x34]
        cmp eax, 1
        jne public_6d37115
        or esi, 0x2000
        mov dword ptr ss : [ebp-8], esi
        mov dword ptr ss : [ebp+0x14], edi
        public_6d37115 : nop
        mov eax, dword ptr ss : [ebp-4]
        cmp eax, edi
        je public_6d37125
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ss : [ebp-4], edi
        public_6d37125 : nop
        push edi
        call public_6d30bc9
        pop ecx
        public_6d3712c : nop
        cmp dword ptr ss : [ebp+0x14], edi
        je public_6d3726a
        mov eax, dword ptr ss : [ebp-0x68]
        cmp eax, 0x31545844
        je public_6d371f7
        cmp eax, 0x32545844
        je public_6d371f7
        cmp eax, 0x32595559
        je public_6d3718d
        cmp eax, 0x33545844
        je public_6d371f7
        cmp eax, 0x34545844
        je public_6d371f7
        cmp eax, 0x35545844
        je public_6d371f7
        cmp eax, 0x59565955
        je public_6d3718d
        push 6
        pop ecx
        lea esi, ss:[ebp-0x30]
        lea edi, ss:[ebp-0x48]
        rep movsd
        jmp public_6d37261
        public_6d3718d : nop
        mov ecx, dword ptr ss : [ebp-0x30]
        mov eax, dword ptr ss : [ebp-0x28]
        mov edi, dword ptr ss : [ebp-0x24]
        mov edx, dword ptr ss : [ebp-0x2C]
        and ecx, 0xFFFFFFFE
        inc eax
        and eax, 0xFFFFFFFE
        cmp eax, dword ptr ss : [ebp-0x54]
        mov dword ptr ss : [ebp-0x3C], edi
        mov edi, dword ptr ss : [ebp-0x20]
        mov dword ptr ss : [ebp-0x48], ecx
        mov dword ptr ss : [ebp-0x40], eax
        mov dword ptr ss : [ebp-0x44], edx
        mov dword ptr ss : [ebp-0x38], edi
        mov dword ptr ss : [ebp-0x34], ebx
        jbe public_6d371c0
        mov eax, dword ptr ss : [ebp-0x54]
        mov dword ptr ss : [ebp-0x40], eax
        public_6d371c0 : nop
        test ecx, ecx
        jne public_6d37286
        cmp eax, dword ptr ss : [ebp-0x54]
        jne public_6d37286
        test edx, edx
        jne public_6d37286
        mov eax, dword ptr ss : [ebp-0x24]
        cmp eax, dword ptr ss : [ebp-0x50]
        jne public_6d37286
        test edi, edi
        jne public_6d37286
        cmp ebx, dword ptr ss : [ebp-0x4C]
        je public_6d3726a
        jmp public_6d37286
        public_6d371f7 : nop
        mov eax, dword ptr ss : [ebp-0x28]
        mov ecx, dword ptr ss : [ebp-0x24]
        mov edx, dword ptr ss : [ebp-0x30]
        mov esi, dword ptr ss : [ebp-0x2C]
        push 0xFFFFFFFC
        pop edi
        add eax, 3
        add ecx, 3
        and edx, edi
        and eax, edi
        and esi, edi
        and ecx, edi
        cmp eax, dword ptr ss : [ebp-0x54]
        mov edi, dword ptr ss : [ebp-0x20]
        mov dword ptr ss : [ebp-0x48], edx
        mov dword ptr ss : [ebp-0x40], eax
        mov dword ptr ss : [ebp-0x44], esi
        mov dword ptr ss : [ebp-0x3C], ecx
        mov dword ptr ss : [ebp-0x38], edi
        mov dword ptr ss : [ebp-0x34], ebx
        jbe public_6d37234
        mov eax, dword ptr ss : [ebp-0x54]
        mov dword ptr ss : [ebp-0x40], eax
        public_6d37234 : nop
        cmp ecx, dword ptr ss : [ebp-0x50]
        jbe public_6d3723f
        mov ecx, dword ptr ss : [ebp-0x50]
        mov dword ptr ss : [ebp-0x3C], ecx
        public_6d3723f : nop
        test edx, edx
        jne public_6d3725a
        cmp eax, dword ptr ss : [ebp-0x54]
        jne public_6d3725a
        test esi, esi
        jne public_6d3725a
        cmp ecx, dword ptr ss : [ebp-0x50]
        jne public_6d3725a
        test edi, edi
        jne public_6d3725a
        cmp ebx, dword ptr ss : [ebp-0x4C]
        je public_6d37267
        public_6d3725a : nop
        mov dword ptr ss : [ebp+0x14], 1
        public_6d37261 : nop
        cmp dword ptr ss : [ebp+0x14], 0
        jne public_6d37283
        public_6d37267 : nop
        mov esi, dword ptr ss : [ebp-8]
        public_6d3726a : nop
        mov eax, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ds : [eax]
        push esi
        push 0
        lea edx, ss:[ebp-0x18]
        push edx
        push eax
        call dword ptr ds : [ecx+0x24]
        test eax, eax
        jge public_6d372b9
        jmp public_6d37318
        public_6d37283 : nop
        mov esi, dword ptr ss : [ebp-8]
        public_6d37286 : nop
        mov eax, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ds : [eax]
        push esi
        lea edx, ss:[ebp-0x48]
        push edx
        lea edx, ss:[ebp-0x18]
        push edx
        push eax
        call dword ptr ds : [ecx+0x24]
        test eax, eax
        jl public_6d37318
        mov eax, dword ptr ss : [ebp-0x48]
        sub dword ptr ss : [ebp-0x30], eax
        sub dword ptr ss : [ebp-0x28], eax
        mov eax, dword ptr ss : [ebp-0x44]
        sub dword ptr ss : [ebp-0x2C], eax
        sub dword ptr ss : [ebp-0x24], eax
        mov eax, dword ptr ss : [ebp-0x38]
        sub dword ptr ss : [ebp-0x20], eax
        sub ebx, eax
        mov dword ptr ss : [ebp-0x1C], ebx
        public_6d372b9 : nop
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ss : [ebp-0x10]
        mov edx, dword ptr ss : [ebp-0x54]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [ebp-0x68]
        mov dword ptr ds : [eax+4], ecx
        mov ecx, dword ptr ss : [ebp-0x18]
        mov dword ptr ds : [eax+8], ecx
        mov ecx, dword ptr ss : [ebp-0x14]
        mov dword ptr ds : [eax+0xC], ecx
        xor ecx, ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax+0x14], ecx
        mov dword ptr ds : [eax+0x20], ecx
        mov ecx, dword ptr ss : [ebp-0x4C]
        mov dword ptr ds : [eax+0x24], ecx
        lea edi, ds:[eax+0x28]
        push 6
        pop ecx
        lea esi, ss:[ebp-0x30]
        rep movsd
        mov ecx, dword ptr ss : [ebp+0x18]
        mov dword ptr ds : [eax+0x44], ecx
        mov ecx, dword ptr ss : [ebp+0x10]
        mov dword ptr ds : [eax+0x18], edx
        mov edx, dword ptr ss : [ebp-0x50]
        mov dword ptr ds : [eax+0x48], ecx
        mov ecx, dword ptr ss : [ebp-0xC]
        mov dword ptr ds : [eax+0x1C], edx
        mov dword ptr ds : [eax+0x40], 1
        mov eax, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [ecx], eax
        xor eax, eax
        public_6d37318 : nop
        pop edi
        pop esi
        pop ebx
        leave 
        ret 0x18
        UNREACHABLE_TRAP(0x6d36fc4)
    }
}

#undef public_6d36fdb
#undef public_6d37051
#undef public_6d37058
#undef public_6d37068
#undef public_6d3706c
#undef public_6d37095
#undef public_6d370a4
#undef public_6d370ae
#undef public_6d370dd
#undef public_6d37115
#undef public_6d37125
#undef public_6d3712c
#undef public_6d3718d
#undef public_6d371c0
#undef public_6d371f7
#undef public_6d37234
#undef public_6d3723f
#undef public_6d3725a
#undef public_6d37261
#undef public_6d37267
#undef public_6d3726a
#undef public_6d37283
#undef public_6d37286
#undef public_6d372b9
#undef public_6d37318
