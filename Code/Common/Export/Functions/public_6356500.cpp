#include "Common-PCH.h"

PROC_DECLARE(0x6356500, internal_6356500, public_6356500);
extern "C" NAKED register_t __cdecl internal_6356500()
{
    __asm
    {
        lea eax, ds:[ecx+0x2C]
        ret 
        UNREACHABLE_TRAP(0x6356500)
    }
}
