#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4548f0);

#define public_45490f _public_45490f

PROC_DECLARE(0x4548f0, internal_4548f0, public_4548f0);
extern "C" NAKED register_t __cdecl internal_4548f0()
{
    __asm
    {
        fld dword ptr ss : [esp+4]
        mov byte ptr ds : [public_66d304], 0
        fcomp qword ptr ds : [public_5c75e8]
        fnstsw ax
        test ah, 1
        je public_45490f
        mov byte ptr ds : [public_66d304], 1
        public_45490f : nop
        ret 
        UNREACHABLE_TRAP(0x4548f0)
    }
}

#undef public_45490f
