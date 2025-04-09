#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_536100);

#define public_52b2b0 _public_52b2b0

PROC_DECLARE(0x52b290, internal_52b290, public_52b290);
extern "C" NAKED register_t __cdecl internal_52b290()
{
    __asm
    {
        push esi
        mov esi, ecx
        lea eax, ds:[esi+0x28]
        push eax
        call dword ptr ds : [public_5c63c8]
        add esp, 4
        test eax, eax
        mov dword ptr ds : [esi+0x3C], eax
        je public_52b2b0
        push eax
        call public_536100
        add esp, 4
        public_52b2b0 : nop
        mov ecx, esi
        pop esi
        jmp dword ptr ds : [public_5c6854]
        UNREACHABLE_TRAP(0x52b290)
    }
}

#undef public_52b2b0
