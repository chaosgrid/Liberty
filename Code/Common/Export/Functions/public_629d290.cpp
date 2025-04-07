#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_629d290);

PROC_DECLARE(0x629d290, internal_629d290, public_629d290);
extern "C" NAKED register_t __cdecl internal_629d290()
{
    __asm
    {
        mov al, byte ptr ds : [ecx+0x5C]
        ret 
        UNREACHABLE_TRAP(0x629d290)
    }
}
