#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b3820);

#define public_5b383f _public_5b383f

PROC_DECLARE(0x5b3820, internal_5b3820, public_5b3820);
extern "C" NAKED register_t __cdecl internal_5b3820()
{
    __asm
    {
        fld dword ptr ss : [esp+4]
        mov byte ptr ds : [public_67ed44], 1
        fcomp qword ptr ds : [public_5c75e8]
        fnstsw ax
        test ah, 0x41
        je public_5b383f
        mov byte ptr ds : [public_67ed44], 0
        public_5b383f : nop
        ret 
        UNREACHABLE_TRAP(0x5b3820)
    }
}

#undef public_5b383f
