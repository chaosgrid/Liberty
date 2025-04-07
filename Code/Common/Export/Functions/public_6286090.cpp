#include "Common-PCH.h"

PROC_DECLARE(0x6286090, internal_6286090, public_6286090);
extern "C" NAKED register_t __cdecl internal_6286090()
{
    __asm
    {
        mov dword ptr ds : [ecx+0xE8], 0xBF800000
        ret 
        UNREACHABLE_TRAP(0x6286090)
    }
}
