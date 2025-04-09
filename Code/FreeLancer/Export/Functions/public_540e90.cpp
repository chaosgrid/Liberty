#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_540e90);

#define public_540ead _public_540ead

PROC_DECLARE(0x540e90, internal_540e90, public_540e90);
extern "C" NAKED register_t __cdecl internal_540e90()
{
    __asm
    {
        mov eax, dword ptr ds : [public_678ae0]
        test eax, eax
        je public_540ead
        push eax
        call dword ptr ds : [public_5c6a8c]
        add esp, 4
        mov dword ptr ds : [public_678ae0], 0
        public_540ead : nop
        ret 
        UNREACHABLE_TRAP(0x540e90)
    }
}

#undef public_540ead
