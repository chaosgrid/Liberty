#include "Common-PCH.h"

PROC_DECLARE(0x62868b0, internal_62868b0, public_62868b0);
extern "C" NAKED register_t __cdecl internal_62868b0()
{
    __asm
    {
        mov ax, word ptr ds : [ecx+0xF8]
        ret 
        UNREACHABLE_TRAP(0x62868b0)
    }
}
