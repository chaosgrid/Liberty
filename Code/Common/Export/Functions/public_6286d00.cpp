#include "Common-PCH.h"

PROC_DECLARE(0x6286d00, internal_6286d00, public_6286d00);
extern "C" NAKED register_t __cdecl internal_6286d00()
{
    __asm
    {
        mov ax, word ptr ds : [ecx+8]
        ret 
        UNREACHABLE_TRAP(0x6286d00)
    }
}
