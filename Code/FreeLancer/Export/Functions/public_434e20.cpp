#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_432240);
CLANG_FORWARD_PROC_SYMBOL(public_434e20);

#define public_434e5f _public_434e5f
#define public_434e7c _public_434e7c

PROC_DECLARE(0x434e20, internal_434e20, public_434e20);
extern "C" NAKED register_t __cdecl internal_434e20()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+8]
        push esi
        mov esi, ecx
        lea ecx, ss:[esp+0xC]
        push ecx
        lea edx, ss:[esp+8]
        push edx
        lea ecx, ds:[esi+0xC]
        mov dword ptr ss : [esp+0x14], eax
        call public_432240
        mov eax, dword ptr ss : [esp+4]
        cmp eax, dword ptr ds : [esi+0x10]
        je public_434e7c
        add eax, 0x10
        test eax, eax
        je public_434e7c
        dec dword ptr ds : [eax+0x14]
        jne public_434e7c
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        jne public_434e5f
        mov eax, dword ptr ds : [public_5c7078]
        public_434e5f : nop
        mov ecx, dword ptr ds : [public_5c6d40]
        mov dword ptr ss : [esp+0xC], eax
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax]
        push 1
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, dword ptr ds : [esi+0x2C]
        push ecx
        push eax
        call dword ptr ds : [edx+0x7C]
        public_434e7c : nop
        pop esi
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x434e20)
    }
}

#undef public_434e5f
#undef public_434e7c
