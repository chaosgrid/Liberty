#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b6fd0);

#define public_5b6ffe _public_5b6ffe

PROC_DECLARE(0x5b6fd0, internal_5b6fd0, public_5b6fd0);
extern "C" NAKED register_t __cdecl internal_5b6fd0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_67ed54]
        test eax, eax
        je public_5b6ffe
        push eax
        call dword ptr ds : [public_5c6f08]
        mov dword ptr ds : [public_67ed54], 0
        mov dword ptr ds : [public_67ed5c], 0
        mov dword ptr ds : [public_67ed58], 0
        public_5b6ffe : nop
        ret 
        UNREACHABLE_TRAP(0x5b6fd0)
    }
}

#undef public_5b6ffe
