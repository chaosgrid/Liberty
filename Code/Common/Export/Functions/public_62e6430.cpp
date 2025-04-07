#include "Common-PCH.h"

PROC_DECLARE(0x62e6430, internal_62e6430, public_62e6430);
extern "C" NAKED register_t __cdecl internal_62e6430()
{
    __asm
    {
        mov dword ptr ds : [ecx+8], 0x1B
        ret 
        UNREACHABLE_TRAP(0x62e6430)
    }
}
