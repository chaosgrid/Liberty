#include "Common-PCH.h"

PROC_DECLARE(0x62882a0, internal_62882a0, public_62882a0);
extern "C" NAKED register_t __cdecl internal_62882a0()
{
    __asm
    {
        mov byte ptr ds : [ecx+0x2C4], 1
        ret 
        UNREACHABLE_TRAP(0x62882a0)
    }
}
