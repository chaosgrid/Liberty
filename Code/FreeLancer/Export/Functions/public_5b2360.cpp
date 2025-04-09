#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42d680);
CLANG_FORWARD_PROC_SYMBOL(public_42d6a0);
CLANG_FORWARD_PROC_SYMBOL(public_42d770);
CLANG_FORWARD_PROC_SYMBOL(public_5b2360);

#define public_5b2381 _public_5b2381

PROC_DECLARE(0x5b2360, internal_5b2360, public_5b2360);
extern "C" NAKED register_t __cdecl internal_5b2360()
{
    __asm
    {
        call public_42d770
        call dword ptr ds : [public_5c60d0]
        test al, al
        je public_5b2381
        call public_42d680
        fadd qword ptr ds : [public_67ecd8]
        fstp qword ptr ds : [public_67ecd8]
        ret 
        public_5b2381 : nop
        call public_42d6a0
        fadd qword ptr ds : [public_67ecd8]
        fstp qword ptr ds : [public_67ecd8]
        ret 
        UNREACHABLE_TRAP(0x5b2360)
    }
}

#undef public_5b2381
