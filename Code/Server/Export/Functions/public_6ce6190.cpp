#include "Server-PCH.h"

PROC_DECLARE(0x6ce6190, internal_6ce6190, public_6ce6190);
extern "C" NAKED register_t __cdecl internal_6ce6190()
{
    __asm
    {
        mov al, byte ptr ds : [ecx+0x41]
        ret 
        UNREACHABLE_TRAP(0x6ce6190)
    }
}
