#include "Server-PCH.h"

PROC_DECLARE(0x6ce6580, internal_6ce6580, public_6ce6580);
extern "C" NAKED register_t __cdecl internal_6ce6580()
{
    __asm
    {
        mov word ptr ds : [public_6d8d6ac], 0
        mov byte ptr ds : [public_6d8d6ae], 1
        ret 
        UNREACHABLE_TRAP(0x6ce6580)
    }
}
