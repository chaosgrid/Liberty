#include "Common-PCH.h"

PROC_DECLARE(0x6280ed0, internal_6280ed0, public_6280ed0);
extern "C" NAKED register_t __cdecl internal_6280ed0()
{
    __asm
    {
        mov byte ptr ds : [ecx], 1
        ret 
        UNREACHABLE_TRAP(0x6280ed0)
    }
}
