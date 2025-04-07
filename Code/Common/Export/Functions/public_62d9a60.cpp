#include "Common-PCH.h"

PROC_DECLARE(0x62d9a60, internal_62d9a60, public_62d9a60);
extern "C" NAKED register_t __cdecl internal_62d9a60()
{
    __asm
    {
        mov ax, 0x56
        ret 
        UNREACHABLE_TRAP(0x62d9a60)
    }
}
