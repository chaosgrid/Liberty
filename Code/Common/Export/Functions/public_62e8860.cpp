#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62e8860);

PROC_DECLARE(0x62e8860, internal_62e8860, public_62e8860);
extern "C" NAKED register_t __cdecl internal_62e8860()
{
    __asm
    {
        mov al, byte ptr ds : [ecx+0x48]
        ret 
        UNREACHABLE_TRAP(0x62e8860)
    }
}
