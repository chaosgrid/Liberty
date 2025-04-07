#include "Server-PCH.h"

PROC_DECLARE(0x6ce6600, internal_6ce6600, public_6ce6600);
extern "C" NAKED register_t __cdecl internal_6ce6600()
{
    __asm
    {
        mov word ptr ds : [public_6d8d69c], 4
        mov byte ptr ds : [public_6d8d69e], 1
        ret 
        UNREACHABLE_TRAP(0x6ce6600)
    }
}
