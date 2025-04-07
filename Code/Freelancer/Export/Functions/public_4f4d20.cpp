#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4f4d20);

PROC_DECLARE(0x4f4d20, internal_4f4d20, public_4f4d20);
extern "C" NAKED register_t __cdecl internal_4f4d20()
{
    __asm
    {
        mov al, byte ptr ds : [ecx+0x38C]
        ret 
        UNREACHABLE_TRAP(0x4f4d20)
    }
}
