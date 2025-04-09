#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5154f0);

#define public_5154fd _public_5154fd

PROC_DECLARE(0x5154f0, internal_5154f0, public_5154f0);
extern "C" NAKED register_t __cdecl internal_5154f0()
{
    __asm
    {
        cmp dword ptr ds : [ecx], 0
        je public_5154fd
        push 0
        call dword ptr ds : [public_5c62a8]
        public_5154fd : nop
        ret 
        UNREACHABLE_TRAP(0x5154f0)
    }
}

#undef public_5154fd
