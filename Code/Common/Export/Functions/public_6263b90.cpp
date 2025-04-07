#include "Common-PCH.h"

PROC_DECLARE(0x6263b90, internal_6263b90, public_6263b90);
extern "C" NAKED register_t __cdecl internal_6263b90()
{
    __asm
    {
        mov al, byte ptr ds : [ecx+0xC]
        ret 
        UNREACHABLE_TRAP(0x6263b90)
    }
}
