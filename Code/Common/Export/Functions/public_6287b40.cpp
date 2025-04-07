#include "Common-PCH.h"

PROC_DECLARE(0x6287b40, internal_6287b40, public_6287b40);
extern "C" NAKED register_t __cdecl internal_6287b40()
{
    __asm
    {
        mov al, byte ptr ds : [ecx+0x2BD]
        ret 
        UNREACHABLE_TRAP(0x6287b40)
    }
}
