#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c4670);
CLANG_FORWARD_PROC_SYMBOL(public_5416c0);

#define public_53e346 _public_53e346
#define public_53e36c _public_53e36c

PROC_DECLARE(0x53e2f0, internal_53e2f0, public_53e2f0);
extern "C" NAKED register_t __cdecl internal_53e2f0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push 0
        push esi
        call public_5416c0
        add esp, 8
        test eax, eax
        je public_53e346
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0x150]
        test eax, eax
        je public_53e36c
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x103
        cmp ecx, 0x103
        jne public_53e36c
        mov edx, dword ptr ds : [eax+0x104]
        mov eax, dword ptr ss : [esp+0x10]
        push 1
        push eax
        lea ecx, ss:[esp+0x14]
        push ecx
        mov dword ptr ss : [esp+0x18], edx
        call dword ptr ds : [public_5c65d4]
        add esp, 0xC
        pop esi
        ret 0xC
        public_53e346 : nop
        cmp dword ptr ds : [public_673378], esi
        jne public_53e36c
        call public_4c4670
        mov edx, dword ptr ss : [esp+0x10]
        push 1
        mov dword ptr ss : [esp+0x10], eax
        push edx
        lea eax, ss:[esp+0x14]
        push eax
        call dword ptr ds : [public_5c65d4]
        add esp, 0xC
        public_53e36c : nop
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x53e2f0)
    }
}

#undef public_53e346
#undef public_53e36c
