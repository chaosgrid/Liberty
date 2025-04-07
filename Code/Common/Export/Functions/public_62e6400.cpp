#include "Common-PCH.h"

PROC_DECLARE(0x62e6400, internal_62e6400, public_62e6400);
extern "C" NAKED register_t __cdecl internal_62e6400()
{
    __asm
    {
        mov dword ptr ds : [ecx+8], 0x1A
        ret 
        UNREACHABLE_TRAP(0x62e6400)
    }
}
