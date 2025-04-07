#include "Common-PCH.h"

PROC_DECLARE(0x62681d0, internal_62681d0, public_62681d0);
extern "C" NAKED register_t __cdecl internal_62681d0()
{
    __asm
    {
        mov eax, 0x7FFFFFF
        ret 
        UNREACHABLE_TRAP(0x62681d0)
    }
}
