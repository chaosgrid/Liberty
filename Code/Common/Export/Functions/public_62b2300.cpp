#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62b2300);

PROC_DECLARE(0x62b2300, internal_62b2300, public_62b2300);
extern "C" NAKED register_t __cdecl internal_62b2300()
{
    __asm
    {
        mov ax, word ptr ds : [ecx+0x228]
        ret 
        UNREACHABLE_TRAP(0x62b2300)
    }
}
