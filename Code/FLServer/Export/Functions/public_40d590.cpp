#include "FLServer-PCH.h"

PROC_DECLARE(0x40d590, internal_40d590, public_40d590);
extern "C" NAKED register_t __cdecl internal_40d590()
{
    __asm
    {
        mov word ptr ds : [public_427858], 0
        mov byte ptr ds : [public_42785a], 1
        ret 
        UNREACHABLE_TRAP(0x40d590)
    }
}
