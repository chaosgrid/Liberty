#include "Common-PCH.h"

PROC_DECLARE(0x62d74d0, internal_62d74d0, public_62d74d0);
extern "C" NAKED register_t __cdecl internal_62d74d0()
{
    __asm
    {
        mov ax, 0x10
        ret 
        UNREACHABLE_TRAP(0x62d74d0)
    }
}
