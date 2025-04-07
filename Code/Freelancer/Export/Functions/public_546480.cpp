#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4101e0);
CLANG_FORWARD_PROC_SYMBOL(public_410240);
CLANG_FORWARD_PROC_SYMBOL(public_4102c0);
CLANG_FORWARD_PROC_SYMBOL(public_410ef0);
CLANG_FORWARD_PROC_SYMBOL(public_504870);
CLANG_FORWARD_PROC_SYMBOL(public_539b40);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);

#define public_54649a _public_54649a
#define public_5464cc _public_5464cc
#define public_546534 _public_546534
#define public_546540 _public_546540

PROC_DECLARE(0x546480, internal_546480, public_546480);
extern "C" NAKED register_t __cdecl internal_546480()
{
    __asm
    {
        sub esp, 0x10
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x158]
        cmp eax, 2
        je public_54649a
        cmp eax, 3
        jne public_546534
        public_54649a : nop
        call public_54baf0
        cmp esi, eax
        jne public_546534
        call public_4101e0
        mov ecx, dword ptr ds : [esi+0x188]
        test ecx, ecx
        je public_546540
        call public_504870
        test eax, eax
        je public_5464cc
        push eax
        call public_410240
        add esp, 4
        public_5464cc : nop
        mov eax, dword ptr ds : [esi+0x188]
        mov ecx, dword ptr ds : [eax+0x24]
        test ecx, ecx
        je public_546540
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+8], ecx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [esi+0x188]
        mov dword ptr ss : [esp+0xC], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x10], eax
        mov edx, dword ptr ds : [ecx+0x24]
        mov ecx, dword ptr ds : [edx+0x2A8]
        test ecx, ecx
        mov dword ptr ss : [esp+4], ecx
        je public_546540
        lea eax, ss:[esp+8]
        push eax
        call public_410ef0
        mov edx, dword ptr ss : [esp+0x18]
        lea ecx, ss:[esp+8]
        push ecx
        push edx
        lea eax, ss:[esp+0xC]
        push 1
        push eax
        call public_4102c0
        add esp, 0x10
        pop esi
        add esp, 0x10
        ret 4
        public_546534 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        push ecx
        mov ecx, esi
        call public_539b40
        public_546540 : nop
        pop esi
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x546480)
    }
}

#undef public_54649a
#undef public_5464cc
#undef public_546534
#undef public_546540
