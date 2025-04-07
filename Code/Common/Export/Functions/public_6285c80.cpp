#include "Common-PCH.h"

PROC_DECLARE(0x6285c80, internal_6285c80, public_6285c80);
extern "C" NAKED register_t __cdecl internal_6285c80()
{
    __asm
    {
        mov eax, 0x5DC
        ret 
        UNREACHABLE_TRAP(0x6285c80)
    }
}
