#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40e960);
CLANG_FORWARD_PROC_SYMBOL(public_40f080);

#define public_52bf5f _public_52bf5f

PROC_DECLARE(0x52bf40, internal_52bf40, public_52bf40);
extern "C" NAKED register_t __cdecl internal_52bf40()
{
    __asm
    {
        push esi
        mov esi, ecx
        lea eax, ds:[esi+0x28]
        push eax
        call public_40f080
        add esp, 4
        test eax, eax
        mov dword ptr ds : [esi+0x40], eax
        je public_52bf5f
        push 0
        mov ecx, eax
        call public_40e960
        public_52bf5f : nop
        mov ecx, esi
        pop esi
        jmp dword ptr ds : [public_5c6854]
        UNREACHABLE_TRAP(0x52bf40)
    }
}

#undef public_52bf5f
