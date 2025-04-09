#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b805e);

PROC_DECLARE(0x5b7e1d, internal_5b7e1d, public_5b7e1d);
extern "C" NAKED register_t __cdecl internal_5b7e1d()
{
    __asm
    {
        push dword ptr ss : [esp+4]
        call public_5b805e
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x5b7e1d)
    }
}
