#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2f249);
CLANG_FORWARD_PROC_SYMBOL(public_6d33272);

PROC_DECLARE(0x6d33272, internal_6d33272, public_6d33272);
extern "C" NAKED register_t __cdecl internal_6d33272()
{
    __asm
    {
        push dword ptr ds : [ecx]
        call public_6d2f249
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6d33272)
    }
}
