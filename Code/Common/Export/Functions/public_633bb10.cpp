#include "Common-PCH.h"

PROC_DECLARE(0x633bb10, internal_633bb10, public_633bb10);
extern "C" NAKED register_t __cdecl internal_633bb10()
{
    __asm
    {
        mov al, byte ptr ds : [ecx+0x2C]
        ret 
        UNREACHABLE_TRAP(0x633bb10)
    }
}
