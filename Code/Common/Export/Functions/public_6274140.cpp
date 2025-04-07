#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6334430);

PROC_DECLARE(0x6274140, internal_6274140, public_6274140);
extern "C" NAKED register_t __cdecl internal_6274140()
{
    __asm
    {
        add ecx, 4
        push ecx
        call public_6334430
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6274140)
    }
}
