#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_55e280);

PROC_DECLARE(0x55e280, internal_55e280, public_55e280);
extern "C" NAKED register_t __cdecl internal_55e280()
{
    __asm
    {
        mov al, byte ptr ds : [ecx+0x18]
        ret 
        UNREACHABLE_TRAP(0x55e280)
    }
}
