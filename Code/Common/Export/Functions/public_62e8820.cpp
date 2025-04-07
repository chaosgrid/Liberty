#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62e8820);

PROC_DECLARE(0x62e8820, internal_62e8820, public_62e8820);
extern "C" NAKED register_t __cdecl internal_62e8820()
{
    __asm
    {
        mov al, byte ptr ds : [ecx+0x38]
        ret 
        UNREACHABLE_TRAP(0x62e8820)
    }
}
