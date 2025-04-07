#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40e990);

#define public_52bf7f _public_52bf7f

PROC_DECLARE(0x52bf70, internal_52bf70, public_52bf70);
extern "C" NAKED register_t __cdecl internal_52bf70()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x40]
        test ecx, ecx
        je public_52bf7f
        call public_40e990
        public_52bf7f : nop
        mov ecx, esi
        pop esi
        jmp dword ptr ds : [public_5c6850]
        UNREACHABLE_TRAP(0x52bf70)
    }
}

#undef public_52bf7f
