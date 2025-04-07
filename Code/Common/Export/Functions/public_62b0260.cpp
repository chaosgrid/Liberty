#include "Common-PCH.h"

PROC_DECLARE(0x62b0260, internal_62b0260, public_62b0260);
extern "C" NAKED register_t __cdecl internal_62b0260()
{
    __asm
    {
        mov eax, offset public_639a06c
        ret 
        UNREACHABLE_TRAP(0x62b0260)
    }
}
