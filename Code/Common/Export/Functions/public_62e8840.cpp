#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62e8840);

PROC_DECLARE(0x62e8840, internal_62e8840, public_62e8840);
extern "C" NAKED register_t __cdecl internal_62e8840()
{
    __asm
    {
        mov al, byte ptr ds : [ecx+0x78]
        ret 
        UNREACHABLE_TRAP(0x62e8840)
    }
}
