#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_411c50);
CLANG_FORWARD_PROC_SYMBOL(public_432240);
CLANG_FORWARD_PROC_SYMBOL(public_439260);
CLANG_FORWARD_PROC_SYMBOL(public_439610);
CLANG_FORWARD_PROC_SYMBOL(public_439b50);
CLANG_FORWARD_PROC_SYMBOL(public_43a080);
CLANG_FORWARD_PROC_SYMBOL(public_43bdf0);
CLANG_FORWARD_PROC_SYMBOL(public_43bea0);
CLANG_FORWARD_PROC_SYMBOL(public_43bf50);
CLANG_FORWARD_PROC_SYMBOL(public_442130);
CLANG_FORWARD_PROC_SYMBOL(public_53ab20);

#define public_43927c _public_43927c
#define public_439280 _public_439280
#define public_439290 _public_439290
#define public_4392b6 _public_4392b6
#define public_4392c4 _public_4392c4
#define public_4392f0 _public_4392f0
#define public_439324 _public_439324
#define public_43933a _public_43933a
#define public_43934a _public_43934a
#define public_439357 _public_439357
#define public_43937c _public_43937c

PROC_DECLARE(0x439260, internal_439260, public_439260);
extern "C" NAKED register_t __cdecl internal_439260()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+4]
        mov ebx, dword ptr ds : [eax]
        cmp ebx, eax
        push edi
        mov dword ptr ss : [esp+0xC], ebx
        je public_43934a
        push ebp
        jmp public_439280
        public_43927c : nop
        mov ebx, dword ptr ss : [esp+0x10]
        public_439280 : nop
        mov eax, dword ptr ds : [ebx+0x18]
        mov ebp, dword ptr ds : [eax]
        cmp ebp, eax
        je public_4392c4
        lea esp, ss:[esp]
        public_439290 : nop
        mov eax, dword ptr ss : [ebp+8]
        mov edi, dword ptr ds : [eax+4]
        push edi
        mov ecx, esi
        call public_439610
        mov ebx, eax
        mov eax, dword ptr ds : [ebx+0xC]
        test eax, eax
        jle public_4392b6
        push edi
        mov ecx, esi
        call public_43a080
        mov dword ptr ds : [ebx+0xC], 0
        public_4392b6 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov ebp, dword ptr ss : [ebp]
        cmp ebp, dword ptr ds : [ecx+0x18]
        jne public_439290
        mov ebx, ecx
        public_4392c4 : nop
        mov edx, dword ptr ds : [ebx+8]
        mov ebp, dword ptr ds : [edx]
        lea eax, ss:[esp+0x10]
        push eax
        lea ecx, ss:[esp+0x18]
        push ecx
        lea ecx, ds:[esi+0x20]
        mov dword ptr ss : [esp+0x18], ebp
        call public_432240
        mov eax, dword ptr ss : [esp+0x14]
        cmp eax, dword ptr ds : [esi+0x24]
        je public_4392f0
        mov edi, dword ptr ds : [eax+0x10]
        jmp public_439324
        lea ecx, ds:[ecx]
        public_4392f0 : nop
        push 1
        push 0x10000
        lea ecx, ss:[esp+0x20]
        call public_411c50
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [public_5c6d18]
        push edx
        push 0x100
/*FIXUP push offset public_5caf30 @0x439312*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5caf30
/*FIXUP push offset public_5caf78 @0x439317*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5caf78
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        xor edi, edi
        public_439324 : nop
        mov eax, dword ptr ds : [edi+8]
        test eax, eax
        jle public_43933a
        push ebp
        mov ecx, esi
        call public_439b50
        mov dword ptr ds : [edi+8], 0
        public_43933a : nop
        mov ebx, dword ptr ds : [ebx]
        cmp ebx, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0x10], ebx
        jne public_43927c
        pop ebp
        public_43934a : nop
        mov edi, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edi]
        cmp eax, edi
        mov dword ptr ss : [esp+0xC], eax
        je public_43937c
        public_439357 : nop
        push 0
        lea edx, ss:[esp+0x18]
        push edx
        lea ecx, ss:[esp+0x14]
        call public_53ab20
        mov eax, dword ptr ds : [eax]
        push eax
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, esi
        call public_43bf50
        cmp dword ptr ss : [esp+0xC], edi
        jne public_439357
        public_43937c : nop
        mov eax, dword ptr ds : [esi+0x10]
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[esi+0xC]
        push eax
        push edx
        lea edx, ss:[esp+0x1C]
        push edx
        call public_43bdf0
        mov eax, dword ptr ds : [esi+0x24]
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[esi+0x20]
        push eax
        push edx
        lea eax, ss:[esp+0x1C]
        push eax
        call public_43bea0
        pop edi
        pop esi
        pop ebx
        add esp, 0xC
        jmp public_442130
        UNREACHABLE_TRAP(0x439260)
    }
}

#undef public_43927c
#undef public_439280
#undef public_439290
#undef public_4392b6
#undef public_4392c4
#undef public_4392f0
#undef public_439324
#undef public_43933a
#undef public_43934a
#undef public_439357
#undef public_43937c
