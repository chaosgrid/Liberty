#include "Common-PCH.h"

PROC_DECLARE(0x6274120, internal_6274120, public_6274120);
extern "C" NAKED register_t __cdecl internal_6274120()
{
    __asm
    {
        mov dword ptr ds : [ecx+0xE28], 0
        ret 
        UNREACHABLE_TRAP(0x6274120)
    }
}
