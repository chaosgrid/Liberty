#include "Common-PCH.h"

PROC_DECLARE(0x631d620, internal_631d620, public_631d620);
extern "C" NAKED register_t __cdecl internal_631d620()
{
    __asm
    {
        mov al, byte ptr ds : [ecx+0x20]
        ret 
        UNREACHABLE_TRAP(0x631d620)
    }
}
