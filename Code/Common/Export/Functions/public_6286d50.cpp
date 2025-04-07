#include "Common-PCH.h"

PROC_DECLARE(0x6286d50, internal_6286d50, public_6286d50);
extern "C" NAKED register_t __cdecl internal_6286d50()
{
    __asm
    {
        mov al, byte ptr ds : [ecx+0x12]
        ret 
        UNREACHABLE_TRAP(0x6286d50)
    }
}
