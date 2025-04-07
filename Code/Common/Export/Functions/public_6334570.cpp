#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6334570);

PROC_DECLARE(0x6334570, internal_6334570, public_6334570);
extern "C" NAKED register_t __cdecl internal_6334570()
{
    __asm
    {
        mov word ptr ds : [ecx], 3
        ret 
        UNREACHABLE_TRAP(0x6334570)
    }
}
