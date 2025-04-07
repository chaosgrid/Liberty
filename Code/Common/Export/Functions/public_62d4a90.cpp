#include "Common-PCH.h"

PROC_DECLARE(0x62d4a90, internal_62d4a90, public_62d4a90);
extern "C" NAKED register_t __cdecl internal_62d4a90()
{
    __asm
    {
        mov dword ptr ds : [ecx+0xB8], 0
        mov al, 1
        ret 
        UNREACHABLE_TRAP(0x62d4a90)
    }
}
