#include "Common-PCH.h"

PROC_DECLARE(0x62d9be0, internal_62d9be0, public_62d9be0);
extern "C" NAKED register_t __cdecl internal_62d9be0()
{
    __asm
    {
        mov ax, 0x12
        ret 
        UNREACHABLE_TRAP(0x62d9be0)
    }
}
