#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_445710);

#define public_44571d _public_44571d

PROC_DECLARE(0x445710, internal_445710, public_445710);
extern "C" NAKED register_t __cdecl internal_445710()
{
    __asm
    {
        cmp dword ptr ss : [esp+4], 0xFFFFFFFF
        je public_44571d
        dec dword ptr ds : [ecx+0x374]
        public_44571d : nop
        ret 4
        UNREACHABLE_TRAP(0x445710)
    }
}

#undef public_44571d
