#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_44f9d0);

PROC_DECLARE(0x44f9d0, internal_44f9d0, public_44f9d0);
extern "C" NAKED register_t __cdecl internal_44f9d0()
{
    __asm
    {
        mov byte ptr ds : [ecx+0x44], 1
        ret 
        UNREACHABLE_TRAP(0x44f9d0)
    }
}
