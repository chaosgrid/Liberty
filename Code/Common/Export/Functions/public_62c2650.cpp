#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62c2650);
CLANG_FORWARD_PROC_SYMBOL(public_62c2920);

PROC_DECLARE(0x62c2650, internal_62c2650, public_62c2650);
extern "C" NAKED register_t __cdecl internal_62c2650()
{
    __asm
    {
        push 0
        call public_62c2920
        ret 
        UNREACHABLE_TRAP(0x62c2650)
    }
}
