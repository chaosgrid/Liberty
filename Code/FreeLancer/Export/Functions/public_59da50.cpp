#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_59da50);

#define public_59da5d _public_59da5d

PROC_DECLARE(0x59da50, internal_59da50, public_59da50);
extern "C" NAKED register_t __cdecl internal_59da50()
{
    __asm
    {
        mov eax, dword ptr ds : [public_67dbe8]
        test eax, eax
        je public_59da5d
        mov eax, dword ptr ds : [eax+8]
        ret 
        public_59da5d : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x59da50)
    }
}

#undef public_59da5d
