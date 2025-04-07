#include "ImeUi-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_67169d0);
CLANG_FORWARD_PROC_SYMBOL(public_67169f0);

PROC_DECLARE(0x67169d0, internal_67169d0, public_67169d0);
extern "C" NAKED register_t __cdecl internal_67169d0()
{
    __asm
    {
        push dword ptr ss : [esp+4]
        call public_67169f0
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x67169d0)
    }
}
