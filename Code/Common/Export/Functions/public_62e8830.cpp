#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62e8830);

PROC_DECLARE(0x62e8830, internal_62e8830, public_62e8830);
extern "C" NAKED register_t __cdecl internal_62e8830()
{
    __asm
    {
        mov al, byte ptr ds : [ecx+0x58]
        ret 
        UNREACHABLE_TRAP(0x62e8830)
    }
}
