#include "Movie-PCH.h"

PROC_DECLARE(0x6ac14f0, internal_6ac14f0, public_6ac14f0);
extern "C" NAKED register_t __cdecl internal_6ac14f0()
{
    __asm
    {
        mov al, byte ptr ds : [ecx+0xD]
        ret 
        UNREACHABLE_TRAP(0x6ac14f0)
    }
}
