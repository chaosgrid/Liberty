#include "Content-PCH.h"

PROC_DECLARE(0x6f9a400, internal_6f9a400, public_6f9a400);
extern "C" NAKED register_t __cdecl internal_6f9a400()
{
    __asm
    {
        mov al, byte ptr ds : [ecx+0xC]
        neg al
        sbb eax, eax
        add eax, 3
        ret 
        UNREACHABLE_TRAP(0x6f9a400)
    }
}
