#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42d660);
CLANG_FORWARD_PROC_SYMBOL(public_5544d0);

PROC_DECLARE(0x5544d0, internal_5544d0, public_5544d0);
extern "C" NAKED register_t __cdecl internal_5544d0()
{
    __asm
    {
        call public_42d660
        fadd qword ptr ss : [esp+4]
        fstp qword ptr ds : [public_679978]
        ret 
        UNREACHABLE_TRAP(0x5544d0)
    }
}
