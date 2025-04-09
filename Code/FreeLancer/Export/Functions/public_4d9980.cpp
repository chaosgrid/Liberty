#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4d9980);

PROC_DECLARE(0x4d9980, internal_4d9980, public_4d9980);
extern "C" NAKED register_t __cdecl internal_4d9980()
{
    __asm
    {
        lea eax, ds:[ecx+4]
        ret 
        UNREACHABLE_TRAP(0x4d9980)
    }
}
