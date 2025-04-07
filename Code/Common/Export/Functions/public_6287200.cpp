#include "Common-PCH.h"

PROC_DECLARE(0x6287200, internal_6287200, public_6287200);
extern "C" NAKED register_t __cdecl internal_6287200()
{
    __asm
    {
        mov dword ptr ds : [ecx+8], 0
        ret 
        UNREACHABLE_TRAP(0x6287200)
    }
}
