#include "Server-PCH.h"

PROC_DECLARE(0x6ce61b0, internal_6ce61b0, public_6ce61b0);
extern "C" NAKED register_t __cdecl internal_6ce61b0()
{
    __asm
    {
        mov al, byte ptr ds : [ecx+0x38]
        ret 
        UNREACHABLE_TRAP(0x6ce61b0)
    }
}
