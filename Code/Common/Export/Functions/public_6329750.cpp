#include "Common-PCH.h"

PROC_DECLARE(0x6329750, internal_6329750, public_6329750);
extern "C" NAKED register_t __cdecl internal_6329750()
{
    __asm
    {
        mov al, byte ptr ds : [ecx+5]
        ret 
        UNREACHABLE_TRAP(0x6329750)
    }
}
