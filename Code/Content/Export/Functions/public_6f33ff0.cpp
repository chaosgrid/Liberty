#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f33ff0);

PROC_DECLARE(0x6f33ff0, internal_6f33ff0, public_6f33ff0);
extern "C" NAKED register_t __cdecl internal_6f33ff0()
{
    __asm
    {
        mov al, byte ptr ds : [ecx+0x1B1]
        ret 
        UNREACHABLE_TRAP(0x6f33ff0)
    }
}
