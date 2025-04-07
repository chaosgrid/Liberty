#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_622d2e0);
CLANG_FORWARD_PROC_SYMBOL(public_623e830);

#define public_622d2fa _public_622d2fa

PROC_DECLARE(0x622d2e0, internal_622d2e0, public_622d2e0);
extern "C" NAKED register_t __cdecl internal_622d2e0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6257ac0]
        sub esp, 0x30
        test eax, eax
        push esi
        push edi
        mov esi, ecx
        jne public_622d2fa
        call public_623e830
        mov dword ptr ds : [public_6257ac0], eax
        public_622d2fa : nop
        mov edx, dword ptr ss : [esp+0x40]
        mov ecx, dword ptr ds : [eax]
        push esi
        push edx
        lea edx, ss:[esp+0x10]
        push edx
        push eax
        call dword ptr ds : [ecx+0x5C]
        mov eax, dword ptr ss : [esp+0x3C]
        mov ecx, 0xC
        lea esi, ss:[esp+8]
        mov edi, eax
        rep movsd
        pop edi
        pop esi
        add esp, 0x30
        ret 8
        UNREACHABLE_TRAP(0x622d2e0)
    }
}

#undef public_622d2fa
