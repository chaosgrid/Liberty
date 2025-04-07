#include "Common-PCH.h"

PROC_DECLARE(0x62d6540, internal_62d6540, public_62d6540);
extern "C" NAKED register_t __cdecl internal_62d6540()
{
    __asm
    {
        mov ax, 6
        ret 
        UNREACHABLE_TRAP(0x62d6540)
    }
}
