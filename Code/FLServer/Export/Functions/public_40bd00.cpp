#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40bd00);

PROC_DECLARE(0x40bd00, internal_40bd00, public_40bd00);
extern "C" NAKED register_t __cdecl internal_40bd00()
{
    __asm
    {
        mov al, byte ptr ds : [ecx+0xBA9]
        ret 
        UNREACHABLE_TRAP(0x40bd00)
    }
}
