#include "Common-PCH.h"

PROC_DECLARE(0x62da300, internal_62da300, public_62da300);
extern "C" NAKED register_t __cdecl internal_62da300()
{
    __asm
    {
        mov ax, 0x16
        ret 
        UNREACHABLE_TRAP(0x62da300)
    }
}
